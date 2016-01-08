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
    T_OPME = 456,
    T_PREPEND = 457,
    T_PSEUDO = 458,
    T_RECVQ = 459,
    T_RESTART = 460,
    T_SERVER = 461,
    T_SERVICE = 462,
    T_SERVNOTICE = 463,
    T_SET = 464,
    T_SHARED = 465,
    T_SIZE = 466,
    T_SNOMODES = 467,
    T_SOFTCALLERID = 468,
    T_SPY = 469,
    T_SSL = 470,
    T_SSL_CIPHER_LIST = 471,
    T_TARGET = 472,
    T_UMODES = 473,
    T_UNDLINE = 474,
    T_UNLIMITED = 475,
    T_UNRESV = 476,
    T_UNXLINE = 477,
    T_WALLOP = 478,
    T_WALLOPS = 479,
    T_WEBIRC = 480,
    TBOOL = 481,
    THROTTLE_COUNT = 482,
    THROTTLE_TIME = 483,
    TKLINE_EXPIRE_NOTICES = 484,
    TMASKED = 485,
    TS_MAX_DELTA = 486,
    TS_WARN_DELTA = 487,
    TWODOTS = 488,
    TYPE = 489,
    UNKLINE = 490,
    USE_LOGGING = 491,
    USER = 492,
    VHOST = 493,
    VHOST6 = 494,
    WARN_NO_CONNECT_BLOCK = 495,
    WHOIS = 496,
    WHOIS_NOTIFY = 497,
    XLINE = 498,
    XLINE_EXEMPT = 499
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
#define T_OPME 456
#define T_PREPEND 457
#define T_PSEUDO 458
#define T_RECVQ 459
#define T_RESTART 460
#define T_SERVER 461
#define T_SERVICE 462
#define T_SERVNOTICE 463
#define T_SET 464
#define T_SHARED 465
#define T_SIZE 466
#define T_SNOMODES 467
#define T_SOFTCALLERID 468
#define T_SPY 469
#define T_SSL 470
#define T_SSL_CIPHER_LIST 471
#define T_TARGET 472
#define T_UMODES 473
#define T_UNDLINE 474
#define T_UNLIMITED 475
#define T_UNRESV 476
#define T_UNXLINE 477
#define T_WALLOP 478
#define T_WALLOPS 479
#define T_WEBIRC 480
#define TBOOL 481
#define THROTTLE_COUNT 482
#define THROTTLE_TIME 483
#define TKLINE_EXPIRE_NOTICES 484
#define TMASKED 485
#define TS_MAX_DELTA 486
#define TS_WARN_DELTA 487
#define TWODOTS 488
#define TYPE 489
#define UNKLINE 490
#define USE_LOGGING 491
#define USER 492
#define VHOST 493
#define VHOST6 494
#define WARN_NO_CONNECT_BLOCK 495
#define WHOIS 496
#define WHOIS_NOTIFY 497
#define XLINE 498
#define XLINE_EXEMPT 499

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 154 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 725 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 740 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  251
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  303
/* YYNRULES -- Number of rules.  */
#define YYNRULES  675
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1341

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   499

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
       2,     2,     2,     2,   249,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   250,   245,
       2,   248,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   247,     2,   246,     2,     2,     2,     2,
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
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   402,   402,   403,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   433,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   444,   444,
     445,   446,   447,   448,   455,   457,   457,   458,   458,   458,
     460,   466,   476,   478,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   499,   539,   597,   626,   634,   648,   676,
     691,   706,   716,   730,   739,   767,   795,   820,   842,   864,
     874,   876,   876,   877,   878,   879,   880,   882,   891,   900,
     914,   913,   931,   931,   932,   932,   932,   934,   940,   951,
     950,   969,   969,   970,   970,   970,   970,   970,   972,   978,
     984,   990,  1012,  1013,  1013,  1015,  1015,  1016,  1018,  1025,
    1025,  1038,  1039,  1041,  1041,  1042,  1042,  1044,  1052,  1055,
    1061,  1060,  1066,  1066,  1067,  1071,  1075,  1079,  1083,  1087,
    1091,  1095,  1106,  1105,  1163,  1163,  1164,  1165,  1166,  1167,
    1168,  1169,  1170,  1171,  1172,  1173,  1174,  1175,  1177,  1183,
    1189,  1195,  1201,  1212,  1218,  1229,  1236,  1235,  1241,  1241,
    1242,  1246,  1250,  1254,  1258,  1262,  1266,  1270,  1274,  1278,
    1282,  1286,  1290,  1294,  1298,  1302,  1309,  1308,  1314,  1314,
    1315,  1319,  1323,  1327,  1331,  1335,  1339,  1343,  1347,  1351,
    1355,  1359,  1363,  1367,  1374,  1373,  1379,  1379,  1380,  1384,
    1388,  1392,  1396,  1400,  1404,  1408,  1412,  1416,  1420,  1424,
    1428,  1432,  1436,  1440,  1444,  1448,  1452,  1456,  1460,  1464,
    1468,  1472,  1476,  1480,  1484,  1488,  1492,  1503,  1502,  1559,
    1559,  1560,  1561,  1562,  1563,  1564,  1565,  1566,  1567,  1568,
    1569,  1570,  1571,  1572,  1572,  1573,  1574,  1575,  1576,  1578,
    1584,  1590,  1596,  1602,  1608,  1614,  1620,  1626,  1632,  1638,
    1645,  1651,  1657,  1663,  1672,  1682,  1681,  1687,  1687,  1688,
    1692,  1703,  1702,  1709,  1708,  1713,  1713,  1714,  1718,  1722,
    1728,  1728,  1729,  1729,  1729,  1729,  1729,  1731,  1731,  1733,
    1733,  1735,  1748,  1765,  1771,  1782,  1781,  1823,  1823,  1824,
    1825,  1826,  1827,  1828,  1829,  1830,  1831,  1832,  1834,  1840,
    1846,  1852,  1864,  1863,  1869,  1869,  1870,  1874,  1878,  1882,
    1886,  1890,  1894,  1898,  1902,  1906,  1912,  1926,  1935,  1949,
    1948,  1963,  1963,  1964,  1964,  1964,  1964,  1966,  1972,  1978,
    1988,  1990,  1990,  1991,  1991,  1993,  2010,  2009,  2034,  2034,
    2035,  2035,  2035,  2035,  2037,  2043,  2063,  2062,  2068,  2068,
    2069,  2073,  2077,  2081,  2085,  2089,  2093,  2097,  2101,  2105,
    2116,  2115,  2136,  2136,  2137,  2137,  2137,  2139,  2146,  2145,
    2151,  2151,  2152,  2156,  2160,  2164,  2168,  2172,  2176,  2180,
    2184,  2188,  2199,  2198,  2270,  2270,  2271,  2272,  2273,  2274,
    2275,  2276,  2277,  2278,  2279,  2280,  2281,  2282,  2283,  2284,
    2285,  2287,  2293,  2299,  2305,  2318,  2331,  2337,  2343,  2347,
    2354,  2353,  2358,  2358,  2359,  2363,  2369,  2380,  2386,  2392,
    2398,  2414,  2413,  2439,  2439,  2440,  2440,  2440,  2442,  2462,
    2473,  2472,  2499,  2499,  2500,  2500,  2500,  2502,  2508,  2518,
    2520,  2520,  2521,  2521,  2523,  2541,  2540,  2563,  2563,  2564,
    2564,  2564,  2566,  2572,  2582,  2584,  2584,  2585,  2586,  2587,
    2588,  2589,  2590,  2591,  2592,  2593,  2594,  2595,  2596,  2597,
    2598,  2599,  2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,
    2608,  2609,  2610,  2611,  2612,  2613,  2614,  2615,  2616,  2617,
    2618,  2619,  2620,  2621,  2622,  2623,  2624,  2625,  2626,  2627,
    2628,  2629,  2630,  2631,  2632,  2633,  2634,  2635,  2636,  2637,
    2640,  2645,  2650,  2655,  2664,  2673,  2682,  2691,  2697,  2702,
    2707,  2712,  2717,  2726,  2731,  2736,  2741,  2746,  2751,  2756,
    2761,  2766,  2771,  2776,  2782,  2787,  2792,  2797,  2802,  2807,
    2812,  2817,  2820,  2825,  2828,  2833,  2838,  2843,  2848,  2853,
    2858,  2863,  2868,  2873,  2878,  2883,  2888,  2893,  2899,  2898,
    2903,  2908,  2908,  2909,  2912,  2915,  2918,  2921,  2924,  2927,
    2930,  2933,  2936,  2939,  2942,  2945,  2948,  2951,  2954,  2960,
    2959,  2964,  2964,  2965,  2968,  2971,  2974,  2977,  2980,  2983,
    2986,  2989,  2992,  2995,  2998,  3003,  3008,  3013,  3022,  3024,
    3024,  3025,  3026,  3027,  3028,  3029,  3030,  3031,  3032,  3033,
    3034,  3035,  3036,  3038,  3043,  3048,  3053,  3058,  3063,  3068,
    3073,  3078,  3083,  3088,  3097,  3099,  3099,  3100,  3101,  3102,
    3103,  3104,  3105,  3106,  3107,  3108,  3109,  3111,  3117,  3133,
    3142,  3148,  3154,  3160,  3169,  3175
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
  "T_LOG", "T_NONONREG", "T_OPME", "T_PREPEND", "T_PSEUDO", "T_RECVQ",
  "T_RESTART", "T_SERVER", "T_SERVICE", "T_SERVNOTICE", "T_SET",
  "T_SHARED", "T_SIZE", "T_SNOMODES", "T_SOFTCALLERID", "T_SPY", "T_SSL",
  "T_SSL_CIPHER_LIST", "T_TARGET", "T_UMODES", "T_UNDLINE", "T_UNLIMITED",
  "T_UNRESV", "T_UNXLINE", "T_WALLOP", "T_WALLOPS", "T_WEBIRC", "TBOOL",
  "THROTTLE_COUNT", "THROTTLE_TIME", "TKLINE_EXPIRE_NOTICES", "TMASKED",
  "TS_MAX_DELTA", "TS_WARN_DELTA", "TWODOTS", "TYPE", "UNKLINE",
  "USE_LOGGING", "USER", "VHOST", "VHOST6", "WARN_NO_CONNECT_BLOCK",
  "WHOIS", "WHOIS_NOTIFY", "XLINE", "XLINE_EXEMPT", "';'", "'}'", "'{'",
  "'='", "','", "':'", "$accept", "conf", "conf_item", "timespec_",
  "timespec", "sizespec_", "sizespec", "modules_entry", "modules_items",
  "modules_item", "modules_module", "modules_path", "serverinfo_entry",
  "serverinfo_items", "serverinfo_item", "serverinfo_ssl_certificate_file",
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
     495,   496,   497,   498,   499,    59,   125,   123,    61,    44,
      58
};
# endif

