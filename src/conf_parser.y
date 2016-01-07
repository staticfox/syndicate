/*
 *  ircd-hybrid: an advanced, lightweight Internet Relay Chat Daemon (ircd)
 *
 *  Copyright (c) 2000-2015 ircd-hybrid development team
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

/*! \file conf_parser.y
 * \brief Parses the ircd configuration file.
 * \version $Id$
 */


%{

#include <sys/types.h>
#include <string.h>

#include "config.h"
#include "stdinc.h"
#include "ircd.h"
#include "list.h"
#include "conf.h"
#include "conf_class.h"
#include "conf_pseudo.h"
#include "event.h"
#include "id.h"
#include "log.h"
#include "client.h"	/* for UMODE_SERVNOTICE only */
#include "irc_string.h"
#include "memory.h"
#include "modules.h"
#include "server.h"
#include "hostmask.h"
#include "send.h"
#include "listener.h"
#include "resv.h"
#include "numeric.h"
#include "user.h"
#include "motd.h"

#ifdef HAVE_LIBCRYPTO
#include <openssl/rsa.h>
#include <openssl/bio.h>
#include <openssl/pem.h>
#include <openssl/dh.h>
#endif

#include "rsa.h"

int yylex(void);

static struct
{
  struct
  {
    dlink_list list;
  } mask,
    leaf,
    hub;

  struct
  {
    char buf[IRCD_BUFSIZE];
  } name,
    nick,
    user,
    host,
    addr,
    bind,
    file,
    ciph,
    cert,
    rpass,
    spass,
    whois,
    class,
    target,
    prepend,
    command;

  struct
  {
    unsigned int value;
  } flags,
    modes,
    snomodes,
    size,
    type,
    port,
    aftype,
    ping_freq,
    max_perip,
    con_freq,
    min_idle,
    max_idle,
    max_total,
    max_global,
    max_local,
    max_ident,
    max_sendq,
    max_recvq,
    max_channels,
    cidr_bitlen_ipv4,
    cidr_bitlen_ipv6,
    number_per_cidr;
} block_state;

static void
reset_block_state(void)
{
  dlink_node *node = NULL, *node_next = NULL;

  DLINK_FOREACH_SAFE(node, node_next, block_state.mask.list.head)
  {
    MyFree(node->data);
    dlinkDelete(node, &block_state.mask.list);
    free_dlink_node(node);
  }

  DLINK_FOREACH_SAFE(node, node_next, block_state.leaf.list.head)
  {
    MyFree(node->data);
    dlinkDelete(node, &block_state.leaf.list);
    free_dlink_node(node);
  }

  DLINK_FOREACH_SAFE(node, node_next, block_state.hub.list.head)
  {
    MyFree(node->data);
    dlinkDelete(node, &block_state.hub.list);
    free_dlink_node(node);
  }

  memset(&block_state, 0, sizeof(block_state));
}

%}

%union {
  int number;
  char *string;
}

%token  ACCEPT_PASSWORD
%token  ADMIN
%token  AFTYPE
%token  ANTI_NICK_FLOOD
%token  ANTI_SPAM_EXIT_MESSAGE_TIME
%token  AUTOCONN
%token  AWAY_COUNT
%token  AWAY_TIME
%token  BYTES KBYTES MBYTES
%token  CALLER_ID_WAIT
%token  CAN_FLOOD
%token  CHANNEL
%token  CIDR_BITLEN_IPV4
%token  CIDR_BITLEN_IPV6
%token  CLASS
%token  CLOAK_KEY1
%token  CLOAK_KEY2
%token  CLOAK_KEY3
%token  CLOAK_MASK
%token  CLOSE
%token  CONNECT
%token  CONNECTFREQ
%token  CYCLE_ON_HOST_CHANGE
%token  DEFAULT_FLOODCOUNT
%token  DEFAULT_JOIN_FLOOD_COUNT
%token  DEFAULT_JOIN_FLOOD_TIME
%token  DEFAULT_MAX_CLIENTS
%token  DENY
%token  DESCRIPTION
%token  DIE
%token  DISABLE_AUTH
%token  DISABLE_FAKE_CHANNELS
%token  DISABLE_REMOTE_COMMANDS
%token  DLINE_MIN_CIDR
%token  DLINE_MIN_CIDR6
%token  DOTS_IN_IDENT
%token  EMAIL
%token  ENCRYPTED
%token  EXCEED_LIMIT
%token  EXEMPT
%token  FAILED_OPER_NOTICE
%token  FLATTEN_LINKS
%token  FLATTEN_LINKS_DELAY
%token  FLATTEN_LINKS_FILE
%token  GECOS
%token  GENERAL
%token  HIDDEN
%token  HIDDEN_NAME
%token  HIDE_CHANS
%token  HIDE_IDLE
%token  HIDE_IDLE_FROM_OPERS
%token  HIDE_SERVER_IPS
%token  HIDE_SERVERS
%token  HIDE_SERVICES
%token  HOST
%token  HUB
%token  HUB_MASK
%token  IGNORE_BOGUS_TS
%token  INVISIBLE_ON_CONNECT
%token  INVITE_CLIENT_COUNT
%token  INVITE_CLIENT_TIME
%token  INVITE_DELAY_CHANNEL
%token  BLOCKINVITES
%token  IP
%token  IRCD_AUTH
%token  IRCD_FLAGS
%token  IRCD_SID
%token  JOIN
%token  KILL
%token  KILL_CHASE_TIME_LIMIT
%token  KLINE
%token  KLINE_EXEMPT
%token  KLINE_MIN_CIDR
%token  KLINE_MIN_CIDR6
%token  KLINE_REASON
%token  KNOCK_CLIENT_COUNT
%token  KNOCK_CLIENT_TIME
%token  KNOCK_DELAY_CHANNEL
%token  LEAF_MASK
%token  LISTEN
%token  MASK
%token  MAX_ACCEPT
%token  MAX_BANS
%token  MAX_CHANNELS
%token  MAX_GLOBAL
%token  MAX_IDENT
%token  MAX_IDLE
%token  MAX_LOCAL
%token  MAX_NICK_CHANGES
%token  MAX_NICK_LENGTH
%token  MAX_NICK_TIME
%token  MAX_NUMBER
%token  MAX_SPLIT_HISTORY
%token  MAX_TARGETS
%token  MAX_TOPIC_LENGTH
%token  MAX_WATCH
%token  MIN_IDLE
%token  MIN_NONWILDCARD
%token  MIN_NONWILDCARD_SIMPLE
%token  MODULE
%token  MODULES
%token  MOTD
%token  NAME
%token  NEED_IDENT
%token  NEED_PASSWORD
%token  NETADMIN
%token  NETWORK_DESC
%token  NETWORK_NAME
%token  NICK
%token  NO_OPER_FLOOD
%token  NO_TILDE
%token  NUMBER
%token  NUMBER_PER_CIDR
%token  NUMBER_PER_IP
%token  OPER_ONLY_UMODES
%token  OPER_UMODES
%token  OPERATOR
%token  OPERS_BYPASS_CALLERID
%token  PACE_WAIT
%token  PACE_WAIT_SIMPLE
%token  PASSWORD
%token  PATH
%token  PING_COOKIE
%token  PING_TIME
%token  PORT
%token  QSTRING
%token  RANDOM_IDLE
%token  REASON
%token  REDIRPORT
%token  REDIRSERV
%token  REHASH
%token  REMOTE
%token  REMOTEBAN
%token  RESV
%token  RESV_EXEMPT
%token  RSA_PRIVATE_KEY_FILE
%token  S_BOTS
%token  S_CCONN
%token  S_DLINESPAM
%token  S_EXTERNAL
%token  S_FULL
%token  S_KLINESPAM
%token  S_NCHANGE
%token  S_REJ
%token  S_SERVREJ
%token  S_SKILL
%token  S_SNOGENERAL
%token  S_UNAUTH
%token  S_XLINESPAM
%token  SECONDS MINUTES HOURS DAYS WEEKS MONTHS YEARS
%token  SEND_PASSWORD
%token  SENDQ
%token  SERVERHIDE
%token  SERVERINFO
%token  SHORT_MOTD
%token  SNOMODES
%token  SPOOF
%token  SPOOF_NOTICE
%token  SQUIT
%token  SSL_CERTIFICATE_FILE
%token  SSL_CERTIFICATE_FINGERPRINT
%token  SSL_CONNECTION_REQUIRED
%token  SSL_DH_ELLIPTIC_CURVE
%token  SSL_DH_PARAM_FILE
%token  SSL_MESSAGE_DIGEST_ALGORITHM
%token  STATS_E_DISABLED
%token  STATS_I_OPER_ONLY
%token  STATS_K_OPER_ONLY
%token  STATS_M_OPER_ONLY
%token  STATS_O_OPER_ONLY
%token  STATS_P_OPER_ONLY
%token  STATS_U_OPER_ONLY
%token  T_ALL
%token  T_CALLERID
%token  T_COMMAND
%token  T_CLUSTER
%token  T_DEAF
%token  S_DEBUG
%token  T_DLINE
%token  T_FARCONNECT
%token  T_FILE
%token  T_GLOBOPS
%token  T_INVISIBLE
%token  T_IPV4
%token  T_IPV6
%token  T_LOCOPS
%token  T_LOG
%token  T_NONONREG
%token  T_OPERWALL
%token  T_OPERWALLS
%token  T_OPME
%token  T_PREPEND
%token  T_PSEUDO
%token  T_RECVQ
%token  T_RESTART
%token  T_SERVER
%token  T_SERVICE
%token  T_SERVNOTICE
%token  T_SET
%token  T_SHARED
%token  T_SIZE
%token  T_SNOMODES
%token  T_SOFTCALLERID
%token  T_SPY
%token  T_SSL
%token  T_SSL_CIPHER_LIST
%token  T_TARGET
%token  T_UMODES
%token  T_UNDLINE
%token  T_UNLIMITED
%token  T_UNRESV
%token  T_UNXLINE
%token  T_WALLOP
%token  T_WALLOPS
%token  T_WEBIRC
%token  TBOOL
%token  THROTTLE_COUNT
%token  THROTTLE_TIME
%token  TKLINE_EXPIRE_NOTICES
%token  TMASKED
%token  TS_MAX_DELTA
%token  TS_WARN_DELTA
%token  TWODOTS
%token  TYPE
%token  UNKLINE
%token  USE_LOGGING
%token  USER
%token  VHOST
%token  VHOST6
%token  WARN_NO_CONNECT_BLOCK
%token  WHOIS
%token  WHOIS_NOTIFY
%token  XLINE
%token  XLINE_EXEMPT

