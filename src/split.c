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
#include "memory.h"
#include "client.h"
#include "modules.h"
#include "numeric.h"
#include "conf.h"
#include "send.h"
#include "ircd.h"
#include "list.h"
#include "misc.h"
#include "split.h"

dlink_list split_list;

static struct Split *
split_find_ptr(const char *name)
{
  dlink_node *node = NULL, *node_next = NULL;

  DLINK_FOREACH_SAFE(node, node_next, split_list.head)
  {
    struct Split *split = node->data;

    if (!irccmp(split->name, name))
      return split;
  }

  return NULL;
}

void
check_split_history(void)
{
  dlink_node *node = NULL, *node_next = NULL;

  /* No more history, clear our cache */
  if (!ConfigGeneral.max_split_history)
  {
    DLINK_FOREACH_SAFE(node, node_next, split_list.head)
    {
      struct Split *split_p = node->data;

      dlinkDelete(node, &split_list);
      free_dlink_node(node);
      xfree(split_p->name);
      xfree(split_p->uplink);
      xfree(split_p->info);
      xfree(split_p);
    }
  }
  /* We have more servers than the new max allows,
   * remove the oldest entries until we fit the max
   * allowed. */
  else if (ConfigGeneral.max_split_history < dlink_list_length(&split_list))
  {
    unsigned int max = ConfigGeneral.max_split_history;
    unsigned int cur = dlink_list_length(&split_list);
    for (; max < cur; --cur)
    {
      dlink_node *local_node = split_list.tail;
      struct Split *split_p = local_node->data;

      dlinkDelete(local_node, &split_list);
      free_dlink_node(local_node);
      xfree(split_p->name);
      xfree(split_p->uplink);
      xfree(split_p->info);
      xfree(split_p);
    }
  }
}

void
split_add(const struct Client *client_p)
{
  struct Split *split = NULL;

  /* If this returns a pointer, we've desynced. Oh noes! */
  assert(split_find_ptr(client_p->name) == NULL);

  /* Split history has been disabled */
  if (!ConfigGeneral.max_split_history)
    return;
  else if (ConfigGeneral.max_split_history == dlink_list_length(&split_list))
  {
    /* Remove the oldest entry */
    dlink_node *node = split_list.tail;
    struct Split *split_p = node->data;

    dlinkDelete(node, &split_list);
    free_dlink_node(node);
    xfree(split_p->name);
    xfree(split_p->uplink);
    xfree(split_p->info);
    xfree(split_p);
  }

  split = xcalloc(sizeof(*split));
  split->name = xstrdup(client_p->name);
  split->uplink = xstrdup(client_p->servptr->name);
  split->info = xstrdup(client_p->info);
  split->last_known_clients = dlink_list_length(&client_p->serv->client_list);
  split->last_global_clients = Count.total;
  split->last_connect = 0;
  split->number_of_conn_attemps = 0;
  split->split_time = CurrentTime;

  dlinkAdd(split, make_dlink_node(), &split_list);
}

void
split_bump(const char *name)
{
  struct Split *split = NULL;

  if (!ConfigGeneral.max_split_history)
    return;

  /* We may have deleted it */
  if ((split = split_find_ptr(name)) == NULL)
    return;

  split->last_connect = CurrentTime;
  split->number_of_conn_attemps++;
}

void
split_delete(const char *name)
{
  struct Split *split = NULL;
  dlink_node *node = NULL;

  if (!ConfigGeneral.max_split_history)
    return;

  /* It's a new server we've never seen before
   * or we've deleted it. */
  if ((split = split_find_ptr(name)) == NULL)
    return;

  node = dlinkFind(&split_list, split);

  assert(node);

  dlinkDelete(node, &split_list);
  free_dlink_node(node);
  xfree(split->name);
  xfree(split->uplink);
  xfree(split->info);
  xfree(split);
}

void
split_send_map(struct Client *client_p)
{
  unsigned int expire = ConfigGeneral.map_split_timeout;
  dlink_node *node = NULL;

  if (!ConfigGeneral.max_split_history)
    return;

  if (expire == 1)
    return;

  DLINK_FOREACH(node, split_list.head)
  {
    struct Split *split = node->data;
    char buf[IRCD_BUFSIZE] = "";
    char *ptr = buf;

    if (expire && ((split->split_time + expire) < CurrentTime))
      continue;

    ptr += sprintf(ptr, " %s (recently split)", split->name);

    *ptr = '\0';

    sendto_one_numeric(client_p, &me, RPL_MAP, "**", buf);
  }
}
