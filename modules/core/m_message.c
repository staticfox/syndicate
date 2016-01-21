/*
 *  ircd-hybrid: an advanced, lightweight Internet Relay Chat Daemon (ircd)
 *
 *  Copyright (c) 1997-2016 ircd-hybrid development team
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301
 *  USA
 */

/*! \file m_message.c
 * \brief Includes required functions for processing the PRIVMSG/NOTICE command.
 * \version $Id$
 */

#include "stdinc.h"
#include "list.h"
#include "client.h"
#include "ircd.h"
#include "numeric.h"
#include "conf.h"
#include "server.h"
#include "send.h"
#include "parse.h"
#include "modules.h"
#include "channel.h"
#include "channel_mode.h"
#include "irc_string.h"
#include "hash.h"
#include "packet.h"


enum
{
  PRIVMSG = 0,
  NOTICE  = 1
};

enum
{
  ENTITY_NONE    = 0,
  ENTITY_CHANNEL = 1,
  ENTITY_CLIENT  = 2
};

static const char *const command[] =
{
  [PRIVMSG] = "PRIVMSG",
  [NOTICE] = "NOTICE"
};

static struct
{
  void *ptr;
  unsigned int type;
  unsigned int flags;
} targets[IRCD_BUFSIZE];

static unsigned int ntargets;


/*
** m_privmsg
**
** massive cleanup
** rev argv 6/91
**
**   Another massive cleanup Nov, 2000
** (I don't think there is a single line left from 6/91. Maybe.)
** m_privmsg and m_notice do basically the same thing.
** in the original 2.8.2 code base, they were the same function
** "m_message.c." When we did the great cleanup in conjuncton with bleep
** of ircu fame, we split m_privmsg.c and m_notice.c.
** I don't see the point of that now. It's harder to maintain, it's
** easier to introduce bugs into one version and not the other etc.
** Really, the penalty of an extra function call isn't that big a deal folks.
** -db Nov 13, 2000
**
*/

/* duplicate_ptr()
 *
 * inputs       - pointer to check
 *              - pointer to table of entities
 *              - number of valid entities so far
 * output       - YES if duplicate pointer in table, NO if not.
 *                note, this does the canonize using pointers
 * side effects - NONE
 */
static int
duplicate_ptr(const void *const ptr)
{
  for (unsigned int i = 0; i < ntargets; ++i)
    if (targets[i].ptr == ptr)
      return 1;

  return 0;
}

/* flood_attack_client()
 *
 * inputs       - flag 0 if PRIVMSG 1 if NOTICE. RFC
 *                say NOTICE must not auto reply
 *              - pointer to source Client
 *              - pointer to target Client
 * output       - 1 if target is under flood attack
 * side effects - check for flood attack on target target_p
 */
static int
flood_attack_client(int p_or_n, struct Client *source_p, struct Client *target_p)
{
  assert(MyClient(target_p));
  assert(IsClient(source_p));

  if (HasUMode(source_p, UMODE_OPER) || HasFlag(source_p, FLAGS_SERVICE))
    return 0;

  if (GlobalSetOptions.floodcount && !HasFlag(source_p, FLAGS_CANFLOOD))
  {
    if ((target_p->connection->first_received_message_time + 1)
        < CurrentTime)
    {
      const int delta =
        CurrentTime - target_p->connection->first_received_message_time;
      target_p->connection->received_number_of_privmsgs -= delta;
      target_p->connection->first_received_message_time = CurrentTime;

      if (target_p->connection->received_number_of_privmsgs <= 0)
      {
        target_p->connection->received_number_of_privmsgs = 0;
        DelFlag(target_p, FLAGS_FLOOD_NOTICED);
      }
    }

    if ((target_p->connection->received_number_of_privmsgs >=
         GlobalSetOptions.floodcount) || HasFlag(target_p, FLAGS_FLOOD_NOTICED))
    {
      if (!HasFlag(target_p, FLAGS_FLOOD_NOTICED))
      {
        sendto_snomask_flags(SNO_BOTS, L_ALL, SEND_NOTICE,
                             "Possible Flooder %s on %s target: %s",
                             get_client_name(source_p, HIDE_IP),
                             source_p->servptr->name, target_p->name);

        AddFlag(target_p, FLAGS_FLOOD_NOTICED);
        target_p->connection->received_number_of_privmsgs += 2;  /* Add a bit of penalty */
      }

      if (MyClient(source_p) && p_or_n != NOTICE)
        sendto_one_notice(source_p, &me, ":*** Message to %s throttled due to flooding",
                          target_p->name);
      return 1;
    }
    else
      target_p->connection->received_number_of_privmsgs++;
  }

  return 0;
}