%type  <string> QSTRING
%type  <number> NUMBER
%type  <number> timespec
%type  <number> timespec_
%type  <number> sizespec
%type  <number> sizespec_

%%
conf:
        | conf conf_item
        ;

conf_item:        admin_entry
                | logging_entry
                | oper_entry
                | channel_entry
                | class_entry
                | listen_entry
                | auth_entry
                | serverinfo_entry
                | serverhide_entry
                | resv_entry
                | service_entry
                | shared_entry
                | cluster_entry
                | connect_entry
                | kill_entry
                | deny_entry
                | exempt_entry
                | general_entry
                | gecos_entry
                | modules_entry
                | motd_entry
                | pseudo_entry
                | error ';'
                | error '}'
        ;


timespec_: { $$ = 0; } | timespec;
timespec:  NUMBER timespec_         { $$ = $1 + $2; } |
           NUMBER SECONDS timespec_ { $$ = $1 + $3; } |
           NUMBER MINUTES timespec_ { $$ = $1 * 60 + $3; } |
           NUMBER HOURS timespec_   { $$ = $1 * 60 * 60 + $3; } |
           NUMBER DAYS timespec_    { $$ = $1 * 60 * 60 * 24 + $3; } |
           NUMBER WEEKS timespec_   { $$ = $1 * 60 * 60 * 24 * 7 + $3; } |
           NUMBER MONTHS timespec_  { $$ = $1 * 60 * 60 * 24 * 7 * 4 + $3; } |
           NUMBER YEARS timespec_   { $$ = $1 * 60 * 60 * 24 * 365 + $3; }
           ;

sizespec_:  { $$ = 0; } | sizespec;
sizespec:   NUMBER sizespec_ { $$ = $1 + $2; } |
            NUMBER BYTES sizespec_ { $$ = $1 + $3; } |
            NUMBER KBYTES sizespec_ { $$ = $1 * 1024 + $3; } |
            NUMBER MBYTES sizespec_ { $$ = $1 * 1024 * 1024 + $3; }
            ;


/***************************************************************************
 * modules {} section
 ***************************************************************************/
modules_entry: MODULES '{' modules_items '}' ';';

modules_items:  modules_items modules_item | modules_item;
modules_item:   modules_module | modules_path | error ';' ;

modules_module: MODULE '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
};

modules_path: PATH '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
};


/***************************************************************************
 * serverinfo {}  section
 ***************************************************************************/
serverinfo_entry: SERVERINFO '{' serverinfo_items '}' ';';

serverinfo_items:       serverinfo_items serverinfo_item | serverinfo_item ;
serverinfo_item:        serverinfo_name |
                        serverinfo_vhost |
                        serverinfo_hub |
                        serverinfo_description |
                        serverinfo_network_name |
                        serverinfo_network_desc |
                        serverinfo_default_max_clients |
                        serverinfo_max_nick_length |
                        serverinfo_max_topic_length |
                        serverinfo_ssl_dh_param_file |
                        serverinfo_ssl_dh_elliptic_curve |
                        serverinfo_rsa_private_key_file |
                        serverinfo_vhost6 |
                        serverinfo_sid |
                        serverinfo_ssl_certificate_file |
                        serverinfo_ssl_cipher_list |
                        serverinfo_ssl_message_digest_algorithm |
                        error ';' ;


serverinfo_ssl_certificate_file: SSL_CERTIFICATE_FILE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
  {
    if (!ConfigServerInfo.rsa_private_key_file)
    {
      conf_error_report("No rsa_private_key_file specified, SSL disabled");
      break;
    }

    if (SSL_CTX_use_certificate_chain_file(ConfigServerInfo.server_ctx, yylval.string) <= 0 ||
        SSL_CTX_use_certificate_chain_file(ConfigServerInfo.client_ctx, yylval.string) <= 0)
    {
      report_crypto_errors();
      conf_error_report("Could not open/read certificate file");
      break;
    }

    if (SSL_CTX_use_PrivateKey_file(ConfigServerInfo.server_ctx, ConfigServerInfo.rsa_private_key_file,
                                    SSL_FILETYPE_PEM) <= 0 ||
        SSL_CTX_use_PrivateKey_file(ConfigServerInfo.client_ctx, ConfigServerInfo.rsa_private_key_file,
                                    SSL_FILETYPE_PEM) <= 0)
    {
      report_crypto_errors();
      conf_error_report("Could not read RSA private key");
      break;
    }

    if (!SSL_CTX_check_private_key(ConfigServerInfo.server_ctx) ||
        !SSL_CTX_check_private_key(ConfigServerInfo.client_ctx))
    {
      report_crypto_errors();
      conf_error_report("Could not read RSA private key");
      break;
    }
  }
#endif
};

