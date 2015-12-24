/*
 *  ircd-hybrid: an advanced Internet Relay Chat Daemon(ircd).
 *  m_shedding.c: Enables/disables user shedding.
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
 *  $Id$
 */

#include "client.h"
#include "send.h"
#include "irc_string.h"
#include "parse.h"
#include "modules.h"
#include "event.h"

#define SHED_RATE_MIN 5

static void stop_shedding(void);
void user_shedding_main(void *rate);
void user_shedding_shed(void *unused);

static int rate = 60;
static int operstoo = 0;

/*
 * mo_shedding
 *
 * inputs	- pointer to server
 *		- pointer to client
 *		- parameter count
 *		- parameter list
 * output	-
 * side effects - user shedding is enabled or disabled
 *
 * SHEDDING OFF - disable shedding
 * SHEDDING :reason
 * SHEDDING approx_seconds_per_userdrop :reason
 * SHEDDING approx_seconds_per_userdrop opers_too?[0|1] :reason
 *
 */
static int
mo_shedding(struct Client *source_p, int parc, char *parv[])
{
  if (MyClient(source_p) && !HasUMode(source_p, UMODE_NETADMIN))
  {
    sendto_one_numeric(source_p, &me, ERR_NOPRIVS, "shedding");
    return 0;
  }

  /* we better re-initialize defaults, else sheddings made in serial
   * will re-use the settings of the previous one
   */
  rate = 60;
  operstoo = 0;

  if(parc < 2)
  {
    sendto_one_numeric(source_p, &me, ERR_NEEDMOREPARAMS,
        source_p->name, "SHEDDING");
    return 0;
  }

  if(irccmp(parv[1], "OFF") == 0)
  {
    sendto_realops_flags(UMODE_SERVNOTICE, L_ALL, SEND_NOTICE,
          "User shedding DISABLED by %s", source_p->name);
    stop_shedding();
    return 0;
  }

  if (parc > 2)
    rate = atoi(parv[1]);

  if (parc > 3)
    operstoo = !!atoi(parv[2]);

  sendto_realops_flags(UMODE_SERVNOTICE, L_ALL, SEND_NOTICE,
          "User shedding ENABLED by %s (%s). Shedding interval: %d seconds (Opers too: %s)",
          source_p->name, parv[parc-1], rate, operstoo ? "Yes" : "No");
  /* Set a minimum because we need to do a bit of variance */
  if(rate < SHED_RATE_MIN)
    rate = SHED_RATE_MIN;
  rate -= (rate/5);

  static struct event user_shedding_main_event =
  {
    .name = "user_shedding_main_event",
    .handler = user_shedding_main
  };

  user_shedding_main_event.when = rate;

  stop_shedding();
  event_add(&user_shedding_main_event, NULL);

  return 0;
}

void
user_shedding_main(void *unused)
{
  int deviation = (rate / (3+(int) (7.0f*rand()/(RAND_MAX+1.0f))));

  static struct event user_shedding_shed_event =
  {
    .name = "user_shedding_shed_event",
    .handler = user_shedding_shed
  };

  user_shedding_shed_event.when = rate+deviation;

  event_addish(&user_shedding_shed_event, NULL);
}

void
user_shedding_shed(void *unused)
{
  dlink_node *ptr;
  struct Client *client_p;

  DLINK_FOREACH_PREV(ptr, local_client_list.tail)
  {
      client_p = ptr->data;

      if (!MyClient(client_p)) /* It could be servers */
          continue;
      if (HasUMode(client_p, UMODE_OPER) && !operstoo)
          continue;
      exit_client(client_p, "Server closed connection");
      break;
  }
}

static void
stop_shedding(void)
{
  /* Yes I cheated */
  event_delete_by_name("user_shedding_main_event");
  event_delete_by_name("user_shedding_shed_event");
}

static struct Message shedding_msgtab =
{
  .cmd = "SHEDDING",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_ignore,
  .handlers[SERVER_HANDLER] = mo_shedding,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = mo_shedding,
};

static void
module_init(void)
{
  mod_add_cmd(&shedding_msgtab);
}

static void
module_exit(void)
{
  stop_shedding();
  mod_del_cmd(&shedding_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
};