/* flood_attack_channel()
 *
 * inputs       - flag 0 if PRIVMSG 1 if NOTICE. RFC
 *                says NOTICE must not auto reply
 *              - pointer to source Client
 *              - pointer to target channel
 * output       - 1 if target is under flood attack
 * side effects - check for flood attack on target chptr
 */
static int
flood_attack_channel(int p_or_n, struct Client *source_p, struct Channel *chptr)
{
  if (GlobalSetOptions.floodcount && !HasFlag(source_p, FLAGS_CANFLOOD))
  {
    if ((chptr->first_received_message_time + 1) < CurrentTime)
    {
      const int delta = CurrentTime - chptr->first_received_message_time;
      chptr->received_number_of_privmsgs -= delta;
      chptr->first_received_message_time = CurrentTime;

      if (chptr->received_number_of_privmsgs <= 0)
      {
        chptr->received_number_of_privmsgs = 0;
        ClearFloodNoticed(chptr);
      }
    }

    if ((chptr->received_number_of_privmsgs >= GlobalSetOptions.floodcount) ||
         IsSetFloodNoticed(chptr))
    {
      if (!IsSetFloodNoticed(chptr))
      {
        sendto_snomask_flags(SNO_BOTS, L_ALL, SEND_NOTICE,
                             "Possible Flooder %s on %s target: %s",
                             get_client_name(source_p, HIDE_IP),
                             source_p->servptr->name, chptr->name);

        SetFloodNoticed(chptr);
        chptr->received_number_of_privmsgs += 2;  /* Add a bit of penalty */
      }

      if (MyClient(source_p) && p_or_n != NOTICE)
        sendto_one_notice(source_p, &me, ":*** Message to %s throttled due to flooding",
                          chptr->name);
      return 1;
    }
    else
      chptr->received_number_of_privmsgs++;
  }

  return 0;
}

/* msg_channel_flags()
 *
 * inputs	- flag 0 if PRIVMSG 1 if NOTICE. RFC
 *		  say NOTICE must not auto reply
 *		- pointer to source_p
 *		- pointer to channel
 *		- flags
 *		- pointer to text to send
 * output	- NONE
 * side effects	- message given channel either chanop or voice
 */
static void
msg_channel(int p_or_n, struct Client *source_p, struct Channel *chptr,
            unsigned int flags, const char *text)
{
  int result = 0;
  unsigned int type = 0;
  const char *prefix = "";

  if (flags & CHFL_VOICE)
  {
    type = CHFL_OWNER | CHFL_PROTECT| CHFL_CHANOP | CHFL_HALFOP | CHFL_VOICE;
    prefix = "+";
  }
  else if (flags & CHFL_HALFOP)
  {
    type = CHFL_OWNER | CHFL_PROTECT | CHFL_CHANOP | CHFL_HALFOP;
    prefix = "%";
  }
  else if (flags & CHFL_CHANOP)
  {
    type = CHFL_OWNER | CHFL_PROTECT | CHFL_CHANOP;
    prefix = "@";
  }
  else if (flags & CHFL_PROTECT)
  {
    type = CHFL_OWNER | CHFL_PROTECT;
    prefix = "&";
  }
  else if (flags & CHFL_OWNER)
  {
    type = CHFL_OWNER;
    prefix = "~";
  }

  /* Chanops and voiced can flood their own channel with impunity */
  if ((result = can_send(chptr, source_p, NULL, text, p_or_n == NOTICE)) < 0)
  {
    if (result == CAN_SEND_OPV ||
        !flood_attack_channel(p_or_n, source_p, chptr))
    {
      try_reveal_delayed_user(source_p, find_channel_link(source_p, chptr), chptr, 0);
      sendto_channel_butone(source_p, source_p, chptr, type, "%s %s%s :%s",
                            command[p_or_n], prefix, chptr->name, text);
    }
  }
  else if (p_or_n != NOTICE)
  {
    if (chptr->mode.mode & MODE_OPMODERATE)
      sendto_channel_ops_butone(source_p, source_p, chptr, type, "%s %s%s :%s",
                                command[p_or_n], prefix, chptr->name, text);
    else
      sendto_one_numeric(source_p, &me, result, chptr->name, text);
  }
}