serverinfo_rsa_private_key_file: RSA_PRIVATE_KEY_FILE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  BIO *file = NULL;

  if (conf_parser_ctx.pass != 1)
    break;

  if (ConfigServerInfo.rsa_private_key)
  {
    RSA_free(ConfigServerInfo.rsa_private_key);
    ConfigServerInfo.rsa_private_key = NULL;
  }

  if (ConfigServerInfo.rsa_private_key_file)
  {
    MyFree(ConfigServerInfo.rsa_private_key_file);
    ConfigServerInfo.rsa_private_key_file = NULL;
  }

  ConfigServerInfo.rsa_private_key_file = xstrdup(yylval.string);

  if ((file = BIO_new_file(yylval.string, "r")) == NULL)
  {
    conf_error_report("File open failed, ignoring");
    break;
  }

  ConfigServerInfo.rsa_private_key = PEM_read_bio_RSAPrivateKey(file, NULL, 0, NULL);

  BIO_set_close(file, BIO_CLOSE);
  BIO_free(file);

  if (ConfigServerInfo.rsa_private_key == NULL)
  {
    conf_error_report("Couldn't extract key, ignoring");
    break;
  }

  if (!RSA_check_key(ConfigServerInfo.rsa_private_key))
  {
    RSA_free(ConfigServerInfo.rsa_private_key);
    ConfigServerInfo.rsa_private_key = NULL;

    conf_error_report("Invalid key, ignoring");
    break;
  }

  if (RSA_size(ConfigServerInfo.rsa_private_key) < 256)
  {
    RSA_free(ConfigServerInfo.rsa_private_key);
    ConfigServerInfo.rsa_private_key = NULL;

    conf_error_report("Ignoring serverinfo::rsa_private_key_file -- need at least a 2048 bit key size");
  }
#endif
};

serverinfo_ssl_dh_param_file: SSL_DH_PARAM_FILE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
  {
    BIO *file = BIO_new_file(yylval.string, "r");

    if (file)
    {
      DH *dh = PEM_read_bio_DHparams(file, NULL, NULL, NULL);

      BIO_free(file);

      if (dh)
      {
        if (DH_size(dh) < 256)
          conf_error_report("Ignoring serverinfo::ssl_dh_param_file -- need at least a 2048 bit DH prime size");
        else
          SSL_CTX_set_tmp_dh(ConfigServerInfo.server_ctx, dh);

        DH_free(dh);
      }
    }
    else
      conf_error_report("Ignoring serverinfo::ssl_dh_param_file -- could not open/read Diffie-Hellman parameter file");
  }
#endif
};

serverinfo_ssl_cipher_list: T_SSL_CIPHER_LIST '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
};

serverinfo_ssl_message_digest_algorithm: SSL_MESSAGE_DIGEST_ALGORITHM '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
  {
    if ((ConfigServerInfo.message_digest_algorithm = EVP_get_digestbyname(yylval.string)) == NULL)
    {
      ConfigServerInfo.message_digest_algorithm = EVP_sha256();
      conf_error_report("Ignoring serverinfo::ssl_message_digest_algorithm -- unknown message digest algorithm");
    }
  }
#endif
}

serverinfo_ssl_dh_elliptic_curve: SSL_DH_ELLIPTIC_CURVE '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
#if OPENSSL_VERSION_NUMBER >= 0x009080FFL && !defined(OPENSSL_NO_ECDH)
  int nid = 0;
  EC_KEY *key = NULL;

  if (conf_parser_ctx.pass == 2)
  {
    if ((nid = OBJ_sn2nid(yylval.string)) == 0)
    {
        conf_error_report("Ignoring serverinfo::ssl_dh_elliptic_curve -- unknown curve name");
        break;
    }

    if ((key = EC_KEY_new_by_curve_name(nid)) == NULL)
    {
      conf_error_report("Ignoring serverinfo::ssl_dh_elliptic_curve -- could not create curve");
      break;
    }

    SSL_CTX_set_tmp_ecdh(ConfigServerInfo.server_ctx, key);
    EC_KEY_free(key);
  }
#endif
#endif
};

serverinfo_name: NAME '=' QSTRING ';'
{
  /* This isn't rehashable */
  if (conf_parser_ctx.pass == 2 && !ConfigServerInfo.name)
  {
    if (valid_servname(yylval.string))
      ConfigServerInfo.name = xstrdup(yylval.string);
    else
    {
      conf_error_report("Ignoring serverinfo::name -- invalid name. Aborting.");
      exit(EXIT_FAILURE);
    }
  }
};

serverinfo_sid: IRCD_SID '=' QSTRING ';'
{
  /* This isn't rehashable */
  if (conf_parser_ctx.pass == 2 && !ConfigServerInfo.sid)
  {
    if (valid_sid(yylval.string))
      ConfigServerInfo.sid = xstrdup(yylval.string);
    else
    {
      conf_error_report("Ignoring serverinfo::sid -- invalid SID. Aborting.");
      exit(EXIT_FAILURE);
    }
  }
};

serverinfo_description: DESCRIPTION '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
};

serverinfo_network_name: NETWORK_NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')))
      *p = '\0';

    MyFree(ConfigServerInfo.network_name);
    ConfigServerInfo.network_name = xstrdup(yylval.string);
  }
};

serverinfo_network_desc: NETWORK_DESC '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
};

serverinfo_vhost: VHOST '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost(%s)", yylval.string);
    else
    {
      assert(res);

      memcpy(&ConfigServerInfo.ip, res->ai_addr, res->ai_addrlen);
      ConfigServerInfo.ip.ss.ss_family = res->ai_family;
      ConfigServerInfo.ip.ss_len = res->ai_addrlen;
      freeaddrinfo(res);

      ConfigServerInfo.specific_ipv4_vhost = 1;
    }
  }
};

serverinfo_vhost6: VHOST6 '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2 && *yylval.string != '*')
  {
    struct addrinfo hints, *res;

    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(yylval.string, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost6(%s)", yylval.string);
    else
    {
      assert(res);

      memcpy(&ConfigServerInfo.ip6, res->ai_addr, res->ai_addrlen);
      ConfigServerInfo.ip6.ss.ss_family = res->ai_family;
      ConfigServerInfo.ip6.ss_len = res->ai_addrlen;
      freeaddrinfo(res);

      ConfigServerInfo.specific_ipv6_vhost = 1;
    }
  }
};

serverinfo_default_max_clients: DEFAULT_MAX_CLIENTS '=' NUMBER ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if ($3 < MAXCLIENTS_MIN)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
    conf_error_report(buf);
    ConfigServerInfo.default_max_clients = MAXCLIENTS_MIN;
  }
  else if ($3 > MAXCLIENTS_MAX)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
    conf_error_report(buf);
    ConfigServerInfo.default_max_clients = MAXCLIENTS_MAX;
  }
  else
    ConfigServerInfo.default_max_clients = $3;
};

serverinfo_max_nick_length: MAX_NICK_LENGTH '=' NUMBER ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if ($3 < 9)
  {
    conf_error_report("max_nick_length too low, setting to 9");
    ConfigServerInfo.max_nick_length = 9;
  }
  else if ($3 > NICKLEN)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "max_nick_length too high, setting to %d", NICKLEN);
    conf_error_report(buf);
    ConfigServerInfo.max_nick_length = NICKLEN;
  }
  else
    ConfigServerInfo.max_nick_length = $3;
};

serverinfo_max_topic_length: MAX_TOPIC_LENGTH '=' NUMBER ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if ($3 < 80)
  {
    conf_error_report("max_topic_length too low, setting to 80");
    ConfigServerInfo.max_topic_length = 80;
  }
  else if ($3 > TOPICLEN)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "max_topic_length too high, setting to %d", TOPICLEN);
    conf_error_report(buf);
    ConfigServerInfo.max_topic_length = TOPICLEN;
  }
  else
    ConfigServerInfo.max_topic_length = $3;
};

serverinfo_hub: HUB '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
};


