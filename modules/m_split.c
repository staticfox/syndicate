/*
 *  ircd-syndicate: something something Internet Relay Chat Daemon (ircd)
 *
 *  Copyright (c) 2016 ircd-syndicate development team
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

#include "stdinc.h"
#include "irc_string.h"
#include "client.h"
#include "modules.h"
#include "memory.h"
#include "numeric.h"
#include "send.h"
#include "conf.h"
#include "ircd.h"
#include "parse.h"
#include "server.h"
#include "misc.h"
#include "split.h"

static void
send_splits(struct Client *source_p)
{
  dlink_node *node = NULL, *node_next = NULL;

  if (dlink_list_length(&split_list) == 0)
  {
    sendto_one_notice(source_p, &me, ":SPLIT: There are no servers marked as split to me");
    return;
  }

  DLINK_FOREACH_SAFE(node, node_next, split_list.head)
  {
    struct Split *split = node->data;
    char buf[IRCD_BUFSIZE] = "";
    char *ptr = buf;

    ptr += sprintf(ptr, ":SPLIT: %s (%s) split from %s %s ago with %d client%s.",
      split->name, split->info, split->uplink,time_dissect(CurrentTime - split->split_time),
      split->last_known_clients, (split->last_known_clients != 1 ? "s" : ""));

    ptr += sprintf(ptr, " It has had %d reconnect attempt%s",
      split->number_of_conn_attemps, (split->number_of_conn_attemps != 1 ? "s" : ""));

    if (split->last_connect > 0)
      ptr += sprintf(ptr, " with the previous reconnect attempt being %s ago.",
        time_dissect(CurrentTime - split->last_connect));
    else
      ptr += sprintf(ptr, ".");

    sendto_one_notice(source_p, &me, buf);
  }
}

static void
do_split_del(struct Client *source_p, int parc, char *parv[])
{
  struct Split *split_p = NULL;
  dlink_node *node = NULL, *node_next = NULL;

  if (!irccmp("del", parv[1]))
  {
    if (parc < 3)
    {
      sendto_one_numeric(source_p, &me, ERR_NEEDMOREPARAMS, "SPLIT");
      return;
    }

    /* Nothing to delete */
    if (dlink_list_length(&split_list) == 0)
    {
      sendto_one_notice(source_p, &me, ":SPLIT: There are no servers marked as split to me");
      return;
    }

    /* Delete all split entries */
    if (!irccmp("*", parv[2]))
    {
      DLINK_FOREACH_SAFE(node, node_next, split_list.head)
      {
        struct Split *split = node->data;

        dlinkDelete(node, &split_list);
        free_dlink_node(node);
        xfree(split->name);
        xfree(split->uplink);
        xfree(split->info);
        xfree(split);
      }
      sendto_one_notice(source_p, &me, ":SPLIT: Cleared all split servers.");
    }
    else
    {
      /* Find the server we want to delete */
      DLINK_FOREACH_SAFE(node, node_next, split_list.head)
      {
        struct Split *tmp = node->data;

        if (!match(parv[2], tmp->name))
        {
          split_p = node->data;
          break;
        }
      }

      /* Couldn't find the server */
      if (split_p == NULL)
      {
        sendto_one_numeric(source_p, &me, ERR_NOSUCHSERVER, parv[2]);
        return;
      }
      else
      {
        sendto_one_notice(source_p, &me, ":SPLIT: Deleted %s's split entry", split_p->name);
        dlinkDelete(node, &split_list);
        free_dlink_node(node);
        xfree(split_p->name);
        xfree(split_p->uplink);
        xfree(split_p->info);
        xfree(split_p);
      }
    }
    return;
  }

  sendto_one_notice(source_p, &me, ":Extended commands not implemented yet.");
  return;
}

static int
mo_split(struct Client *source_p, int parc, char *parv[])
{
  if ((!ConfigGeneral.max_split_history) && IsClient(source_p))
  {
    sendto_one_notice(source_p, &me, ":Split history has been disabled by IRCd config");
    return 0;
  }

  if (parc < 2)
    send_splits(source_p);
  else
    do_split_del(source_p, parc, parv);

  return 0;
}

static struct Message split_msgtab =
{
  .cmd = "SPLIT",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_ignore,
  .handlers[SERVER_HANDLER] = m_ignore,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = mo_split
};

static void
module_init(void)
{
  mod_add_cmd(&split_msgtab);
}

static void
module_exit(void)
{
  mod_del_cmd(&split_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
};
