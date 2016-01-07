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

extern dlink_list split_list;

#ifndef INCLUDED_split_h
#define INCLUDED_split_h

struct Split
{
  char *name;
  char *uplink;
  char *info;
  int last_known_clients;
  int last_global_clients;
  int number_of_conn_attemps;
  time_t last_connect;
  time_t split_time;
};

void check_split_history(void);
void split_add(const struct Client *);
void split_bump(const char *name);
void split_delete(const char *name);
void split_send_map(struct Client *);
#endif