/* msg_client()
 *
 * inputs	- flag 0 if PRIVMSG 1 if NOTICE. RFC
 *		  say NOTICE must not auto reply
 * 		- pointer to source_p source (struct Client *)
 *		- pointer to target_p target (struct Client *)
 *		- pointer to text
 * output	- NONE
 * side effects	- message given channel either chanop or voice
 */
static void
msg_client(int p_or_n, struct Client *source_p, struct Client *target_p,
           const char *text)
{
  if (MyClient(source_p))
  {
    if (target_p->away[0] && p_or_n != NOTICE)
      sendto_one_numeric(source_p, &me, RPL_AWAY, target_p->name, target_p->away);

    if (HasUMode(target_p, UMODE_REGONLY) && target_p != source_p)
    {
      if (!HasUMode(source_p, UMODE_REGISTERED | UMODE_OPER))
      {
        if (p_or_n != NOTICE)
          sendto_one_numeric(source_p, &me, ERR_NONONREG, target_p->name);
        return;
      }
    }

    if (HasUMode(target_p, UMODE_NOCTCP) && target_p != source_p)
    {
      if (!HasUMode(source_p, UMODE_OPER) || !HasFlag(source_p, FLAGS_SERVICE))
      {
        if (*text == '\001' && strncmp(text + 1, "ACTION ", 7))
        {
          sendto_one_numeric(source_p, &me, ERR_NOCTCP, target_p->name);
          return;
        }
      }
    }
  }

  if (MyClient(target_p) && IsClient(source_p))
  {
    if (HasUMode(target_p, UMODE_CALLERID | UMODE_SOFTCALLERID) &&
        !accept_message(source_p, target_p))
    {
      const int callerid = !!HasUMode(target_p, UMODE_CALLERID);

      /* check for accept, flag recipient incoming message */
      if (p_or_n != NOTICE)
        sendto_one_numeric(source_p, &me, RPL_TARGUMODEG,
                           target_p->name,
                           callerid ? "+g" : "+G",
                           callerid ? "server side ignore" :
                                      "server side ignore with the exception of common channels");

      if ((target_p->connection->last_caller_id_time +
           ConfigGeneral.caller_id_wait) < CurrentTime)
      {
        if (p_or_n != NOTICE)
          sendto_one_numeric(source_p, &me, RPL_TARGNOTIFY, target_p->name);

        sendto_one_numeric(target_p, &me, RPL_UMODEGMSG,
                           source_p->name, source_p->username, source_p->host,
                           callerid ? "+g" : "+G");
        target_p->connection->last_caller_id_time = CurrentTime;
      }

      /* Only so opers can watch for floods */
      flood_attack_client(NOTICE, source_p, target_p);
      return;
    }

    if (flood_attack_client(p_or_n, source_p, target_p))
      return;
  }

  sendto_anywhere(target_p, source_p, command[p_or_n], ":%s", text);
}

/* handle_special()
 *
 * inputs	- client pointer
 *		- nick stuff to grok for opers
 *		- text to send if grok
 * output	- none
 * side effects	- old style username@server is handled here for non opers
 *		  opers are allowed username%hostname@server
 *		  all the traditional oper type messages are also parsed here.
 *		  i.e. "/msg #some.host."
 *		  However, syntax has been changed.
 *		  previous syntax "/msg #some.host.mask"
 *		  now becomes     "/msg $#some.host.mask"
 *		  previous syntax of: "/msg $some.server.mask" remains
 *		  This disambiguates the syntax.
 *
 * XXX		  N.B. dalnet changed it to nick@server as have other servers.
 *		  we will stick with tradition for now.
 *		- Dianora
 */
