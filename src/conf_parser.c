/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 28 "conf_parser.y" /* yacc.c:339  */


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
    xfree(node->data);
    dlinkDelete(node, &block_state.mask.list);
    free_dlink_node(node);
  }

  DLINK_FOREACH_SAFE(node, node_next, block_state.leaf.list.head)
  {
    xfree(node->data);
    dlinkDelete(node, &block_state.leaf.list);
    free_dlink_node(node);
  }

  DLINK_FOREACH_SAFE(node, node_next, block_state.hub.list.head)
  {
    xfree(node->data);
    dlinkDelete(node, &block_state.hub.list);
    free_dlink_node(node);
  }

  memset(&block_state, 0, sizeof(block_state));
}


#line 192 "conf_parser.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_CONF_PARSER_H_INCLUDED
# define YY_YY_CONF_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ACCEPT_PASSWORD = 258,
    ADMIN = 259,
    AFTYPE = 260,
    ANTI_NICK_FLOOD = 261,
    ANTI_SPAM_EXIT_MESSAGE_TIME = 262,
    AUTOCONN = 263,
    AWAY_COUNT = 264,
    AWAY_TIME = 265,
    BYTES = 266,
    KBYTES = 267,
    MBYTES = 268,
    CALLER_ID_WAIT = 269,
    CAN_FLOOD = 270,
    CHANNEL = 271,
    CIDR_BITLEN_IPV4 = 272,
    CIDR_BITLEN_IPV6 = 273,
    CLASS = 274,
    CLOAK_KEY1 = 275,
    CLOAK_KEY2 = 276,
    CLOAK_KEY3 = 277,
    CLOAK_MASK = 278,
    CLOSE = 279,
    CONNECT = 280,
    CONNECTFREQ = 281,
    CYCLE_ON_HOST_CHANGE = 282,
    DEFAULT_FLOODCOUNT = 283,
    DEFAULT_JOIN_FLOOD_COUNT = 284,
    DEFAULT_JOIN_FLOOD_TIME = 285,
    DEFAULT_MAX_CLIENTS = 286,
    DENY = 287,
    DESCRIPTION = 288,
    DIE = 289,
    DISABLE_AUTH = 290,
    DISABLE_FAKE_CHANNELS = 291,
    DISABLE_REMOTE_COMMANDS = 292,
    DLINE_MIN_CIDR = 293,
    DLINE_MIN_CIDR6 = 294,
    DOTS_IN_IDENT = 295,
    EMAIL = 296,
    ENCRYPTED = 297,
    EXCEED_LIMIT = 298,
    EXEMPT = 299,
    FAILED_OPER_NOTICE = 300,
    FLATTEN_LINKS = 301,
    FLATTEN_LINKS_DELAY = 302,
    FLATTEN_LINKS_FILE = 303,
    GECOS = 304,
    GENERAL = 305,
    HIDDEN = 306,
    HIDDEN_NAME = 307,
    HIDE_CHANS = 308,
    HIDE_IDLE = 309,
    HIDE_IDLE_FROM_OPERS = 310,
    HIDE_SERVER_IPS = 311,
    HIDE_SERVERS = 312,
    HIDE_SERVICES = 313,
    HOST = 314,
    HUB = 315,
    HUB_MASK = 316,
    IGNORE_BOGUS_TS = 317,
    INVISIBLE_ON_CONNECT = 318,
    INVITE_CLIENT_COUNT = 319,
    INVITE_CLIENT_TIME = 320,
    INVITE_DELAY_CHANNEL = 321,
    BLOCKINVITES = 322,
    BLOCKCTCPS = 323,
    IP = 324,
    IRCD_AUTH = 325,
    IRCD_FLAGS = 326,
    IRCD_SID = 327,
    JOIN = 328,
    KILL = 329,
    KILL_CHASE_TIME_LIMIT = 330,
    KLINE = 331,
    KLINE_EXEMPT = 332,
    KLINE_MIN_CIDR = 333,
    KLINE_MIN_CIDR6 = 334,
    KLINE_REASON = 335,
    KNOCK_CLIENT_COUNT = 336,
    KNOCK_CLIENT_TIME = 337,
    KNOCK_DELAY_CHANNEL = 338,
    LEAF_MASK = 339,
    LISTEN = 340,
    MAP_SPLIT_TIMEOUT = 341,
    MASK = 342,
    MAX_ACCEPT = 343,
    MAX_BANS = 344,
    MAX_CHANNELS = 345,
    MAX_GLOBAL = 346,
    MAX_IDENT = 347,
    MAX_IDLE = 348,
    MAX_LOCAL = 349,
    MAX_NICK_CHANGES = 350,
    MAX_NICK_LENGTH = 351,
    MAX_NICK_TIME = 352,
    MAX_NUMBER = 353,
    MAX_SPLIT_HISTORY = 354,
    MAX_TARGETS = 355,
    MAX_TOPIC_LENGTH = 356,
    MAX_WATCH = 357,
    MIN_IDLE = 358,
    MIN_NONWILDCARD = 359,
    MIN_NONWILDCARD_SIMPLE = 360,
    MODULE = 361,
    MODULES = 362,
    MOTD = 363,
    NAME = 364,
    NEED_IDENT = 365,
    NEED_PASSWORD = 366,
    NETADMIN = 367,
    NETWORK_DESC = 368,
    NETWORK_NAME = 369,
    NICK = 370,
    NO_OPER_FLOOD = 371,
    NO_TILDE = 372,
    NUMBER = 373,
    NUMBER_PER_CIDR = 374,
    NUMBER_PER_IP = 375,
    OPER_ONLY_UMODES = 376,
    OPER_UMODES = 377,
    OPERATOR = 378,
    OPERS_BYPASS_CALLERID = 379,
    PACE_WAIT = 380,
    PACE_WAIT_SIMPLE = 381,
    PASSWORD = 382,
    PATH = 383,
    PING_COOKIE = 384,
    PING_TIME = 385,
    PORT = 386,
    QSTRING = 387,
    RANDOM_IDLE = 388,
    REASON = 389,
    REDIRPORT = 390,
    REDIRSERV = 391,
    REHASH = 392,
    REMOTE = 393,
    REMOTEBAN = 394,
    RESV = 395,
    RESV_EXEMPT = 396,
    RSA_PRIVATE_KEY_FILE = 397,
    S_BOTS = 398,
    S_CCONN = 399,
    S_DLINESPAM = 400,
    S_EXTERNAL = 401,
    S_FULL = 402,
    S_KLINESPAM = 403,
    S_NCHANGE = 404,
    S_REJ = 405,
    S_SERVREJ = 406,
    S_SKILL = 407,
    S_SNOGENERAL = 408,
    S_UNAUTH = 409,
    S_XLINESPAM = 410,
    SECONDS = 411,
    MINUTES = 412,
    HOURS = 413,
    DAYS = 414,
    WEEKS = 415,
    MONTHS = 416,
    YEARS = 417,
    SEND_PASSWORD = 418,
    SENDQ = 419,
    SERVERHIDE = 420,
    SERVERINFO = 421,
    SHORT_MOTD = 422,
    SNOMODES = 423,
    SPOOF = 424,
    SPOOF_NOTICE = 425,
    SQUIT = 426,
    SSL_CERTIFICATE_FILE = 427,
    SSL_CERTIFICATE_FINGERPRINT = 428,
    SSL_CONNECTION_REQUIRED = 429,
    SSL_DH_ELLIPTIC_CURVE = 430,
    SSL_DH_PARAM_FILE = 431,
    SSL_MESSAGE_DIGEST_ALGORITHM = 432,
    STATS_E_DISABLED = 433,
    STATS_I_OPER_ONLY = 434,
    STATS_K_OPER_ONLY = 435,
    STATS_M_OPER_ONLY = 436,
    STATS_O_OPER_ONLY = 437,
    STATS_P_OPER_ONLY = 438,
    STATS_U_OPER_ONLY = 439,
    T_ALL = 440,
    T_CALLERID = 441,
    T_COMMAND = 442,
    T_CLUSTER = 443,
    T_DEAF = 444,
    S_DEBUG = 445,
    T_DLINE = 446,
    T_FARCONNECT = 447,
    T_FILE = 448,
    T_GLOBOPS = 449,
    T_INVISIBLE = 450,
    T_IPV4 = 451,
    T_IPV6 = 452,
    T_LOCOPS = 453,
    T_LOG = 454,
    T_NONONREG = 455,
    T_OPERWALL = 456,
    T_OPERWALLS = 457,
    T_OPME = 458,
    T_PREPEND = 459,
    T_PSEUDO = 460,
    T_RECVQ = 461,
    T_RESTART = 462,
    T_SERVER = 463,
    T_SERVICE = 464,
    T_SERVNOTICE = 465,
    T_SET = 466,
    T_SHARED = 467,
    T_SIZE = 468,
    T_SNOMODES = 469,
    T_SOFTCALLERID = 470,
    T_SPY = 471,
    T_SSL = 472,
    T_SSL_CIPHER_LIST = 473,
    T_TARGET = 474,
    T_UMODES = 475,
    T_UNDLINE = 476,
    T_UNLIMITED = 477,
    T_UNRESV = 478,
    T_UNXLINE = 479,
    T_WALLOP = 480,
    T_WALLOPS = 481,
    T_WEBIRC = 482,
    TBOOL = 483,
    THROTTLE_COUNT = 484,
    THROTTLE_TIME = 485,
    TKLINE_EXPIRE_NOTICES = 486,
    TMASKED = 487,
    TS_MAX_DELTA = 488,
    TS_WARN_DELTA = 489,
    TWODOTS = 490,
    TYPE = 491,
    UNKLINE = 492,
    USE_LOGGING = 493,
    USER = 494,
    VHOST = 495,
    VHOST6 = 496,
    WARN_NO_CONNECT_BLOCK = 497,
    WHOIS = 498,
    WHOIS_NOTIFY = 499,
    XLINE = 500,
    XLINE_EXEMPT = 501
  };