#define YYPACT_NINF -1012

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1012)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1012,   689, -1012,  -230,  -207,  -205, -1012, -1012, -1012,  -198,
   -1012,  -190, -1012, -1012, -1012,  -184, -1012, -1012, -1012,  -182,
    -143, -1012,  -133, -1012,  -131, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012,   292,   402,  -105,   -88,   -63,    58,   -58,   436,   -56,
     -44,   -24,   109,   -11,    -8,    -6,   938,   479,    30,   124,
      36,    23,    47,   -31,     5,    17,    56,    21, -1012, -1012,
   -1012, -1012, -1012,    59,    73,    76,    81,    89,    92,    94,
      95,    99,   103,   104,     2, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012,   743,   627,     9,
   -1012,   107,    44, -1012, -1012,    78, -1012,   108,   115,   116,
     117,   119,   120,   125,   126,   127,   131,   132,   133,   134,
     136,   137,   138,   142,   143,   147,   148,   149,   151,   152,
     154,   156,   157,   159,   160,   161,   166,   167,   168, -1012,
   -1012,   169,   170,   174,   177,   178,   179,   180,   181,   187,
     191,   192,   193,   199,   200,   201,   203,   205,   206,   130,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012,   352,    13,    40,    93,   207,   217,    50,
   -1012, -1012, -1012,    18,   335,   144, -1012,   221,   222,   229,
     234,   241,   242,   245,   246,   248,    24, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012,   176,   252,   254,
     256,   269,   275,   279,   280,   281,   282,   284,   286,   289,
     294,   296,   300,   301,   306,   173, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012,    51,   273,   308,    35, -1012, -1012,
   -1012,   185,   196, -1012,   311,    46, -1012, -1012,     6, -1012,
     194,   240,   304,   318, -1012,   274,   387,   338,   448,   387,
     387,   449,   387,   387,   450,   451,   325, -1012,   326,   329,
     330,   342, -1012,   343,   348,   350,   351,   353,   354,   364,
     365,   374,   375,   376,   377,   378,     3, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012,   328,   381,   383,   389,   390,
     391,   392, -1012,   393,   394,   395,   396,   397,   399,   400,
     257, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012,   401,   404,    38,
   -1012, -1012, -1012,   442,   355, -1012, -1012,   411,   414,    52,
   -1012, -1012, -1012,   424,   387,   517,   387,   387,   525,   534,
     538,   539,   446,   555,   452,   556,   557,   559,   453,   454,
     455,   387,   564,   565,   552,   387,   567,   569,   387,   573,
     576,   578,   579,   581,   474,   458,   459,   475,   387,   387,
     476,   477,   483,  -213,  -203,   484,   487,   490,   494,   605,
     387,   498,   387,   387,   499,   482, -1012,   486,   480,   481,
   -1012,   489,   493,   500,   501,   502,    27, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012,   503,   504,    43,
   -1012, -1012, -1012,   508,   506,   507, -1012,   509, -1012,    49,
   -1012, -1012, -1012, -1012, -1012,   600,   602,   526, -1012,   527,
     514,   518,    54, -1012, -1012, -1012,   528,   522,   529, -1012,
     530,   531,   532,   535, -1012, -1012,   536,   537,   260, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012,   541,   540,   544,   547,    42, -1012, -1012, -1012, -1012,
     520,   549,   387,   615,   550,   655,   563,   572,   575,   558,
   -1012, -1012,   684,   672,   580,   673,   691,   692,   679,   681,
     683,   685,   686,   687,   688,   690,   693,   694,   695,   571,
   -1012,   583,   582, -1012,    86, -1012, -1012, -1012, -1012,   597,
     586, -1012,   577,   587,   590,   592,   599,   601,    55, -1012,
   -1012, -1012, -1012, -1012,   724,   613, -1012,   614,   612, -1012,
     616,    29, -1012, -1012, -1012, -1012,   623,   624,   625, -1012,
     626,   425,   629,   630,   634,   637,   638,   639,   641,   642,
     644,   645, -1012, -1012,   754,   773,   387,   649,   775,   780,
     783,   387,   786,   787,   387,   776,   792,   793,   387,   795,
     795,   670, -1012, -1012,   784,  -162,   785,   697,   788,   789,
     671,   799,   801,   800,   802,   809,   810,   812,   680, -1012,
     813,   814,   704, -1012,   705, -1012,   819,   820,   710, -1012,
     712,   713,   715,   716,   717,   720,   723,   725,   726,   727,
     728,   729,   731,   732,   733,   734,   736,   738,   742,   746,
     747,   748,   765,   766,   767,   768,   769,   770,   771,   772,
     774,   777,   653,   714,   778,   779,   781,   782,   790,   791,
     794,   796,   797,   798,   803,   804,   805,   806,   807,   808,
     811,   815,   816,   817, -1012, -1012,   827,   698,   721,   886,
     902,   889,   893,   896,   818, -1012,   897,   898,   821, -1012,
   -1012,   899,   900,   822,   915,   823, -1012,   824,   826, -1012,
   -1012,   905,   906,   828, -1012, -1012,   908,   829,   830,   913,
     914,   922,   831,   832,   833,   926,   927,   834, -1012, -1012,
     932,   933,   935,   837, -1012,   838,   839,   840,   841,   842,
     843,   844,   845,   846, -1012,   847,   848,   849,   850,   851,
     852,   853,   855,   856,   857,   858,   859,   860,   861,   862,
     863,   864, -1012, -1012,   940,   865,   866, -1012,   867, -1012,
      10, -1012,   942,   943,   944,   945,   869, -1012,   870, -1012,
   -1012,   967,   868,   978,   872, -1012, -1012, -1012, -1012, -1012,
     387,   387,   387,   387,   387,   387,   387, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   873,
     874,   875,    -7,   876,   877,   878,   879,   880,   881,   882,
     883,   884,   885,   887,   188,   888,   890, -1012,   891,   892,
     894,   895,   901,   903,   904,     4,   907,   909,   910,   911,
     912,   916,   917, -1012,   918,   919, -1012, -1012,   920,   921,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012,  -212, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012,  -185, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012,   923,   924,   409,   925,   928,
     929,   930,   931, -1012,   934,   936, -1012,   937,   939,   -33,
     947,   941, -1012, -1012, -1012, -1012,   946,   948, -1012,   949,
     950,   521,   951,   952,   953,   954,   854,   740,   955,   956,
   -1012,   957,   958,   959, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012,   960,   659, -1012, -1012,   961,   962,   963, -1012,    57,
   -1012, -1012, -1012, -1012,   964,   968,   969,   970, -1012, -1012,
     971,   745,   972, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012,  -172, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   795,
     795,   795, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012,   -66, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   653,
   -1012,   714, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012,   -64, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   -55, -1012,
    1013,   915,   973, -1012, -1012, -1012, -1012, -1012, -1012,   974,
   -1012,   975,   976, -1012, -1012, -1012,   977, -1012, -1012, -1012,
     979, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012,   -47, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012,   -32, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012,   -25, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   -23,
   -1012, -1012,  1002,   -92,   980,   985, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012,    74, -1012, -1012, -1012,    -7, -1012, -1012, -1012,
   -1012,     4, -1012, -1012, -1012,   409, -1012,   -33, -1012, -1012,
   -1012,  1000,  1001,  1004,  1003,  1006, -1012,   521, -1012,   854,
   -1012,   740, -1012,   659,   986,   987,   988,   270, -1012, -1012,
     745, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012,    90, -1012, -1012, -1012,   270,
   -1012
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   247,   412,   460,     0,
     475,     0,   315,   451,   291,     0,   100,   152,   349,     0,
       0,   390,     0,   109,     0,   366,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   642,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   630,   641,   632,   633,   634,
     635,   636,   637,   638,   631,   639,   640,     0,     0,     0,
     473,     0,     0,   471,   472,     0,   539,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   609,
     588,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     486,   487,   488,   530,   532,   533,   534,   535,   531,   525,
     526,   527,   528,   536,   524,   498,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   499,   500,   529,   504,   505,
     506,   507,   503,   502,   508,   515,   516,   509,   510,   511,
     501,   513,   522,   523,   520,   521,   538,   514,   537,   512,
     518,   519,   517,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,     0,     0,     0,   666,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   656,   657,   658,
     659,   660,   661,   662,   664,   663,   665,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    69,    66,    64,
      70,    71,    65,    55,    68,    58,    59,    60,    56,    67,
      61,    62,    63,    57,     0,     0,     0,     0,   124,   125,
     126,     0,     0,   364,     0,     0,   362,   363,     0,    96,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   629,     0,     0,
       0,     0,   285,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   254,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   252,
     253,   255,   265,   266,   267,     0,     0,     0,     0,     0,
       0,     0,   440,     0,     0,     0,     0,     0,     0,     0,
       0,   415,   416,   417,   418,   419,   420,   421,   423,   422,
     425,   429,   426,   427,   428,   424,   466,     0,     0,     0,
     463,   464,   465,     0,     0,   470,   481,     0,     0,     0,
     478,   479,   480,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   485,     0,     0,     0,
     332,     0,     0,     0,     0,     0,     0,   318,   319,   320,
     321,   326,   322,   323,   324,   325,   457,     0,     0,     0,
     454,   455,   456,     0,     0,     0,   293,     0,   303,     0,
     301,   302,   304,   305,    49,     0,     0,     0,    45,     0,
       0,     0,     0,   103,   104,   105,     0,     0,     0,   214,
       0,     0,     0,     0,   196,   176,     0,     0,     0,   155,
     156,   157,   158,   159,   162,   163,   164,   161,   160,   166,
     165,     0,     0,     0,     0,     0,   352,   353,   354,   355,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     655,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,   398,     0,   393,   394,   395,   127,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   115,   114,   116,     0,     0,   361,     0,     0,   376,
       0,     0,   369,   370,   371,   372,     0,     0,     0,    90,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   628,   268,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   249,   430,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   414,
       0,     0,     0,   462,     0,   469,     0,     0,     0,   477,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   484,   327,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   317,     0,     0,     0,   453,
     306,     0,     0,     0,     0,     0,   300,     0,     0,    44,
     106,     0,     0,     0,   102,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,   356,
       0,     0,     0,     0,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   654,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,   396,     0,     0,     0,   392,     0,   122,
       0,   117,     0,     0,     0,     0,     0,   111,     0,   360,
     373,     0,     0,     0,     0,   368,    99,    98,    97,   652,
      28,    28,    28,    28,    28,    28,    28,    30,    29,   653,
     643,   644,   645,   646,   647,   648,   649,   651,   650,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,   248,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   413,     0,     0,   461,   474,     0,     0,
     476,   557,   561,   540,   541,   576,   543,   544,   545,   546,
     547,   627,   584,   548,   549,   581,   556,   555,   564,   554,
     550,   551,   552,   587,   560,   559,   558,   590,   582,   542,
     625,   626,   580,   614,   620,   613,   623,   617,   621,   622,
     616,   619,   615,   618,   624,     0,   612,   594,   595,   596,
     607,   608,   602,   593,   605,   599,   603,   604,   598,   601,
     597,   600,   606,     0,   592,   577,   575,   578,   583,   579,
     566,   573,   574,   571,   572,   567,   568,   569,   570,   585,
     586,   553,   563,   562,   565,     0,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,   452,     0,     0,     0,
     311,   307,   310,   292,    50,    51,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     153,     0,     0,     0,   350,   670,   667,   668,   669,   674,
     673,   675,   671,   672,    86,    81,    89,    80,    87,    88,
      79,    83,    82,    74,    73,    78,    75,    77,    76,    84,
      85,     0,     0,   391,   128,     0,     0,     0,   140,     0,
     132,   133,   135,   134,     0,     0,     0,     0,   110,   365,
       0,     0,     0,   367,    31,    32,    33,    34,    35,    36,
      37,   280,   281,   272,   290,   289,     0,   288,   273,   275,
     277,   284,   276,   274,   283,   269,   282,   271,   270,    38,
      38,    38,    40,    39,   278,   279,   435,   438,   439,   449,
     446,   432,   447,   444,   445,     0,   443,   448,   431,   437,
     434,   436,   450,   433,   467,   468,   482,   483,   610,     0,
     589,     0,   330,   331,   341,   337,   338,   340,   345,   342,
     343,   336,   344,   339,     0,   335,   329,   348,   347,   346,
     328,   459,   458,   314,   313,   298,   299,   297,     0,   296,
       0,     0,     0,   107,   108,   175,   172,   233,   245,   221,
     230,     0,   219,   224,   239,   246,     0,   232,   237,   243,
     223,   226,   234,   236,   240,   231,   238,   227,   244,   229,
     235,   225,   228,     0,   217,   168,   170,   173,   174,   211,
     200,   209,   202,   203,   208,   206,   204,   212,   205,   213,
     207,   210,   201,     0,   199,   181,   182,   183,   194,   195,
     189,   180,   192,   186,   190,   191,   185,   188,   184,   187,
     193,     0,   179,   169,   171,   359,   357,   358,   397,   402,
     408,   411,   404,   410,   405,   409,   407,   403,   406,     0,
     401,   136,     0,     0,     0,     0,   131,   119,   118,   120,
     121,   374,   380,   386,   389,   382,   388,   383,   387,   385,
     381,   384,     0,   379,   375,   286,     0,    41,    42,    43,
     441,     0,   611,   591,   333,     0,   294,     0,   312,   309,
     308,     0,     0,     0,     0,     0,   215,     0,   197,     0,
     177,     0,   399,     0,     0,     0,     0,     0,   130,   377,
       0,   287,   442,   334,   295,   220,   242,   218,   241,   222,
     216,   198,   178,   400,   137,   139,   138,   150,   149,   145,
     147,   151,   148,   144,   146,     0,   143,   378,   141,     0,
     142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1012, -1012, -1012,  -235,  -314, -1011,  -649, -1012, -1012,   983,
   -1012, -1012, -1012, -1012,   759, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012,  1068, -1012, -1012, -1012, -1012, -1012,
   -1012,   635, -1012, -1012, -1012, -1012, -1012,   553, -1012, -1012,
   -1012, -1012, -1012, -1012,   750, -1012, -1012, -1012, -1012,    91,
   -1012, -1012, -1012, -1012, -1012,  -186, -1012, -1012, -1012,   631,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012,  -141, -1012, -1012, -1012,  -132, -1012, -1012, -1012,  -139,
   -1012, -1012, -1012,   825, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012,  -104, -1012, -1012, -1012, -1012, -1012,  -110,
   -1012,   708, -1012, -1012, -1012,    22, -1012, -1012, -1012, -1012,
   -1012,   702, -1012, -1012, -1012, -1012, -1012, -1012, -1012,  -100,
   -1012, -1012, -1012, -1012, -1012, -1012,   643, -1012, -1012, -1012,
   -1012, -1012,   965, -1012, -1012, -1012, -1012,   608, -1012, -1012,
   -1012, -1012, -1012,  -124, -1012, -1012, -1012,   603, -1012, -1012,
   -1012, -1012,  -114, -1012, -1012, -1012,   871, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   -89, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012,   719, -1012, -1012,
   -1012, -1012, -1012,   835, -1012, -1012, -1012, -1012,  1108, -1012,
   -1012, -1012, -1012,   836, -1012, -1012, -1012, -1012,  1052, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,   105,
   -1012, -1012, -1012,   106, -1012, -1012, -1012, -1012, -1012,  1128,
   -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012,   991, -1012, -1012, -1012, -1012, -1012, -1012,
   -1012, -1012, -1012
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   847,   848,  1102,  1103,    27,   229,   230,
     231,   232,    28,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,    29,    77,    78,    79,    80,    81,    30,    63,
     512,   513,   514,   515,    31,    70,   598,   599,   600,   601,
     602,   603,    32,   297,   298,   299,   300,   301,  1059,  1060,
    1061,  1062,  1063,  1254,  1335,  1336,    33,    64,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   774,
    1231,  1232,   539,   773,  1213,  1214,   540,   768,  1193,  1194,
      34,    53,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   637,  1086,  1087,    35,    61,   498,   753,  1158,  1159,
     499,   500,   501,  1162,  1001,  1002,   502,   503,    36,    59,
     476,   477,   478,   479,   480,   481,   482,   738,  1144,  1145,
     483,   484,   485,    37,    65,   545,   546,   547,   548,   549,
      38,   305,   306,   307,    39,    72,   611,   612,   613,   614,
     615,   832,  1272,  1273,    40,    68,   584,   585,   586,   587,
     815,  1249,  1250,    41,    54,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   660,  1115,  1116,   391,
     392,   393,   394,   395,    42,    60,   489,   490,   491,   492,
      43,    55,   399,   400,   401,   402,    44,   112,   113,   114,
      45,    57,   409,   410,   411,   412,    46,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   446,   218,   963,   964,
     219,   445,   945,   946,   220,   221,   222,    47,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    48,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     875,   876,   622,    82,   328,   625,   626,   607,   628,   629,
     396,  1055,  1113,   720,   486,    49,    50,   721,  1155,   509,
     329,   330,    73,   722,   303,   236,   874,   723,   467,   331,
     607,    83,    84,  1128,   879,   880,   295,  1129,    85,   396,
      51,   493,    52,   541,   486,   110,   468,   303,  1084,    56,
     493,   226,   581,   406,    74,   509,   593,    58,  1055,   110,
    1130,   237,    75,    62,  1131,    66,    86,    87,    88,   469,
     238,   239,   240,  1275,   332,   241,   242,  1276,   397,   406,
     243,   244,   245,    89,    90,    91,   542,   581,  1277,  1278,
    1279,    92,    93,   333,   334,   335,   336,   337,   470,   494,
     681,   338,   683,   684,    67,   510,   339,   397,   494,   495,
     226,   496,   340,   111,    69,   608,    71,   698,   495,  1056,
     496,   702,   341,   342,   705,   295,  1085,   111,  1305,   543,
      76,   116,   304,   343,   715,   716,   117,   118,   608,   119,
     120,   510,   107,   398,   121,   541,   729,   487,   731,   732,
     122,   123,   124,   125,   471,   304,   227,   126,   127,   108,
     582,   407,   472,   473,   594,   128,  1056,   344,   129,   130,
     131,   497,   398,  1156,   257,   132,   544,   487,   228,  1280,
     497,  1284,  1157,  1281,   109,  1285,   408,   407,   542,   115,
    1286,   223,   133,   134,  1287,   582,   474,   593,  1296,  1099,
    1100,  1101,  1297,   224,   258,   135,   259,   345,   136,   137,
     138,   511,   408,  1298,   309,   227,   139,  1299,   140,  1114,
    1300,  1057,  1302,   225,  1301,   141,  1303,   142,  -129,   143,
     144,   543,   145,   260,   146,   147,   233,   228,   787,   234,
     609,   235,   595,   610,  1058,   261,   148,   511,   326,   651,
     488,   149,   150,   310,   151,   152,   153,   596,   365,   154,
     366,   516,   367,   609,   475,   311,   610,   313,  1057,   262,
     559,   296,   597,   744,   263,   834,   368,   294,   544,   517,
     488,   590,   264,   302,   672,   583,   265,   266,   783,   748,
     404,  1058,   605,    73,   308,   755,   507,   155,   678,   369,
     763,   826,   518,  1255,   312,   594,   874,   315,   156,   157,
     158,   159,   160,   161,   162,   267,   370,  -129,   371,  1309,
     583,   316,   861,  1310,   317,    74,   616,   866,   372,   318,
     869,   519,   816,    75,   873,  1338,   516,   319,   504,  1339,
     320,   373,   321,   322,  1327,   268,  1328,   323,   269,   270,
     271,   324,   325,   467,   517,   403,   413,   163,   164,   165,
     296,   166,   167,   414,   415,   416,   374,   417,   418,   520,
     168,   468,   617,   419,   420,   421,   465,   518,   592,   422,
     423,   424,   425,   595,   426,   427,   428,   521,   375,   272,
     429,   430,   620,  1329,   469,   431,   432,   433,   596,   434,
     435,    76,   436,    82,   437,   438,   519,   439,   440,   441,
    1330,   273,   274,   597,   442,   443,   444,   447,   448,   579,
     376,   561,   449,   470,  1134,   450,   451,   452,   453,   454,
     377,    83,    84,   522,   523,   455,   618,   116,    85,   456,
     457,   458,   117,   118,   520,   119,   120,   459,   460,   461,
     121,   462,  1135,   463,   464,   505,   122,   123,   124,   125,
    1331,  1332,   521,   126,   127,   506,    86,    87,    88,   550,
     551,   128,   524,   378,   129,   130,   131,   552,   525,   471,
     257,   132,   553,    89,    90,    91,  1136,   472,   473,   554,
     555,    92,    93,   556,   557,   379,   558,   526,   133,   134,
     562,   527,   563,   668,   564,   621,   777,  1333,   522,   523,
     258,   135,   259,  1334,   136,   137,   138,   565,   588,  1137,
    1138,   474,   139,   566,   140,  1167,  1139,   567,   568,   569,
     570,   141,   571,   142,   572,   143,   144,   573,   145,   260,
     146,   147,   574,   621,   575,  1168,  1169,   524,   576,   577,
    1140,   261,   148,   525,   578,  1170,   589,   149,   150,   604,
     151,   152,   153,   619,   623,   154,   624,   627,   630,   631,
     632,   633,   526,   653,   674,   262,   527,   634,   635,  1141,
     263,   840,   841,   842,   843,   844,   845,   846,   264,   475,
     636,   638,   265,   266,  1171,  1172,   639,  1173,   640,   641,
     675,   642,   643,   155,  1306,  1074,  1075,  1076,  1077,  1078,
    1079,  1080,   644,   645,   156,   157,   158,   159,   160,   161,
     162,   267,   646,   647,   648,   649,   650,  1174,   365,   654,
     366,   655,   367,  1175,  1142,   682,  1176,   656,   657,   658,
     659,   661,   662,   663,   664,   665,   368,   666,   667,   670,
     680,   268,   671,  1143,   269,   270,   271,   685,  1177,   676,
    1178,  1179,   677,   163,   164,   165,   686,   166,   167,   369,
     687,   688,   689,   690,   692,   693,   168,   694,   691,   695,
     696,   697,   699,   700,   701,   703,   370,   704,   371,     2,
       3,   706,  1180,     4,   707,   272,   708,   709,   372,   710,
     711,   714,   717,   718,   933,     5,   712,   713,     6,   719,
     724,   373,  1181,   725,     7,  1182,   726,   273,   274,  1183,
     727,     8,  1184,   728,   730,   733,  1185,   734,   736,   737,
    1186,   735,   757,     9,   758,  1239,   374,   739,    10,    11,
    1187,   740,  1188,  1189,   328,  1190,   785,   788,   741,   742,
     743,   746,   747,   750,   751,   752,  1191,   754,   375,    12,
     329,   330,   761,    13,  1192,   947,   762,   948,   949,   331,
     766,   759,   760,   765,    14,   786,   789,   767,   769,   770,
     771,   950,   951,   772,   775,   776,   779,   790,   780,   791,
     376,  1215,   781,  1216,  1217,   782,    15,    16,   792,  1240,
     377,   793,   795,   794,   796,   798,   797,  1218,  1219,   799,
     800,   801,    17,   802,   332,   803,   812,   804,   805,   806,
     807,  1262,   808,   818,   820,   809,   810,   811,   813,    18,
     814,   819,   821,   333,   334,   335,   336,   337,   822,   934,
     823,   338,   935,   378,  1241,   936,   339,   824,   937,   825,
    1242,   938,   340,   939,    19,    20,   828,  1243,   829,   830,
     831,   940,   341,   342,   833,   379,   941,   942,   836,   837,
     838,   839,   859,   343,   849,   850,   943,    21,  1244,   851,
    1245,  1246,   852,   853,   854,  1263,   855,   856,    22,   857,
     858,   860,    23,   863,  1247,   944,    24,   862,   864,    25,
     952,   865,  1248,   953,   867,   868,   954,   344,   870,   955,
     871,   872,   956,   874,   957,   877,   878,   881,   888,   885,
     883,   884,   958,   882,   986,   893,  1220,   959,   960,  1221,
    1264,   886,  1222,   887,   889,  1223,  1265,   961,  1224,   236,
    1225,   890,   891,  1266,   892,   894,   895,   345,  1226,   896,
     897,   898,   899,  1227,  1228,   900,   962,   901,   902,   985,
     903,   904,   905,  1229,  1267,   906,  1268,  1269,   907,   987,
     908,   909,   910,   911,   912,   237,   913,   914,   915,   916,
    1270,   917,  1230,   918,   238,   239,   240,   919,  1271,   241,
     242,   920,   921,   922,   243,   244,   245,  1199,  1200,  1201,
    1202,  1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,
     923,   924,   925,   926,   927,   928,   929,   930,   988,   931,
     989,   990,   932,   965,   966,   991,   967,   968,   992,   994,
     995,   997,   998,  1000,   580,   969,   970,  1006,  1007,   971,
    1009,   972,   973,   974,  1212,  1012,  1013,   591,   975,   976,
     977,   978,   979,   980,  1014,  1010,   981,  1015,  1018,  1019,
     982,   983,   984,   993,  1021,  1022,   996,  1023,  1003,  1004,
     999,  1005,  1051,  1008,  1064,  1065,  1066,  1067,  1011,  1020,
    1016,  1017,  1024,  1025,  1026,  1027,  1028,  1029,  1030,  1031,
    1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1070,
    1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1049,  1050,
    1072,  1053,  1054,  1052,  1068,  1069,  1071,  1073,  1081,  1082,
    1083,  1088,  1089,  1090,  1091,  1092,  1093,  1094,  1095,  1096,
    1097,  1288,  1098,  1104,  1304,  1105,  1106,  1107,  1315,  1108,
    1109,  1316,  1317,  1318,  1319,   314,  1110,   764,  1111,  1112,
    1256,   827,  1117,  1340,  1118,  1119,  1120,  1121,  1320,   778,
    1322,  1122,  1123,  1124,  1125,  1126,  1127,  1321,  1132,  1133,
    1146,   652,  1311,  1147,  1148,  1149,  1150,  1314,   745,  1151,
    1160,  1152,  1153,  1289,  1154,  1313,  1337,   817,   784,  1323,
    1161,  1163,  1312,  1164,  1165,  1166,  1195,  1196,  1197,  1198,
    1233,  1234,  1235,  1236,  1237,  1238,  1251,   756,   749,  1257,
    1252,  1253,   508,  1258,  1259,  1260,  1261,  1274,  1290,   835,
     405,   466,   327,     0,  1291,  1292,  1293,  1294,  1307,  1295,
    1308,  1324,  1325,  1326,   673,  1282,  1283,   560,     0,     0,
       0,     0,     0,     0,     0,   679,     0,     0,     0,     0,
       0,   669,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     606
};