/***************************************************************************
 * admin {} section
 ***************************************************************************/
admin_entry: ADMIN  '{' admin_items '}' ';' ;

admin_items: admin_items admin_item | admin_item;
admin_item:  admin_name |
             admin_description |
             admin_email |
             error ';' ;

admin_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
};

admin_email: EMAIL '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
};

admin_description: DESCRIPTION '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
};


/***************************************************************************
 * motd {} section
 ***************************************************************************/
motd_entry: MOTD
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' motd_items '}' ';'
{
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
};

motd_items: motd_items motd_item | motd_item;
motd_item:  motd_mask | motd_file | error ';' ;

motd_mask: MASK '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
};

motd_file: T_FILE '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
};


/***************************************************************************
 * pseudo {} section
 ***************************************************************************/
pseudo_entry: T_PSEUDO
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' pseudo_items '}' ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.command.buf[0] ||
      !block_state.name.buf[0] ||
      !block_state.nick.buf[0] ||
      !block_state.host.buf[0])
    break;

  pseudo_register(block_state.name.buf, block_state.nick.buf, block_state.host.buf,
                  block_state.prepend.buf, block_state.command.buf);
};

pseudo_items: pseudo_items pseudo_item | pseudo_item;
pseudo_item:  pseudo_command | pseudo_prepend | pseudo_name | pseudo_target | error ';' ;

pseudo_command: T_COMMAND '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
};

pseudo_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

pseudo_prepend: T_PREPEND '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
};

pseudo_target: T_TARGET '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.nick.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.nick.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
};


/***************************************************************************
 * log {} section
 ***************************************************************************/
logging_entry:          T_LOG  '{' logging_items '}' ';' ;
logging_items:          logging_items logging_item | logging_item ;

logging_item:           logging_use_logging | logging_file_entry |
                        error ';' ;

logging_use_logging: USE_LOGGING '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
};

logging_file_entry:
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} T_FILE  '{' logging_file_items '}' ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
};

logging_file_items: logging_file_items logging_file_item |
                    logging_file_item ;

logging_file_item:  logging_file_name | logging_file_type |
                    logging_file_size | error ';' ;

logging_file_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}

logging_file_size: T_SIZE '=' sizespec ';'
{
  block_state.size.value = $3;
} | T_SIZE '=' T_UNLIMITED ';'
{
  block_state.size.value = 0;
};

logging_file_type: TYPE
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
} '='  logging_file_type_items ';' ;

logging_file_type_items: logging_file_type_items ',' logging_file_type_item | logging_file_type_item;
logging_file_type_item:  USER
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
} | OPERATOR
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
} | XLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
} | RESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
} | T_DLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
} | KLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
} | KILL
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
} | S_DEBUG
{
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
};


/***************************************************************************
 * operator {} section
 ***************************************************************************/
oper_entry: OPERATOR
{
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
} '{' oper_items '}' ';'
{
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0])
    break;

  if (!block_state.rpass.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
  {
    struct MaskItem *conf = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = node->data;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);
    split_nuh(&nuh);

    conf         = conf_make(CONF_OPER);
    conf->name   = xstrdup(block_state.name.buf);
    conf->user   = xstrdup(block_state.user.buf);
    conf->host   = xstrdup(block_state.host.buf);

    if (block_state.cert.buf[0])
      conf->certfp = xstrdup(block_state.cert.buf);

    if (block_state.rpass.buf[0])
      conf->passwd = xstrdup(block_state.rpass.buf);

    if (block_state.whois.buf[0])
      conf->whois = xstrdup(block_state.whois.buf);

    conf->flags = block_state.flags.value;
    conf->modes = block_state.modes.value;
    conf->snomodes = block_state.snomodes.value;
    conf->port  = block_state.port.value;
    conf->htype = parse_netmask(conf->host, &conf->addr, &conf->bits);

    conf_add_class_to_conf(conf, block_state.class.buf);
  }
};

oper_items:     oper_items oper_item | oper_item;
oper_item:      oper_name |
                oper_user |
                oper_password |
                oper_whois |
                oper_umodes |
                oper_class |
                oper_encrypted |
                oper_ssl_certificate_fingerprint |
                oper_ssl_connection_required |
                oper_flags |
                oper_snomodes |
                error ';' ;

oper_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

oper_user: USER '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
};

oper_password: PASSWORD '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};

oper_whois: WHOIS '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
};

oper_encrypted: ENCRYPTED '=' TBOOL ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
};

oper_ssl_certificate_fingerprint: SSL_CERTIFICATE_FINGERPRINT '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
};

oper_ssl_connection_required: SSL_CONNECTION_REQUIRED '=' TBOOL ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
};

oper_class: CLASS '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
};

oper_umodes: T_UMODES
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
} '='  oper_umodes_items ';' ;

oper_umodes_items: oper_umodes_items ',' oper_umodes_item | oper_umodes_item;
oper_umodes_item:  T_DEAF
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
} | HIDDEN
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
} | HIDE_CHANS
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
} | HIDE_IDLE
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
} | T_SPY
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
} | T_SERVNOTICE
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
} | T_INVISIBLE
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
} | T_WALLOP
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
} | T_SOFTCALLERID
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
} | T_CALLERID
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
} | T_LOCOPS
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
} | T_NONONREG
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
} | T_FARCONNECT
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
} | T_OPERWALL
{
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
} | WHOIS_NOTIFY
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
} | BLOCKINVITES
{
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
};

oper_snomodes: T_SNOMODES
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value = 0;
} '='  oper_snomodes_items ';' ;

oper_snomodes_items: oper_snomodes_items ',' oper_snomodes_item | oper_snomodes_item;
oper_snomodes_item:  S_CCONN
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_CCONN;
} | S_DEBUG
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_DEBUG;
} | S_EXTERNAL
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_EXTERNAL;
} | S_FULL
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_FULL;
} | S_REJ
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_REJ;
} | S_SKILL
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_SKILL;
} | S_NCHANGE
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_NCHANGE;
} | S_UNAUTH
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_UNAUTH;
} | S_KLINESPAM
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_KLINE;
} | S_DLINESPAM
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_DLINE;
} | S_XLINESPAM
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_XLINE;
} | S_BOTS
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_BOTS;
} | S_SERVREJ
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_SERVREJ;
} | S_SNOGENERAL
{
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_GENERAL;
};

oper_flags: IRCD_FLAGS
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
} '='  oper_flags_items ';';

oper_flags_items: oper_flags_items ',' oper_flags_item | oper_flags_item;
oper_flags_item: KILL ':' REMOTE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
} | KILL
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
} | CONNECT ':' REMOTE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
} | CONNECT
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
} | SQUIT ':' REMOTE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
} | SQUIT
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
} | KLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
} | UNKLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
} | T_DLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
} | T_UNDLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
} | XLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
} | T_UNXLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
} | DIE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
} | T_RESTART
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
} | REHASH
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
} | ADMIN
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
} | T_GLOBOPS
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
} | T_WALLOPS
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
} | T_LOCOPS
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
} | REMOTEBAN
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
} | T_SET
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
} | MODULE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
} | T_OPME
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
} | NICK ':' RESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
} | JOIN ':' RESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
} | RESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
} | T_UNRESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
} | CLOSE
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
} | T_OPERWALLS
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
} | NETADMIN
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
};


/***************************************************************************
 * class {} section
 ***************************************************************************/