#endif
/* Tokens.  */
#define ACCEPT_PASSWORD 258
#define ADMIN 259
#define AFTYPE 260
#define ANTI_NICK_FLOOD 261
#define ANTI_SPAM_EXIT_MESSAGE_TIME 262
#define AUTOCONN 263
#define AWAY_COUNT 264
#define AWAY_TIME 265
#define BYTES 266
#define KBYTES 267
#define MBYTES 268
#define CALLER_ID_WAIT 269
#define CAN_FLOOD 270
#define CHANNEL 271
#define CIDR_BITLEN_IPV4 272
#define CIDR_BITLEN_IPV6 273
#define CLASS 274
#define CLOAK_KEY1 275
#define CLOAK_KEY2 276
#define CLOAK_KEY3 277
#define CLOAK_MASK 278
#define CLOSE 279
#define CONNECT 280
#define CONNECTFREQ 281
#define CYCLE_ON_HOST_CHANGE 282
#define DEFAULT_FLOODCOUNT 283
#define DEFAULT_JOIN_FLOOD_COUNT 284
#define DEFAULT_JOIN_FLOOD_TIME 285
#define DEFAULT_MAX_CLIENTS 286
#define DENY 287
#define DESCRIPTION 288
#define DIE 289
#define DISABLE_AUTH 290
#define DISABLE_FAKE_CHANNELS 291
#define DISABLE_REMOTE_COMMANDS 292
#define DLINE_MIN_CIDR 293
#define DLINE_MIN_CIDR6 294
#define DOTS_IN_IDENT 295
#define EMAIL 296
#define ENCRYPTED 297
#define EXCEED_LIMIT 298
#define EXEMPT 299
#define FAILED_OPER_NOTICE 300
#define FLATTEN_LINKS 301
#define FLATTEN_LINKS_DELAY 302
#define FLATTEN_LINKS_FILE 303
#define GECOS 304
#define GENERAL 305
#define HIDDEN 306
#define HIDDEN_NAME 307
#define HIDE_CHANS 308
#define HIDE_IDLE 309
#define HIDE_IDLE_FROM_OPERS 310
#define HIDE_SERVER_IPS 311
#define HIDE_SERVERS 312
#define HIDE_SERVICES 313
#define HOST 314
#define HUB 315
#define HUB_MASK 316
#define IGNORE_BOGUS_TS 317
#define INVISIBLE_ON_CONNECT 318
#define INVITE_CLIENT_COUNT 319
#define INVITE_CLIENT_TIME 320
#define INVITE_DELAY_CHANNEL 321
#define BLOCKINVITES 322
#define BLOCKCTCPS 323
#define IP 324
#define IRCD_AUTH 325
#define IRCD_FLAGS 326
#define IRCD_SID 327
#define JOIN 328
#define KILL 329
#define KILL_CHASE_TIME_LIMIT 330
#define KLINE 331
#define KLINE_EXEMPT 332
#define KLINE_MIN_CIDR 333
#define KLINE_MIN_CIDR6 334
#define KLINE_REASON 335
#define KNOCK_CLIENT_COUNT 336
#define KNOCK_CLIENT_TIME 337
#define KNOCK_DELAY_CHANNEL 338
#define LEAF_MASK 339
#define LISTEN 340
#define MAP_SPLIT_TIMEOUT 341
#define MASK 342
#define MAX_ACCEPT 343
#define MAX_BANS 344
#define MAX_CHANNELS 345
#define MAX_GLOBAL 346
#define MAX_IDENT 347
#define MAX_IDLE 348
#define MAX_LOCAL 349
#define MAX_NICK_CHANGES 350
#define MAX_NICK_LENGTH 351
#define MAX_NICK_TIME 352
#define MAX_NUMBER 353
#define MAX_SPLIT_HISTORY 354
#define MAX_TARGETS 355
#define MAX_TOPIC_LENGTH 356
#define MAX_WATCH 357
#define MIN_IDLE 358
#define MIN_NONWILDCARD 359
#define MIN_NONWILDCARD_SIMPLE 360
#define MODULE 361
#define MODULES 362
#define MOTD 363
#define NAME 364
#define NEED_IDENT 365
#define NEED_PASSWORD 366
#define NETADMIN 367
#define NETWORK_DESC 368
#define NETWORK_NAME 369
#define NICK 370
#define NO_OPER_FLOOD 371
#define NO_TILDE 372
#define NUMBER 373
#define NUMBER_PER_CIDR 374
#define NUMBER_PER_IP 375
#define OPER_ONLY_UMODES 376
#define OPER_UMODES 377
#define OPERATOR 378
#define OPERS_BYPASS_CALLERID 379
#define PACE_WAIT 380
#define PACE_WAIT_SIMPLE 381
#define PASSWORD 382
#define PATH 383
#define PING_COOKIE 384
#define PING_TIME 385
#define PORT 386
#define QSTRING 387
#define RANDOM_IDLE 388
#define REASON 389
#define REDIRPORT 390
#define REDIRSERV 391
#define REHASH 392
#define REMOTE 393
#define REMOTEBAN 394
#define RESV 395
#define RESV_EXEMPT 396
#define RSA_PRIVATE_KEY_FILE 397
#define S_BOTS 398
#define S_CCONN 399
#define S_DLINESPAM 400
#define S_EXTERNAL 401
#define S_FULL 402
#define S_KLINESPAM 403
#define S_NCHANGE 404
#define S_REJ 405
#define S_SERVREJ 406
#define S_SKILL 407
#define S_SNOGENERAL 408
#define S_UNAUTH 409
#define S_XLINESPAM 410
#define SECONDS 411
#define MINUTES 412
#define HOURS 413
#define DAYS 414
#define WEEKS 415
#define MONTHS 416
#define YEARS 417
#define SEND_PASSWORD 418
#define SENDQ 419
#define SERVERHIDE 420
#define SERVERINFO 421
#define SHORT_MOTD 422
#define SNOMODES 423
#define SPOOF 424
#define SPOOF_NOTICE 425
#define SQUIT 426
#define SSL_CERTIFICATE_FILE 427
#define SSL_CERTIFICATE_FINGERPRINT 428
#define SSL_CONNECTION_REQUIRED 429
#define SSL_DH_ELLIPTIC_CURVE 430
#define SSL_DH_PARAM_FILE 431
#define SSL_MESSAGE_DIGEST_ALGORITHM 432
#define STATS_E_DISABLED 433
#define STATS_I_OPER_ONLY 434
#define STATS_K_OPER_ONLY 435
#define STATS_M_OPER_ONLY 436
#define STATS_O_OPER_ONLY 437
#define STATS_P_OPER_ONLY 438
#define STATS_U_OPER_ONLY 439
#define T_ALL 440
#define T_CALLERID 441
#define T_COMMAND 442
#define T_CLUSTER 443
#define T_DEAF 444
#define S_DEBUG 445
#define T_DLINE 446
#define T_FARCONNECT 447
#define T_FILE 448
#define T_GLOBOPS 449
#define T_INVISIBLE 450
#define T_IPV4 451
#define T_IPV6 452
#define T_LOCOPS 453
#define T_LOG 454
#define T_NONONREG 455
#define T_OPERWALL 456
#define T_OPERWALLS 457
#define T_OPME 458
#define T_PREPEND 459
#define T_PSEUDO 460
#define T_RECVQ 461
#define T_RESTART 462
#define T_SERVER 463
#define T_SERVICE 464
#define T_SERVNOTICE 465
#define T_SET 466
#define T_SHARED 467
#define T_SIZE 468
#define T_SNOMODES 469
#define T_SOFTCALLERID 470
#define T_SPY 471
#define T_SSL 472
#define T_SSL_CIPHER_LIST 473
#define T_TARGET 474
#define T_UMODES 475
#define T_UNDLINE 476
#define T_UNLIMITED 477
#define T_UNRESV 478
#define T_UNXLINE 479
#define T_WALLOP 480
#define T_WALLOPS 481
#define T_WEBIRC 482
#define TBOOL 483
#define THROTTLE_COUNT 484
#define THROTTLE_TIME 485
#define TKLINE_EXPIRE_NOTICES 486
#define TMASKED 487
#define TS_MAX_DELTA 488
#define TS_WARN_DELTA 489
#define TWODOTS 490
#define TYPE 491
#define UNKLINE 492
#define USE_LOGGING 493
#define USER 494
#define VHOST 495
#define VHOST6 496
#define WARN_NO_CONNECT_BLOCK 497
#define WHOIS 498
#define WHOIS_NOTIFY 499
#define XLINE 500
#define XLINE_EXEMPT 501

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 154 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 729 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 744 "conf_parser.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  253
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  303
/* YYNRULES -- Number of rules.  */
#define YYNRULES  679
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1345

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   501

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   251,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   252,   247,
       2,   250,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   249,     2,   248,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   404,   404,   405,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   435,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   446,   446,
     447,   448,   449,   450,   457,   459,   459,   460,   460,   460,
     462,   468,   478,   480,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   501,   541,   599,   628,   636,   650,   678,
     693,   708,   718,   732,   741,   769,   797,   822,   844,   866,
     876,   878,   878,   879,   880,   881,   882,   884,   893,   902,
     916,   915,   933,   933,   934,   934,   934,   936,   942,   953,
     952,   971,   971,   972,   972,   972,   972,   972,   974,   980,
     986,   992,  1014,  1015,  1015,  1017,  1017,  1018,  1020,  1027,
    1027,  1040,  1041,  1043,  1043,  1044,  1044,  1046,  1054,  1057,
    1063,  1062,  1068,  1068,  1069,  1073,  1077,  1081,  1085,  1089,
    1093,  1097,  1108,  1107,  1165,  1165,  1166,  1167,  1168,  1169,
    1170,  1171,  1172,  1173,  1174,  1175,  1176,  1177,  1179,  1185,
    1191,  1197,  1203,  1214,  1220,  1231,  1238,  1237,  1243,  1243,
    1244,  1248,  1252,  1256,  1260,  1264,  1268,  1272,  1276,  1280,
    1284,  1288,  1292,  1296,  1300,  1304,  1308,  1315,  1314,  1320,
    1320,  1321,  1325,  1329,  1333,  1337,  1341,  1345,  1349,  1353,
    1357,  1361,  1365,  1369,  1373,  1380,  1379,  1385,  1385,  1386,
    1390,  1394,  1398,  1402,  1406,  1410,  1414,  1418,  1422,  1426,
    1430,  1434,  1438,  1442,  1446,  1450,  1454,  1458,  1462,  1466,
    1470,  1474,  1478,  1482,  1486,  1490,  1494,  1498,  1502,  1513,
    1512,  1569,  1569,  1570,  1571,  1572,  1573,  1574,  1575,  1576,
    1577,  1578,  1579,  1580,  1581,  1582,  1582,  1583,  1584,  1585,
    1586,  1588,  1594,  1600,  1606,  1612,  1618,  1624,  1630,  1636,
    1642,  1648,  1655,  1661,  1667,  1673,  1682,  1692,  1691,  1697,
    1697,  1698,  1702,  1713,  1712,  1719,  1718,  1723,  1723,  1724,
    1728,  1732,  1738,  1738,  1739,  1739,  1739,  1739,  1739,  1741,
    1741,  1743,  1743,  1745,  1758,  1775,  1781,  1792,  1791,  1833,
    1833,  1834,  1835,  1836,  1837,  1838,  1839,  1840,  1841,  1842,
    1844,  1850,  1856,  1862,  1874,  1873,  1879,  1879,  1880,  1884,
    1888,  1892,  1896,  1900,  1904,  1908,  1912,  1916,  1922,  1936,
    1945,  1959,  1958,  1973,  1973,  1974,  1974,  1974,  1974,  1976,
    1982,  1988,  1998,  2000,  2000,  2001,  2001,  2003,  2020,  2019,
    2044,  2044,  2045,  2045,  2045,  2045,  2047,  2053,  2073,  2072,
    2078,  2078,  2079,  2083,  2087,  2091,  2095,  2099,  2103,  2107,
    2111,  2115,  2126,  2125,  2146,  2146,  2147,  2147,  2147,  2149,
    2156,  2155,  2161,  2161,  2162,  2166,  2170,  2174,  2178,  2182,
    2186,  2190,  2194,  2198,  2209,  2208,  2280,  2280,  2281,  2282,
    2283,  2284,  2285,  2286,  2287,  2288,  2289,  2290,  2291,  2292,
    2293,  2294,  2295,  2297,  2303,  2309,  2315,  2328,  2341,  2347,
    2353,  2357,  2364,  2363,  2368,  2368,  2369,  2373,  2379,  2390,
    2396,  2402,  2408,  2424,  2423,  2449,  2449,  2450,  2450,  2450,
    2452,  2472,  2483,  2482,  2509,  2509,  2510,  2510,  2510,  2512,
    2518,  2528,  2530,  2530,  2531,  2531,  2533,  2551,  2550,  2573,
    2573,  2574,  2574,  2574,  2576,  2582,  2592,  2594,  2594,  2595,
    2596,  2597,  2598,  2599,  2600,  2601,  2602,  2603,  2604,  2605,
    2606,  2607,  2608,  2609,  2610,  2611,  2612,  2613,  2614,  2615,
    2616,  2617,  2618,  2619,  2620,  2621,  2622,  2623,  2624,  2625,
    2626,  2627,  2628,  2629,  2630,  2631,  2632,  2633,  2634,  2635,
    2636,  2637,  2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,
    2646,  2647,  2650,  2655,  2660,  2665,  2674,  2683,  2692,  2701,
    2707,  2712,  2717,  2722,  2727,  2736,  2741,  2746,  2751,  2756,
    2761,  2766,  2771,  2776,  2781,  2786,  2792,  2797,  2802,  2807,
    2812,  2817,  2822,  2827,  2830,  2835,  2838,  2843,  2848,  2853,
    2858,  2863,  2868,  2873,  2878,  2883,  2888,  2893,  2898,  2903,
    2909,  2908,  2913,  2918,  2918,  2919,  2922,  2925,  2928,  2931,
    2934,  2937,  2940,  2943,  2946,  2949,  2952,  2955,  2958,  2961,
    2964,  2967,  2973,  2972,  2977,  2977,  2978,  2981,  2984,  2987,
    2990,  2993,  2996,  2999,  3002,  3005,  3008,  3011,  3014,  3019,
    3024,  3029,  3038,  3040,  3040,  3041,  3042,  3043,  3044,  3045,
    3046,  3047,  3048,  3049,  3050,  3051,  3052,  3054,  3059,  3064,
    3069,  3074,  3079,  3084,  3089,  3094,  3099,  3104,  3113,  3115,
    3115,  3116,  3117,  3118,  3119,  3120,  3121,  3122,  3123,  3124,
    3125,  3127,  3133,  3149,  3158,  3164,  3170,  3176,  3185,  3191
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ACCEPT_PASSWORD", "ADMIN", "AFTYPE",
  "ANTI_NICK_FLOOD", "ANTI_SPAM_EXIT_MESSAGE_TIME", "AUTOCONN",
  "AWAY_COUNT", "AWAY_TIME", "BYTES", "KBYTES", "MBYTES", "CALLER_ID_WAIT",
  "CAN_FLOOD", "CHANNEL", "CIDR_BITLEN_IPV4", "CIDR_BITLEN_IPV6", "CLASS",
  "CLOAK_KEY1", "CLOAK_KEY2", "CLOAK_KEY3", "CLOAK_MASK", "CLOSE",
  "CONNECT", "CONNECTFREQ", "CYCLE_ON_HOST_CHANGE", "DEFAULT_FLOODCOUNT",
  "DEFAULT_JOIN_FLOOD_COUNT", "DEFAULT_JOIN_FLOOD_TIME",
  "DEFAULT_MAX_CLIENTS", "DENY", "DESCRIPTION", "DIE", "DISABLE_AUTH",
  "DISABLE_FAKE_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DLINE_MIN_CIDR",
  "DLINE_MIN_CIDR6", "DOTS_IN_IDENT", "EMAIL", "ENCRYPTED", "EXCEED_LIMIT",
  "EXEMPT", "FAILED_OPER_NOTICE", "FLATTEN_LINKS", "FLATTEN_LINKS_DELAY",
  "FLATTEN_LINKS_FILE", "GECOS", "GENERAL", "HIDDEN", "HIDDEN_NAME",
  "HIDE_CHANS", "HIDE_IDLE", "HIDE_IDLE_FROM_OPERS", "HIDE_SERVER_IPS",
  "HIDE_SERVERS", "HIDE_SERVICES", "HOST", "HUB", "HUB_MASK",
  "IGNORE_BOGUS_TS", "INVISIBLE_ON_CONNECT", "INVITE_CLIENT_COUNT",
  "INVITE_CLIENT_TIME", "INVITE_DELAY_CHANNEL", "BLOCKINVITES",
  "BLOCKCTCPS", "IP", "IRCD_AUTH", "IRCD_FLAGS", "IRCD_SID", "JOIN",
  "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT",
  "KLINE_MIN_CIDR", "KLINE_MIN_CIDR6", "KLINE_REASON",
  "KNOCK_CLIENT_COUNT", "KNOCK_CLIENT_TIME", "KNOCK_DELAY_CHANNEL",
  "LEAF_MASK", "LISTEN", "MAP_SPLIT_TIMEOUT", "MASK", "MAX_ACCEPT",
  "MAX_BANS", "MAX_CHANNELS", "MAX_GLOBAL", "MAX_IDENT", "MAX_IDLE",
  "MAX_LOCAL", "MAX_NICK_CHANGES", "MAX_NICK_LENGTH", "MAX_NICK_TIME",
  "MAX_NUMBER", "MAX_SPLIT_HISTORY", "MAX_TARGETS", "MAX_TOPIC_LENGTH",
  "MAX_WATCH", "MIN_IDLE", "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE",
  "MODULE", "MODULES", "MOTD", "NAME", "NEED_IDENT", "NEED_PASSWORD",
  "NETADMIN", "NETWORK_DESC", "NETWORK_NAME", "NICK", "NO_OPER_FLOOD",
  "NO_TILDE", "NUMBER", "NUMBER_PER_CIDR", "NUMBER_PER_IP",
  "OPER_ONLY_UMODES", "OPER_UMODES", "OPERATOR", "OPERS_BYPASS_CALLERID",
  "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD", "PATH", "PING_COOKIE",
  "PING_TIME", "PORT", "QSTRING", "RANDOM_IDLE", "REASON", "REDIRPORT",
  "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN", "RESV", "RESV_EXEMPT",
  "RSA_PRIVATE_KEY_FILE", "S_BOTS", "S_CCONN", "S_DLINESPAM", "S_EXTERNAL",
  "S_FULL", "S_KLINESPAM", "S_NCHANGE", "S_REJ", "S_SERVREJ", "S_SKILL",
  "S_SNOGENERAL", "S_UNAUTH", "S_XLINESPAM", "SECONDS", "MINUTES", "HOURS",
  "DAYS", "WEEKS", "MONTHS", "YEARS", "SEND_PASSWORD", "SENDQ",
  "SERVERHIDE", "SERVERINFO", "SHORT_MOTD", "SNOMODES", "SPOOF",
  "SPOOF_NOTICE", "SQUIT", "SSL_CERTIFICATE_FILE",
  "SSL_CERTIFICATE_FINGERPRINT", "SSL_CONNECTION_REQUIRED",
  "SSL_DH_ELLIPTIC_CURVE", "SSL_DH_PARAM_FILE",
  "SSL_MESSAGE_DIGEST_ALGORITHM", "STATS_E_DISABLED", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_M_OPER_ONLY", "STATS_O_OPER_ONLY",
  "STATS_P_OPER_ONLY", "STATS_U_OPER_ONLY", "T_ALL", "T_CALLERID",
  "T_COMMAND", "T_CLUSTER", "T_DEAF", "S_DEBUG", "T_DLINE", "T_FARCONNECT",
  "T_FILE", "T_GLOBOPS", "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS",
  "T_LOG", "T_NONONREG", "T_OPERWALL", "T_OPERWALLS", "T_OPME",
  "T_PREPEND", "T_PSEUDO", "T_RECVQ", "T_RESTART", "T_SERVER", "T_SERVICE",
  "T_SERVNOTICE", "T_SET", "T_SHARED", "T_SIZE", "T_SNOMODES",
  "T_SOFTCALLERID", "T_SPY", "T_SSL", "T_SSL_CIPHER_LIST", "T_TARGET",
  "T_UMODES", "T_UNDLINE", "T_UNLIMITED", "T_UNRESV", "T_UNXLINE",
  "T_WALLOP", "T_WALLOPS", "T_WEBIRC", "TBOOL", "THROTTLE_COUNT",
  "THROTTLE_TIME", "TKLINE_EXPIRE_NOTICES", "TMASKED", "TS_MAX_DELTA",
  "TS_WARN_DELTA", "TWODOTS", "TYPE", "UNKLINE", "USE_LOGGING", "USER",
  "VHOST", "VHOST6", "WARN_NO_CONNECT_BLOCK", "WHOIS", "WHOIS_NOTIFY",
  "XLINE", "XLINE_EXEMPT", "';'", "'}'", "'{'", "'='", "','", "':'",
  "$accept", "conf", "conf_item", "timespec_", "timespec", "sizespec_",
  "sizespec", "modules_entry", "modules_items", "modules_item",
  "modules_module", "modules_path", "serverinfo_entry", "serverinfo_items",
  "serverinfo_item", "serverinfo_ssl_certificate_file",
  "serverinfo_rsa_private_key_file", "serverinfo_ssl_dh_param_file",
  "serverinfo_ssl_cipher_list", "serverinfo_ssl_message_digest_algorithm",
  "serverinfo_ssl_dh_elliptic_curve", "serverinfo_name", "serverinfo_sid",
  "serverinfo_description", "serverinfo_network_name",
  "serverinfo_network_desc", "serverinfo_vhost", "serverinfo_vhost6",
  "serverinfo_default_max_clients", "serverinfo_max_nick_length",
  "serverinfo_max_topic_length", "serverinfo_hub", "admin_entry",
  "admin_items", "admin_item", "admin_name", "admin_email",
  "admin_description", "motd_entry", "$@1", "motd_items", "motd_item",
  "motd_mask", "motd_file", "pseudo_entry", "$@2", "pseudo_items",
  "pseudo_item", "pseudo_command", "pseudo_name", "pseudo_prepend",
  "pseudo_target", "logging_entry", "logging_items", "logging_item",
  "logging_use_logging", "logging_file_entry", "$@3", "logging_file_items",
  "logging_file_item", "logging_file_name", "logging_file_size",
  "logging_file_type", "$@4", "logging_file_type_items",
  "logging_file_type_item", "oper_entry", "$@5", "oper_items", "oper_item",
  "oper_name", "oper_user", "oper_password", "oper_whois",
  "oper_encrypted", "oper_ssl_certificate_fingerprint",
  "oper_ssl_connection_required", "oper_class", "oper_umodes", "$@6",
  "oper_umodes_items", "oper_umodes_item", "oper_snomodes", "$@7",
  "oper_snomodes_items", "oper_snomodes_item", "oper_flags", "$@8",
  "oper_flags_items", "oper_flags_item", "class_entry", "$@9",
  "class_items", "class_item", "class_name", "class_ping_time",
  "class_number_per_ip", "class_connectfreq", "class_max_channels",
  "class_max_number", "class_max_global", "class_max_local",
  "class_max_ident", "class_sendq", "class_recvq",
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "class_min_idle", "class_max_idle",
  "class_flags", "$@10", "class_flags_items", "class_flags_item",
  "listen_entry", "$@11", "listen_flags", "$@12", "listen_flags_items",
  "listen_flags_item", "listen_items", "listen_item", "listen_port",
  "$@13", "port_items", "port_item", "listen_address", "listen_host",
  "auth_entry", "$@14", "auth_items", "auth_item", "auth_user",
  "auth_passwd", "auth_class", "auth_encrypted", "auth_flags", "$@15",
  "auth_flags_items", "auth_flags_item", "auth_spoof", "auth_redir_serv",
  "auth_redir_port", "resv_entry", "$@16", "resv_items", "resv_item",
  "resv_mask", "resv_reason", "resv_exempt", "service_entry",
  "service_items", "service_item", "service_name", "shared_entry", "$@17",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "$@18", "shared_types", "shared_type_item",
  "cluster_entry", "$@19", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "$@20", "cluster_types", "cluster_type_item",
  "connect_entry", "$@21", "connect_items", "connect_item", "connect_name",
  "connect_host", "connect_vhost", "connect_send_password",
  "connect_accept_password", "connect_ssl_certificate_fingerprint",
  "connect_port", "connect_aftype", "connect_flags", "$@22",
  "connect_flags_items", "connect_flags_item", "connect_encrypted",
  "connect_hub_mask", "connect_leaf_mask", "connect_class",
  "connect_ssl_cipher_list", "kill_entry", "$@23", "kill_items",
  "kill_item", "kill_user", "kill_reason", "deny_entry", "$@24",
  "deny_items", "deny_item", "deny_ip", "deny_reason", "exempt_entry",
  "exempt_items", "exempt_item", "exempt_ip", "gecos_entry", "$@25",
  "gecos_items", "gecos_item", "gecos_name", "gecos_reason",
  "general_entry", "general_items", "general_item", "general_away_count",
  "general_away_time", "general_max_watch", "general_cloak_key1",
  "general_cloak_key2", "general_cloak_key3", "general_cloak_mask",
  "general_cycle_on_host_change", "general_dline_min_cidr",
  "general_dline_min_cidr6", "general_kline_min_cidr",
  "general_kline_min_cidr6", "general_kline_reason",
  "general_tkline_expire_notices", "general_kill_chase_time_limit",
  "general_ignore_bogus_ts", "general_failed_oper_notice",
  "general_anti_nick_flood", "general_max_nick_time",
  "general_max_nick_changes", "general_max_accept",
  "general_anti_spam_exit_message_time", "general_ts_warn_delta",
  "general_ts_max_delta", "general_invisible_on_connect",
  "general_warn_no_connect_block", "general_stats_e_disabled",
  "general_stats_m_oper_only", "general_stats_o_oper_only",
  "general_stats_P_oper_only", "general_stats_u_oper_only",
  "general_stats_k_oper_only", "general_stats_i_oper_only",
  "general_pace_wait", "general_caller_id_wait",
  "general_opers_bypass_callerid", "general_pace_wait_simple",
  "general_short_motd", "general_no_oper_flood", "general_dots_in_ident",
  "general_max_targets", "general_ping_cookie", "general_disable_auth",
  "general_throttle_count", "general_throttle_time",
  "general_map_split_timeout", "general_oper_umodes", "$@26",
  "general_max_split_history", "umode_oitems", "umode_oitem",
  "general_oper_only_umodes", "$@27", "umode_items", "umode_item",
  "general_min_nonwildcard", "general_min_nonwildcard_simple",
  "general_default_floodcount", "channel_entry", "channel_items",
  "channel_item", "channel_disable_fake_channels",
  "channel_invite_client_count", "channel_invite_client_time",
  "channel_invite_delay_channel", "channel_knock_client_count",
  "channel_knock_client_time", "channel_knock_delay_channel",
  "channel_max_channels", "channel_max_bans",
  "channel_default_join_flood_count", "channel_default_join_flood_time",
  "serverhide_entry", "serverhide_items", "serverhide_item",
  "serverhide_flatten_links", "serverhide_flatten_links_delay",
  "serverhide_flatten_links_file", "serverhide_disable_remote_commands",
  "serverhide_hide_servers", "serverhide_hide_services",
  "serverhide_hidden_name", "serverhide_hidden",
  "serverhide_hide_server_ips", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,    59,   125,   123,
      61,    44,    58
};
# endif

