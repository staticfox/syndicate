/*
 *  ircd-hybrid: an advanced, lightweight Internet Relay Chat Daemon (ircd)
 *
 *  Copyright (c) 1997-2015 ircd-hybrid development team
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

/*! \file m_whowas.c
 * \brief Includes required functions for processing the WHOWAS command.
 * \version $Id$
 */

#include "stdinc.h"
#include "list.h"
#include "whowas.h"
#include "client.h"
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "numeric.h"
#include "misc.h"
#include "server.h"
#include "send.h"
#include "conf.h"
#include "parse.h"
#include "modules.h"


enum { WHOWAS_MAX_REPLIES = 20 };  /* Only applies to remote clients */

static void
do_whowas(struct Client *source_p, const int parc, char *parv[])
{
  int cur = 0;
  int max = -1;
  const dlink_node *node = NULL;

  if (parc > 2 && !EmptyString(parv[2]))
    max = atoi(parv[2]);

  if (!MyConnect(source_p) && (max <= 0 || max > WHOWAS_MAX_REPLIES))
    max = WHOWAS_MAX_REPLIES;

  DLINK_FOREACH(node, WHOWASHASH[strhash(parv[1])].head)
  {
    const struct Whowas *whowas = node->data;

    if (!irccmp(parv[1], whowas->name))
    {
      sendto_one_numeric(source_p, &me, RPL_WHOWASUSER, whowas->name,
                         whowas->username, whowas->hostname, whowas->realname);

      if (HasUMode(source_p, UMODE_OPER))
        sendto_one_numeric(source_p, &me, RPL_WHOISACTUALLY, whowas->name,
                           whowas->username, (HasUMode(source_p, UMODE_OPER)) ?
                           whowas->realhost : whowas->hostname,
                           whowas->sockhost);

      if (strcmp(whowas->account, "*"))
        sendto_one_numeric(source_p, &me, RPL_WHOISACCOUNT, whowas->name, whowas->account, "was");

      if ((whowas->shide || ConfigServerHide.hide_servers) && !HasUMode(source_p, UMODE_OPER))
        sendto_one_numeric(source_p, &me, RPL_WHOISSERVER, whowas->name,
                           ConfigServerInfo.network_name, date_ctime(whowas->logoff));
      else
        sendto_one_numeric(source_p, &me, RPL_WHOISSERVER, whowas->name,
                           whowas->servername, date_ctime(whowas->logoff));
      ++cur;
    }

    if (max > 0 && cur >= max)
      break;
  }

  if (!cur)
    sendto_one_numeric(source_p, &me, ERR_WASNOSUCHNICK, parv[1]);

  sendto_one_numeric(source_p, &me, RPL_ENDOFWHOWAS, parv[1]);
}

/*! \brief WHOWAS command handler
 *
 * \param source_p Pointer to allocated Client struct from which the message
 *                 originally comes from.  This can be a local or remote client.
 * \param parc     Integer holding the number of supplied arguments.
 * \param parv     Argument vector where parv[0] .. parv[parc-1] are non-NULL
 *                 pointers.
 * \note Valid arguments for this command are:
 *      - parv[0] = command
 *      - parv[1] = nickname
 *      - parv[2] = count
 *      - parv[3] = nickname/servername
 */
static int
m_whowas(struct Client *source_p, int parc, char *parv[])
{
  static time_t last_used = 0;

  if (parc < 2 || EmptyString(parv[1]))
  {
    sendto_one_numeric(source_p, &me, ERR_NONICKNAMEGIVEN);
    return 0;
  }

  if ((last_used + ConfigGeneral.pace_wait) > CurrentTime)
  {
    sendto_one_numeric(source_p, &me, RPL_LOAD2HI, "WHOWAS");
    return 0;
  }

  last_used = CurrentTime;

  if (!ConfigServerHide.disable_remote_commands)
    if (hunt_server(source_p, ":%s WHOWAS %s %s :%s", 3, parc, parv) != HUNTED_ISME)
      return 0;

  do_whowas(source_p, parc, parv);
  return 0;
}

/*! \brief WHOWAS command handler
 *
 * \param source_p Pointer to allocated Client struct from which the message
 *                 originally comes from.  This can be a local or remote client.
 * \param parc     Integer holding the number of supplied arguments.
 * \param parv     Argument vector where parv[0] .. parv[parc-1] are non-NULL
 *                 pointers.
 * \note Valid arguments for this command are:
 *      - parv[0] = command
 *      - parv[1] = nickname
 *      - parv[2] = count
 *      - parv[3] = nickname/servername
 */
static int
ms_whowas(struct Client *source_p, int parc, char *parv[])
{
  if (parc < 2 || EmptyString(parv[1]))
  {
    sendto_one_numeric(source_p, &me, ERR_NONICKNAMEGIVEN);
    return 0;
  }

  if (hunt_server(source_p, ":%s WHOWAS %s %s :%s", 3, parc, parv) != HUNTED_ISME)
    return 0;

  do_whowas(source_p, parc, parv);
  return 0;
}

static struct Message whowas_msgtab =
{
  .cmd = "WHOWAS",
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_whowas,
  .handlers[SERVER_HANDLER] = ms_whowas,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = ms_whowas
};

static void
module_init(void)
{
  mod_add_cmd(&whowas_msgtab);
}

static void
module_exit(void)
{
  mod_del_cmd(&whowas_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
};