class_entry: CLASS
{
  if (conf_parser_ctx.pass != 1)
    break;

  reset_block_state();

  block_state.ping_freq.value = DEFAULT_PINGFREQUENCY;
  block_state.con_freq.value  = DEFAULT_CONNECTFREQUENCY;
  block_state.max_total.value = MAXIMUM_LINKS_DEFAULT;
  block_state.max_sendq.value = DEFAULT_SENDQ;
  block_state.max_recvq.value = DEFAULT_RECVQ;
} '{' class_items '}' ';'
{
  struct ClassItem *class = NULL;

  if (conf_parser_ctx.pass != 1)
    break;

  if (!block_state.class.buf[0])
    break;

  if (!(class = class_find(block_state.class.buf, 0)))
    class = class_make();

  class->active = 1;
  MyFree(class->name);
  class->name = xstrdup(block_state.class.buf);
  class->ping_freq = block_state.ping_freq.value;
  class->max_perip = block_state.max_perip.value;
  class->con_freq = block_state.con_freq.value;
  class->max_total = block_state.max_total.value;
  class->max_global = block_state.max_global.value;
  class->max_local = block_state.max_local.value;
  class->max_ident = block_state.max_ident.value;
  class->max_sendq = block_state.max_sendq.value;
  class->max_recvq = block_state.max_recvq.value;
  class->max_channels = block_state.max_channels.value;

  if (block_state.min_idle.value > block_state.max_idle.value)
  {
    block_state.min_idle.value = 0;
    block_state.max_idle.value = 0;
    block_state.flags.value &= ~CLASS_FLAGS_FAKE_IDLE;
  }

  class->flags = block_state.flags.value;
  class->min_idle = block_state.min_idle.value;
  class->max_idle = block_state.max_idle.value;

  rebuild_cidr_list(class);

  class->cidr_bitlen_ipv4 = block_state.cidr_bitlen_ipv4.value;
  class->cidr_bitlen_ipv6 = block_state.cidr_bitlen_ipv6.value;
  class->number_per_cidr = block_state.number_per_cidr.value;
};

class_items:    class_items class_item | class_item;
class_item:     class_name |
                class_cidr_bitlen_ipv4 |
                class_cidr_bitlen_ipv6 |
                class_ping_time |
                class_number_per_cidr |
                class_number_per_ip |
                class_connectfreq |
                class_max_channels |
                class_max_number |
                class_max_global |
                class_max_local |
                class_max_ident |
                class_sendq | class_recvq |
                class_min_idle |
                class_max_idle |
                class_flags |
                error ';' ;

class_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
};

class_ping_time: PING_TIME '=' timespec ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = $3;
};

class_number_per_ip: NUMBER_PER_IP '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = $3;
};

class_connectfreq: CONNECTFREQ '=' timespec ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = $3;
};

class_max_channels: MAX_CHANNELS '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = $3;
};

class_max_number: MAX_NUMBER '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = $3;
};

class_max_global: MAX_GLOBAL '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = $3;
};

class_max_local: MAX_LOCAL '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = $3;
};

class_max_ident: MAX_IDENT '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = $3;
};

class_sendq: SENDQ '=' sizespec ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = $3;
};

class_recvq: T_RECVQ '=' sizespec ';'
{
  if (conf_parser_ctx.pass == 1)
    if ($3 >= CLIENT_FLOOD_MIN && $3 <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = $3;
};

class_cidr_bitlen_ipv4: CIDR_BITLEN_IPV4 '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = $3 > 32 ? 32 : $3;
};

class_cidr_bitlen_ipv6: CIDR_BITLEN_IPV6 '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = $3 > 128 ? 128 : $3;
};

class_number_per_cidr: NUMBER_PER_CIDR '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = $3;
};

class_min_idle: MIN_IDLE '=' timespec ';'
{
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = $3;
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
};

class_max_idle: MAX_IDLE '=' timespec ';'
{
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = $3;
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
};

class_flags: IRCD_FLAGS
{
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
} '='  class_flags_items ';';

class_flags_items: class_flags_items ',' class_flags_item | class_flags_item;
class_flags_item: RANDOM_IDLE
{
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
} | HIDE_IDLE_FROM_OPERS
{
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
};


/***************************************************************************
 * listen {} section
 ***************************************************************************/
listen_entry: LISTEN
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' listen_items '}' ';';

listen_flags: IRCD_FLAGS
{
  block_state.flags.value = 0;
} '='  listen_flags_items ';';

listen_flags_items: listen_flags_items ',' listen_flags_item | listen_flags_item;
listen_flags_item: T_SSL
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
} | HIDDEN
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
} | T_SERVER
{
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
};

listen_items:   listen_items listen_item | listen_item;
listen_item:    listen_port | listen_flags | listen_address | listen_host | error ';';

listen_port: PORT '=' port_items { block_state.flags.value = 0; } ';';

port_items: port_items ',' port_item | port_item;

port_item: NUMBER
{
  if (conf_parser_ctx.pass == 2)
  {
#ifndef HAVE_LIBCRYPTO
    if (block_state.flags.value & LISTENER_SSL)
    {
      conf_error_report("SSL not available - port closed");
      break;
    }
#endif
    listener_add($1, block_state.addr.buf, block_state.flags.value);
  }
} | NUMBER TWODOTS NUMBER
{
  if (conf_parser_ctx.pass == 2)
  {
#ifndef HAVE_LIBCRYPTO
    if (block_state.flags.value & LISTENER_SSL)
    {
      conf_error_report("SSL not available - port closed");
      break;
    }
#endif

    for (int i = $1; i <= $3; ++i)
      listener_add(i, block_state.addr.buf, block_state.flags.value);
  }
};

listen_address: IP '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
};

listen_host: HOST '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
};


/***************************************************************************
 * auth {} section
 ***************************************************************************/
auth_entry: IRCD_AUTH
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' auth_items '}' ';'
{
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
  {
    struct MaskItem *conf = NULL;
    struct split_nuh_item nuh;

    nuh.nuhmask  = node->data;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;
    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);
    split_nuh(&nuh);

    conf        = conf_make(CONF_CLIENT);
    conf->user  = xstrdup(block_state.user.buf);
    conf->host  = xstrdup(block_state.host.buf);

    if (block_state.rpass.buf[0])
      conf->passwd = xstrdup(block_state.rpass.buf);
    if (block_state.name.buf[0])
      conf->name = xstrdup(block_state.name.buf);

    conf->flags = block_state.flags.value;
    conf->port  = block_state.port.value;

    conf_add_class_to_conf(conf, block_state.class.buf);
    add_conf_by_address(CONF_CLIENT, conf);
  }
};

auth_items:     auth_items auth_item | auth_item;
auth_item:      auth_user |
                auth_passwd |
                auth_class |
                auth_flags |
                auth_spoof |
                auth_redir_serv |
                auth_redir_port |
                auth_encrypted |
                error ';' ;

auth_user: USER '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
};

auth_passwd: PASSWORD '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};

auth_class: CLASS '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
};

auth_encrypted: ENCRYPTED '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
};

auth_flags: IRCD_FLAGS
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
} '='  auth_flags_items ';';

auth_flags_items: auth_flags_items ',' auth_flags_item | auth_flags_item;
auth_flags_item: SPOOF_NOTICE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
} | EXCEED_LIMIT
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
} | KLINE_EXEMPT
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
} | XLINE_EXEMPT
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
} | NEED_IDENT
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
} | CAN_FLOOD
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
} | NO_TILDE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
} | RESV_EXEMPT
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
} | T_WEBIRC
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
} | NEED_PASSWORD
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
};

auth_spoof: SPOOF '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_hostname(yylval.string))
  {
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
    block_state.flags.value |= CONF_FLAGS_SPOOF_IP;
  }
  else
    ilog(LOG_TYPE_IRCD, "Spoof either is too long or contains invalid characters. Ignoring it.");
};

auth_redir_serv: REDIRSERV '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
};

auth_redir_port: REDIRPORT '=' NUMBER ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = $3;
};


/***************************************************************************
 * resv {} section
 ***************************************************************************/
resv_entry: RESV
{
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
} '{' resv_items '}' ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
};