#define YYPACT_NINF -705

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-705)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -705,   760,  -705,  -223,  -236,  -196,  -705,  -705,  -705,  -191,
    -705,  -186,  -705,  -705,  -705,  -177,  -705,  -705,  -705,  -169,
    -161,  -705,  -156,  -705,  -153,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,    21,   980,  -143,  -140,  -134,    20,  -127,   494,  -117,
    -102,   -89,    89,   -88,   -78,   -72,   328,   625,   -61,     6,
     -49,    19,   -48,  -203,   -47,   -36,   -13,    16,  -705,  -705,
    -705,  -705,  -705,    -8,    39,    68,    69,    74,    87,    88,
      90,    92,   104,   112,     2,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,   788,   415,    38,
    -705,   119,    29,  -705,  -705,    33,  -705,   123,   127,   131,
     132,   137,   138,   140,   142,   144,   151,   152,   155,   156,
     157,   158,   159,   161,   162,   167,   169,   172,   174,   176,
     177,   178,   179,   181,   182,   186,   187,   189,   190,  -705,
    -705,   191,   192,   193,   195,   197,   198,   199,   203,   204,
     205,   206,   212,   213,   214,   215,   216,   217,   221,   130,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,   325,     9,   299,    23,   225,   227,    27,
    -705,  -705,  -705,    14,   324,    94,  -705,   229,   231,   232,
     233,   234,   235,   237,   239,   241,    13,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,    31,   242,   243,
     246,   257,   259,   261,   263,   268,   269,   273,   275,   276,
     277,   278,   280,   281,   285,   173,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,    17,    49,   290,    50,  -705,  -705,
    -705,    86,   196,  -705,   291,    36,  -705,  -705,    81,  -705,
     314,   338,   410,    59,  -705,   305,   425,   317,   440,   425,
     425,   441,   425,   425,   442,   443,   315,  -705,   319,   318,
     320,   321,  -705,   327,   329,   331,   333,   336,   337,   342,
     345,   347,   350,   351,   352,   353,    93,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,   343,   356,   357,   359,   361,
     362,   363,  -705,   364,   367,   371,   378,   380,   381,   382,
     262,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,   384,   386,    44,
    -705,  -705,  -705,   505,   391,  -705,  -705,   389,   390,    45,
    -705,  -705,  -705,   416,   425,   525,   425,   425,   513,   514,
     515,   516,   421,   532,   423,   534,   536,   542,   434,   436,
     451,   425,   552,   553,   537,   425,   562,   565,   425,   566,
     568,   569,   574,   575,   466,   445,   446,   470,   425,   425,
     484,   485,   486,  -205,  -192,   487,   488,   489,   490,   601,
     425,   492,   425,   425,   502,   493,  -705,   496,   481,   482,
    -705,   483,   491,   497,   498,   500,   220,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,   501,   506,    46,
    -705,  -705,  -705,   508,   507,   509,  -705,   518,  -705,    28,
    -705,  -705,  -705,  -705,  -705,   603,   605,   519,  -705,   522,
     520,   521,    18,  -705,  -705,  -705,   526,   528,   530,  -705,
     531,   533,   540,   541,  -705,  -705,   544,   545,   230,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,   535,   548,   549,   557,    42,  -705,  -705,  -705,  -705,
     524,   558,   425,   612,   559,   633,   580,   583,   584,   571,
    -705,  -705,   645,   652,   585,   671,   697,   698,   687,   689,
     690,   692,   693,   695,   696,   705,   707,   708,   710,   606,
    -705,   607,   598,  -705,    80,  -705,  -705,  -705,  -705,   624,
     613,  -705,   614,   615,   611,   619,   620,   623,    54,  -705,
    -705,  -705,  -705,  -705,   732,   637,  -705,   638,   639,  -705,
     642,    32,  -705,  -705,  -705,  -705,   640,   641,   646,  -705,
     647,   -83,   648,   649,   654,   655,   656,   657,   658,   659,
     662,   663,  -705,  -705,   781,   793,   425,   664,   794,   795,
     797,   425,   798,   799,   425,   787,   802,   803,   425,   805,
     805,   675,  -705,  -705,   792,  -155,   796,   699,   800,   801,
     679,   806,   807,   812,   808,   809,   810,   811,   684,  -705,
     813,   814,   688,  -705,   700,  -705,   817,   818,   704,  -705,
     706,   709,   711,   713,   714,   715,   716,   717,   719,   720,
     723,   726,   728,   729,   731,   737,   738,   739,   740,   741,
     742,   744,   748,   753,   754,   756,   759,   761,   764,   765,
     766,   768,   631,   782,   770,   771,   774,   775,   776,   777,
     778,   780,   783,   784,   785,   786,   789,   790,   791,   819,
     820,   821,   824,   825,  -705,  -705,   822,   727,   686,   847,
     816,   896,   902,   903,   826,  -705,   907,   908,   827,  -705,
    -705,   909,   910,   694,   839,   828,  -705,   829,   830,  -705,
    -705,   911,   915,   831,  -705,  -705,   917,   823,   815,   918,
     920,   921,   832,   833,   834,   922,   923,   835,  -705,  -705,
     924,   925,   926,   838,  -705,   840,   841,   842,   843,   844,
     845,   846,   848,   849,  -705,   850,   851,   852,   853,   854,
     855,   856,   857,   858,   859,   860,   861,   862,   863,   864,
     865,   866,  -705,  -705,   927,   836,   867,  -705,   868,  -705,
      11,  -705,   932,   947,   948,   949,   869,  -705,   870,  -705,
    -705,   962,   871,   986,   872,  -705,  -705,  -705,  -705,  -705,
     425,   425,   425,   425,   425,   425,   425,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,   873,
     875,   876,   -29,   877,   878,   879,   880,   881,   882,   883,
     884,   885,   886,   887,   340,   888,   889,  -705,   890,   891,
     892,   893,   894,   895,   897,     3,   898,   899,   900,   901,
     904,   905,   906,  -705,   912,   913,  -705,  -705,   914,   916,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -195,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -135,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,   919,   928,   395,
     929,   930,   931,   933,   934,  -705,   935,   936,  -705,   937,
     938,   -35,   702,   939,  -705,  -705,  -705,  -705,   940,   941,
    -705,   942,   944,   551,   945,   946,   950,   951,   556,   804,
     952,   953,  -705,   954,   955,   956,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,   957,   444,  -705,  -705,   958,   959,   960,
    -705,    47,  -705,  -705,  -705,  -705,   961,   964,   965,   966,
    -705,  -705,   967,   653,   968,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -133,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,   805,   805,   805,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -124,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,   631,  -705,   782,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,   -85,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
     -53,  -705,  1025,   839,   969,  -705,  -705,  -705,  -705,  -705,
    -705,   943,  -705,   970,   971,  -705,  -705,  -705,   972,  -705,
    -705,  -705,   973,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,   -32,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,   -25,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,   -11,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,    56,  -705,  -705,  1017,  -114,   976,   974,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,    84,  -705,  -705,  -705,
     -29,  -705,  -705,  -705,  -705,     3,  -705,  -705,  -705,   395,
    -705,   -35,  -705,  -705,  -705,  1012,  1014,  1018,  1015,  1019,
    -705,   551,  -705,   556,  -705,   804,  -705,   444,   981,   982,
     983,   414,  -705,  -705,   653,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,    85,
    -705,  -705,  -705,   414,  -705
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   249,   414,   462,     0,
     477,     0,   317,   453,   293,     0,   100,   152,   351,     0,
       0,   392,     0,   109,     0,   368,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   634,   645,   636,   637,   638,
     639,   640,   641,   642,   635,   643,   644,     0,     0,     0,
     475,     0,     0,   473,   474,     0,   541,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   612,
     590,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     488,   489,   490,   532,   534,   535,   536,   537,   533,   527,
     528,   529,   530,   538,   526,   500,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   501,   502,   531,   506,   507,
     508,   509,   505,   504,   510,   517,   518,   511,   512,   513,
     503,   515,   524,   525,   522,   523,   540,   516,   539,   514,
     520,   521,   519,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,     0,     0,     0,   670,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   660,   661,   662,
     663,   664,   665,   666,   668,   667,   669,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    69,    66,    64,
      70,    71,    65,    55,    68,    58,    59,    60,    56,    67,
      61,    62,    63,    57,     0,     0,     0,     0,   124,   125,
     126,     0,     0,   366,     0,     0,   364,   365,     0,    96,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   633,     0,     0,
       0,     0,   287,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   252,   253,   256,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   254,
     255,   257,   267,   268,   269,     0,     0,     0,     0,     0,
       0,     0,   442,     0,     0,     0,     0,     0,     0,     0,
       0,   417,   418,   419,   420,   421,   422,   423,   425,   424,
     427,   431,   428,   429,   430,   426,   468,     0,     0,     0,
     465,   466,   467,     0,     0,   472,   483,     0,     0,     0,
     480,   481,   482,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,     0,     0,     0,
     334,     0,     0,     0,     0,     0,     0,   320,   321,   322,
     323,   328,   324,   325,   326,   327,   459,     0,     0,     0,
     456,   457,   458,     0,     0,     0,   295,     0,   305,     0,
     303,   304,   306,   307,    49,     0,     0,     0,    45,     0,
       0,     0,     0,   103,   104,   105,     0,     0,     0,   215,
       0,     0,     0,     0,   197,   176,     0,     0,     0,   155,
     156,   157,   158,   159,   162,   163,   164,   161,   160,   166,
     165,     0,     0,     0,     0,     0,   354,   355,   356,   357,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     659,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,   400,     0,   395,   396,   397,   127,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   115,   114,   116,     0,     0,   363,     0,     0,   378,
       0,     0,   371,   372,   373,   374,     0,     0,     0,    90,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   632,   270,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   251,   432,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   416,
       0,     0,     0,   464,     0,   471,     0,     0,     0,   479,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   486,   329,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,     0,   455,
     308,     0,     0,     0,     0,     0,   302,     0,     0,    44,
     106,     0,     0,     0,   102,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,   358,
       0,     0,     0,     0,   353,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   658,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,   398,     0,     0,     0,   394,     0,   122,
       0,   117,     0,     0,     0,     0,     0,   111,     0,   362,
     375,     0,     0,     0,     0,   370,    99,    98,    97,   656,
      28,    28,    28,    28,    28,    28,    28,    30,    29,   657,
     647,   648,   649,   650,   651,   652,   653,   655,   654,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,   250,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   415,     0,     0,   463,   476,     0,     0,
     478,   559,   563,   542,   543,   578,   545,   546,   547,   548,
     549,   631,   586,   550,   551,   583,   558,   557,   566,   556,
     552,   553,   554,   589,   562,   561,   560,   592,   584,   544,
     629,   630,   582,   617,   623,   616,   626,   620,   624,   625,
     627,   619,   622,   618,   621,   628,     0,   615,   596,   597,
     598,   610,   611,   604,   595,   607,   601,   605,   606,   608,
     600,   603,   599,   602,   609,     0,   594,   579,   577,   580,
     585,   581,   568,   575,   576,   573,   574,   569,   570,   571,
     572,   587,   588,   555,   565,   564,   567,     0,     0,     0,
       0,     0,     0,     0,     0,   318,     0,     0,   454,     0,
       0,     0,   313,   309,   312,   294,    50,    51,     0,     0,
     101,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   153,     0,     0,     0,   352,   674,   671,   672,
     673,   678,   677,   679,   675,   676,    86,    81,    89,    80,
      87,    88,    79,    83,    82,    74,    73,    78,    75,    77,
      76,    84,    85,     0,     0,   393,   128,     0,     0,     0,
     140,     0,   132,   133,   135,   134,     0,     0,     0,     0,
     110,   367,     0,     0,     0,   369,    31,    32,    33,    34,
      35,    36,    37,   282,   283,   274,   292,   291,     0,   290,
     275,   277,   279,   286,   278,   276,   285,   271,   284,   273,
     272,    38,    38,    38,    40,    39,   280,   281,   437,   440,
     441,   451,   448,   434,   449,   446,   447,     0,   445,   450,
     433,   439,   436,   438,   452,   435,   469,   470,   484,   485,
     613,     0,   591,     0,   332,   333,   343,   339,   340,   342,
     347,   344,   345,   338,   346,   341,     0,   337,   331,   350,
     349,   348,   330,   461,   460,   316,   315,   300,   301,   299,
       0,   298,     0,     0,     0,   107,   108,   175,   172,   234,
     246,   222,   231,     0,   220,   225,   240,   248,     0,   233,
     238,   244,   224,   227,   235,   237,   247,   241,   232,   239,
     228,   245,   230,   236,   226,   229,     0,   218,   168,   170,
     173,   174,   212,   201,   210,   203,   204,   209,   207,   205,
     213,   206,   214,   208,   211,   202,     0,   200,   181,   182,
     183,   195,   196,   189,   180,   192,   186,   190,   191,   193,
     185,   188,   184,   187,   194,     0,   179,   169,   171,   361,
     359,   360,   399,   404,   410,   413,   406,   412,   407,   411,
     409,   405,   408,     0,   403,   136,     0,     0,     0,     0,
     131,   119,   118,   120,   121,   376,   382,   388,   391,   384,
     390,   385,   389,   387,   383,   386,     0,   381,   377,   288,
       0,    41,    42,    43,   443,     0,   614,   593,   335,     0,
     296,     0,   314,   311,   310,     0,     0,     0,     0,     0,
     216,     0,   198,     0,   177,     0,   401,     0,     0,     0,
       0,     0,   130,   379,     0,   289,   444,   336,   297,   221,
     243,   219,   242,   223,   217,   199,   178,   402,   137,   139,
     138,   150,   149,   145,   147,   151,   148,   144,   146,     0,
     143,   380,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -705,  -705,  -705,  -293,  -314,  -704,  -649,  -705,  -705,   977,
    -705,  -705,  -705,  -705,   963,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  1081,  -705,  -705,  -705,  -705,  -705,
    -705,   650,  -705,  -705,  -705,  -705,  -705,   567,  -705,  -705,
    -705,  -705,  -705,  -705,   874,  -705,  -705,  -705,  -705,   103,
    -705,  -705,  -705,  -705,  -705,  -176,  -705,  -705,  -705,   644,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -137,  -705,  -705,  -705,  -130,  -705,  -705,  -705,  -132,
    -705,  -705,  -705,   975,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -110,  -705,  -705,  -705,  -705,  -705,  -112,
    -705,   718,  -705,  -705,  -705,    55,  -705,  -705,  -705,  -705,
    -705,   743,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -115,
    -705,  -705,  -705,  -705,  -705,  -705,   651,  -705,  -705,  -705,
    -705,  -705,   978,  -705,  -705,  -705,  -705,   596,  -705,  -705,
    -705,  -705,  -705,  -128,  -705,  -705,  -705,   610,  -705,  -705,
    -705,  -705,   -87,  -705,  -705,  -705,   979,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,   -58,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,   745,  -705,  -705,
    -705,  -705,  -705,   837,  -705,  -705,  -705,  -705,  1119,  -705,
    -705,  -705,  -705,   984,  -705,  -705,  -705,  -705,  1063,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,   100,
    -705,  -705,  -705,   106,  -705,  -705,  -705,  -705,  -705,  1141,
    -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705,   993,  -705,  -705,  -705,  -705,  -705,  -705,
    -705,  -705,  -705
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   847,   848,  1104,  1105,    27,   229,   230,
     231,   232,    28,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,    29,    77,    78,    79,    80,    81,    30,    63,
     512,   513,   514,   515,    31,    70,   598,   599,   600,   601,
     602,   603,    32,   297,   298,   299,   300,   301,  1061,  1062,
    1063,  1064,  1065,  1258,  1339,  1340,    33,    64,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   774,
    1235,  1236,   539,   773,  1216,  1217,   540,   768,  1196,  1197,
      34,    53,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   637,  1088,  1089,    35,    61,   498,   753,  1160,  1161,
     499,   500,   501,  1164,  1003,  1004,   502,   503,    36,    59,
     476,   477,   478,   479,   480,   481,   482,   738,  1146,  1147,
     483,   484,   485,    37,    65,   545,   546,   547,   548,   549,
      38,   305,   306,   307,    39,    72,   611,   612,   613,   614,
     615,   832,  1276,  1277,    40,    68,   584,   585,   586,   587,
     815,  1253,  1254,    41,    54,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   660,  1117,  1118,   391,
     392,   393,   394,   395,    42,    60,   489,   490,   491,   492,
      43,    55,   399,   400,   401,   402,    44,   112,   113,   114,
      45,    57,   409,   410,   411,   412,    46,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   446,   218,   965,   966,
     219,   445,   946,   947,   220,   221,   222,    47,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    48,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     875,   876,   622,    82,   874,   625,   626,   295,   628,   629,
     486,  1115,  1057,    51,   236,   509,  1157,    73,   581,   509,
     303,   110,    73,   720,    49,    50,  1086,   721,   226,   493,
     110,    83,    84,   607,   406,   621,   722,   303,    85,   396,
     723,   879,   880,   541,   309,   396,   406,   486,  1057,    74,
     237,   295,  1130,    52,    74,   593,  1131,    75,    56,   238,
     239,   240,    75,    58,   241,   242,    86,    87,    88,   243,
     244,   245,    62,   840,   841,   842,   843,   844,   845,   846,
      66,   581,   607,    89,    90,    91,   542,   494,    67,   111,
     226,    92,    93,    69,   328,   541,    71,   495,   111,   496,
     681,   510,   683,   684,  1087,   510,   107,   397,  1309,   108,
     329,   330,  1132,   397,  1279,   109,  1133,   698,  1280,   331,
    1058,   702,   115,  1284,   705,    76,   582,  1285,   304,   543,
      76,   116,   223,   227,   715,   716,   117,   118,   542,   119,
     120,   608,   407,   487,   121,   304,   729,   224,   731,   732,
     122,   123,   124,   125,   407,   228,  1058,   126,   127,   497,
     225,   233,  1288,   594,   332,   128,  1289,   408,   129,   130,
     131,   234,   398,  1158,   257,   132,   544,   235,   398,   408,
     487,   543,  1159,   333,   334,   335,   336,   337,   294,   582,
     608,   338,   133,   134,  1290,   227,   339,   593,  1291,  -129,
     302,   308,   340,   310,   258,   135,   259,   511,   136,   137,
     138,   511,   341,   342,   311,  1300,   139,   228,   140,  1301,
    1116,   467,  1302,   343,  1059,   141,  1303,   142,   544,   143,
     144,   516,   145,   260,   146,   147,  1304,   312,   787,   468,
    1305,   595,   315,  -129,   296,   261,   148,  1060,   488,   517,
     326,   149,   150,   583,   151,   152,   153,   344,   596,   154,
    1059,   559,   469,   365,   313,   366,   763,   367,   609,   262,
     504,   610,   518,   597,   263,   507,   755,   404,   561,   592,
     834,   368,   264,  1060,   605,   488,   265,   266,   296,   316,
     783,   470,   672,   678,   748,  1259,   588,   155,   590,   345,
     493,   519,   826,  1306,   369,   594,   619,  1307,   156,   157,
     158,   159,   160,   161,   162,   267,   583,   609,   317,   318,
     610,   370,   861,   371,   319,   516,   467,   866,   816,   236,
     869,  1313,  1342,   372,   873,  1314,  1343,   320,   321,   520,
     322,   651,   323,   517,   468,   268,   373,   471,   269,   270,
     271,  1101,  1102,  1103,   324,   472,   473,   521,   494,   163,
     164,   165,   325,   166,   167,   237,   518,   469,   495,   403,
     496,   374,   168,   413,   238,   239,   240,   414,   465,   241,
     242,   415,   416,   595,   243,   244,   245,   417,   418,   474,
     419,   272,   420,   375,   421,   519,   470,  1281,  1282,  1283,
     596,   422,   423,   522,   523,   424,   425,   426,   427,   428,
    1136,   429,   430,   273,   274,   597,   365,   431,   366,   432,
     367,   579,   433,   620,   434,   376,   435,   436,   437,   438,
     497,   439,   440,   520,   368,   377,   441,   442,  1137,   443,
     444,   447,   448,   449,   524,   450,   616,   451,   452,   453,
     525,   521,   471,   454,   455,   456,   457,   369,   874,   475,
     472,   473,   458,   459,   460,   461,   462,   463,   744,   526,
     617,   464,  1138,   527,   370,   505,   371,   506,   777,   550,
     378,   551,   552,   553,   554,   555,   372,   556,  1331,   557,
    1332,   558,   562,   563,   474,   116,   564,   522,   523,   373,
     117,   118,   379,   119,   120,  1139,  1140,   565,   121,   566,
     668,   567,  1141,   568,   122,   123,   124,   125,   569,   570,
    1243,   126,   127,   571,   374,   572,   573,   574,   575,   128,
     576,   577,   129,   130,   131,   578,  1142,  1333,   524,   132,
     589,   604,   618,   621,   525,   623,   375,  1076,  1077,  1078,
    1079,  1080,  1081,  1082,  1334,  1169,   133,   134,   624,   627,
     630,   631,   632,   526,   475,  1143,   633,   527,   634,   135,
     635,   636,   136,   137,   138,  1170,  1171,   638,   376,   639,
     139,   640,   140,   641,  1244,  1172,   642,   643,   377,   141,
     653,   142,   644,   143,   144,   645,   145,   646,   146,   147,
     647,   648,   649,   650,  1335,  1336,   654,   655,  1310,   656,
     148,   657,   658,   659,   661,   149,   150,   662,   151,   152,
     153,   663,  1144,   154,  1173,  1174,   257,  1175,   664,  1245,
     665,   666,   667,   378,   670,  1246,   671,   674,   675,   676,
     677,  1145,  1247,   682,   680,   685,   686,   687,   688,   689,
     690,   691,   692,  1337,   693,   379,   258,  1176,   259,  1338,
     694,   155,   695,  1177,   696,  1248,  1178,  1249,  1250,   701,
     699,   700,   156,   157,   158,   159,   160,   161,   162,   697,
     703,  1251,   933,   704,   706,   260,   707,   708,  1179,  1252,
    1180,  1181,   709,   710,   711,   712,   713,   261,   714,  1202,
    1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,  1214,   717,   718,   719,   724,   725,   726,   727,   728,
     730,   262,  1182,   163,   164,   165,   263,   166,   167,  1266,
     733,   736,   737,   739,   264,   757,   168,   758,   265,   266,
     734,   740,  1183,   735,   788,  1184,  1215,   741,   742,  1185,
     743,   746,   785,  1186,  1187,   750,   747,   751,  1188,   752,
       2,     3,  1189,   795,     4,   790,   759,   267,   754,   760,
     761,   762,  1190,   765,  1191,  1192,     5,  1193,   766,     6,
     767,   769,   779,   770,   796,     7,   786,   789,  1194,   328,
     771,   772,     8,  1267,   775,   776,  1195,   268,   780,   781,
     269,   270,   271,   798,     9,   329,   330,   782,   791,    10,
      11,   792,   793,   797,   331,   799,   800,   934,   794,   801,
     935,   802,   803,   936,   804,   805,   937,   806,   807,   938,
      12,   939,   940,   948,    13,   949,   950,   808,  1268,   809,
     810,   941,   811,   272,  1269,    14,   942,   943,   814,   951,
     952,  1270,   818,   812,   813,  1218,   944,  1219,  1220,   332,
     819,   822,   821,   820,   828,   273,   274,    15,    16,   823,
     824,  1221,  1222,   825,  1271,   945,  1272,  1273,   333,   334,
     335,   336,   337,    17,   829,   830,   338,   836,   837,   831,
    1274,   339,   833,   838,   839,   849,   850,   340,  1275,   859,
      18,   851,   852,   853,   854,   855,   856,   341,   342,   857,
     858,   860,   863,   864,   862,   865,   867,   868,   343,   870,
     871,   872,   877,   874,   878,    19,    20,   882,   881,   885,
     888,   893,   883,   884,   991,   896,   989,  1162,   886,   887,
     889,   890,   891,   892,  1001,   894,   895,   897,    21,   898,
     899,   900,   344,   901,   987,   988,   902,  1002,   903,    22,
     904,   905,   906,   907,   908,    23,   909,   910,   953,    24,
     911,   954,    25,   912,   955,   913,   914,   956,   915,   990,
     957,    82,   958,   959,   916,   917,   918,   919,   920,   921,
    1223,   922,   960,  1224,   345,   923,  1225,   961,   962,  1226,
     924,   925,  1227,   926,  1228,  1229,   927,   963,   928,    83,
      84,   929,   930,   931,  1230,   932,    85,   967,   968,  1231,
    1232,   969,   970,   971,   972,   973,   964,   974,   992,  1233,
     975,   976,   977,   978,   993,   994,   979,   980,   981,   996,
     997,   999,  1000,  1008,    86,    87,    88,  1009,  1234,  1011,
    1014,  1012,  1015,  1016,  1020,  1021,  1023,  1024,  1025,  1053,
    1017,    89,    90,    91,  1066,  1013,   982,   983,   984,    92,
      93,   985,   986,   995,   998,  1005,  1006,  1007,  1010,  1067,
    1068,  1069,  1022,  1018,  1019,  1026,  1054,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1072,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,
    1049,  1050,  1051,  1052,  1055,  1056,  1070,  1071,  1074,  1075,
    1083,  1073,  1084,  1085,  1090,  1091,  1092,  1093,  1094,  1095,
    1096,  1097,  1098,  1099,  1100,  1106,  1107,  1108,  1109,  1110,
    1111,  1112,  1113,  1292,  1114,  1119,  1120,  1121,  1122,  1308,
    1319,  1123,  1124,  1125,  1320,  1322,  1321,  1323,   314,  1126,
    1127,  1128,   764,  1129,  1260,   827,  1134,  1344,  1326,  1324,
    1315,   591,   778,  1325,  1317,  1135,  1148,  1149,  1150,  1318,
    1151,  1152,  1153,  1154,  1155,  1156,  1341,  1165,  1166,  1167,
    1163,  1168,  1198,  1199,   817,  1295,   784,  1200,  1201,  1237,
    1238,  1239,  1240,  1241,  1242,  1255,   508,   835,  1261,  1256,
    1257,  1262,  1263,  1264,  1265,  1278,  1294,   756,  1293,   745,
    1327,  1312,  1296,  1297,  1298,  1299,  1311,  1316,  1328,  1329,
    1330,   405,   466,  1287,   749,   327,   673,  1286,   580,   560,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   606,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   652,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   669,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   679
};