static const yytype_int16 yycheck[] =
{
     649,   650,   316,     1,     1,   319,   320,     1,   322,   323,
       1,     1,     8,   226,     1,   245,   246,   230,    51,     1,
      17,    18,     1,   226,     1,     1,   118,   230,     1,    26,
       1,    29,    30,   245,   196,   197,     1,   249,    36,     1,
     247,     1,   247,     1,     1,     1,    19,     1,    55,   247,
       1,     1,     1,     1,    33,     1,     1,   247,     1,     1,
     245,    37,    41,   247,   249,   247,    64,    65,    66,    42,
      46,    47,    48,   245,    71,    51,    52,   249,    69,     1,
      56,    57,    58,    81,    82,    83,    44,     1,  1099,  1100,
    1101,    89,    90,    90,    91,    92,    93,    94,    71,    59,
     414,    98,   416,   417,   247,    87,   103,    69,    59,    69,
       1,    71,   109,    69,   247,   109,   247,   431,    69,   109,
      71,   435,   119,   120,   438,     1,   133,    69,   220,    87,
     109,     1,   109,   130,   448,   449,     6,     7,   109,     9,
      10,    87,   247,   134,    14,     1,   460,   134,   462,   463,
      20,    21,    22,    23,   127,   109,   106,    27,    28,   247,
     109,   109,   135,   136,   109,    35,   109,   164,    38,    39,
      40,   131,   134,   206,     1,    45,   134,   134,   128,   245,
     131,   245,   215,   249,   247,   249,   134,   109,    44,   247,
     245,   247,    62,    63,   249,   109,   169,     1,   245,    11,
      12,    13,   249,   247,    31,    75,    33,   204,    78,    79,
      80,   193,   134,   245,   245,   106,    86,   249,    88,   215,
     245,   211,   245,   247,   249,    95,   249,    97,   193,    99,
     100,    87,   102,    60,   104,   105,   247,   128,   552,   247,
     234,   247,   187,   237,   234,    72,   116,   193,   246,   246,
     237,   121,   122,   248,   124,   125,   126,   202,     1,   129,
       3,     1,     5,   234,   237,   248,   237,   246,   211,    96,
     246,   236,   217,   246,   101,   246,    19,   247,   134,    19,
     237,   246,   109,   247,   246,   234,   113,   114,   246,   246,
     246,   234,   246,     1,   247,   246,   246,   167,   246,    42,
     246,   246,    42,   246,   248,   109,   118,   248,   178,   179,
     180,   181,   182,   183,   184,   142,    59,   193,    61,   245,
     234,   248,   636,   249,   248,    33,   132,   641,    71,   248,
     644,    71,   246,    41,   648,   245,     1,   248,   245,   249,
     248,    84,   248,   248,    74,   172,    76,   248,   175,   176,
     177,   248,   248,     1,    19,   248,   248,   227,   228,   229,
     236,   231,   232,   248,   248,   248,   109,   248,   248,   109,
     240,    19,   132,   248,   248,   248,   246,    42,   193,   248,
     248,   248,   248,   187,   248,   248,   248,   127,   131,   216,
     248,   248,   118,   123,    42,   248,   248,   248,   202,   248,
     248,   109,   248,     1,   248,   248,    71,   248,   248,   248,
     140,   238,   239,   217,   248,   248,   248,   248,   248,   246,
     163,   245,   248,    71,    15,   248,   248,   248,   248,   248,
     173,    29,    30,   173,   174,   248,   132,     1,    36,   248,
     248,   248,     6,     7,   109,     9,    10,   248,   248,   248,
      14,   248,    43,   248,   248,   248,    20,    21,    22,    23,
     190,   191,   127,    27,    28,   248,    64,    65,    66,   248,
     248,    35,   212,   216,    38,    39,    40,   248,   218,   127,
       1,    45,   248,    81,    82,    83,    77,   135,   136,   248,
     248,    89,    90,   248,   248,   238,   248,   237,    62,    63,
     248,   241,   248,   246,   248,   118,   246,   237,   173,   174,
      31,    75,    33,   243,    78,    79,    80,   248,   245,   110,
     111,   169,    86,   248,    88,     4,   117,   248,   248,   248,
     248,    95,   248,    97,   248,    99,   100,   248,   102,    60,
     104,   105,   248,   118,   248,    24,    25,   212,   248,   248,
     141,    72,   116,   218,   248,    34,   248,   121,   122,   248,
     124,   125,   126,   245,   226,   129,   118,   118,   118,   118,
     245,   245,   237,   245,   132,    96,   241,   248,   248,   170,
     101,   156,   157,   158,   159,   160,   161,   162,   109,   237,
     248,   248,   113,   114,    73,    74,   248,    76,   248,   248,
     245,   248,   248,   167,  1253,   840,   841,   842,   843,   844,
     845,   846,   248,   248,   178,   179,   180,   181,   182,   183,
     184,   142,   248,   248,   248,   248,   248,   106,     1,   248,
       3,   248,     5,   112,   225,   118,   115,   248,   248,   248,
     248,   248,   248,   248,   248,   248,    19,   248,   248,   248,
     226,   172,   248,   244,   175,   176,   177,   132,   137,   248,
     139,   140,   248,   227,   228,   229,   132,   231,   232,    42,
     132,   132,   226,   118,   118,   118,   240,   118,   226,   226,
     226,   226,   118,   118,   132,   118,    59,   118,    61,     0,
       1,   118,   171,     4,   118,   216,   118,   118,    71,   118,
     226,   226,   226,   226,    51,    16,   248,   248,    19,   226,
     226,    84,   191,   226,    25,   194,   226,   238,   239,   198,
     226,    32,   201,   118,   226,   226,   205,   245,   248,   248,
     209,   245,   132,    44,   132,    76,   109,   248,    49,    50,
     219,   248,   221,   222,     1,   224,   226,   132,   248,   248,
     248,   248,   248,   245,   248,   248,   235,   248,   131,    70,
      17,    18,   248,    74,   243,    51,   248,    53,    54,    26,
     248,   245,   245,   245,    85,   226,   226,   248,   248,   248,
     248,    67,    68,   248,   248,   248,   245,   132,   248,   226,
     163,    51,   248,    53,    54,   248,   107,   108,   226,   140,
     173,   226,   118,   245,   132,   132,   226,    67,    68,   118,
     118,   132,   123,   132,    71,   132,   245,   132,   132,   132,
     132,    76,   132,   226,   247,   132,   132,   132,   245,   140,
     248,   245,   245,    90,    91,    92,    93,    94,   248,   186,
     248,    98,   189,   216,   185,   192,   103,   248,   195,   248,
     191,   198,   109,   200,   165,   166,   132,   198,   245,   245,
     248,   208,   119,   120,   248,   238,   213,   214,   245,   245,
     245,   245,   118,   130,   245,   245,   223,   188,   219,   245,
     221,   222,   245,   245,   245,   140,   245,   245,   199,   245,
     245,   118,   203,   118,   235,   242,   207,   248,   118,   210,
     186,   118,   243,   189,   118,   118,   192,   164,   132,   195,
     118,   118,   198,   118,   200,   245,   132,   132,   118,   248,
     132,   132,   208,   226,   226,   245,   186,   213,   214,   189,
     185,   132,   192,   132,   132,   195,   191,   223,   198,     1,
     200,   132,   132,   198,   132,   132,   132,   204,   208,   245,
     245,   132,   132,   213,   214,   245,   242,   245,   245,   132,
     245,   245,   245,   223,   219,   245,   221,   222,   245,   248,
     245,   245,   245,   245,   245,    37,   245,   245,   245,   245,
     235,   245,   242,   245,    46,    47,    48,   245,   243,    51,
      52,   245,   245,   245,    56,    57,    58,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     245,   245,   245,   245,   245,   245,   245,   245,   132,   245,
     118,   132,   245,   245,   245,   132,   245,   245,   132,   132,
     132,   132,   132,   118,   275,   245,   245,   132,   132,   245,
     132,   245,   245,   245,   190,   132,   132,   297,   245,   245,
     245,   245,   245,   245,   132,   226,   245,   226,   132,   132,
     245,   245,   245,   245,   132,   132,   245,   132,   245,   245,
     248,   245,   132,   245,   132,   132,   132,   132,   248,   245,
     248,   248,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   132,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     132,   245,   245,   248,   245,   245,   248,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   118,   245,   245,   132,   245,   245,   245,   138,   245,
     245,   140,   138,   140,   138,    77,   245,   512,   245,   245,
    1059,   598,   245,  1339,   245,   245,   245,   245,  1297,   528,
    1301,   245,   245,   245,   245,   245,   245,  1299,   245,   245,
     245,   346,  1276,   245,   245,   245,   245,  1287,   476,   245,
     233,   245,   245,  1161,   245,  1285,  1310,   584,   545,  1303,
     249,   245,  1281,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   499,   489,   245,
     248,   248,   229,   245,   245,   245,   245,   245,   245,   611,
     112,   169,    94,    -1,   250,   250,   250,   250,   248,   250,
     245,   245,   245,   245,   399,  1129,  1131,   246,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,
      -1,   380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     305
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   252,     0,     1,     4,    16,    19,    25,    32,    44,
      49,    50,    70,    74,    85,   107,   108,   123,   140,   165,
     166,   188,   199,   203,   207,   210,   253,   258,   263,   283,
     289,   295,   303,   317,   341,   365,   379,   394,   401,   405,
     415,   424,   445,   451,   457,   461,   467,   528,   542,   245,
     246,   247,   247,   342,   425,   452,   247,   462,   247,   380,
     446,   366,   247,   290,   318,   395,   247,   247,   416,   247,
     296,   247,   406,     1,    33,    41,   109,   284,   285,   286,
     287,   288,     1,    29,    30,    36,    64,    65,    66,    81,
      82,    83,    89,    90,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   247,   247,   247,
       1,    69,   458,   459,   460,   247,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    23,    27,    28,    35,    38,
      39,    40,    45,    62,    63,    75,    78,    79,    80,    86,
      88,    95,    97,    99,   100,   102,   104,   105,   116,   121,
     122,   124,   125,   126,   129,   167,   178,   179,   180,   181,
     182,   183,   184,   227,   228,   229,   231,   232,   240,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   518,   521,
     525,   526,   527,   247,   247,   247,     1,   106,   128,   259,
     260,   261,   262,   247,   247,   247,     1,    37,    46,    47,
      48,    51,    52,    56,    57,    58,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552,   553,     1,    31,    33,
      60,    72,    96,   101,   109,   113,   114,   142,   172,   175,
     176,   177,   216,   238,   239,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,   282,   247,     1,   236,   304,   305,   306,
     307,   308,   247,     1,   109,   402,   403,   404,   247,   245,
     248,   248,   248,   246,   285,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   246,   530,     1,    17,
      18,    26,    71,    90,    91,    92,    93,    94,    98,   103,
     109,   119,   120,   130,   164,   204,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,     1,     3,     5,    19,    42,
      59,    61,    71,    84,   109,   131,   163,   173,   216,   238,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   440,   441,   442,   443,   444,     1,    69,   134,   453,
     454,   455,   456,   248,   246,   459,     1,   109,   134,   463,
     464,   465,   466,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   522,   517,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   246,   469,     1,    19,    42,
      71,   127,   135,   136,   169,   237,   381,   382,   383,   384,
     385,   386,   387,   391,   392,   393,     1,   134,   237,   447,
     448,   449,   450,     1,    59,    69,    71,   131,   367,   371,
     372,   373,   377,   378,   245,   248,   248,   246,   260,     1,
      87,   193,   291,   292,   293,   294,     1,    19,    42,    71,
     109,   127,   173,   174,   212,   218,   237,   241,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   333,
     337,     1,    44,    87,   134,   396,   397,   398,   399,   400,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   246,
     544,   245,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   246,
     265,     1,   109,   234,   417,   418,   419,   420,   245,   248,
     246,   305,   193,     1,   109,   187,   202,   217,   297,   298,
     299,   300,   301,   302,   248,   246,   403,     1,   109,   234,
     237,   407,   408,   409,   410,   411,   132,   132,   132,   245,
     118,   118,   255,   226,   118,   255,   255,   118,   255,   255,
     118,   118,   245,   245,   248,   248,   248,   362,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   246,   344,   245,   248,   248,   248,   248,   248,   248,
     437,   248,   248,   248,   248,   248,   248,   248,   246,   427,
     248,   248,   246,   454,   132,   245,   248,   248,   246,   464,
     226,   255,   118,   255,   255,   132,   132,   132,   132,   226,
     118,   226,   118,   118,   118,   226,   226,   226,   255,   118,
     118,   132,   255,   118,   118,   255,   118,   118,   118,   118,
     118,   226,   248,   248,   226,   255,   255,   226,   226,   226,
     226,   230,   226,   230,   226,   226,   226,   226,   118,   255,
     226,   255,   255,   226,   245,   245,   248,   248,   388,   248,
     248,   248,   248,   248,   246,   382,   248,   248,   246,   448,
     245,   248,   248,   368,   248,   246,   372,   132,   132,   245,
     245,   248,   248,   246,   292,   245,   248,   248,   338,   248,
     248,   248,   248,   334,   330,   248,   248,   246,   320,   245,
     248,   248,   248,   246,   397,   226,   226,   255,   132,   226,
     132,   226,   226,   226,   245,   118,   132,   226,   132,   118,
     118,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   245,   245,   248,   421,   246,   418,   226,   245,
     247,   245,   248,   248,   248,   248,   246,   298,   132,   245,
     245,   248,   412,   248,   246,   408,   245,   245,   245,   245,
     156,   157,   158,   159,   160,   161,   162,   254,   255,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   118,
     118,   255,   248,   118,   118,   118,   255,   118,   118,   255,
     132,   118,   118,   255,   118,   257,   257,   245,   132,   196,
     197,   132,   226,   132,   132,   248,   132,   132,   118,   132,
     132,   132,   132,   245,   132,   132,   245,   245,   132,   132,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,    51,   186,   189,   192,   195,   198,   200,
     208,   213,   214,   223,   242,   523,   524,    51,    53,    54,
      67,    68,   186,   189,   192,   195,   198,   200,   208,   213,
     214,   223,   242,   519,   520,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   132,   226,   248,   132,   118,
     132,   132,   132,   245,   132,   132,   245,   132,   132,   248,
     118,   375,   376,   245,   245,   245,   132,   132,   245,   132,
     226,   248,   132,   132,   132,   226,   248,   248,   132,   132,
     245,   132,   132,   132,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   132,   248,   245,   245,     1,   109,   211,   234,   309,
     310,   311,   312,   313,   132,   132,   132,   132,   245,   245,
     132,   248,   132,   245,   254,   254,   254,   254,   254,   254,
     254,   245,   245,   245,    55,   133,   363,   364,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,    11,
      12,    13,   256,   257,   245,   245,   245,   245,   245,   245,
     245,   245,   245,     8,   215,   438,   439,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   249,
     245,   249,   245,   245,    15,    43,    77,   110,   111,   117,
     141,   170,   225,   244,   389,   390,   245,   245,   245,   245,
     245,   245,   245,   245,   245,    51,   206,   215,   369,   370,
     233,   249,   374,   245,   245,   245,   245,     4,    24,    25,
      34,    73,    74,    76,   106,   112,   115,   137,   139,   140,
     171,   191,   194,   198,   201,   205,   209,   219,   221,   222,
     224,   235,   243,   339,   340,   245,   245,   245,   245,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   190,   335,   336,    51,    53,    54,    67,    68,
     186,   189,   192,   195,   198,   200,   208,   213,   214,   223,
     242,   331,   332,   245,   245,   245,   245,   245,   245,    76,
     140,   185,   191,   198,   219,   221,   222,   235,   243,   422,
     423,   245,   248,   248,   314,   246,   310,   245,   245,   245,
     245,   245,    76,   140,   185,   191,   198,   219,   221,   222,
     235,   243,   413,   414,   245,   245,   249,   256,   256,   256,
     245,   249,   524,   520,   245,   249,   245,   249,   118,   376,
     245,   250,   250,   250,   250,   250,   245,   249,   245,   249,
     245,   249,   245,   249,   132,   220,   257,   248,   245,   245,
     249,   364,   439,   390,   370,   138,   140,   138,   140,   138,
     340,   336,   332,   423,   245,   245,   245,    74,    76,   123,
     140,   190,   191,   237,   243,   315,   316,   414,   245,   249,
     316
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   251,   252,   252,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   254,   254,
     255,   255,   255,   255,   255,   255,   255,   255,   256,   256,
     257,   257,   257,   257,   258,   259,   259,   260,   260,   260,
     261,   262,   263,   264,   264,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   284,   285,   285,   285,   285,   286,   287,   288,
     290,   289,   291,   291,   292,   292,   292,   293,   294,   296,
     295,   297,   297,   298,   298,   298,   298,   298,   299,   300,
     301,   302,   303,   304,   304,   305,   305,   305,   306,   308,
     307,   309,   309,   310,   310,   310,   310,   311,   312,   312,
     314,   313,   315,   315,   316,   316,   316,   316,   316,   316,
     316,   316,   318,   317,   319,   319,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   330,   329,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   334,   333,   335,   335,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   336,
     336,   336,   336,   336,   338,   337,   339,   339,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   342,   341,   343,
     343,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   362,   361,   363,   363,   364,
     364,   366,   365,   368,   367,   369,   369,   370,   370,   370,
     371,   371,   372,   372,   372,   372,   372,   374,   373,   375,
     375,   376,   376,   377,   378,   380,   379,   381,   381,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   383,   384,
     385,   386,   388,   387,   389,   389,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   391,   392,   393,   395,
     394,   396,   396,   397,   397,   397,   397,   398,   399,   400,
     401,   402,   402,   403,   403,   404,   406,   405,   407,   407,
     408,   408,   408,   408,   409,   410,   412,   411,   413,   413,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     416,   415,   417,   417,   418,   418,   418,   419,   421,   420,
     422,   422,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   425,   424,   426,   426,   427,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   435,
     437,   436,   438,   438,   439,   439,   440,   441,   442,   443,
     444,   446,   445,   447,   447,   448,   448,   448,   449,   450,
     452,   451,   453,   453,   454,   454,   454,   455,   456,   457,
     458,   458,   459,   459,   460,   462,   461,   463,   463,   464,
     464,   464,   465,   466,   467,   468,   468,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   501,   502,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   517,   516,
     518,   519,   519,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   520,   520,   520,   520,   522,
     521,   523,   523,   524,   524,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   525,   526,   527,   528,   529,
     529,   530,   530,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   543,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553
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
       1,     1,     1,     1,     1,     1,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     5,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     0,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     0,     6,     0,     5,     3,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     0,     5,     3,
       1,     1,     3,     4,     4,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     2,     4,     4,     4,
       5,     2,     1,     1,     1,     4,     0,     6,     2,     1,
       1,     1,     1,     2,     4,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     2,     1,     1,     1,     2,     4,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     6,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       0,     5,     3,     1,     1,     1,     4,     4,     4,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     5,
       2,     1,     1,     1,     4,     0,     6,     2,     1,     1,
       1,     1,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     5,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4
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
#line 433 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2918 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2924 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2936 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 439 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 440 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 441 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 444 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 445 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 446 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 447 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 448 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 461 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 3005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 467 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 500 "conf_parser.y" /* yacc.c:1646  */
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
#line 3057 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 540 "conf_parser.y" /* yacc.c:1646  */
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
#line 3118 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 598 "conf_parser.y" /* yacc.c:1646  */
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
#line 3150 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 627 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3161 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 635 "conf_parser.y" /* yacc.c:1646  */
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
#line 3178 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 649 "conf_parser.y" /* yacc.c:1646  */
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
#line 3209 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 677 "conf_parser.y" /* yacc.c:1646  */
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
#line 3227 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 692 "conf_parser.y" /* yacc.c:1646  */
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
#line 3245 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 707 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 717 "conf_parser.y" /* yacc.c:1646  */
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
#line 3275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 731 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3287 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 740 "conf_parser.y" /* yacc.c:1646  */
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
#line 3318 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 768 "conf_parser.y" /* yacc.c:1646  */
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
#line 3349 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 796 "conf_parser.y" /* yacc.c:1646  */
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
#line 3377 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 821 "conf_parser.y" /* yacc.c:1646  */
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
#line 3402 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 843 "conf_parser.y" /* yacc.c:1646  */
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
#line 3427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 865 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 883 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3448 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 892 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3460 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 901 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3472 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 914 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3481 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 918 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3498 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 935 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3507 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 941 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 951 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3525 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 955 "conf_parser.y" /* yacc.c:1646  */
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
#line 3543 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 973 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3552 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 979 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3561 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 985 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3570 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 991 "conf_parser.y" /* yacc.c:1646  */
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
#line 3591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1019 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1025 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1029 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3622 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1045 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3633 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1053 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3641 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1056 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3649 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1061 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3658 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1068 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1072 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3676 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1076 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3685 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1080 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3694 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1084 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3703 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1088 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3712 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1092 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1096 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3730 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3742 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1113 "conf_parser.y" /* yacc.c:1646  */
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
#line 3796 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1178 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3805 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1184 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3814 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1190 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3823 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1196 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3832 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1202 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3846 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1213 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3855 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1219 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1230 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3878 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1236 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3887 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1243 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3896 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1247 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1251 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1255 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1259 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1263 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3941 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1267 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1271 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1275 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 3968 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1279 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 3977 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1283 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 3986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1287 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 3995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1291 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1295 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4013 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1299 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
}
#line 4022 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1303 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NOCTCP;
}
#line 4031 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1309 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value = 0;
}
#line 4040 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1316 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_CCONN;
}
#line 4049 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1320 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_DEBUG;
}
#line 4058 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1324 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_EXTERNAL;
}
#line 4067 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1328 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_FULL;
}
#line 4076 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1332 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_REJ;
}
#line 4085 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1336 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_SKILL;
}
#line 4094 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1340 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_NCHANGE;
}
#line 4103 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1344 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_UNAUTH;
}
#line 4112 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1348 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_KLINE;
}
#line 4121 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1352 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_DLINE;
}
#line 4130 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1356 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_XLINE;
}
#line 4139 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1360 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_BOTS;
}
#line 4148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1364 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_SERVREJ;
}
#line 4157 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1368 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_GENERAL;
}
#line 4166 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4175 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1381 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4184 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1385 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4193 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1389 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1393 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1397 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1401 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4229 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1405 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1409 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4247 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1413 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1417 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4265 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1421 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1425 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4283 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1429 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1433 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4301 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1437 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4310 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1441 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4319 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1445 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4328 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1449 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4337 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1453 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4346 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1457 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4355 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1461 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4364 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1465 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4373 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1469 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4382 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1473 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4391 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1477 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4400 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1481 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4409 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1485 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1489 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1493 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1503 "conf_parser.y" /* yacc.c:1646  */
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
#line 4453 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1515 "conf_parser.y" /* yacc.c:1646  */
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
#line 4501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1579 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1585 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4519 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1591 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4528 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1597 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4537 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1603 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1609 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1615 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1621 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4573 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1627 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4582 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1633 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1639 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4601 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1646 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4610 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1652 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4619 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1658 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1664 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4640 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1673 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1682 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1689 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4670 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1693 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1703 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 293:
#line 1709 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4696 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1715 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4705 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1719 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4714 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1723 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4723 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1731 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4729 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 311:
#line 1736 "conf_parser.y" /* yacc.c:1646  */
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
#line 4747 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1749 "conf_parser.y" /* yacc.c:1646  */
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
#line 4767 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1766 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4776 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1772 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4785 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1782 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4794 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1786 "conf_parser.y" /* yacc.c:1646  */
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
#line 4835 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1835 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4844 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1841 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4853 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1847 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4862 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1853 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4876 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1864 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1871 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4894 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1875 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1879 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4912 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1883 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4921 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1887 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1891 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1895 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1899 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4957 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1903 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1907 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4975 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1913 "conf_parser.y" /* yacc.c:1646  */
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
#line 4992 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1927 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 5004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1936 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 5016 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1949 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 5028 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1956 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 5039 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1967 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5048 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1973 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5057 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1979 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5066 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 1994 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5081 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2010 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5097 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2021 "conf_parser.y" /* yacc.c:1646  */
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
#line 5114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2038 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2044 "conf_parser.y" /* yacc.c:1646  */
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
#line 5145 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2063 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5154 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2070 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5163 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2074 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2078 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5181 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2082 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5190 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2086 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5199 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2090 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5208 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2094 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5217 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2098 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5226 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2102 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5235 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5244 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2116 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2125 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5273 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2140 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5282 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2146 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5291 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2153 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2157 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5309 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2161 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5318 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2165 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5327 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2169 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5336 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2173 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5345 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5354 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2181 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2185 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5372 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2189 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5381 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2199 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5395 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2208 "conf_parser.y" /* yacc.c:1646  */
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
#line 5461 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 2288 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5470 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2294 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5479 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2300 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5488 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2306 "conf_parser.y" /* yacc.c:1646  */
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
#line 5504 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2319 "conf_parser.y" /* yacc.c:1646  */
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
#line 5520 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2332 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5529 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2338 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5538 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2344 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5547 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2348 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5556 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2354 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 444:
#line 2360 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5573 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2364 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5582 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2370 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2381 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2387 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5614 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2393 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5623 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2399 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5637 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2414 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5646 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2418 "conf_parser.y" /* yacc.c:1646  */
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
#line 5671 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2443 "conf_parser.y" /* yacc.c:1646  */
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
#line 5694 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2463 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5703 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2473 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5712 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2477 "conf_parser.y" /* yacc.c:1646  */
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
#line 5738 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2503 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5747 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2509 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5756 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2524 "conf_parser.y" /* yacc.c:1646  */
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
#line 5773 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2541 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5782 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2545 "conf_parser.y" /* yacc.c:1646  */
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
#line 5804 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 482:
#line 2567 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5813 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2573 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5822 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2641 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5830 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2646 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5838 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2651 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5846 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2656 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5858 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2665 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5870 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2674 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5882 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2683 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
}
#line 5894 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2692 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2698 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5911 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2703 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5919 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2708 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5927 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2713 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5935 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2718 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5947 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2727 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2732 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5963 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2737 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5971 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2742 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2747 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5987 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2752 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2757 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 6003 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2762 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 6011 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2767 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 6019 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2772 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 6027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2777 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 6036 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2783 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 6044 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2788 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 6052 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2793 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 6060 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2798 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6068 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2803 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6076 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2808 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6084 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2813 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6092 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2818 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6100 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2821 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2826 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6116 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2829 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6124 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2834 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2839 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6140 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2844 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2849 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6156 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2854 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6164 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2859 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2864 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6180 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2869 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6188 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2874 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6196 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2879 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2884 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6212 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2889 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2894 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.map_split_timeout = (yyvsp[-1].number);
}
#line 6228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2899 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6236 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_split_history = (yyvsp[-1].number);
}
#line 6244 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2910 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6252 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2913 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6260 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2916 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6268 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2919 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6276 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2922 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6284 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2925 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2928 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2931 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6308 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2934 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6316 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2937 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6324 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2940 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2943 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6340 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2946 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2949 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6356 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2952 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
}
#line 6364 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2955 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NOCTCP;
}
#line 6372 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2960 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6380 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2966 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6388 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2969 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6396 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2972 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6404 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2975 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6412 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2978 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2981 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6428 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2984 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2987 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6444 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2990 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6452 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2993 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6460 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2996 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6468 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2999 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3004 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6484 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3009 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3014 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6500 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3039 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6508 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3044 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3049 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6524 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3054 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6532 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3059 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6540 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3064 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6548 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3069 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6556 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3074 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3079 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6572 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3084 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3089 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6588 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3112 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6597 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3118 "conf_parser.y" /* yacc.c:1646  */
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
#line 6616 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3134 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3143 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6637 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3149 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6646 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3155 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6655 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3161 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3170 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6676 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3176 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6685 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6689 "conf_parser.c" /* yacc.c:1646  */
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