resv_items:     resv_items resv_item | resv_item;
resv_item:      resv_mask | resv_reason | resv_exempt | error ';' ;

resv_mask: MASK '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

resv_reason: REASON '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};

resv_exempt: EXEMPT '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
};


/***************************************************************************
 * service {} section
 ***************************************************************************/
service_entry: T_SERVICE '{' service_items '}' ';';

service_items:     service_items service_item | service_item;
service_item:      service_name | error;

service_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
};


/***************************************************************************
 * shared {} section, for sharing remote klines etc.
 ***************************************************************************/
shared_entry: T_SHARED
{
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
} '{' shared_items '}' ';'
{
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_SHARED);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);
};

shared_items: shared_items shared_item | shared_item;
shared_item:  shared_name | shared_user | shared_type | error ';' ;

shared_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

shared_user: USER '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
};

shared_type: TYPE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
} '=' shared_types ';' ;

shared_types: shared_types ',' shared_type_item | shared_type_item;
shared_type_item: KLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
} | UNKLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
} | T_DLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
} | T_UNDLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
} | XLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
} | T_UNXLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
} | RESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
} | T_UNRESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
} | T_LOCOPS
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
} | T_ALL
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
};


/***************************************************************************
 * cluster {} section
 ***************************************************************************/
cluster_entry: T_CLUSTER
{
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
} '{' cluster_items '}' ';'
{
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
};

cluster_items:  cluster_items cluster_item | cluster_item;
cluster_item:   cluster_name | cluster_type | error ';' ;

cluster_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

cluster_type: TYPE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
} '=' cluster_types ';' ;

cluster_types:  cluster_types ',' cluster_type_item | cluster_type_item;
cluster_type_item: KLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
} | UNKLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
} | T_DLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
} | T_UNDLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
} | XLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
} | T_UNXLINE
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
} | RESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
} | T_UNRESV
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
} | T_LOCOPS
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
} | T_ALL
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
};


/***************************************************************************
 * connect {}  section
 ***************************************************************************/
connect_entry: CONNECT
{

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
} '{' connect_items '}' ';'
{
  struct MaskItem *conf = NULL;
  struct addrinfo hints, *res;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0] ||
      !block_state.host.buf[0])
    break;

  if (!block_state.rpass.buf[0] ||
      !block_state.spass.buf[0])
    break;

  if (has_wildcards(block_state.name.buf) ||
      has_wildcards(block_state.host.buf))
    break;

  conf = conf_make(CONF_SERVER);
  conf->port = block_state.port.value;
  conf->flags = block_state.flags.value;
  conf->aftype = block_state.aftype.value;
  conf->host = xstrdup(block_state.host.buf);
  conf->name = xstrdup(block_state.name.buf);
  conf->passwd = xstrdup(block_state.rpass.buf);
  conf->spasswd = xstrdup(block_state.spass.buf);

  if (block_state.cert.buf[0])
    conf->certfp = xstrdup(block_state.cert.buf);

  if (block_state.ciph.buf[0])
    conf->cipher_list = xstrdup(block_state.ciph.buf);

  dlinkMoveList(&block_state.leaf.list, &conf->leaf_list);
  dlinkMoveList(&block_state.hub.list, &conf->hub_list);

  if (block_state.bind.buf[0])
  {
    memset(&hints, 0, sizeof(hints));

    hints.ai_family   = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags    = AI_PASSIVE | AI_NUMERICHOST;

    if (getaddrinfo(block_state.bind.buf, NULL, &hints, &res))
      ilog(LOG_TYPE_IRCD, "Invalid netmask for server vhost(%s)", block_state.bind.buf);
    else
    {
      assert(res);

      memcpy(&conf->bind, res->ai_addr, res->ai_addrlen);
      conf->bind.ss.ss_family = res->ai_family;
      conf->bind.ss_len = res->ai_addrlen;
      freeaddrinfo(res);
    }
  }

  conf_add_class_to_conf(conf, block_state.class.buf);
  lookup_confhost(conf);
};

connect_items:  connect_items connect_item | connect_item;
connect_item:   connect_name |
                connect_host |
                connect_vhost |
                connect_send_password |
                connect_accept_password |
                connect_ssl_certificate_fingerprint |
                connect_aftype |
                connect_port |
                connect_ssl_cipher_list |
                connect_flags |
                connect_hub_mask |
                connect_leaf_mask |
                connect_class |
                connect_encrypted |
                error ';' ;

connect_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

connect_host: HOST '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
};

connect_vhost: VHOST '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
};

connect_send_password: SEND_PASSWORD '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if ($3[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr($3, ' '))
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.spass.buf, yylval.string, sizeof(block_state.spass.buf));
};

connect_accept_password: ACCEPT_PASSWORD '=' QSTRING ';'
{
  if (conf_parser_ctx.pass != 2)
    break;

  if ($3[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr($3, ' '))
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};

connect_ssl_certificate_fingerprint: SSL_CERTIFICATE_FINGERPRINT '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
};

connect_port: PORT '=' NUMBER ';'
{
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = $3;
};

connect_aftype: AFTYPE '=' T_IPV4 ';'
{
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
} | AFTYPE '=' T_IPV6 ';'
{
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
};

connect_flags: IRCD_FLAGS
{
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
} '='  connect_flags_items ';';

connect_flags_items: connect_flags_items ',' connect_flags_item | connect_flags_item;
connect_flags_item: AUTOCONN
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
} | T_SSL
{
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
};

connect_encrypted: ENCRYPTED '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
};

connect_hub_mask: HUB_MASK '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
};

connect_leaf_mask: LEAF_MASK '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
};

connect_class: CLASS '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
};

connect_ssl_cipher_list: T_SSL_CIPHER_LIST '=' QSTRING ';'
{
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
};


/***************************************************************************
 * kill {} section
 ***************************************************************************/
kill_entry: KILL
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' kill_items '}' ';'
{
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.user.buf[0] ||
      !block_state.host.buf[0])
    break;

  conf = conf_make(CONF_KLINE);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);

  if (block_state.rpass.buf[0])
    conf->reason = xstrdup(block_state.rpass.buf);
  else
    conf->reason = xstrdup(CONF_NOREASON);
  add_conf_by_address(CONF_KLINE, conf);
};

kill_items:     kill_items kill_item | kill_item;
kill_item:      kill_user | kill_reason | error;

kill_user: USER '=' QSTRING ';'
{

  if (conf_parser_ctx.pass == 2)
  {
    struct split_nuh_item nuh;

    nuh.nuhmask  = yylval.string;
    nuh.nickptr  = NULL;
    nuh.userptr  = block_state.user.buf;
    nuh.hostptr  = block_state.host.buf;

    nuh.nicksize = 0;
    nuh.usersize = sizeof(block_state.user.buf);
    nuh.hostsize = sizeof(block_state.host.buf);

    split_nuh(&nuh);
  }
};

kill_reason: REASON '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};


/***************************************************************************
 * deny {} section
 ***************************************************************************/
deny_entry: DENY
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' deny_items '}' ';'
{
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.addr.buf[0])
    break;

  if (parse_netmask(block_state.addr.buf, NULL, NULL) != HM_HOST)
  {
    conf = conf_make(CONF_DLINE);
    conf->host = xstrdup(block_state.addr.buf);

    if (block_state.rpass.buf[0])
      conf->reason = xstrdup(block_state.rpass.buf);
    else
      conf->reason = xstrdup(CONF_NOREASON);
    add_conf_by_address(CONF_DLINE, conf);
  }
};

deny_items:     deny_items deny_item | deny_item;
deny_item:      deny_ip | deny_reason | error;

deny_ip: IP '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
};

deny_reason: REASON '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};


/***************************************************************************
 * exempt {} section
 ***************************************************************************/
exempt_entry: EXEMPT '{' exempt_items '}' ';';