static const yytype_int16 yycheck[] =
{
     649,   650,   316,     1,   118,   319,   320,     1,   322,   323,
       1,     8,     1,   249,     1,     1,    51,     1,     1,     1,
       1,     1,     1,   228,   247,   248,    55,   232,     1,     1,
       1,    29,    30,     1,     1,   118,   228,     1,    36,     1,
     232,   196,   197,     1,   247,     1,     1,     1,     1,    33,
      37,     1,   247,   249,    33,     1,   251,    41,   249,    46,
      47,    48,    41,   249,    51,    52,    64,    65,    66,    56,
      57,    58,   249,   156,   157,   158,   159,   160,   161,   162,
     249,     1,     1,    81,    82,    83,    44,    59,   249,    69,
       1,    89,    90,   249,     1,     1,   249,    69,    69,    71,
     414,    87,   416,   417,   133,    87,   249,    69,   222,   249,
      17,    18,   247,    69,   247,   249,   251,   431,   251,    26,
     109,   435,   249,   247,   438,   109,   109,   251,   109,    87,
     109,     1,   249,   106,   448,   449,     6,     7,    44,     9,
      10,   109,   109,   134,    14,   109,   460,   249,   462,   463,
      20,    21,    22,    23,   109,   128,   109,    27,    28,   131,
     249,   249,   247,   109,    71,    35,   251,   134,    38,    39,
      40,   249,   134,   208,     1,    45,   134,   249,   134,   134,
     134,    87,   217,    90,    91,    92,    93,    94,   249,   109,
     109,    98,    62,    63,   247,   106,   103,     1,   251,   193,
     249,   249,   109,   250,    31,    75,    33,   193,    78,    79,
      80,   193,   119,   120,   250,   247,    86,   128,    88,   251,
     217,     1,   247,   130,   213,    95,   251,    97,   134,    99,
     100,     1,   102,    60,   104,   105,   247,   250,   552,    19,
     251,   187,   250,   193,   238,    72,   116,   236,   239,    19,
     248,   121,   122,   236,   124,   125,   126,   164,   204,   129,
     213,   248,    42,     1,   248,     3,   248,     5,   236,    96,
     247,   239,    42,   219,   101,   248,   248,   248,   247,   193,
     248,    19,   109,   236,   248,   239,   113,   114,   238,   250,
     248,    71,   248,   248,   248,   248,   247,   167,   248,   206,
       1,    71,   248,   247,    42,   109,   247,   251,   178,   179,
     180,   181,   182,   183,   184,   142,   236,   236,   250,   250,
     239,    59,   636,    61,   250,     1,     1,   641,   248,     1,
     644,   247,   247,    71,   648,   251,   251,   250,   250,   109,
     250,   248,   250,    19,    19,   172,    84,   127,   175,   176,
     177,    11,    12,    13,   250,   135,   136,   127,    59,   229,
     230,   231,   250,   233,   234,    37,    42,    42,    69,   250,
      71,   109,   242,   250,    46,    47,    48,   250,   248,    51,
      52,   250,   250,   187,    56,    57,    58,   250,   250,   169,
     250,   218,   250,   131,   250,    71,    71,  1101,  1102,  1103,
     204,   250,   250,   173,   174,   250,   250,   250,   250,   250,
      15,   250,   250,   240,   241,   219,     1,   250,     3,   250,
       5,   248,   250,   118,   250,   163,   250,   250,   250,   250,
     131,   250,   250,   109,    19,   173,   250,   250,    43,   250,
     250,   250,   250,   250,   214,   250,   132,   250,   250,   250,
     220,   127,   127,   250,   250,   250,   250,    42,   118,   239,
     135,   136,   250,   250,   250,   250,   250,   250,   248,   239,
     132,   250,    77,   243,    59,   250,    61,   250,   248,   250,
     218,   250,   250,   250,   250,   250,    71,   250,    74,   250,
      76,   250,   250,   250,   169,     1,   250,   173,   174,    84,
       6,     7,   240,     9,    10,   110,   111,   250,    14,   250,
     248,   250,   117,   250,    20,    21,    22,    23,   250,   250,
      76,    27,    28,   250,   109,   250,   250,   250,   250,    35,
     250,   250,    38,    39,    40,   250,   141,   123,   214,    45,
     250,   250,   132,   118,   220,   228,   131,   840,   841,   842,
     843,   844,   845,   846,   140,     4,    62,    63,   118,   118,
     118,   118,   247,   239,   239,   170,   247,   243,   250,    75,
     250,   250,    78,    79,    80,    24,    25,   250,   163,   250,
      86,   250,    88,   250,   140,    34,   250,   250,   173,    95,
     247,    97,   250,    99,   100,   250,   102,   250,   104,   105,
     250,   250,   250,   250,   190,   191,   250,   250,  1257,   250,
     116,   250,   250,   250,   250,   121,   122,   250,   124,   125,
     126,   250,   227,   129,    73,    74,     1,    76,   250,   185,
     250,   250,   250,   218,   250,   191,   250,   132,   247,   250,
     250,   246,   198,   118,   228,   132,   132,   132,   132,   228,
     118,   228,   118,   239,   118,   240,    31,   106,    33,   245,
     118,   167,   228,   112,   228,   221,   115,   223,   224,   132,
     118,   118,   178,   179,   180,   181,   182,   183,   184,   228,
     118,   237,    51,   118,   118,    60,   118,   118,   137,   245,
     139,   140,   118,   118,   228,   250,   250,    72,   228,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   228,   228,   228,   228,   228,   228,   228,   118,
     228,    96,   171,   229,   230,   231,   101,   233,   234,    76,
     228,   250,   250,   250,   109,   132,   242,   132,   113,   114,
     247,   250,   191,   247,   132,   194,   190,   250,   250,   198,
     250,   250,   228,   202,   203,   247,   250,   250,   207,   250,
       0,     1,   211,   118,     4,   132,   247,   142,   250,   247,
     250,   250,   221,   247,   223,   224,    16,   226,   250,    19,
     250,   250,   247,   250,   132,    25,   228,   228,   237,     1,
     250,   250,    32,   140,   250,   250,   245,   172,   250,   250,
     175,   176,   177,   132,    44,    17,    18,   250,   228,    49,
      50,   228,   228,   228,    26,   118,   118,   186,   247,   132,
     189,   132,   132,   192,   132,   132,   195,   132,   132,   198,
      70,   200,   201,    51,    74,    53,    54,   132,   185,   132,
     132,   210,   132,   218,   191,    85,   215,   216,   250,    67,
      68,   198,   228,   247,   247,    51,   225,    53,    54,    71,
     247,   250,   247,   249,   132,   240,   241,   107,   108,   250,
     250,    67,    68,   250,   221,   244,   223,   224,    90,    91,
      92,    93,    94,   123,   247,   247,    98,   247,   247,   250,
     237,   103,   250,   247,   247,   247,   247,   109,   245,   118,
     140,   247,   247,   247,   247,   247,   247,   119,   120,   247,
     247,   118,   118,   118,   250,   118,   118,   118,   130,   132,
     118,   118,   247,   118,   132,   165,   166,   228,   132,   250,
     118,   247,   132,   132,   118,   247,   250,   235,   132,   132,
     132,   132,   132,   132,   250,   132,   132,   247,   188,   132,
     132,   247,   164,   247,   132,   228,   247,   118,   247,   199,
     247,   247,   247,   247,   247,   205,   247,   247,   186,   209,
     247,   189,   212,   247,   192,   247,   247,   195,   247,   132,
     198,     1,   200,   201,   247,   247,   247,   247,   247,   247,
     186,   247,   210,   189,   206,   247,   192,   215,   216,   195,
     247,   247,   198,   247,   200,   201,   247,   225,   247,    29,
      30,   247,   247,   247,   210,   247,    36,   247,   247,   215,
     216,   247,   247,   247,   247,   247,   244,   247,   132,   225,
     247,   247,   247,   247,   132,   132,   247,   247,   247,   132,
     132,   132,   132,   132,    64,    65,    66,   132,   244,   132,
     132,   228,   132,   132,   132,   132,   132,   132,   132,   132,
     228,    81,    82,    83,   132,   250,   247,   247,   247,    89,
      90,   247,   247,   247,   247,   247,   247,   247,   247,   132,
     132,   132,   247,   250,   250,   247,   250,   247,   247,   247,
     247,   247,   247,   247,   132,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   132,   247,
     247,   250,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   118,   247,   247,   247,   247,   247,   132,
     138,   247,   247,   247,   140,   140,   138,   138,    77,   247,
     247,   247,   512,   247,  1061,   598,   247,  1343,  1305,  1301,
    1280,   297,   528,  1303,  1289,   247,   247,   247,   247,  1291,
     247,   247,   247,   247,   247,   247,  1314,   247,   247,   247,
     251,   247,   247,   247,   584,   252,   545,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   229,   611,   247,   250,
     250,   247,   247,   247,   247,   247,   247,   499,  1163,   476,
    1307,   247,   252,   252,   252,   252,   250,  1285,   247,   247,
     247,   112,   169,  1133,   489,    94,   399,  1131,   275,   246,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   346,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   380,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   409
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   254,     0,     1,     4,    16,    19,    25,    32,    44,
      49,    50,    70,    74,    85,   107,   108,   123,   140,   165,
     166,   188,   199,   205,   209,   212,   255,   260,   265,   285,
     291,   297,   305,   319,   343,   367,   381,   396,   403,   407,
     417,   426,   447,   453,   459,   463,   469,   530,   544,   247,
     248,   249,   249,   344,   427,   454,   249,   464,   249,   382,
     448,   368,   249,   292,   320,   397,   249,   249,   418,   249,
     298,   249,   408,     1,    33,    41,   109,   286,   287,   288,
     289,   290,     1,    29,    30,    36,    64,    65,    66,    81,
      82,    83,    89,    90,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   249,   249,   249,
       1,    69,   460,   461,   462,   249,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    23,    27,    28,    35,    38,
      39,    40,    45,    62,    63,    75,    78,    79,    80,    86,
      88,    95,    97,    99,   100,   102,   104,   105,   116,   121,
     122,   124,   125,   126,   129,   167,   178,   179,   180,   181,
     182,   183,   184,   229,   230,   231,   233,   234,   242,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   520,   523,
     527,   528,   529,   249,   249,   249,     1,   106,   128,   261,
     262,   263,   264,   249,   249,   249,     1,    37,    46,    47,
      48,    51,    52,    56,    57,    58,   545,   546,   547,   548,
     549,   550,   551,   552,   553,   554,   555,     1,    31,    33,
      60,    72,    96,   101,   109,   113,   114,   142,   172,   175,
     176,   177,   218,   240,   241,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   249,     1,   238,   306,   307,   308,
     309,   310,   249,     1,   109,   404,   405,   406,   249,   247,
     250,   250,   250,   248,   287,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   248,   532,     1,    17,
      18,    26,    71,    90,    91,    92,    93,    94,    98,   103,
     109,   119,   120,   130,   164,   206,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,     1,     3,     5,    19,    42,
      59,    61,    71,    84,   109,   131,   163,   173,   218,   240,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   442,   443,   444,   445,   446,     1,    69,   134,   455,
     456,   457,   458,   250,   248,   461,     1,   109,   134,   465,
     466,   467,   468,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   524,   519,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   248,   471,     1,    19,    42,
      71,   127,   135,   136,   169,   239,   383,   384,   385,   386,
     387,   388,   389,   393,   394,   395,     1,   134,   239,   449,
     450,   451,   452,     1,    59,    69,    71,   131,   369,   373,
     374,   375,   379,   380,   247,   250,   250,   248,   262,     1,
      87,   193,   293,   294,   295,   296,     1,    19,    42,    71,
     109,   127,   173,   174,   214,   220,   239,   243,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   335,
     339,     1,    44,    87,   134,   398,   399,   400,   401,   402,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   248,
     546,   247,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   248,
     267,     1,   109,   236,   419,   420,   421,   422,   247,   250,
     248,   307,   193,     1,   109,   187,   204,   219,   299,   300,
     301,   302,   303,   304,   250,   248,   405,     1,   109,   236,
     239,   409,   410,   411,   412,   413,   132,   132,   132,   247,
     118,   118,   257,   228,   118,   257,   257,   118,   257,   257,
     118,   118,   247,   247,   250,   250,   250,   364,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   248,   346,   247,   250,   250,   250,   250,   250,   250,
     439,   250,   250,   250,   250,   250,   250,   250,   248,   429,
     250,   250,   248,   456,   132,   247,   250,   250,   248,   466,
     228,   257,   118,   257,   257,   132,   132,   132,   132,   228,
     118,   228,   118,   118,   118,   228,   228,   228,   257,   118,
     118,   132,   257,   118,   118,   257,   118,   118,   118,   118,
     118,   228,   250,   250,   228,   257,   257,   228,   228,   228,
     228,   232,   228,   232,   228,   228,   228,   228,   118,   257,
     228,   257,   257,   228,   247,   247,   250,   250,   390,   250,
     250,   250,   250,   250,   248,   384,   250,   250,   248,   450,
     247,   250,   250,   370,   250,   248,   374,   132,   132,   247,
     247,   250,   250,   248,   294,   247,   250,   250,   340,   250,
     250,   250,   250,   336,   332,   250,   250,   248,   322,   247,
     250,   250,   250,   248,   399,   228,   228,   257,   132,   228,
     132,   228,   228,   228,   247,   118,   132,   228,   132,   118,
     118,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   247,   247,   250,   423,   248,   420,   228,   247,
     249,   247,   250,   250,   250,   250,   248,   300,   132,   247,
     247,   250,   414,   250,   248,   410,   247,   247,   247,   247,
     156,   157,   158,   159,   160,   161,   162,   256,   257,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   118,
     118,   257,   250,   118,   118,   118,   257,   118,   118,   257,
     132,   118,   118,   257,   118,   259,   259,   247,   132,   196,
     197,   132,   228,   132,   132,   250,   132,   132,   118,   132,
     132,   132,   132,   247,   132,   132,   247,   247,   132,   132,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,    51,   186,   189,   192,   195,   198,   200,
     201,   210,   215,   216,   225,   244,   525,   526,    51,    53,
      54,    67,    68,   186,   189,   192,   195,   198,   200,   201,
     210,   215,   216,   225,   244,   521,   522,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   132,   228,   250,
     132,   118,   132,   132,   132,   247,   132,   132,   247,   132,
     132,   250,   118,   377,   378,   247,   247,   247,   132,   132,
     247,   132,   228,   250,   132,   132,   132,   228,   250,   250,
     132,   132,   247,   132,   132,   132,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   132,   250,   247,   247,     1,   109,   213,
     236,   311,   312,   313,   314,   315,   132,   132,   132,   132,
     247,   247,   132,   250,   132,   247,   256,   256,   256,   256,
     256,   256,   256,   247,   247,   247,    55,   133,   365,   366,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,    11,    12,    13,   258,   259,   247,   247,   247,   247,
     247,   247,   247,   247,   247,     8,   217,   440,   441,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   251,   247,   251,   247,   247,    15,    43,    77,   110,
     111,   117,   141,   170,   227,   246,   391,   392,   247,   247,
     247,   247,   247,   247,   247,   247,   247,    51,   208,   217,
     371,   372,   235,   251,   376,   247,   247,   247,   247,     4,
      24,    25,    34,    73,    74,    76,   106,   112,   115,   137,
     139,   140,   171,   191,   194,   198,   202,   203,   207,   211,
     221,   223,   224,   226,   237,   245,   341,   342,   247,   247,
     247,   247,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   190,   337,   338,    51,    53,
      54,    67,    68,   186,   189,   192,   195,   198,   200,   201,
     210,   215,   216,   225,   244,   333,   334,   247,   247,   247,
     247,   247,   247,    76,   140,   185,   191,   198,   221,   223,
     224,   237,   245,   424,   425,   247,   250,   250,   316,   248,
     312,   247,   247,   247,   247,   247,    76,   140,   185,   191,
     198,   221,   223,   224,   237,   245,   415,   416,   247,   247,
     251,   258,   258,   258,   247,   251,   526,   522,   247,   251,
     247,   251,   118,   378,   247,   252,   252,   252,   252,   252,
     247,   251,   247,   251,   247,   251,   247,   251,   132,   222,
     259,   250,   247,   247,   251,   366,   441,   392,   372,   138,
     140,   138,   140,   138,   342,   338,   334,   425,   247,   247,
     247,    74,    76,   123,   140,   190,   191,   239,   245,   317,
     318,   416,   247,   251,   318
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   253,   254,   254,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   257,   257,   257,   257,   257,   257,   258,   258,
     259,   259,   259,   259,   260,   261,   261,   262,   262,   262,
     263,   264,   265,   266,   266,   267,   267,   267,   267,   267,
     267,   267,   267,   267,   267,   267,   267,   267,   267,   267,
     267,   267,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   286,   287,   287,   287,   287,   288,   289,   290,
     292,   291,   293,   293,   294,   294,   294,   295,   296,   298,
     297,   299,   299,   300,   300,   300,   300,   300,   301,   302,
     303,   304,   305,   306,   306,   307,   307,   307,   308,   310,
     309,   311,   311,   312,   312,   312,   312,   313,   314,   314,
     316,   315,   317,   317,   318,   318,   318,   318,   318,   318,
     318,   318,   320,   319,   321,   321,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   332,   331,   333,   333,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,   334,   334,   334,   334,   334,   336,   335,   337,
     337,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   340,   339,   341,   341,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   344,
     343,   345,   345,   346,   346,   346,   346,   346,   346,   346,
     346,   346,   346,   346,   346,   346,   346,   346,   346,   346,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   364,   363,   365,
     365,   366,   366,   368,   367,   370,   369,   371,   371,   372,
     372,   372,   373,   373,   374,   374,   374,   374,   374,   376,
     375,   377,   377,   378,   378,   379,   380,   382,   381,   383,
     383,   384,   384,   384,   384,   384,   384,   384,   384,   384,
     385,   386,   387,   388,   390,   389,   391,   391,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   393,   394,
     395,   397,   396,   398,   398,   399,   399,   399,   399,   400,
     401,   402,   403,   404,   404,   405,   405,   406,   408,   407,
     409,   409,   410,   410,   410,   410,   411,   412,   414,   413,
     415,   415,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   418,   417,   419,   419,   420,   420,   420,   421,
     423,   422,   424,   424,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   427,   426,   428,   428,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   437,   439,   438,   440,   440,   441,   441,   442,   443,
     444,   445,   446,   448,   447,   449,   449,   450,   450,   450,
     451,   452,   454,   453,   455,   455,   456,   456,   456,   457,
     458,   459,   460,   460,   461,   461,   462,   464,   463,   465,
     465,   466,   466,   466,   467,   468,   469,   470,   470,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   471,   471,   471,   471,   471,   471,   471,   471,
     471,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   503,   504,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     519,   518,   520,   521,   521,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   524,   523,   525,   525,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   527,
     528,   529,   530,   531,   531,   532,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   532,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   543,   544,   545,
     545,   546,   546,   546,   546,   546,   546,   546,   546,   546,
     546,   547,   548,   549,   550,   551,   552,   553,   554,   555
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     1,
       2,     3,     3,     3,     3,     3,     3,     3,     0,     1,
       2,     3,     3,     3,     5,     2,     1,     1,     1,     2,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     2,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     2,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     0,
       6,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     3,
       1,     1,     1,     0,     6,     0,     5,     3,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     2,     0,
       5,     3,     1,     1,     3,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     2,     4,
       4,     4,     5,     2,     1,     1,     1,     4,     0,     6,
       2,     1,     1,     1,     1,     2,     4,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     1,     1,     1,     2,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     4,     4,
       4,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     4,
       4,     5,     2,     1,     1,     1,     4,     0,     6,     2,
       1,     1,     1,     1,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     5,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 28:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 439 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 440 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 441 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 442 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 443 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 446 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 3002 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 447 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 3008 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 448 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 3014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 449 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 3020 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 450 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 3026 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 463 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 3035 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 469 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3044 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 502 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 542 "conf_parser.y" /* yacc.c:1646  */
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
    xfree(ConfigServerInfo.rsa_private_key_file);
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
}
#line 3148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 600 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3180 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 629 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3191 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 637 "conf_parser.y" /* yacc.c:1646  */
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
#line 3208 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 651 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3239 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 679 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3257 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 694 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 709 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3288 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 719 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')))
      *p = '\0';

    xfree(ConfigServerInfo.network_name);
    ConfigServerInfo.network_name = xstrdup(yylval.string);
  }
}
#line 3305 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 733 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3317 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 742 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 770 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3379 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 798 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[-1].number) < MAXCLIENTS_MIN)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "MAXCLIENTS too low, setting to %d", MAXCLIENTS_MIN);
    conf_error_report(buf);
    ConfigServerInfo.default_max_clients = MAXCLIENTS_MIN;
  }
  else if ((yyvsp[-1].number) > MAXCLIENTS_MAX)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "MAXCLIENTS too high, setting to %d", MAXCLIENTS_MAX);
    conf_error_report(buf);
    ConfigServerInfo.default_max_clients = MAXCLIENTS_MAX;
  }
  else
    ConfigServerInfo.default_max_clients = (yyvsp[-1].number);
}
#line 3407 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 823 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[-1].number) < 9)
  {
    conf_error_report("max_nick_length too low, setting to 9");
    ConfigServerInfo.max_nick_length = 9;
  }
  else if ((yyvsp[-1].number) > NICKLEN)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "max_nick_length too high, setting to %d", NICKLEN);
    conf_error_report(buf);
    ConfigServerInfo.max_nick_length = NICKLEN;
  }
  else
    ConfigServerInfo.max_nick_length = (yyvsp[-1].number);
}
#line 3432 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 845 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[-1].number) < 80)
  {
    conf_error_report("max_topic_length too low, setting to 80");
    ConfigServerInfo.max_topic_length = 80;
  }
  else if ((yyvsp[-1].number) > TOPICLEN)
  {
    char buf[IRCD_BUFSIZE] = "";

    snprintf(buf, sizeof(buf), "max_topic_length too high, setting to %d", TOPICLEN);
    conf_error_report(buf);
    ConfigServerInfo.max_topic_length = TOPICLEN;
  }
  else
    ConfigServerInfo.max_topic_length = (yyvsp[-1].number);
}
#line 3457 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 867 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 885 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3478 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 894 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3490 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 903 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3502 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 916 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3511 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 920 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3528 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 937 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3537 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 943 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 953 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 957 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3573 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 975 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3582 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 981 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 987 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 993 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3621 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1021 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3630 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1027 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3639 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1031 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1047 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3663 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1055 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3671 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1058 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1063 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1070 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3697 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1074 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3706 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1078 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3715 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1082 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3724 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1086 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3733 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1090 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3742 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1094 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3751 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1098 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3760 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1108 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3772 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1115 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3826 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1180 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3835 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1186 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3844 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1192 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3853 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1198 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3862 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1204 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3876 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1215 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1221 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3899 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1232 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3908 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1238 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3917 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1245 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3926 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1249 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3935 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1253 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3944 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1257 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3953 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1261 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3962 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1265 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3971 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1269 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3980 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1273 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3989 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1277 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 3998 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1281 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4007 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1285 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4016 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1289 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4025 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1293 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4034 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1297 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4043 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1301 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4052 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1305 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
}
#line 4061 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1309 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NOCTCP;
}
#line 4070 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1315 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value = 0;
}
#line 4079 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1322 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_CCONN;
}
#line 4088 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1326 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_DEBUG;
}
#line 4097 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1330 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_EXTERNAL;
}
#line 4106 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1334 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_FULL;
}
#line 4115 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1338 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_REJ;
}
#line 4124 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1342 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_SKILL;
}
#line 4133 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1346 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_NCHANGE;
}
#line 4142 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1350 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_UNAUTH;
}
#line 4151 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1354 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_KLINE;
}
#line 4160 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1358 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_DLINE;
}
#line 4169 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1362 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_XLINE;
}
#line 4178 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1366 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_BOTS;
}
#line 4187 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1370 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_SERVREJ;
}
#line 4196 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_GENERAL;
}
#line 4205 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1380 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4214 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1387 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4223 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1391 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4232 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1395 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4241 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1399 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4250 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1403 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4259 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1407 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4268 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1411 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4277 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1415 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4286 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1419 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4295 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1423 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4304 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1427 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4313 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1431 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4322 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1435 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4331 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1439 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4340 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1443 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4349 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1447 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4358 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1451 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4367 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1455 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4376 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1459 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4385 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1463 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4394 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1467 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4403 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1471 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4412 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1475 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4421 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1479 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4430 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1483 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4439 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1487 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4448 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1491 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4457 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1495 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1499 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4475 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1503 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4484 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1513 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  reset_block_state();

  block_state.ping_freq.value = DEFAULT_PINGFREQUENCY;
  block_state.con_freq.value  = DEFAULT_CONNECTFREQUENCY;
  block_state.max_total.value = MAXIMUM_LINKS_DEFAULT;
  block_state.max_sendq.value = DEFAULT_SENDQ;
  block_state.max_recvq.value = DEFAULT_RECVQ;
}
#line 4501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 250:
#line 1525 "conf_parser.y" /* yacc.c:1646  */
    {
  struct ClassItem *class = NULL;

  if (conf_parser_ctx.pass != 1)
    break;

  if (!block_state.class.buf[0])
    break;

  if (!(class = class_find(block_state.class.buf, 0)))
    class = class_make();

  class->active = 1;
  xfree(class->name);
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
}
#line 4549 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1589 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4558 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1595 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4567 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1601 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1607 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1613 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1619 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4603 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1625 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4612 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1631 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4621 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1637 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4630 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1643 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4639 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1649 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4649 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1656 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4658 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1662 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1668 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4676 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1674 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1683 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4700 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1692 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4709 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1699 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4718 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1703 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4727 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1713 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4736 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1719 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4744 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1725 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4753 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1729 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4762 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1733 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4771 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 309:
#line 1741 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4777 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1746 "conf_parser.y" /* yacc.c:1646  */
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
    listener_add((yyvsp[0].number), block_state.addr.buf, block_state.flags.value);
  }
}
#line 4795 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1759 "conf_parser.y" /* yacc.c:1646  */
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

    for (int i = (yyvsp[-2].number); i <= (yyvsp[0].number); ++i)
      listener_add(i, block_state.addr.buf, block_state.flags.value);
  }
}
#line 4815 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1776 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4824 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1782 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4833 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1792 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4842 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1796 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 4883 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1845 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4892 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1851 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4901 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1857 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4910 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1863 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4924 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1874 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4933 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1881 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1885 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4951 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1889 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1893 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4969 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1897 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1901 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4987 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1905 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1909 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 5005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1913 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 5014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1917 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 5023 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1923 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5040 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1937 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 5052 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1946 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 5064 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1959 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 5076 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 352:
#line 1966 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 5087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1977 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5096 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1983 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5105 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 361:
#line 1989 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2004 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5129 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2020 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5145 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2031 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_SHARED);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
  conf->user = xstrdup(block_state.user.buf);
  conf->host = xstrdup(block_state.host.buf);
}
#line 5162 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2048 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5171 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2054 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5193 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2073 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2080 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2084 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2088 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5229 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2092 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2096 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5247 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2100 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2104 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5265 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2108 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2112 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5283 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2116 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2126 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5306 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2135 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5321 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2150 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5330 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2156 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5339 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2163 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2167 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5357 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2171 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5366 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2175 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5375 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2179 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5384 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2183 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5393 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2187 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5402 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2191 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5411 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2195 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2199 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5429 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2209 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5443 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 415:
#line 2218 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5509 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2298 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5518 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2304 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5527 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2310 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5536 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2316 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[-1].string)[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr((yyvsp[-1].string), ' '))
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.spass.buf, yylval.string, sizeof(block_state.spass.buf));
}
#line 5552 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2329 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if ((yyvsp[-1].string)[0] == ':')
    conf_error_report("Server passwords cannot begin with a colon");
  else if (strchr((yyvsp[-1].string), ' '))
    conf_error_report("Server passwords cannot contain spaces");
  else
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5568 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2342 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5577 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2348 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5586 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2354 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5595 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2358 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5604 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2364 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5612 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2370 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5621 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5630 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2380 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2391 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5653 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2397 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5662 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2403 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5671 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2409 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5685 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2424 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5694 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 454:
#line 2428 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5719 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2453 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5742 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2473 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5751 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2483 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5760 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2487 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5786 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2513 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5795 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2519 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5804 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2534 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5821 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2551 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5830 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 478:
#line 2555 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 5852 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2577 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5861 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 485:
#line 2583 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5870 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2651 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5878 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2656 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5886 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2661 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5894 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2666 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5906 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2675 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5918 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2684 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2693 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
}
#line 5942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2702 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5951 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2708 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2713 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5967 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2718 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5975 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2723 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5983 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2728 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2737 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 6003 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2742 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 6011 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2747 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 6019 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2752 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 6027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2757 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 6035 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2762 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 6043 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2767 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 6051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2772 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 6059 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2777 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 6067 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2782 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 6075 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2787 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 6084 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2793 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 6092 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2798 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 6100 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2803 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 6108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2808 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6116 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2813 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6124 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2818 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2823 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6140 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2828 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2831 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6156 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2836 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6164 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2839 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2844 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6180 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2849 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6188 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2854 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6196 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2859 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2864 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6212 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2869 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2874 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2879 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6236 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2884 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6244 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2889 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6252 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2894 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6260 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2899 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6268 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.map_split_timeout = (yyvsp[-1].number);
}
#line 6276 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2909 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6284 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2914 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_split_history = (yyvsp[-1].number);
}
#line 6292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2920 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2923 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6308 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2926 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6316 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2929 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6324 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2932 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2935 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6340 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2938 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2941 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6356 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2944 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6364 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2947 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6372 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2950 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6380 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2953 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6388 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2956 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6396 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2959 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6404 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2962 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6412 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2965 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
}
#line 6420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2968 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NOCTCP;
}
#line 6428 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2973 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2979 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6444 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2982 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6452 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2985 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6460 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2988 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6468 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2991 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2994 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6484 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2997 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 3000 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6500 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3003 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6508 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3006 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3009 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6524 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3012 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6532 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 3015 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6540 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3020 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6548 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3025 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6556 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3030 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3055 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6572 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3060 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3065 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6588 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3070 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3075 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6604 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3080 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6612 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3085 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3090 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3095 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6636 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3100 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3105 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3128 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3134 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if ((yyvsp[-1].number) > 0)
    {
      event_write_links_file.when = (yyvsp[-1].number);
      event_add(&event_write_links_file, NULL);
    }
    else
     event_delete(&event_write_links_file);

    ConfigServerHide.flatten_links_delay = (yyvsp[-1].number);
  }
}
#line 6680 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3150 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6692 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3159 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6701 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3165 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6710 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3171 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6719 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6731 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 3186 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6740 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3192 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6749 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6753 "conf_parser.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