static void
handle_special(int p_or_n, struct Client *source_p,
               const char *nick, const char *text)
{
  struct Client *target_p = NULL;
  const char *server = NULL, *s = NULL;

  /*
   * user[%host]@server addressed?
   */
  if ((server = strchr(nick, '@')))
  {
    if ((target_p = hash_find_server(server + 1)) == NULL)
    {
      sendto_one_numeric(source_p, &me, ERR_NOSUCHSERVER, server + 1);
      return;
    }

    if (!HasUMode(source_p, UMODE_OPER) && strchr(nick, '%'))
    {
      sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, nick);
      return;
    }

    if (!IsMe(target_p))
    {
      sendto_one(target_p, ":%s %s %s :%s", source_p->id, command[p_or_n], nick, text);
      return;
    }

    sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, nick);
    return;
  }

  if (!HasUMode(source_p, UMODE_OPER))
  {
    sendto_one_numeric(source_p, &me, ERR_NOPRIVILEGES);
    return;
  }

  /*
   * The following two cases allow masks in NOTICEs
   * (for OPERs only)
   *
   * Armin, 8Jun90 (gruner@informatik.tu-muenchen.de)
   */
  if (*nick == '$')
  {
    if (*(nick + 1) == '$' || *(nick + 1) == '#')
      ++nick;
    else if (MyClient(source_p))
    {
      sendto_one_notice(source_p, &me, ":The command %s %s is no longer supported, please use $%s",
                        command[p_or_n], nick, nick);
      return;
    }

    if ((s = strrchr(nick, '.')) == NULL)
    {
      sendto_one_numeric(source_p, &me, ERR_NOTOPLEVEL, nick);
      return;
    }

    while (*++s)
      if (*s == '.' || *s == '*' || *s == '?')
        break;

    if (*s == '*' || *s == '?')
    {
      sendto_one_numeric(source_p, &me, ERR_WILDTOPLEVEL, nick);
      return;
    }

    sendto_match_butone(IsServer(source_p->from) ? source_p->from : NULL, source_p,
                        nick + 1, (*nick == '#') ? MATCH_HOST : MATCH_SERVER,
                        "%s $%s :%s", command[p_or_n], nick, text);
  }
}

/* build_target_list()
 *
 * inputs	- pointer to given source (oper/client etc.)
 *		- pointer to list of nicks/channels
 *		- pointer to table to place results
 *		- pointer to text (only used if source_p is an oper)
 * output	- number of valid entities
 * side effects	- target_table is modified to contain a list of
 *		  pointers to channels or clients
 *		  if source client is an oper
 *		  all the classic old bizzare oper privmsg tricks
 *		  are parsed and sent as is, if prefixed with $
 *		  to disambiguate.
 *
 */
static void
build_target_list(int p_or_n, struct Client *source_p, char *list, const char *text)
{
  unsigned int type = 0;
  char *p = NULL;
  void *target = NULL;

  ntargets = 0;

  for (const char *name = strtok_r(list, ",", &p); name;
                   name = strtok_r(NULL, ",", &p))
  {
    const char *with_prefix = NULL;

    /*
     * Channels are privmsg'd a lot more than other clients, moved up
     * here plain old channel msg?
     */
    if (IsChanPrefix(*name))
    {
      if ((target = hash_find_channel(name)))
      {
        if (!duplicate_ptr(target))
        {
          if (ntargets >= ConfigGeneral.max_targets)
          {
            sendto_one_numeric(source_p, &me, ERR_TOOMANYTARGETS,
                               name, ConfigGeneral.max_targets);
            return;
          }

          targets[ntargets].ptr = target;
          targets[ntargets].type = ENTITY_CHANNEL;
          targets[ntargets++].flags = 0;
        }
      }
      else if (p_or_n != NOTICE)
        sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, name);

      continue;
    }

    /* Look for a PRIVMSG/NOTICE to another client */
    if ((target = find_person(source_p, name)))
    {
      if (!duplicate_ptr(target))
      {
        if (ntargets >= ConfigGeneral.max_targets)
        {
          sendto_one_numeric(source_p, &me, ERR_TOOMANYTARGETS,
                             name, ConfigGeneral.max_targets);
          return;
        }

        targets[ntargets].ptr = target;
        targets[ntargets].type = ENTITY_CLIENT;
        targets[ntargets++].flags = 0;
      }

      continue;
    }

    /* @#channel or +#channel message ? */
    type = 0;
    with_prefix = name;

    /* Allow ~&%+@ if someone wants to do that */
    while (1)
    {
      if (*name == '~')
        type |= CHFL_OWNER;
      else if (*name == '&')
        type |= CHFL_OWNER | CHFL_PROTECT;
      else if (*name == '@')
        type |= CHFL_OWNER | CHFL_PROTECT | CHFL_CHANOP;
      else if (*name == '%')
        type |= CHFL_OWNER | CHFL_PROTECT | CHFL_CHANOP | CHFL_HALFOP;
      else if (*name == '+')
        type |= CHFL_OWNER | CHFL_PROTECT | CHFL_CHANOP | CHFL_HALFOP | CHFL_VOICE;
      else
        break;
      ++name;
    }

    if (type)
    {
      if (EmptyString(name))  /* If it's a '\0' dump it, there is no recipient */
      {
        sendto_one_numeric(source_p, &me, ERR_NORECIPIENT, command[p_or_n]);
        continue;
      }

      /*
       * At this point, name+1 should be a channel name i.e. #foo or &foo
       * if the channel is found, fine, if not report an error
       */
      if ((target = hash_find_channel(name)))
      {
        if (IsClient(source_p) && !HasFlag(source_p, FLAGS_SERVICE))
        {
          if (!has_member_flags(find_channel_link(source_p, target),
                                CHFL_OWNER|CHFL_PROTECT|CHFL_CHANOP|CHFL_HALFOP|CHFL_VOICE))
          {
            sendto_one_numeric(source_p, &me, ERR_CHANOPRIVSNEEDED, with_prefix);
            continue;
          }
        }

        if (!duplicate_ptr(target))
        {
          if (ntargets >= ConfigGeneral.max_targets)
          {
            sendto_one_numeric(source_p, &me, ERR_TOOMANYTARGETS,
                               name, ConfigGeneral.max_targets);
            return;
          }

          targets[ntargets].ptr = target;
          targets[ntargets].type = ENTITY_CHANNEL;
          targets[ntargets++].flags = type;
        }
      }
      else if (p_or_n != NOTICE)
        sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, name);

      continue;
    }

    if (*name == '$' || strchr(name, '@'))
      handle_special(p_or_n, source_p, name, text);
    else if (p_or_n != NOTICE)
    {
      if (!IsDigit(*name) || MyClient(source_p))
        sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, name);
    }
  }
}