exempt_items: exempt_items exempt_item | exempt_item;
exempt_item:  exempt_ip | error;

exempt_ip: IP '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    if (*yylval.string && parse_netmask(yylval.string, NULL, NULL) != HM_HOST)
    {
      struct MaskItem *conf = conf_make(CONF_EXEMPT);
      conf->host = xstrdup(yylval.string);

      add_conf_by_address(CONF_EXEMPT, conf);
    }
  }
};

/***************************************************************************
 * gecos {} section
 ***************************************************************************/
gecos_entry: GECOS
{
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
} '{' gecos_items '}' ';'
{
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.name.buf[0])
    break;

  conf = conf_make(CONF_XLINE);
  conf->name = xstrdup(block_state.name.buf);

  if (block_state.rpass.buf[0])
    conf->reason = xstrdup(block_state.rpass.buf);
  else
    conf->reason = xstrdup(CONF_NOREASON);
};

gecos_items: gecos_items gecos_item | gecos_item;
gecos_item:  gecos_name | gecos_reason | error;

gecos_name: NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
};

gecos_reason: REASON '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
};


/***************************************************************************
 * general {} section
 ***************************************************************************/
general_entry: GENERAL '{' general_items '}' ';';

general_items:      general_items general_item | general_item;
general_item:       general_away_count |
                    general_away_time |
                    general_ignore_bogus_ts |
                    general_failed_oper_notice |
                    general_anti_nick_flood |
                    general_max_nick_time |
                    general_max_nick_changes |
                    general_max_accept |
                    general_anti_spam_exit_message_time |
                    general_ts_warn_delta |
                    general_ts_max_delta |
                    general_kill_chase_time_limit |
                    general_invisible_on_connect |
                    general_warn_no_connect_block |
                    general_dots_in_ident |
                    general_stats_i_oper_only |
                    general_stats_k_oper_only |
                    general_stats_m_oper_only |
                    general_stats_o_oper_only |
                    general_stats_P_oper_only |
                    general_stats_u_oper_only |
                    general_pace_wait |
                    general_pace_wait_simple |
                    general_short_motd |
                    general_no_oper_flood |
                    general_oper_only_umodes |
                    general_max_targets |
                    general_oper_umodes |
                    general_caller_id_wait |
                    general_opers_bypass_callerid |
                    general_default_floodcount |
                    general_min_nonwildcard |
                    general_min_nonwildcard_simple |
                    general_throttle_count |
                    general_throttle_time |
                    general_ping_cookie |
                    general_disable_auth |
                    general_tkline_expire_notices |
                    general_dline_min_cidr |
                    general_dline_min_cidr6 |
                    general_kline_min_cidr |
                    general_kline_min_cidr6 |
                    general_stats_e_disabled |
                    general_max_watch |
                    general_cycle_on_host_change |
                    general_cloak_key1 |
                    general_cloak_key2 |
                    general_cloak_key3 |
                    general_cloak_mask |
                    general_kline_reason |
                    general_max_split_history |
                    error;


general_away_count: AWAY_COUNT '=' NUMBER ';'
{
  ConfigGeneral.away_count = $3;
};

general_away_time: AWAY_TIME '=' timespec ';'
{
  ConfigGeneral.away_time = $3;
};

general_max_watch: MAX_WATCH '=' NUMBER ';'
{
  ConfigGeneral.max_watch = $3;
};

general_cloak_key1: CLOAK_KEY1 '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
};

general_cloak_key2: CLOAK_KEY2 '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
};

general_cloak_key3: CLOAK_KEY3 '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
};

general_cloak_mask: CLOAK_MASK '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
};

general_cycle_on_host_change: CYCLE_ON_HOST_CHANGE '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
};

general_dline_min_cidr: DLINE_MIN_CIDR '=' NUMBER ';'
{
  ConfigGeneral.dline_min_cidr = $3;
};

general_dline_min_cidr6: DLINE_MIN_CIDR6 '=' NUMBER ';'
{
  ConfigGeneral.dline_min_cidr6 = $3;
};

general_kline_min_cidr: KLINE_MIN_CIDR '=' NUMBER ';'
{
  ConfigGeneral.kline_min_cidr = $3;
};

general_kline_min_cidr6: KLINE_MIN_CIDR6 '=' NUMBER ';'
{
  ConfigGeneral.kline_min_cidr6 = $3;
};

general_kline_reason: KLINE_REASON '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
};

general_tkline_expire_notices: TKLINE_EXPIRE_NOTICES '=' TBOOL ';'
{
  ConfigGeneral.tkline_expire_notices = yylval.number;
};

general_kill_chase_time_limit: KILL_CHASE_TIME_LIMIT '=' timespec ';'
{
  ConfigGeneral.kill_chase_time_limit = $3;
};

general_ignore_bogus_ts: IGNORE_BOGUS_TS '=' TBOOL ';'
{
  ConfigGeneral.ignore_bogus_ts = yylval.number;
};

general_failed_oper_notice: FAILED_OPER_NOTICE '=' TBOOL ';'
{
  ConfigGeneral.failed_oper_notice = yylval.number;
};

general_anti_nick_flood: ANTI_NICK_FLOOD '=' TBOOL ';'
{
  ConfigGeneral.anti_nick_flood = yylval.number;
};

general_max_nick_time: MAX_NICK_TIME '=' timespec ';'
{
  ConfigGeneral.max_nick_time = $3;
};

general_max_nick_changes: MAX_NICK_CHANGES '=' NUMBER ';'
{
  ConfigGeneral.max_nick_changes = $3;
};

general_max_accept: MAX_ACCEPT '=' NUMBER ';'
{
  ConfigGeneral.max_accept = $3;
};

general_anti_spam_exit_message_time: ANTI_SPAM_EXIT_MESSAGE_TIME '=' timespec ';'
{
  ConfigGeneral.anti_spam_exit_message_time = $3;
};

general_ts_warn_delta: TS_WARN_DELTA '=' timespec ';'
{
  ConfigGeneral.ts_warn_delta = $3;
};

general_ts_max_delta: TS_MAX_DELTA '=' timespec ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = $3;
};

general_invisible_on_connect: INVISIBLE_ON_CONNECT '=' TBOOL ';'
{
  ConfigGeneral.invisible_on_connect = yylval.number;
};

general_warn_no_connect_block: WARN_NO_CONNECT_BLOCK '=' TBOOL ';'
{
  ConfigGeneral.warn_no_connect_block = yylval.number;
};

general_stats_e_disabled: STATS_E_DISABLED '=' TBOOL ';'
{
  ConfigGeneral.stats_e_disabled = yylval.number;
};

general_stats_m_oper_only: STATS_M_OPER_ONLY '=' TBOOL ';'
{
  ConfigGeneral.stats_m_oper_only = yylval.number;
};

general_stats_o_oper_only: STATS_O_OPER_ONLY '=' TBOOL ';'
{
  ConfigGeneral.stats_o_oper_only = yylval.number;
};

general_stats_P_oper_only: STATS_P_OPER_ONLY '=' TBOOL ';'
{
  ConfigGeneral.stats_P_oper_only = yylval.number;
};

general_stats_u_oper_only: STATS_U_OPER_ONLY '=' TBOOL ';'
{
  ConfigGeneral.stats_u_oper_only = yylval.number;
};

general_stats_k_oper_only: STATS_K_OPER_ONLY '=' TBOOL ';'
{
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
} | STATS_K_OPER_ONLY '=' TMASKED ';'
{
  ConfigGeneral.stats_k_oper_only = 1;
};

general_stats_i_oper_only: STATS_I_OPER_ONLY '=' TBOOL ';'
{
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
} | STATS_I_OPER_ONLY '=' TMASKED ';'
{
  ConfigGeneral.stats_i_oper_only = 1;
};

