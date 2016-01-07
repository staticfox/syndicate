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

/*! \file m_svinfo.c
 * \brief Includes required functions for processing the SVINFO command.
 * \version $Id$
 */

#include "stdinc.h"
#include "client.h"
#include "irc_string.h"
#include "ircd.h"
#include "send.h"
#include "conf.h"
#include "log.h"
#include "parse.h"
#include "modules.h"


/*! \brief SVINFO command handler
 *
 * \param source_p Pointer to allocated Client struct from which the message
 *                 originally comes from.  This can be a local or remote client.
 * \param parc     Integer holding the number of supplied arguments.
 * \param parv     Argument vector where parv[0] .. parv[parc-1] are non-NULL
 *                 pointers.
 * \note Valid arguments for this command are:
 *      - parv[0] = command
 *      - parv[1] = TS_CURRENT for the server
 *      - parv[2] = TS_MIN for the server
 *      - parv[3] = unused
 *      - parv[4] = server's idea of UTC time
 */
static int
ms_svinfo(struct Client *source_p, int parc, char *parv[])
{
  intmax_t deltat = 0, theirtime = 0;

  if (!IsServer(source_p) || !MyConnect(source_p))
    return 0;

  if (TS_CURRENT < atoi(parv[2]) || atoi(parv[1]) < TS_MIN)
  {
    /*
     * A server with the wrong TS version connected; since we're
     * TS_ONLY we can't fall back to the non-TS protocol so
     * we drop the link  -orabidoo
     */
    sendto_snomask_flags(SNO_GENERAL, L_ADMIN, SEND_NOTICE,
         "Link %s dropped, wrong TS protocol version (%s,%s)",
         get_client_name(source_p, SHOW_IP), parv[1], parv[2]);
    sendto_snomask_flags(SNO_GENERAL, L_OPER, SEND_NOTICE,
         "Link %s dropped, wrong TS protocol version (%s,%s)",
         get_client_name(source_p, MASK_IP), parv[1], parv[2]);
    ilog(LOG_TYPE_IRCD,
         "Link %s dropped, wrong TS protocol version (%s,%s)",
         get_client_name(source_p, SHOW_IP), parv[1], parv[2]);

    exit_client(source_p, "Incompatible TS version");
    return 0;
  }

  /*
   * Since we're here, might as well set CurrentTime while we're at it
   */
  set_time();

  theirtime = strtoimax(parv[4], NULL, 10);
  deltat = imaxabs(theirtime - CurrentTime);

  if (deltat > ConfigGeneral.ts_max_delta)
  {
    sendto_snomask_flags(SNO_GENERAL, L_ADMIN, SEND_NOTICE,
         "Link %s dropped, excessive TS delta (my TS=%ju, their TS=%ju, delta=%ji)",
         get_client_name(source_p, SHOW_IP), CurrentTime, theirtime, deltat);
    sendto_snomask_flags(SNO_GENERAL, L_OPER, SEND_NOTICE,
         "Link %s dropped, excessive TS delta (my TS=%ju, their TS=%ju, delta=%ji)",
          get_client_name(source_p, MASK_IP), CurrentTime, theirtime, deltat);
    ilog(LOG_TYPE_IRCD,
         "Link %s dropped, excessive TS delta (my TS=%ju, their TS=%ju, delta=%ji)",
         get_client_name(source_p, SHOW_IP), CurrentTime, theirtime, deltat);

    exit_client(source_p, "Excessive TS delta");
    return 0;
  }

  if (deltat > ConfigGeneral.ts_warn_delta)
  {
    sendto_snomask_flags(SNO_GENERAL, L_ADMIN, SEND_NOTICE,
          "Link %s notable TS delta (my TS=%ju, their TS=%ju, delta=%ji)",
          get_client_name(source_p, SHOW_IP), CurrentTime, theirtime, deltat);
    sendto_snomask_flags(SNO_GENERAL, L_OPER, SEND_NOTICE,
          "Link %s notable TS delta (my TS=%ju, their TS=%ju, delta=%ji)",
          get_client_name(source_p, MASK_IP), CurrentTime, theirtime, deltat);
  }

  return 0;
}

static struct Message svinfo_msgtab =
{
  .cmd = "SVINFO",
  .args_min = 5,
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_ignore,
  .handlers[SERVER_HANDLER] = ms_svinfo,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = m_ignore
};

static void
module_init(void)
{
  mod_add_cmd(&svinfo_msgtab);
}

static void
module_exit(void)
{
  mod_del_cmd(&svinfo_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
};