/*
 * inputs       - flag privmsg or notice
 *              - pointer to source_p
 *              - pointer to channel
 */
static void
m_message(int p_or_n, struct Client *source_p, int parc, char *parv[])
{
  if (parc < 2 || EmptyString(parv[1]))
  {
    if (p_or_n != NOTICE)
      sendto_one_numeric(source_p, &me, ERR_NORECIPIENT, command[p_or_n]);
    return;
  }

  if (parc < 3 || EmptyString(parv[2]))
  {
    if (p_or_n != NOTICE)
      sendto_one_numeric(source_p, &me, ERR_NOTEXTTOSEND);
    return;
  }

  /* Finish the flood grace period... */
  if (MyClient(source_p) && !IsFloodDone(source_p))
    flood_endgrace(source_p);

  build_target_list(p_or_n, source_p, parv[1], parv[2]);

  for (unsigned int i = 0; i < ntargets; ++i)
  {
    switch (targets[i].type)
    {
      case ENTITY_CLIENT:
        msg_client(p_or_n, source_p, targets[i].ptr, parv[2]);
        break;

      case ENTITY_CHANNEL:
        msg_channel(p_or_n, source_p, targets[i].ptr, targets[i].flags, parv[2]);
        break;
    }
  }
}

static int
m_privmsg(struct Client *source_p, int parc, char *parv[])
{
  /*
   * Servers have no reason to send privmsgs, yet sometimes there is cause
   * for a notice.. (for example remote kline replies) --fl_
   */
  if (!IsClient(source_p))
    return 0;

  if (MyConnect(source_p))
    source_p->connection->last_privmsg = CurrentTime;

  m_message(PRIVMSG, source_p, parc, parv);
  return 0;
}

static int
m_notice(struct Client *source_p, int parc, char *parv[])
{
  m_message(NOTICE, source_p, parc, parv);
  return 0;
}

static struct Message privmsg_msgtab =
{
  .cmd = "PRIVMSG",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_privmsg,
  .handlers[SERVER_HANDLER] = m_privmsg,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = m_privmsg
};

static struct Message notice_msgtab =
{
  .cmd = "NOTICE",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_notice,
  .handlers[SERVER_HANDLER] = m_notice,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = m_notice
};

static void
module_init(void)
{
  mod_add_cmd(&privmsg_msgtab);
  mod_add_cmd(&notice_msgtab);
}

static void
module_exit(void)
{
  mod_del_cmd(&privmsg_msgtab);
  mod_del_cmd(&notice_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
  .flags   = MODULE_FLAG_CORE
};