general_pace_wait: PACE_WAIT '=' timespec ';'
{
  ConfigGeneral.pace_wait = $3;
};

general_caller_id_wait: CALLER_ID_WAIT '=' timespec ';'
{
  ConfigGeneral.caller_id_wait = $3;
};

general_opers_bypass_callerid: OPERS_BYPASS_CALLERID '=' TBOOL ';'
{
  ConfigGeneral.opers_bypass_callerid = yylval.number;
};

general_pace_wait_simple: PACE_WAIT_SIMPLE '=' timespec ';'
{
  ConfigGeneral.pace_wait_simple = $3;
};

general_short_motd: SHORT_MOTD '=' TBOOL ';'
{
  ConfigGeneral.short_motd = yylval.number;
};

general_no_oper_flood: NO_OPER_FLOOD '=' TBOOL ';'
{
  ConfigGeneral.no_oper_flood = yylval.number;
};

general_dots_in_ident: DOTS_IN_IDENT '=' NUMBER ';'
{
  ConfigGeneral.dots_in_ident = $3;
};

general_max_targets: MAX_TARGETS '=' NUMBER ';'
{
  ConfigGeneral.max_targets = $3;
};

general_ping_cookie: PING_COOKIE '=' TBOOL ';'
{
  ConfigGeneral.ping_cookie = yylval.number;
};

general_disable_auth: DISABLE_AUTH '=' TBOOL ';'
{
  ConfigGeneral.disable_auth = yylval.number;
};

general_throttle_count: THROTTLE_COUNT '=' NUMBER ';'
{
  ConfigGeneral.throttle_count = $3;
};

general_throttle_time: THROTTLE_TIME '=' timespec ';'
{
  ConfigGeneral.throttle_time = $3;
};

general_oper_umodes: OPER_UMODES
{
  ConfigGeneral.oper_umodes = 0;
} '='  umode_oitems ';' ;

general_max_split_history: MAX_SPLIT_HISTORY '=' NUMBER ';'
{
  ConfigGeneral.max_split_history = $3;
};

umode_oitems:    umode_oitems ',' umode_oitem | umode_oitem;
umode_oitem:     T_DEAF
{
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
} | HIDDEN
{
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
} | HIDE_CHANS
{
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
} | HIDE_IDLE
{
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
} | T_SPY
{
  ConfigGeneral.oper_umodes |= UMODE_SPY;
} | T_SERVNOTICE
{
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
} | T_INVISIBLE
{
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
} | T_WALLOP
{
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
} | T_SOFTCALLERID
{
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
} | T_CALLERID
{
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
} | T_LOCOPS
{
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
} | T_NONONREG
{
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
} | T_FARCONNECT
{
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
} | T_OPERWALL
{
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
} | WHOIS_NOTIFY
{
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
} | BLOCKINVITES
{
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
};

general_oper_only_umodes: OPER_ONLY_UMODES
{
  ConfigGeneral.oper_only_umodes = 0;
} '='  umode_items ';' ;

umode_items:  umode_items ',' umode_item | umode_item;
umode_item:   T_DEAF
{
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
} | HIDDEN
{
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
} | T_SPY
{
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
} | T_SERVNOTICE
{
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
} | T_INVISIBLE
{
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
} | T_WALLOP
{
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
} | T_SOFTCALLERID
{
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
} | T_CALLERID
{
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
} | T_LOCOPS
{
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
} | T_NONONREG
{
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
} | T_FARCONNECT
{
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
} | T_OPERWALL
{
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
} | WHOIS_NOTIFY
{
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
};

general_min_nonwildcard: MIN_NONWILDCARD '=' NUMBER ';'
{
  ConfigGeneral.min_nonwildcard = $3;
};

general_min_nonwildcard_simple: MIN_NONWILDCARD_SIMPLE '=' NUMBER ';'
{
  ConfigGeneral.min_nonwildcard_simple = $3;
};

general_default_floodcount: DEFAULT_FLOODCOUNT '=' NUMBER ';'
{
  ConfigGeneral.default_floodcount = $3;
};


/***************************************************************************
 * channel {} section
 ***************************************************************************/
channel_entry: CHANNEL '{' channel_items '}' ';';

channel_items:      channel_items channel_item | channel_item;
channel_item:       channel_max_bans |
                    channel_invite_client_count |
                    channel_invite_client_time |
                    channel_invite_delay_channel |
                    channel_knock_client_count |
                    channel_knock_client_time |
                    channel_knock_delay_channel |
                    channel_max_channels |
                    channel_default_join_flood_count |
                    channel_default_join_flood_time |
                    channel_disable_fake_channels |
                    error;

channel_disable_fake_channels: DISABLE_FAKE_CHANNELS '=' TBOOL ';'
{
  ConfigChannel.disable_fake_channels = yylval.number;
};

channel_invite_client_count: INVITE_CLIENT_COUNT '=' NUMBER ';'
{
  ConfigChannel.invite_client_count = $3;
};

channel_invite_client_time: INVITE_CLIENT_TIME '=' timespec ';'
{
  ConfigChannel.invite_client_time = $3;
};

channel_invite_delay_channel: INVITE_DELAY_CHANNEL '=' timespec ';'
{
  ConfigChannel.invite_delay_channel = $3;
};

channel_knock_client_count: KNOCK_CLIENT_COUNT '=' NUMBER ';'
{
  ConfigChannel.knock_client_count = $3;
};

channel_knock_client_time: KNOCK_CLIENT_TIME '=' timespec ';'
{
  ConfigChannel.knock_client_time = $3;
};

channel_knock_delay_channel: KNOCK_DELAY_CHANNEL '=' timespec ';'
{
  ConfigChannel.knock_delay_channel = $3;
};

channel_max_channels: MAX_CHANNELS '=' NUMBER ';'
{
  ConfigChannel.max_channels = $3;
};

channel_max_bans: MAX_BANS '=' NUMBER ';'
{
  ConfigChannel.max_bans = $3;
};

channel_default_join_flood_count: DEFAULT_JOIN_FLOOD_COUNT '=' NUMBER ';'
{
  ConfigChannel.default_join_flood_count = yylval.number;
};

channel_default_join_flood_time: DEFAULT_JOIN_FLOOD_TIME '=' timespec ';'
{
  ConfigChannel.default_join_flood_time = $3;
};


/***************************************************************************
 * serverhide {} section
 ***************************************************************************/
serverhide_entry: SERVERHIDE '{' serverhide_items '}' ';';

serverhide_items:   serverhide_items serverhide_item | serverhide_item;
serverhide_item:    serverhide_flatten_links |
                    serverhide_flatten_links_delay |
                    serverhide_flatten_links_file |
                    serverhide_disable_remote_commands |
                    serverhide_hide_servers |
                    serverhide_hide_services |
                    serverhide_hidden |
                    serverhide_hidden_name |
                    serverhide_hide_server_ips |
                    error;

serverhide_flatten_links: FLATTEN_LINKS '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
};

serverhide_flatten_links_delay: FLATTEN_LINKS_DELAY '=' timespec ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    if ($3 > 0)
    {
      event_write_links_file.when = $3;
      event_add(&event_write_links_file, NULL);
    }
    else
     event_delete(&event_write_links_file);

    ConfigServerHide.flatten_links_delay = $3;
  }
};

serverhide_flatten_links_file: FLATTEN_LINKS_FILE '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
};

serverhide_disable_remote_commands: DISABLE_REMOTE_COMMANDS '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
};

serverhide_hide_servers: HIDE_SERVERS '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
};

serverhide_hide_services: HIDE_SERVICES '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
};

serverhide_hidden_name: HIDDEN_NAME '=' QSTRING ';'
{
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
};

serverhide_hidden: HIDDEN '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
};

serverhide_hide_server_ips: HIDE_SERVER_IPS '=' TBOOL ';'
{
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
};
