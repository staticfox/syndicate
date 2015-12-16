/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_capture.c: Makes a designated client captive
 *
 *  Copyright (C) 2002 by the past and present ircd coders, and others.
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
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 *
 *  $Id: m_capture.c 33 2005-10-02 20:50:00Z knight $
 */

#include "stdinc.h"
#include "list.h"
#include "client.h"
#include "hash.h"
#include "channel.h"
#include "channel_mode.h"
#include "ircd.h"
#include "numeric.h"
#include "conf.h"
#include "misc.h"
#include "server.h"
#include "send.h"
#include "irc_string.h"
#include "parse.h"
#include "modules.h"


/* mo_capture
 *      parv[0] = sender prefix
 *      parv[1] = nickname masklist
 */
static int
mo_capture(struct Client *source_p, int parc, char *parv[])
{
  struct Client *target_p = NULL;
  char *nick = NULL, *user = NULL, *host = NULL;
  char *p = NULL;
  dlink_node *ptr = NULL;

  if (parc < 2 || EmptyString(parv[1]))
  {
    sendto_one_numeric(source_p, &me, ERR_NONICKNAMEGIVEN);
    return 0;
  }

  /* XXX Add oper flag in future ? */

  //if (MyClient(source_p) && !IsAdmin(source_p))
  //{
  //  sendto_one_numeric(source_p, &me, ERR_NOPRIVS, "capture");
  //  return;
  //}

  if ((p = strchr(parv[1], '@')) == NULL)
  {
    if ((target_p = find_person(source_p, parv[1])) != NULL)
    {
      if (MyConnect(target_p) && source_p != target_p)
      {
        if (HasUMode(target_p, UMODE_OPER))
        {
          sendto_one_numeric(source_p, &me, ERR_NOPRIVS, "capture");
          return 0;
        }

        if (!IsCaptured(target_p))
        {
          sendto_realops_flags(UMODE_SERVNOTICE, L_ALL, SEND_NOTICE, "Captured %s (%s@%s)",
                               target_p->name, target_p->username,
                               target_p->host);
          SetCaptured(target_p);
        }

        sendto_one_numeric(source_p, &me, RPL_ISCAPTURED, target_p->name);
      }
      else if (IsCapable(target_p->from, CAPAB_ENCAP))
        sendto_one(target_p, ":%s ENCAP %s CAPTURE %s",
                   source_p->name, target_p->from->name, target_p->name);
    }
    else
      sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, parv[1]);
  }
  else
  {
    unsigned int matches = 0;

    /* p != NULL so user @ host given */
    nick = parv[1];
    *p++ = '\0';
    host = p;

    if ((p = strchr(nick, '!')) != NULL)
    {
      *p++ = '\0';
      user = p;
    }
    else
    {
      user = nick;
      nick = "*";
    }

    if (!valid_wild_card(source_p, 3, nick, user, host))
      return 0;

    if (IsClient(source_p))
      sendto_server(source_p, 0, 0, ":%s ENCAP * CAPTURE %s!%s@%s",
                    source_p->name, nick, user, host);

    DLINK_FOREACH(ptr, local_client_list.head)
    {
      target_p = ptr->data;

      if ((source_p == target_p) || HasUMode(target_p, UMODE_OPER) || IsCaptured(target_p))
        continue;

      if (match(nick, target_p->name) &&
          match(host, target_p->host) && match(user, target_p->username))
      {
        SetCaptured(target_p);
        ++matches;
      }
    }

    sendto_realops_flags(UMODE_SERVNOTICE, L_ALL, SEND_NOTICE,
                         "Bulk captured %s!%s@%s, %u local match(es)",
                         nick, user, host, matches);
  }

  return 1;
}

/* mo_uncapture
 *      parv[0] = sender prefix
 *      parv[1] = nickname masklist
 */
static int
mo_uncapture(struct Client *source_p, int parc, char *parv[])
{
  struct Client *target_p = NULL;
  char *nick = NULL, *user = NULL, *host = NULL, *p = NULL;
  dlink_node *ptr = NULL;

  //if (MyClient(source_p) && !IsAdmin(source_p))
  //{
  //  sendto_one_numeric(source_p, &me, ERR_NOPRIVS, "capture");
  //  return;
  //}

  if (parc < 2 || EmptyString(parv[1]))
  {
    sendto_one_numeric(source_p, &me, ERR_NONICKNAMEGIVEN);
    return 0;
  }

  if ((p = strchr(parv[1], '@')) == NULL)
  {
    if ((target_p = find_person(source_p, parv[1])) != NULL)
    {
      if (MyConnect(target_p))
      {
        if (IsCaptured(target_p))
        {
          ClearCaptured(target_p);

          sendto_realops_flags(UMODE_SERVNOTICE, L_ALL, SEND_NOTICE, "Uncaptured %s (%s@%s)",
                               target_p->name, target_p->username,
                               target_p->host);
        }

        sendto_one_numeric(source_p, &me, RPL_ISUNCAPTURED, target_p->name);
      }
      else if (IsCapable(target_p->from, CAPAB_ENCAP))
        sendto_one(target_p, ":%s ENCAP %s UNCAPTURE %s",
                   source_p->name, target_p->from->name, target_p->name);
    }
    else
      sendto_one_numeric(source_p, &me, ERR_NOSUCHNICK, parv[1]);
  }
  else
  {
    unsigned int matches = 0;

    /* p != NULL so user @ host given */
    nick = parv[1];
    *p++ = '\0';
    host = p;

    if ((p = strchr(nick, '!')) != NULL)
    {
      *p++ = '\0';
      user = p;
    }
    else
    {
      user = nick;
      nick = "*";
    }

    if (IsClient(source_p))
      sendto_server(source_p, 0, 0, ":%s ENCAP * UNCAPTURE %s!%s@%s",
                    source_p->name, nick, user, host);

    DLINK_FOREACH(ptr, local_client_list.head)
    {
      target_p = ptr->data;

      if (!IsCaptured(target_p))
        continue;

      if (match(nick, target_p->name) &&
          match(host, target_p->host) && match(user, target_p->username))
      {
        ClearCaptured(target_p);
        ++matches;
      }
    }

    sendto_realops_flags(UMODE_SERVNOTICE, L_ALL, SEND_NOTICE,
                         "Bulk uncaptured %s!%s@%s, %u local match(es)",
                         nick, user, host, matches);
  }

  return 1;
}

static struct Message capture_msgtab =
{
  .cmd = "CAPTURE",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_ignore,
  .handlers[SERVER_HANDLER] = mo_capture,
  .handlers[ENCAP_HANDLER] = mo_capture,
  .handlers[OPER_HANDLER] = mo_capture,
};

static struct Message uncapture_msgtab =
{
  .cmd = "UNCAPTURE",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_ignore,
  .handlers[SERVER_HANDLER] = mo_uncapture,
  .handlers[ENCAP_HANDLER] = mo_uncapture,
  .handlers[OPER_HANDLER] = mo_uncapture,
};

static void
module_init(void)
{
  mod_add_cmd(&capture_msgtab);
  mod_add_cmd(&uncapture_msgtab);
}

static void
module_exit(void)
{
  mod_del_cmd(&capture_msgtab);
  mod_del_cmd(&uncapture_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
};
