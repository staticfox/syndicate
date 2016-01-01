/*
 *  ircd-hybrid: an advanced, lightweight Internet Relay Chat Daemon (ircd)
 *
 *  Copyright (c) 2015 ircd-syndicate development team
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
#include "list.h"
#include "channel.h"
#include "channel_mode.h"
#include "server.h"
#include "client.h"
#include "irc_string.h"
#include "user.h"
#include "parse.h"
#include "modules.h"
#include "isupport.h"

static int
m_sno(struct Client *source_p, int parc, char *parv[])
{
  const struct Client *target_p = NULL;
  const struct user_modes *tab = NULL;
  int sno_what = MODE_ADD;

  if ((target_p = find_person(source_p, parv[1])) == NULL)
    return 0;

  if (source_p != target_p)
     return 0;

  if (!HasUMode(target_p, UMODE_OPER))
    return 0;

  if (EmptyString(parv[2]) || (strcmp(parv[2], "+") == 0))
  {
    DelUMode(source_p, UMODE_SERVNOTICE);
    source_p->snomodes = 0;
    return 0;
  }
  else
  {
    for (const char *m = parv[2]; *m; ++m)
    {
      switch (*m)
      {
        case '+':
          sno_what = MODE_ADD;
          break;
        case '-':
          sno_what = MODE_DEL;
          break;
        default:
          if ((tab = snomask_map[(unsigned char)*m]))
          {
            if (sno_what == MODE_ADD)
              AddSno(source_p, tab->flag);
            else
              DelSno(source_p, tab->flag);
          }
          break;
      }

    }

    /* Remove +s or add +s if necessary */
    if (source_p->snomodes & 0)
      DelUMode(source_p, UMODE_SERVNOTICE);
    else if (!HasUMode(source_p, UMODE_SERVNOTICE))
      AddUMode(source_p, UMODE_SERVNOTICE);
  }

  return 0;
}

static struct Message sno_msgtab =
{
  .cmd = "SNO",
  .args_min = 2,
  .args_max = MAXPARA,
  .handlers[UNREGISTERED_HANDLER] = m_unregistered,
  .handlers[CLIENT_HANDLER] = m_ignore,
  .handlers[SERVER_HANDLER] = m_sno,
  .handlers[ENCAP_HANDLER] = m_ignore,
  .handlers[OPER_HANDLER] = m_ignore
};

static void
module_init(void)
{
  mod_add_cmd(&sno_msgtab);
  add_capability("SNO", CAPAB_SNO);
  isupport_add("SNO", NULL, -1);
}

static void
module_exit(void)
{
  mod_del_cmd(&sno_msgtab);
}

struct module module_entry =
{
  .version = "$Revision$",
  .modinit = module_init,
  .modexit = module_exit,
};
