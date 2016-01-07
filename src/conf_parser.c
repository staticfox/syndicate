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
    IP = 323,
    IRCD_AUTH = 324,
    IRCD_FLAGS = 325,
    IRCD_SID = 326,
    JOIN = 327,
    KILL = 328,
    KILL_CHASE_TIME_LIMIT = 329,
    KLINE = 330,
    KLINE_EXEMPT = 331,
    KLINE_MIN_CIDR = 332,
    KLINE_MIN_CIDR6 = 333,
    KLINE_REASON = 334,
    KNOCK_CLIENT_COUNT = 335,
    KNOCK_CLIENT_TIME = 336,
    KNOCK_DELAY_CHANNEL = 337,
    LEAF_MASK = 338,
    LISTEN = 339,
    MAP_SPLIT_TIMEOUT = 340,
    MASK = 341,
    MAX_ACCEPT = 342,
    MAX_BANS = 343,
    MAX_CHANNELS = 344,
    MAX_GLOBAL = 345,
    MAX_IDENT = 346,
    MAX_IDLE = 347,
    MAX_LOCAL = 348,
    MAX_NICK_CHANGES = 349,
    MAX_NICK_LENGTH = 350,
    MAX_NICK_TIME = 351,
    MAX_NUMBER = 352,
    MAX_SPLIT_HISTORY = 353,
    MAX_TARGETS = 354,
    MAX_TOPIC_LENGTH = 355,
    MAX_WATCH = 356,
    MIN_IDLE = 357,
    MIN_NONWILDCARD = 358,
    MIN_NONWILDCARD_SIMPLE = 359,
    MODULE = 360,
    MODULES = 361,
    MOTD = 362,
    NAME = 363,
    NEED_IDENT = 364,
    NEED_PASSWORD = 365,
    NETADMIN = 366,
    NETWORK_DESC = 367,
    NETWORK_NAME = 368,
    NICK = 369,
    NO_OPER_FLOOD = 370,
    NO_TILDE = 371,
    NUMBER = 372,
    NUMBER_PER_CIDR = 373,
    NUMBER_PER_IP = 374,
    OPER_ONLY_UMODES = 375,
    OPER_UMODES = 376,
    OPERATOR = 377,
    OPERS_BYPASS_CALLERID = 378,
    PACE_WAIT = 379,
    PACE_WAIT_SIMPLE = 380,
    PASSWORD = 381,
    PATH = 382,
    PING_COOKIE = 383,
    PING_TIME = 384,
    PORT = 385,
    QSTRING = 386,
    RANDOM_IDLE = 387,
    REASON = 388,
    REDIRPORT = 389,
    REDIRSERV = 390,
    REHASH = 391,
    REMOTE = 392,
    REMOTEBAN = 393,
    RESV = 394,
    RESV_EXEMPT = 395,
    RSA_PRIVATE_KEY_FILE = 396,
    S_BOTS = 397,
    S_CCONN = 398,
    S_DLINESPAM = 399,
    S_EXTERNAL = 400,
    S_FULL = 401,
    S_KLINESPAM = 402,
    S_NCHANGE = 403,
    S_REJ = 404,
    S_SERVREJ = 405,
    S_SKILL = 406,
    S_SNOGENERAL = 407,
    S_UNAUTH = 408,
    S_XLINESPAM = 409,
    SECONDS = 410,
    MINUTES = 411,
    HOURS = 412,
    DAYS = 413,
    WEEKS = 414,
    MONTHS = 415,
    YEARS = 416,
    SEND_PASSWORD = 417,
    SENDQ = 418,
    SERVERHIDE = 419,
    SERVERINFO = 420,
    SHORT_MOTD = 421,
    SNOMODES = 422,
    SPOOF = 423,
    SPOOF_NOTICE = 424,
    SQUIT = 425,
    SSL_CERTIFICATE_FILE = 426,
    SSL_CERTIFICATE_FINGERPRINT = 427,
    SSL_CONNECTION_REQUIRED = 428,
    SSL_DH_ELLIPTIC_CURVE = 429,
    SSL_DH_PARAM_FILE = 430,
    SSL_MESSAGE_DIGEST_ALGORITHM = 431,
    STATS_E_DISABLED = 432,
    STATS_I_OPER_ONLY = 433,
    STATS_K_OPER_ONLY = 434,
    STATS_M_OPER_ONLY = 435,
    STATS_O_OPER_ONLY = 436,
    STATS_P_OPER_ONLY = 437,
    STATS_U_OPER_ONLY = 438,
    T_ALL = 439,
    T_CALLERID = 440,
    T_COMMAND = 441,
    T_CLUSTER = 442,
    T_DEAF = 443,
    S_DEBUG = 444,
    T_DLINE = 445,
    T_FARCONNECT = 446,
    T_FILE = 447,
    T_GLOBOPS = 448,
    T_INVISIBLE = 449,
    T_IPV4 = 450,
    T_IPV6 = 451,
    T_LOCOPS = 452,
    T_LOG = 453,
    T_NONONREG = 454,
    T_OPERWALL = 455,
    T_OPERWALLS = 456,
    T_OPME = 457,
    T_PREPEND = 458,
    T_PSEUDO = 459,
    T_RECVQ = 460,
    T_RESTART = 461,
    T_SERVER = 462,
    T_SERVICE = 463,
    T_SERVNOTICE = 464,
    T_SET = 465,
    T_SHARED = 466,
    T_SIZE = 467,
    T_SNOMODES = 468,
    T_SOFTCALLERID = 469,
    T_SPY = 470,
    T_SSL = 471,
    T_SSL_CIPHER_LIST = 472,
    T_TARGET = 473,
    T_UMODES = 474,
    T_UNDLINE = 475,
    T_UNLIMITED = 476,
    T_UNRESV = 477,
    T_UNXLINE = 478,
    T_WALLOP = 479,
    T_WALLOPS = 480,
    T_WEBIRC = 481,
    TBOOL = 482,
    THROTTLE_COUNT = 483,
    THROTTLE_TIME = 484,
    TKLINE_EXPIRE_NOTICES = 485,
    TMASKED = 486,
    TS_MAX_DELTA = 487,
    TS_WARN_DELTA = 488,
    TWODOTS = 489,
    TYPE = 490,
    UNKLINE = 491,
    USE_LOGGING = 492,
    USER = 493,
    VHOST = 494,
    VHOST6 = 495,
    WARN_NO_CONNECT_BLOCK = 496,
    WHOIS = 497,
    WHOIS_NOTIFY = 498,
    XLINE = 499,
    XLINE_EXEMPT = 500
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
#define IP 323
#define IRCD_AUTH 324
#define IRCD_FLAGS 325
#define IRCD_SID 326
#define JOIN 327
#define KILL 328
#define KILL_CHASE_TIME_LIMIT 329
#define KLINE 330
#define KLINE_EXEMPT 331
#define KLINE_MIN_CIDR 332
#define KLINE_MIN_CIDR6 333
#define KLINE_REASON 334
#define KNOCK_CLIENT_COUNT 335
#define KNOCK_CLIENT_TIME 336
#define KNOCK_DELAY_CHANNEL 337
#define LEAF_MASK 338
#define LISTEN 339
#define MAP_SPLIT_TIMEOUT 340
#define MASK 341
#define MAX_ACCEPT 342
#define MAX_BANS 343
#define MAX_CHANNELS 344
#define MAX_GLOBAL 345
#define MAX_IDENT 346
#define MAX_IDLE 347
#define MAX_LOCAL 348
#define MAX_NICK_CHANGES 349
#define MAX_NICK_LENGTH 350
#define MAX_NICK_TIME 351
#define MAX_NUMBER 352
#define MAX_SPLIT_HISTORY 353
#define MAX_TARGETS 354
#define MAX_TOPIC_LENGTH 355
#define MAX_WATCH 356
#define MIN_IDLE 357
#define MIN_NONWILDCARD 358
#define MIN_NONWILDCARD_SIMPLE 359
#define MODULE 360
#define MODULES 361
#define MOTD 362
#define NAME 363
#define NEED_IDENT 364
#define NEED_PASSWORD 365
#define NETADMIN 366
#define NETWORK_DESC 367
#define NETWORK_NAME 368
#define NICK 369
#define NO_OPER_FLOOD 370
#define NO_TILDE 371
#define NUMBER 372
#define NUMBER_PER_CIDR 373
#define NUMBER_PER_IP 374
#define OPER_ONLY_UMODES 375
#define OPER_UMODES 376
#define OPERATOR 377
#define OPERS_BYPASS_CALLERID 378
#define PACE_WAIT 379
#define PACE_WAIT_SIMPLE 380
#define PASSWORD 381
#define PATH 382
#define PING_COOKIE 383
#define PING_TIME 384
#define PORT 385
#define QSTRING 386
#define RANDOM_IDLE 387
#define REASON 388
#define REDIRPORT 389
#define REDIRSERV 390
#define REHASH 391
#define REMOTE 392
#define REMOTEBAN 393
#define RESV 394
#define RESV_EXEMPT 395
#define RSA_PRIVATE_KEY_FILE 396
#define S_BOTS 397
#define S_CCONN 398
#define S_DLINESPAM 399
#define S_EXTERNAL 400
#define S_FULL 401
#define S_KLINESPAM 402
#define S_NCHANGE 403
#define S_REJ 404
#define S_SERVREJ 405
#define S_SKILL 406
#define S_SNOGENERAL 407
#define S_UNAUTH 408
#define S_XLINESPAM 409
#define SECONDS 410
#define MINUTES 411
#define HOURS 412
#define DAYS 413
#define WEEKS 414
#define MONTHS 415
#define YEARS 416
#define SEND_PASSWORD 417
#define SENDQ 418
#define SERVERHIDE 419
#define SERVERINFO 420
#define SHORT_MOTD 421
#define SNOMODES 422
#define SPOOF 423
#define SPOOF_NOTICE 424
#define SQUIT 425
#define SSL_CERTIFICATE_FILE 426
#define SSL_CERTIFICATE_FINGERPRINT 427
#define SSL_CONNECTION_REQUIRED 428
#define SSL_DH_ELLIPTIC_CURVE 429
#define SSL_DH_PARAM_FILE 430
#define SSL_MESSAGE_DIGEST_ALGORITHM 431
#define STATS_E_DISABLED 432
#define STATS_I_OPER_ONLY 433
#define STATS_K_OPER_ONLY 434
#define STATS_M_OPER_ONLY 435
#define STATS_O_OPER_ONLY 436
#define STATS_P_OPER_ONLY 437
#define STATS_U_OPER_ONLY 438
#define T_ALL 439
#define T_CALLERID 440
#define T_COMMAND 441
#define T_CLUSTER 442
#define T_DEAF 443
#define S_DEBUG 444
#define T_DLINE 445
#define T_FARCONNECT 446
#define T_FILE 447
#define T_GLOBOPS 448
#define T_INVISIBLE 449
#define T_IPV4 450
#define T_IPV6 451
#define T_LOCOPS 452
#define T_LOG 453
#define T_NONONREG 454
#define T_OPERWALL 455
#define T_OPERWALLS 456
#define T_OPME 457
#define T_PREPEND 458
#define T_PSEUDO 459
#define T_RECVQ 460
#define T_RESTART 461
#define T_SERVER 462
#define T_SERVICE 463
#define T_SERVNOTICE 464
#define T_SET 465
#define T_SHARED 466
#define T_SIZE 467
#define T_SNOMODES 468
#define T_SOFTCALLERID 469
#define T_SPY 470
#define T_SSL 471
#define T_SSL_CIPHER_LIST 472
#define T_TARGET 473
#define T_UMODES 474
#define T_UNDLINE 475
#define T_UNLIMITED 476
#define T_UNRESV 477
#define T_UNXLINE 478
#define T_WALLOP 479
#define T_WALLOPS 480
#define T_WEBIRC 481
#define TBOOL 482
#define THROTTLE_COUNT 483
#define THROTTLE_TIME 484
#define TKLINE_EXPIRE_NOTICES 485
#define TMASKED 486
#define TS_MAX_DELTA 487
#define TS_WARN_DELTA 488
#define TWODOTS 489
#define TYPE 490
#define UNKLINE 491
#define USE_LOGGING 492
#define USER 493
#define VHOST 494
#define VHOST6 495
#define WARN_NO_CONNECT_BLOCK 496
#define WHOIS 497
#define WHOIS_NOTIFY 498
#define XLINE 499
#define XLINE_EXEMPT 500

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 154 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 727 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 742 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1400

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  252
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  303
/* YYNRULES -- Number of rules.  */
#define YYNRULES  677
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1343

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   500

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
       2,     2,     2,     2,   250,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   251,   246,
       2,   249,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   248,     2,   247,     2,     2,     2,     2,
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
     245
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   403,   403,   404,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   434,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   445,   445,
     446,   447,   448,   449,   456,   458,   458,   459,   459,   459,
     461,   467,   477,   479,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   500,   540,   598,   627,   635,   649,   677,
     692,   707,   717,   731,   740,   768,   796,   821,   843,   865,
     875,   877,   877,   878,   879,   880,   881,   883,   892,   901,
     915,   914,   932,   932,   933,   933,   933,   935,   941,   952,
     951,   970,   970,   971,   971,   971,   971,   971,   973,   979,
     985,   991,  1013,  1014,  1014,  1016,  1016,  1017,  1019,  1026,
    1026,  1039,  1040,  1042,  1042,  1043,  1043,  1045,  1053,  1056,
    1062,  1061,  1067,  1067,  1068,  1072,  1076,  1080,  1084,  1088,
    1092,  1096,  1107,  1106,  1164,  1164,  1165,  1166,  1167,  1168,
    1169,  1170,  1171,  1172,  1173,  1174,  1175,  1176,  1178,  1184,
    1190,  1196,  1202,  1213,  1219,  1230,  1237,  1236,  1242,  1242,
    1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1275,  1279,
    1283,  1287,  1291,  1295,  1299,  1303,  1310,  1309,  1315,  1315,
    1316,  1320,  1324,  1328,  1332,  1336,  1340,  1344,  1348,  1352,
    1356,  1360,  1364,  1368,  1375,  1374,  1380,  1380,  1381,  1385,
    1389,  1393,  1397,  1401,  1405,  1409,  1413,  1417,  1421,  1425,
    1429,  1433,  1437,  1441,  1445,  1449,  1453,  1457,  1461,  1465,
    1469,  1473,  1477,  1481,  1485,  1489,  1493,  1497,  1508,  1507,
    1564,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,  1572,
    1573,  1574,  1575,  1576,  1577,  1577,  1578,  1579,  1580,  1581,
    1583,  1589,  1595,  1601,  1607,  1613,  1619,  1625,  1631,  1637,
    1643,  1650,  1656,  1662,  1668,  1677,  1687,  1686,  1692,  1692,
    1693,  1697,  1708,  1707,  1714,  1713,  1718,  1718,  1719,  1723,
    1727,  1733,  1733,  1734,  1734,  1734,  1734,  1734,  1736,  1736,
    1738,  1738,  1740,  1753,  1770,  1776,  1787,  1786,  1828,  1828,
    1829,  1830,  1831,  1832,  1833,  1834,  1835,  1836,  1837,  1839,
    1845,  1851,  1857,  1869,  1868,  1874,  1874,  1875,  1879,  1883,
    1887,  1891,  1895,  1899,  1903,  1907,  1911,  1917,  1931,  1940,
    1954,  1953,  1968,  1968,  1969,  1969,  1969,  1969,  1971,  1977,
    1983,  1993,  1995,  1995,  1996,  1996,  1998,  2015,  2014,  2039,
    2039,  2040,  2040,  2040,  2040,  2042,  2048,  2068,  2067,  2073,
    2073,  2074,  2078,  2082,  2086,  2090,  2094,  2098,  2102,  2106,
    2110,  2121,  2120,  2141,  2141,  2142,  2142,  2142,  2144,  2151,
    2150,  2156,  2156,  2157,  2161,  2165,  2169,  2173,  2177,  2181,
    2185,  2189,  2193,  2204,  2203,  2275,  2275,  2276,  2277,  2278,
    2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,  2287,  2288,
    2289,  2290,  2292,  2298,  2304,  2310,  2323,  2336,  2342,  2348,
    2352,  2359,  2358,  2363,  2363,  2364,  2368,  2374,  2385,  2391,
    2397,  2403,  2419,  2418,  2444,  2444,  2445,  2445,  2445,  2447,
    2467,  2478,  2477,  2504,  2504,  2505,  2505,  2505,  2507,  2513,
    2523,  2525,  2525,  2526,  2526,  2528,  2546,  2545,  2568,  2568,
    2569,  2569,  2569,  2571,  2577,  2587,  2589,  2589,  2590,  2591,
    2592,  2593,  2594,  2595,  2596,  2597,  2598,  2599,  2600,  2601,
    2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,  2610,  2611,
    2612,  2613,  2614,  2615,  2616,  2617,  2618,  2619,  2620,  2621,
    2622,  2623,  2624,  2625,  2626,  2627,  2628,  2629,  2630,  2631,
    2632,  2633,  2634,  2635,  2636,  2637,  2638,  2639,  2640,  2641,
    2642,  2645,  2650,  2655,  2660,  2669,  2678,  2687,  2696,  2702,
    2707,  2712,  2717,  2722,  2731,  2736,  2741,  2746,  2751,  2756,
    2761,  2766,  2771,  2776,  2781,  2787,  2792,  2797,  2802,  2807,
    2812,  2817,  2822,  2825,  2830,  2833,  2838,  2843,  2848,  2853,
    2858,  2863,  2868,  2873,  2878,  2883,  2888,  2893,  2898,  2904,
    2903,  2908,  2913,  2913,  2914,  2917,  2920,  2923,  2926,  2929,
    2932,  2935,  2938,  2941,  2944,  2947,  2950,  2953,  2956,  2959,
    2965,  2964,  2969,  2969,  2970,  2973,  2976,  2979,  2982,  2985,
    2988,  2991,  2994,  2997,  3000,  3003,  3006,  3011,  3016,  3021,
    3030,  3032,  3032,  3033,  3034,  3035,  3036,  3037,  3038,  3039,
    3040,  3041,  3042,  3043,  3044,  3046,  3051,  3056,  3061,  3066,
    3071,  3076,  3081,  3086,  3091,  3096,  3105,  3107,  3107,  3108,
    3109,  3110,  3111,  3112,  3113,  3114,  3115,  3116,  3117,  3119,
    3125,  3141,  3150,  3156,  3162,  3168,  3177,  3183
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
  "INVITE_CLIENT_TIME", "INVITE_DELAY_CHANNEL", "BLOCKINVITES", "IP",
  "IRCD_AUTH", "IRCD_FLAGS", "IRCD_SID", "JOIN", "KILL",
  "KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT", "KLINE_MIN_CIDR",
  "KLINE_MIN_CIDR6", "KLINE_REASON", "KNOCK_CLIENT_COUNT",
  "KNOCK_CLIENT_TIME", "KNOCK_DELAY_CHANNEL", "LEAF_MASK", "LISTEN",
  "MAP_SPLIT_TIMEOUT", "MASK", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANNELS",
  "MAX_GLOBAL", "MAX_IDENT", "MAX_IDLE", "MAX_LOCAL", "MAX_NICK_CHANGES",
  "MAX_NICK_LENGTH", "MAX_NICK_TIME", "MAX_NUMBER", "MAX_SPLIT_HISTORY",
  "MAX_TARGETS", "MAX_TOPIC_LENGTH", "MAX_WATCH", "MIN_IDLE",
  "MIN_NONWILDCARD", "MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", "MOTD",
  "NAME", "NEED_IDENT", "NEED_PASSWORD", "NETADMIN", "NETWORK_DESC",
  "NETWORK_NAME", "NICK", "NO_OPER_FLOOD", "NO_TILDE", "NUMBER",
  "NUMBER_PER_CIDR", "NUMBER_PER_IP", "OPER_ONLY_UMODES", "OPER_UMODES",
  "OPERATOR", "OPERS_BYPASS_CALLERID", "PACE_WAIT", "PACE_WAIT_SIMPLE",
  "PASSWORD", "PATH", "PING_COOKIE", "PING_TIME", "PORT", "QSTRING",
  "RANDOM_IDLE", "REASON", "REDIRPORT", "REDIRSERV", "REHASH", "REMOTE",
  "REMOTEBAN", "RESV", "RESV_EXEMPT", "RSA_PRIVATE_KEY_FILE", "S_BOTS",
  "S_CCONN", "S_DLINESPAM", "S_EXTERNAL", "S_FULL", "S_KLINESPAM",
  "S_NCHANGE", "S_REJ", "S_SERVREJ", "S_SKILL", "S_SNOGENERAL", "S_UNAUTH",
  "S_XLINESPAM", "SECONDS", "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS",
  "YEARS", "SEND_PASSWORD", "SENDQ", "SERVERHIDE", "SERVERINFO",
  "SHORT_MOTD", "SNOMODES", "SPOOF", "SPOOF_NOTICE", "SQUIT",
  "SSL_CERTIFICATE_FILE", "SSL_CERTIFICATE_FINGERPRINT",
  "SSL_CONNECTION_REQUIRED", "SSL_DH_ELLIPTIC_CURVE", "SSL_DH_PARAM_FILE",
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
     495,   496,   497,   498,   499,   500,    59,   125,   123,    61,
      44,    58
};
# endif

#define YYPACT_NINF -867

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-867)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -867,   738,  -867,  -225,  -220,  -210,  -867,  -867,  -867,  -207,
    -867,  -204,  -867,  -867,  -867,  -199,  -867,  -867,  -867,  -191,
    -186,  -867,  -167,  -867,  -156,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,    22,   670,  -150,  -141,  -130,    31,  -129,   499,  -122,
    -117,  -106,    52,   -94,   -77,   -63,   744,   603,   -55,    15,
     -53,    14,   -50,  -192,   -32,   -26,   -23,     6,  -867,  -867,
    -867,  -867,  -867,    -8,     5,    35,    38,    62,    63,    69,
      70,    79,    86,    90,   307,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,   797,   374,    42,
    -867,    97,    10,  -867,  -867,    44,  -867,    99,   100,   101,
     103,   104,   105,   106,   107,   109,   112,   118,   120,   125,
     129,   132,   133,   134,   135,   141,   142,   145,   148,   153,
     164,   166,   168,   170,   171,   172,   174,   175,   178,  -867,
    -867,   179,   183,   185,   187,   188,   190,   192,   193,   194,
     196,   200,   202,   204,   205,   207,   212,   214,   215,    66,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,   344,    51,   292,    74,   216,   217,    45,
    -867,  -867,  -867,    11,   322,   313,  -867,   219,   220,   222,
     223,   224,   225,   226,   227,   231,    13,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,   237,   235,   236,
     238,   240,   241,   242,   247,   248,   252,   253,   258,   261,
     262,   265,   266,   267,   275,    25,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,    65,   279,   280,    26,  -867,  -867,
    -867,   270,   182,  -867,   281,    50,  -867,  -867,    47,  -867,
     124,   300,   309,   282,  -867,   371,   381,   304,   415,   381,
     381,   416,   381,   381,   423,   425,   297,  -867,   299,   298,
     301,   302,  -867,   306,   308,   310,   314,   316,   319,   320,
     321,   325,   326,   330,   331,   332,   213,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,   303,   334,   336,   339,   340,
     341,   343,  -867,   345,   347,   350,   352,   356,   361,   362,
     208,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,   366,   367,    23,
    -867,  -867,  -867,   417,   312,  -867,  -867,   372,   377,    28,
    -867,  -867,  -867,   329,   381,   436,   381,   381,   440,   498,
     500,   501,   403,   516,   408,   527,   528,   529,   420,   422,
     426,   381,   535,   537,   526,   381,   542,   543,   381,   544,
     545,   549,   550,   551,   442,   421,   424,   448,   381,   381,
     456,   457,   458,  -214,  -194,   459,   460,   462,   463,   574,
     381,   465,   381,   381,   466,   449,  -867,   450,   452,   453,
    -867,   455,   461,   464,   468,   469,   191,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,   471,   474,    41,
    -867,  -867,  -867,   478,   476,   477,  -867,   481,  -867,     9,
    -867,  -867,  -867,  -867,  -867,   576,   577,   487,  -867,   491,
     492,   494,    29,  -867,  -867,  -867,   503,   497,   506,  -867,
     507,   511,   512,   513,  -867,  -867,   517,   518,   239,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,   519,   520,   522,   523,    30,  -867,  -867,  -867,  -867,
     482,   485,   381,   616,   541,   644,   556,   559,   567,   553,
    -867,  -867,   588,   666,   582,   679,   597,   687,   682,   685,
     686,   690,   693,   694,   695,   697,   698,   700,   704,   572,
    -867,   592,   590,  -867,    33,  -867,  -867,  -867,  -867,   613,
     595,  -867,   599,   602,   600,   604,   605,   606,    19,  -867,
    -867,  -867,  -867,  -867,   720,   610,  -867,   612,   615,  -867,
     617,    24,  -867,  -867,  -867,  -867,   619,   622,   623,  -867,
     625,   249,   626,   627,   628,   629,   630,   632,   633,   634,
     635,   636,  -867,  -867,   735,   742,   381,   642,   745,   766,
     767,   381,   768,   775,   381,   730,   780,   789,   381,   791,
     791,   654,  -867,  -867,   787,  -160,   788,   684,   790,   792,
     665,   793,   798,   803,   799,   800,   801,   802,   688,  -867,
     804,   807,   699,  -867,   701,  -867,   808,   809,   702,  -867,
     705,   706,   707,   708,   709,   711,   712,   715,   716,   717,
     719,   723,   726,   729,   739,   740,   741,   743,   749,   750,
     753,   754,   755,   758,   759,   760,   777,   778,   781,   782,
     784,   785,   713,   779,   786,   794,   795,   796,   805,   806,
     810,   811,   812,   813,   814,   815,   816,   817,   818,   819,
     820,   821,   822,   823,  -867,  -867,   828,   714,   732,   835,
     826,   853,   859,   860,   824,  -867,   890,   894,   825,  -867,
    -867,   898,   902,   827,   833,   829,  -867,   831,   832,  -867,
    -867,   903,   904,   834,  -867,  -867,   905,   845,   830,   906,
     907,   908,   846,   836,   837,   912,   913,   838,  -867,  -867,
     914,   915,   916,   841,  -867,   842,   843,   844,   847,   848,
     849,   850,   851,   852,  -867,   854,   855,   856,   857,   858,
     861,   862,   863,   864,   865,   867,   868,   869,   870,   871,
     872,   873,  -867,  -867,   917,   874,   875,  -867,   876,  -867,
      89,  -867,   918,   919,   922,   923,   878,  -867,   879,  -867,
    -867,   943,   877,   950,   881,  -867,  -867,  -867,  -867,  -867,
     381,   381,   381,   381,   381,   381,   381,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,   882,
     883,   884,   -37,   885,   886,   887,   888,   889,   891,   892,
     893,   895,   896,   897,    71,   899,   900,  -867,   901,   909,
     910,   911,   920,   921,   924,    -4,   925,   926,   927,   928,
     929,   930,   931,  -867,   932,   933,  -867,  -867,   934,   935,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -138,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -137,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,   936,   937,   383,   938,
     939,   940,   941,   942,  -867,   944,   945,  -867,   946,   947,
     -48,   710,   948,  -867,  -867,  -867,  -867,   949,   951,  -867,
     953,   954,   583,   955,   956,   957,   958,   866,   783,   959,
     960,  -867,   961,   962,   963,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,   964,   428,  -867,  -867,   965,   966,   967,  -867,
      39,  -867,  -867,  -867,  -867,   968,   971,   972,   973,  -867,
    -867,   974,   673,   975,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,   -70,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
     791,   791,   791,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,   -68,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
     713,  -867,   779,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,   -44,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,   -42,
    -867,   982,   833,   976,  -867,  -867,  -867,  -867,  -867,  -867,
     840,  -867,   977,   978,  -867,  -867,  -867,   979,  -867,  -867,
    -867,   980,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,   -31,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,   -30,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,   -22,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,   -21,  -867,  -867,   952,   -98,   983,   981,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,    83,  -867,  -867,  -867,   -37,  -867,
    -867,  -867,  -867,    -4,  -867,  -867,  -867,   383,  -867,   -48,
    -867,  -867,  -867,   969,   997,  1003,  1005,  1011,  -867,   583,
    -867,   866,  -867,   783,  -867,   428,   987,   988,   989,   328,
    -867,  -867,   673,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,    94,  -867,  -867,
    -867,   328,  -867
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   248,   413,   461,     0,
     476,     0,   316,   452,   292,     0,   100,   152,   350,     0,
       0,   391,     0,   109,     0,   367,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   644,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   632,   643,   634,   635,   636,
     637,   638,   639,   640,   633,   641,   642,     0,     0,     0,
     474,     0,     0,   472,   473,     0,   540,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   610,
     589,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     487,   488,   489,   531,   533,   534,   535,   536,   532,   526,
     527,   528,   529,   537,   525,   499,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   500,   501,   530,   505,   506,
     507,   508,   504,   503,   509,   516,   517,   510,   511,   512,
     502,   514,   523,   524,   521,   522,   539,   515,   538,   513,
     519,   520,   518,     0,     0,     0,     0,     0,     0,     0,
      46,    47,    48,     0,     0,     0,   668,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   658,   659,   660,
     661,   662,   663,   664,   666,   665,   667,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    69,    66,    64,
      70,    71,    65,    55,    68,    58,    59,    60,    56,    67,
      61,    62,    63,    57,     0,     0,     0,     0,   124,   125,
     126,     0,     0,   365,     0,     0,   363,   364,     0,    96,
       0,     0,     0,     0,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   631,     0,     0,
       0,     0,   286,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   251,   252,   255,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   253,
     254,   256,   266,   267,   268,     0,     0,     0,     0,     0,
       0,     0,   441,     0,     0,     0,     0,     0,     0,     0,
       0,   416,   417,   418,   419,   420,   421,   422,   424,   423,
     426,   430,   427,   428,   429,   425,   467,     0,     0,     0,
     464,   465,   466,     0,     0,   471,   482,     0,     0,     0,
     479,   480,   481,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   486,     0,     0,     0,
     333,     0,     0,     0,     0,     0,     0,   319,   320,   321,
     322,   327,   323,   324,   325,   326,   458,     0,     0,     0,
     455,   456,   457,     0,     0,     0,   294,     0,   304,     0,
     302,   303,   305,   306,    49,     0,     0,     0,    45,     0,
       0,     0,     0,   103,   104,   105,     0,     0,     0,   214,
       0,     0,     0,     0,   196,   176,     0,     0,     0,   155,
     156,   157,   158,   159,   162,   163,   164,   161,   160,   166,
     165,     0,     0,     0,     0,     0,   353,   354,   355,   356,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     657,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,     0,     0,   399,     0,   394,   395,   396,   127,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,   112,
     113,   115,   114,   116,     0,     0,   362,     0,     0,   377,
       0,     0,   370,   371,   372,   373,     0,     0,     0,    90,
       0,    28,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   630,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   431,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   415,
       0,     0,     0,   463,     0,   470,     0,     0,     0,   478,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   485,   328,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   318,     0,     0,     0,   454,
     307,     0,     0,     0,     0,     0,   301,     0,     0,    44,
     106,     0,     0,     0,   102,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   154,   357,
       0,     0,     0,     0,   352,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   656,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,   397,     0,     0,     0,   393,     0,   122,
       0,   117,     0,     0,     0,     0,     0,   111,     0,   361,
     374,     0,     0,     0,     0,   369,    99,    98,    97,   654,
      28,    28,    28,    28,    28,    28,    28,    30,    29,   655,
     645,   646,   647,   648,   649,   650,   651,   653,   652,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,   249,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   414,     0,     0,   462,   475,     0,     0,
     477,   558,   562,   541,   542,   577,   544,   545,   546,   547,
     548,   629,   585,   549,   550,   582,   557,   556,   565,   555,
     551,   552,   553,   588,   561,   560,   559,   591,   583,   543,
     627,   628,   581,   615,   621,   614,   624,   618,   622,   623,
     625,   617,   620,   616,   619,   626,     0,   613,   595,   596,
     597,   609,   603,   594,   606,   600,   604,   605,   607,   599,
     602,   598,   601,   608,     0,   593,   578,   576,   579,   584,
     580,   567,   574,   575,   572,   573,   568,   569,   570,   571,
     586,   587,   554,   564,   563,   566,     0,     0,     0,     0,
       0,     0,     0,     0,   317,     0,     0,   453,     0,     0,
       0,   312,   308,   311,   293,    50,    51,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,   351,   672,   669,   670,   671,
     676,   675,   677,   673,   674,    86,    81,    89,    80,    87,
      88,    79,    83,    82,    74,    73,    78,    75,    77,    76,
      84,    85,     0,     0,   392,   128,     0,     0,     0,   140,
       0,   132,   133,   135,   134,     0,     0,     0,     0,   110,
     366,     0,     0,     0,   368,    31,    32,    33,    34,    35,
      36,    37,   281,   282,   273,   291,   290,     0,   289,   274,
     276,   278,   285,   277,   275,   284,   270,   283,   272,   271,
      38,    38,    38,    40,    39,   279,   280,   436,   439,   440,
     450,   447,   433,   448,   445,   446,     0,   444,   449,   432,
     438,   435,   437,   451,   434,   468,   469,   483,   484,   611,
       0,   590,     0,   331,   332,   342,   338,   339,   341,   346,
     343,   344,   337,   345,   340,     0,   336,   330,   349,   348,
     347,   329,   460,   459,   315,   314,   299,   300,   298,     0,
     297,     0,     0,     0,   107,   108,   175,   172,   233,   245,
     221,   230,     0,   219,   224,   239,   247,     0,   232,   237,
     243,   223,   226,   234,   236,   246,   240,   231,   238,   227,
     244,   229,   235,   225,   228,     0,   217,   168,   170,   173,
     174,   211,   200,   209,   202,   203,   208,   206,   204,   212,
     205,   213,   207,   210,   201,     0,   199,   181,   182,   183,
     195,   189,   180,   192,   186,   190,   191,   193,   185,   188,
     184,   187,   194,     0,   179,   169,   171,   360,   358,   359,
     398,   403,   409,   412,   405,   411,   406,   410,   408,   404,
     407,     0,   402,   136,     0,     0,     0,     0,   131,   119,
     118,   120,   121,   375,   381,   387,   390,   383,   389,   384,
     388,   386,   382,   385,     0,   380,   376,   287,     0,    41,
      42,    43,   442,     0,   612,   592,   334,     0,   295,     0,
     313,   310,   309,     0,     0,     0,     0,     0,   215,     0,
     197,     0,   177,     0,   400,     0,     0,     0,     0,     0,
     130,   378,     0,   288,   443,   335,   296,   220,   242,   218,
     241,   222,   216,   198,   178,   401,   137,   139,   138,   150,
     149,   145,   147,   151,   148,   144,   146,     0,   143,   379,
     141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -867,  -867,  -867,  -203,  -314,  -866,  -649,  -867,  -867,   984,
    -867,  -867,  -867,  -867,   970,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  1015,  -867,  -867,  -867,  -867,  -867,
    -867,   570,  -867,  -867,  -867,  -867,  -867,   514,  -867,  -867,
    -867,  -867,  -867,  -867,   985,  -867,  -867,  -867,  -867,    60,
    -867,  -867,  -867,  -867,  -867,  -236,  -867,  -867,  -867,   621,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -153,  -867,  -867,  -867,  -149,  -867,  -867,  -867,  -148,
    -867,  -867,  -867,   880,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -125,  -867,  -867,  -867,  -867,  -867,  -135,
    -867,   659,  -867,  -867,  -867,    -3,  -867,  -867,  -867,  -867,
    -867,   689,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -127,
    -867,  -867,  -867,  -867,  -867,  -867,   618,  -867,  -867,  -867,
    -867,  -867,   986,  -867,  -867,  -867,  -867,   557,  -867,  -867,
    -867,  -867,  -867,  -151,  -867,  -867,  -867,   578,  -867,  -867,
    -867,  -867,  -136,  -867,  -867,  -867,   990,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -119,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,   734,  -867,  -867,
    -867,  -867,  -867,   839,  -867,  -867,  -867,  -867,  1077,  -867,
    -867,  -867,  -867,   991,  -867,  -867,  -867,  -867,  1025,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,    64,
    -867,  -867,  -867,    82,  -867,  -867,  -867,  -867,  -867,  1130,
    -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867,   993,  -867,  -867,  -867,  -867,  -867,  -867,
    -867,  -867,  -867
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   847,   848,  1103,  1104,    27,   229,   230,
     231,   232,    28,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,    29,    77,    78,    79,    80,    81,    30,    63,
     512,   513,   514,   515,    31,    70,   598,   599,   600,   601,
     602,   603,    32,   297,   298,   299,   300,   301,  1060,  1061,
    1062,  1063,  1064,  1256,  1337,  1338,    33,    64,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   774,
    1233,  1234,   539,   773,  1215,  1216,   540,   768,  1195,  1196,
      34,    53,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   637,  1087,  1088,    35,    61,   498,   753,  1159,  1160,
     499,   500,   501,  1163,  1002,  1003,   502,   503,    36,    59,
     476,   477,   478,   479,   480,   481,   482,   738,  1145,  1146,
     483,   484,   485,    37,    65,   545,   546,   547,   548,   549,
      38,   305,   306,   307,    39,    72,   611,   612,   613,   614,
     615,   832,  1274,  1275,    40,    68,   584,   585,   586,   587,
     815,  1251,  1252,    41,    54,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   660,  1116,  1117,   391,
     392,   393,   394,   395,    42,    60,   489,   490,   491,   492,
      43,    55,   399,   400,   401,   402,    44,   112,   113,   114,
      45,    57,   409,   410,   411,   412,    46,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   446,   218,   964,   965,
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
     875,   876,   622,  1156,  1114,   625,   626,    73,   628,   629,
     493,   110,   509,   720,   236,   303,   295,   721,  1085,   874,
     593,    49,    50,    73,   396,   607,   257,   295,    51,   406,
     509,   541,   110,   722,   581,   879,   880,   723,    52,    74,
    1056,    56,   486,   396,    58,   406,   226,    75,   607,    62,
     237,   303,   486,   226,   309,    74,   258,    66,   259,   238,
     239,   240,    67,    75,   241,   242,   581,   116,   494,   243,
     244,   245,   117,   118,   542,   119,   120,   495,   111,   496,
     121,    69,  1100,  1101,  1102,   260,   122,   123,   124,   125,
    1056,   397,    71,   126,   127,  1086,   261,   510,   107,   111,
     681,   128,   683,   684,   129,   130,   131,   108,  1129,  1131,
     397,   132,  1130,  1132,    76,   510,   543,   698,   109,   115,
     262,   702,   304,  1307,   705,   263,   223,   594,   133,   134,
      76,   224,   608,   264,   715,   716,   407,   265,   266,   497,
     135,   582,   225,   136,   137,   138,   729,  1057,   731,   732,
     227,   139,   407,   140,   233,   608,   398,   227,   304,  1157,
     141,   408,   142,   544,   143,   144,   267,   145,  1158,   146,
     147,   234,   228,   582,   487,   398,  1277,   408,  1282,   228,
    1278,   148,  1283,   593,   487,   235,   149,   150,   874,   151,
     152,   153,   467,   294,   154,   302,   268,  1057,   308,   269,
     270,   271,  1286,   511,  1288,   595,  1287,  -129,  1289,   365,
     468,   366,  1115,   367,   328,  1298,  1300,   310,  -129,  1299,
    1301,   511,   596,   311,  1302,  1304,   312,   368,  1303,  1305,
     329,   330,   155,   469,  1279,  1280,  1281,   597,   787,   331,
     516,   315,   272,   156,   157,   158,   159,   160,   161,   162,
     369,  1058,   296,   313,   316,   616,   755,   404,   517,   609,
     559,   470,   610,   296,   273,   274,   826,   370,   583,   371,
     672,   834,   579,   590,  1059,   678,   763,   783,   372,   488,
     816,   518,   609,   332,   317,   610,  1257,   318,   748,   488,
     594,   373,   507,   493,   163,   164,   165,   605,   166,   167,
     583,  1058,   333,   334,   335,   336,   337,   168,    82,   519,
     338,   319,   320,   465,   541,   339,   374,   471,   321,   322,
     504,   340,   861,   516,  1059,   472,   473,   866,   323,  1311,
     869,   341,   342,  1312,   873,   324,    83,    84,   375,   325,
    1340,   517,   343,    85,  1341,   467,   403,   520,   413,   414,
     415,   494,   416,   417,   418,   419,   420,   542,   421,   474,
     495,   422,   496,   468,   518,   521,   621,   423,   595,   424,
     376,    86,    87,    88,   425,   365,   344,   366,   426,   367,
     377,   427,   428,   429,   430,   596,   469,    89,    90,    91,
     431,   432,   519,   368,   433,    92,    93,   434,  1135,   543,
     597,  1329,   435,  1330,   840,   841,   842,   843,   844,   845,
     846,   522,   523,   436,   470,   437,   369,   438,   345,   439,
     440,   441,   497,   442,   443,   378,  1136,   444,   447,   475,
     520,   617,   448,   370,   449,   371,   450,   451,   744,   452,
     618,   453,   454,   455,   372,   456,   544,   379,   521,   457,
    1331,   458,   524,   459,   460,   668,   461,   373,   525,  1137,
     651,   462,   592,   463,   464,   505,   506,  1332,   550,   551,
     471,   552,   553,   554,   555,   556,   557,   526,   472,   473,
     558,   527,   374,   561,   562,   563,   777,   564,   620,   565,
     566,   567,  1138,  1139,   522,   523,   568,   569,   621,  1140,
     116,   570,   571,  1241,   375,   117,   118,   572,   119,   120,
     573,   574,   474,   121,   575,   576,   577,  1333,  1334,   122,
     123,   124,   125,  1141,   578,   588,   126,   127,   619,   589,
     604,   623,   624,   627,   128,   524,   376,   129,   130,   131,
     630,   525,   631,   632,   132,   633,   377,   634,   674,   653,
     635,   636,  1142,   682,   326,   638,   680,   639,   675,   640,
     526,   133,   134,   641,   527,   642,  1335,  1242,   643,   644,
     645,   685,  1336,   135,   646,   647,   136,   137,   138,   648,
     649,   650,   475,   654,   139,   655,   140,  1168,   656,   657,
     658,   378,   659,   141,   661,   142,   662,   143,   144,   663,
     145,   664,   146,   147,   257,   665,  1308,  1169,  1170,  1143,
     666,   667,  1243,   379,   148,   670,   671,  1171,  1244,   149,
     150,   676,   151,   152,   153,  1245,   677,   154,  1144,   686,
     689,   687,   688,   690,   258,   691,   259,  1075,  1076,  1077,
    1078,  1079,  1080,  1081,   692,   693,   694,   695,  1246,   696,
    1247,  1248,   699,   697,   700,  1172,  1173,   701,  1174,   703,
     704,   706,   707,   260,  1249,   155,   708,   709,   710,   711,
     712,    82,  1250,   713,   261,   714,   156,   157,   158,   159,
     160,   161,   162,   717,   718,   719,   724,   725,  1175,   726,
     727,   728,   730,   733,  1176,   734,   735,  1177,   262,    83,
      84,   736,   737,   263,   739,   795,    85,   757,   758,   785,
     740,   264,   786,   741,   799,   265,   266,   742,   743,  1178,
     746,  1179,  1180,   747,   750,   751,   752,   163,   164,   165,
     754,   166,   167,   759,    86,    87,    88,   760,     2,     3,
     168,   761,     4,   762,   267,   236,   766,   788,  1264,   765,
      89,    90,    91,  1181,     5,   767,   769,     6,    92,    93,
     770,   771,   772,     7,   933,   779,   775,   776,   789,   780,
       8,   781,   782,  1182,   268,   790,  1183,   269,   270,   271,
    1184,   237,     9,   791,  1185,  1186,   792,    10,    11,  1187,
     238,   239,   240,  1188,   793,   241,   242,   796,   328,   794,
     243,   244,   245,  1189,   800,  1190,  1191,    12,  1192,   797,
     798,    13,  1265,   801,   329,   330,   802,   803,   812,  1193,
     272,   804,    14,   331,   805,   806,   807,  1194,   808,   809,
     948,   810,   949,   950,  1217,   811,  1218,  1219,   813,   814,
     818,   819,   273,   274,    15,    16,   951,   820,   821,   822,
    1220,   828,   859,   823,   824,   825,   829,  1266,   830,   860,
      17,   870,   863,  1267,   831,   836,   833,   332,   837,   838,
    1268,   839,   849,   850,   851,   852,   853,    18,   854,   855,
     856,   857,   858,   864,   865,   867,   333,   334,   335,   336,
     337,   862,   868,  1269,   338,  1270,  1271,   871,   934,   339,
     877,   935,    19,    20,   936,   340,   872,   937,   874,  1272,
     938,   882,   939,   940,   885,   341,   342,  1273,   878,   881,
     888,   883,   941,   884,   886,    21,   343,   942,   943,   887,
     889,   890,   891,   892,   893,   894,    22,   944,   895,   898,
     899,   987,    23,   990,  1161,   896,    24,   897,   900,    25,
    1001,   901,   902,   903,   904,   905,   945,   906,   907,   986,
     344,   908,   909,   910,   952,   911,   989,   953,  1221,   912,
     954,  1222,   913,   955,  1223,   914,   956,  1224,   957,   958,
    1225,   988,  1226,  1227,   991,   915,   916,   917,   959,   918,
     992,   993,  1228,   960,   961,   919,   920,  1229,  1230,   921,
     922,   923,   345,   962,   924,   925,   926,  1231,  1201,  1202,
    1203,  1204,  1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,
    1213,   995,   963,   927,   928,   996,  1232,   929,   930,   998,
     931,   932,   966,   999,  1007,  1008,  1010,  1013,  1014,  1015,
     967,   968,   969,  1019,  1020,  1022,  1023,  1024,  1052,  1065,
    1066,   970,   971,  1067,  1068,  1214,   972,   973,   974,   975,
     976,   977,   978,   979,   980,   981,   982,   983,   984,   985,
     994,   997,  1011,  1016,  1071,  1004,  1000,  1005,  1006,  1012,
    1009,  1073,   764,  1306,  1021,  1017,  1018,  1025,  1026,  1027,
    1028,  1293,   314,  1029,  1030,  1031,  1032,  1033,  1034,  1290,
    1035,  1036,  1037,  1038,  1039,  1342,  1317,  1040,  1041,  1042,
    1043,  1044,   827,  1045,  1046,  1047,  1048,  1049,  1050,  1051,
    1258,  1054,  1055,  1053,  1069,  1070,  1072,  1074,  1082,  1083,
    1084,  1089,  1090,  1091,  1092,  1093,  1318,  1094,  1095,  1096,
    1319,  1097,  1098,  1099,  1320,  1105,  1106,  1107,  1321,   778,
    1324,  1322,  1323,  1313,  1316,  1108,  1109,  1110,   756,  1291,
    1315,  1339,   817,   784,  1314,   745,  1111,  1112,   835,  1325,
    1113,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1127,  1128,  1133,  1134,  1147,  1148,  1149,  1150,  1151,   405,
    1152,  1153,  1154,  1155,   466,  1164,  1285,  1165,  1162,  1166,
    1167,  1197,  1198,  1199,  1200,  1235,  1236,  1237,  1238,  1239,
    1240,  1253,  1284,   508,  1259,  1254,  1255,  1260,  1261,  1262,
    1263,  1276,  1292,   749,   327,     0,   652,  1310,  1294,  1295,
    1296,  1297,  1309,  1326,  1327,  1328,     0,     0,   673,   560,
       0,     0,     0,     0,     0,   580,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   591,     0,     0,     0,     0,     0,     0,     0,
       0,   606,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     669,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     679
};

static const yytype_int16 yycheck[] =
{
     649,   650,   316,    51,     8,   319,   320,     1,   322,   323,
       1,     1,     1,   227,     1,     1,     1,   231,    55,   117,
       1,   246,   247,     1,     1,     1,     1,     1,   248,     1,
       1,     1,     1,   227,     1,   195,   196,   231,   248,    33,
       1,   248,     1,     1,   248,     1,     1,    41,     1,   248,
      37,     1,     1,     1,   246,    33,    31,   248,    33,    46,
      47,    48,   248,    41,    51,    52,     1,     1,    59,    56,
      57,    58,     6,     7,    44,     9,    10,    68,    68,    70,
      14,   248,    11,    12,    13,    60,    20,    21,    22,    23,
       1,    68,   248,    27,    28,   132,    71,    86,   248,    68,
     414,    35,   416,   417,    38,    39,    40,   248,   246,   246,
      68,    45,   250,   250,   108,    86,    86,   431,   248,   248,
      95,   435,   108,   221,   438,   100,   248,   108,    62,    63,
     108,   248,   108,   108,   448,   449,   108,   112,   113,   130,
      74,   108,   248,    77,    78,    79,   460,   108,   462,   463,
     105,    85,   108,    87,   248,   108,   133,   105,   108,   207,
      94,   133,    96,   133,    98,    99,   141,   101,   216,   103,
     104,   248,   127,   108,   133,   133,   246,   133,   246,   127,
     250,   115,   250,     1,   133,   248,   120,   121,   117,   123,
     124,   125,     1,   248,   128,   248,   171,   108,   248,   174,
     175,   176,   246,   192,   246,   186,   250,   192,   250,     1,
      19,     3,   216,     5,     1,   246,   246,   249,   192,   250,
     250,   192,   203,   249,   246,   246,   249,    19,   250,   250,
      17,    18,   166,    42,  1100,  1101,  1102,   218,   552,    26,
       1,   249,   217,   177,   178,   179,   180,   181,   182,   183,
      42,   212,   237,   247,   249,   131,   247,   247,    19,   235,
     247,    70,   238,   237,   239,   240,   247,    59,   235,    61,
     247,   247,   247,   247,   235,   247,   247,   247,    70,   238,
     247,    42,   235,    70,   249,   238,   247,   249,   247,   238,
     108,    83,   247,     1,   228,   229,   230,   247,   232,   233,
     235,   212,    89,    90,    91,    92,    93,   241,     1,    70,
      97,   249,   249,   247,     1,   102,   108,   126,   249,   249,
     246,   108,   636,     1,   235,   134,   135,   641,   249,   246,
     644,   118,   119,   250,   648,   249,    29,    30,   130,   249,
     246,    19,   129,    36,   250,     1,   249,   108,   249,   249,
     249,    59,   249,   249,   249,   249,   249,    44,   249,   168,
      68,   249,    70,    19,    42,   126,   117,   249,   186,   249,
     162,    64,    65,    66,   249,     1,   163,     3,   249,     5,
     172,   249,   249,   249,   249,   203,    42,    80,    81,    82,
     249,   249,    70,    19,   249,    88,    89,   249,    15,    86,
     218,    73,   249,    75,   155,   156,   157,   158,   159,   160,
     161,   172,   173,   249,    70,   249,    42,   249,   205,   249,
     249,   249,   130,   249,   249,   217,    43,   249,   249,   238,
     108,   131,   249,    59,   249,    61,   249,   249,   247,   249,
     131,   249,   249,   249,    70,   249,   133,   239,   126,   249,
     122,   249,   213,   249,   249,   247,   249,    83,   219,    76,
     247,   249,   192,   249,   249,   249,   249,   139,   249,   249,
     126,   249,   249,   249,   249,   249,   249,   238,   134,   135,
     249,   242,   108,   246,   249,   249,   247,   249,   117,   249,
     249,   249,   109,   110,   172,   173,   249,   249,   117,   116,
       1,   249,   249,    75,   130,     6,     7,   249,     9,    10,
     249,   249,   168,    14,   249,   249,   249,   189,   190,    20,
      21,    22,    23,   140,   249,   246,    27,    28,   246,   249,
     249,   227,   117,   117,    35,   213,   162,    38,    39,    40,
     117,   219,   117,   246,    45,   246,   172,   249,   131,   246,
     249,   249,   169,   117,   247,   249,   227,   249,   246,   249,
     238,    62,    63,   249,   242,   249,   238,   139,   249,   249,
     249,   131,   244,    74,   249,   249,    77,    78,    79,   249,
     249,   249,   238,   249,    85,   249,    87,     4,   249,   249,
     249,   217,   249,    94,   249,    96,   249,    98,    99,   249,
     101,   249,   103,   104,     1,   249,  1255,    24,    25,   226,
     249,   249,   184,   239,   115,   249,   249,    34,   190,   120,
     121,   249,   123,   124,   125,   197,   249,   128,   245,   131,
     227,   131,   131,   117,    31,   227,    33,   840,   841,   842,
     843,   844,   845,   846,   117,   117,   117,   227,   220,   227,
     222,   223,   117,   227,   117,    72,    73,   131,    75,   117,
     117,   117,   117,    60,   236,   166,   117,   117,   117,   227,
     249,     1,   244,   249,    71,   227,   177,   178,   179,   180,
     181,   182,   183,   227,   227,   227,   227,   227,   105,   227,
     227,   117,   227,   227,   111,   246,   246,   114,    95,    29,
      30,   249,   249,   100,   249,   117,    36,   131,   131,   227,
     249,   108,   227,   249,   117,   112,   113,   249,   249,   136,
     249,   138,   139,   249,   246,   249,   249,   228,   229,   230,
     249,   232,   233,   246,    64,    65,    66,   246,     0,     1,
     241,   249,     4,   249,   141,     1,   249,   131,    75,   246,
      80,    81,    82,   170,    16,   249,   249,    19,    88,    89,
     249,   249,   249,    25,    51,   246,   249,   249,   227,   249,
      32,   249,   249,   190,   171,   131,   193,   174,   175,   176,
     197,    37,    44,   227,   201,   202,   227,    49,    50,   206,
      46,    47,    48,   210,   227,    51,    52,   131,     1,   246,
      56,    57,    58,   220,   117,   222,   223,    69,   225,   227,
     131,    73,   139,   131,    17,    18,   131,   131,   246,   236,
     217,   131,    84,    26,   131,   131,   131,   244,   131,   131,
      51,   131,    53,    54,    51,   131,    53,    54,   246,   249,
     227,   246,   239,   240,   106,   107,    67,   248,   246,   249,
      67,   131,   117,   249,   249,   249,   246,   184,   246,   117,
     122,   131,   117,   190,   249,   246,   249,    70,   246,   246,
     197,   246,   246,   246,   246,   246,   246,   139,   246,   246,
     246,   246,   246,   117,   117,   117,    89,    90,    91,    92,
      93,   249,   117,   220,    97,   222,   223,   117,   185,   102,
     246,   188,   164,   165,   191,   108,   117,   194,   117,   236,
     197,   227,   199,   200,   249,   118,   119,   244,   131,   131,
     117,   131,   209,   131,   131,   187,   129,   214,   215,   131,
     131,   131,   131,   131,   246,   131,   198,   224,   131,   131,
     131,   227,   204,   117,   234,   246,   208,   246,   246,   211,
     117,   246,   246,   246,   246,   246,   243,   246,   246,   131,
     163,   246,   246,   246,   185,   246,   131,   188,   185,   246,
     191,   188,   246,   194,   191,   246,   197,   194,   199,   200,
     197,   249,   199,   200,   131,   246,   246,   246,   209,   246,
     131,   131,   209,   214,   215,   246,   246,   214,   215,   246,
     246,   246,   205,   224,   246,   246,   246,   224,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   131,   243,   246,   246,   131,   243,   246,   246,   131,
     246,   246,   246,   131,   131,   131,   131,   131,   131,   131,
     246,   246,   246,   131,   131,   131,   131,   131,   131,   131,
     131,   246,   246,   131,   131,   189,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   227,   227,   131,   246,   249,   246,   246,   249,
     246,   131,   512,   131,   246,   249,   249,   246,   246,   246,
     246,   251,    77,   246,   246,   246,   246,   246,   246,   117,
     246,   246,   246,   246,   246,  1341,   137,   246,   246,   246,
     246,   246,   598,   246,   246,   246,   246,   246,   246,   246,
    1060,   246,   246,   249,   246,   246,   249,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   139,   246,   246,   246,
     137,   246,   246,   246,   139,   246,   246,   246,   137,   528,
    1303,  1299,  1301,  1278,  1289,   246,   246,   246,   499,  1162,
    1287,  1312,   584,   545,  1283,   476,   246,   246,   611,  1305,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   112,
     246,   246,   246,   246,   169,   246,  1132,   246,   250,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,  1130,   229,   246,   249,   249,   246,   246,   246,
     246,   246,   246,   489,    94,    -1,   346,   246,   251,   251,
     251,   251,   249,   246,   246,   246,    -1,    -1,   399,   246,
      -1,    -1,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     380,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     409
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   253,     0,     1,     4,    16,    19,    25,    32,    44,
      49,    50,    69,    73,    84,   106,   107,   122,   139,   164,
     165,   187,   198,   204,   208,   211,   254,   259,   264,   284,
     290,   296,   304,   318,   342,   366,   380,   395,   402,   406,
     416,   425,   446,   452,   458,   462,   468,   529,   543,   246,
     247,   248,   248,   343,   426,   453,   248,   463,   248,   381,
     447,   367,   248,   291,   319,   396,   248,   248,   417,   248,
     297,   248,   407,     1,    33,    41,   108,   285,   286,   287,
     288,   289,     1,    29,    30,    36,    64,    65,    66,    80,
      81,    82,    88,    89,   530,   531,   532,   533,   534,   535,
     536,   537,   538,   539,   540,   541,   542,   248,   248,   248,
       1,    68,   459,   460,   461,   248,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    23,    27,    28,    35,    38,
      39,    40,    45,    62,    63,    74,    77,    78,    79,    85,
      87,    94,    96,    98,    99,   101,   103,   104,   115,   120,
     121,   123,   124,   125,   128,   166,   177,   178,   179,   180,
     181,   182,   183,   228,   229,   230,   232,   233,   241,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   519,   522,
     526,   527,   528,   248,   248,   248,     1,   105,   127,   260,
     261,   262,   263,   248,   248,   248,     1,    37,    46,    47,
      48,    51,    52,    56,    57,    58,   544,   545,   546,   547,
     548,   549,   550,   551,   552,   553,   554,     1,    31,    33,
      60,    71,    95,   100,   108,   112,   113,   141,   171,   174,
     175,   176,   217,   239,   240,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   248,     1,   237,   305,   306,   307,
     308,   309,   248,     1,   108,   403,   404,   405,   248,   246,
     249,   249,   249,   247,   286,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   247,   531,     1,    17,
      18,    26,    70,    89,    90,    91,    92,    93,    97,   102,
     108,   118,   119,   129,   163,   205,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,     1,     3,     5,    19,    42,
      59,    61,    70,    83,   108,   130,   162,   172,   217,   239,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   441,   442,   443,   444,   445,     1,    68,   133,   454,
     455,   456,   457,   249,   247,   460,     1,   108,   133,   464,
     465,   466,   467,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   523,   518,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   247,   470,     1,    19,    42,
      70,   126,   134,   135,   168,   238,   382,   383,   384,   385,
     386,   387,   388,   392,   393,   394,     1,   133,   238,   448,
     449,   450,   451,     1,    59,    68,    70,   130,   368,   372,
     373,   374,   378,   379,   246,   249,   249,   247,   261,     1,
      86,   192,   292,   293,   294,   295,     1,    19,    42,    70,
     108,   126,   172,   173,   213,   219,   238,   242,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   334,
     338,     1,    44,    86,   133,   397,   398,   399,   400,   401,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   247,
     545,   246,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   247,
     266,     1,   108,   235,   418,   419,   420,   421,   246,   249,
     247,   306,   192,     1,   108,   186,   203,   218,   298,   299,
     300,   301,   302,   303,   249,   247,   404,     1,   108,   235,
     238,   408,   409,   410,   411,   412,   131,   131,   131,   246,
     117,   117,   256,   227,   117,   256,   256,   117,   256,   256,
     117,   117,   246,   246,   249,   249,   249,   363,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   247,   345,   246,   249,   249,   249,   249,   249,   249,
     438,   249,   249,   249,   249,   249,   249,   249,   247,   428,
     249,   249,   247,   455,   131,   246,   249,   249,   247,   465,
     227,   256,   117,   256,   256,   131,   131,   131,   131,   227,
     117,   227,   117,   117,   117,   227,   227,   227,   256,   117,
     117,   131,   256,   117,   117,   256,   117,   117,   117,   117,
     117,   227,   249,   249,   227,   256,   256,   227,   227,   227,
     227,   231,   227,   231,   227,   227,   227,   227,   117,   256,
     227,   256,   256,   227,   246,   246,   249,   249,   389,   249,
     249,   249,   249,   249,   247,   383,   249,   249,   247,   449,
     246,   249,   249,   369,   249,   247,   373,   131,   131,   246,
     246,   249,   249,   247,   293,   246,   249,   249,   339,   249,
     249,   249,   249,   335,   331,   249,   249,   247,   321,   246,
     249,   249,   249,   247,   398,   227,   227,   256,   131,   227,
     131,   227,   227,   227,   246,   117,   131,   227,   131,   117,
     117,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   246,   246,   249,   422,   247,   419,   227,   246,
     248,   246,   249,   249,   249,   249,   247,   299,   131,   246,
     246,   249,   413,   249,   247,   409,   246,   246,   246,   246,
     155,   156,   157,   158,   159,   160,   161,   255,   256,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   117,
     117,   256,   249,   117,   117,   117,   256,   117,   117,   256,
     131,   117,   117,   256,   117,   258,   258,   246,   131,   195,
     196,   131,   227,   131,   131,   249,   131,   131,   117,   131,
     131,   131,   131,   246,   131,   131,   246,   246,   131,   131,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,    51,   185,   188,   191,   194,   197,   199,
     200,   209,   214,   215,   224,   243,   524,   525,    51,    53,
      54,    67,   185,   188,   191,   194,   197,   199,   200,   209,
     214,   215,   224,   243,   520,   521,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   131,   227,   249,   131,
     117,   131,   131,   131,   246,   131,   131,   246,   131,   131,
     249,   117,   376,   377,   246,   246,   246,   131,   131,   246,
     131,   227,   249,   131,   131,   131,   227,   249,   249,   131,
     131,   246,   131,   131,   131,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   131,   249,   246,   246,     1,   108,   212,   235,
     310,   311,   312,   313,   314,   131,   131,   131,   131,   246,
     246,   131,   249,   131,   246,   255,   255,   255,   255,   255,
     255,   255,   246,   246,   246,    55,   132,   364,   365,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
      11,    12,    13,   257,   258,   246,   246,   246,   246,   246,
     246,   246,   246,   246,     8,   216,   439,   440,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     250,   246,   250,   246,   246,    15,    43,    76,   109,   110,
     116,   140,   169,   226,   245,   390,   391,   246,   246,   246,
     246,   246,   246,   246,   246,   246,    51,   207,   216,   370,
     371,   234,   250,   375,   246,   246,   246,   246,     4,    24,
      25,    34,    72,    73,    75,   105,   111,   114,   136,   138,
     139,   170,   190,   193,   197,   201,   202,   206,   210,   220,
     222,   223,   225,   236,   244,   340,   341,   246,   246,   246,
     246,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   189,   336,   337,    51,    53,    54,
      67,   185,   188,   191,   194,   197,   199,   200,   209,   214,
     215,   224,   243,   332,   333,   246,   246,   246,   246,   246,
     246,    75,   139,   184,   190,   197,   220,   222,   223,   236,
     244,   423,   424,   246,   249,   249,   315,   247,   311,   246,
     246,   246,   246,   246,    75,   139,   184,   190,   197,   220,
     222,   223,   236,   244,   414,   415,   246,   246,   250,   257,
     257,   257,   246,   250,   525,   521,   246,   250,   246,   250,
     117,   377,   246,   251,   251,   251,   251,   251,   246,   250,
     246,   250,   246,   250,   246,   250,   131,   221,   258,   249,
     246,   246,   250,   365,   440,   391,   371,   137,   139,   137,
     139,   137,   341,   337,   333,   424,   246,   246,   246,    73,
      75,   122,   139,   189,   190,   238,   244,   316,   317,   415,
     246,   250,   317
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   252,   253,   253,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     256,   256,   256,   256,   256,   256,   256,   256,   257,   257,
     258,   258,   258,   258,   259,   260,   260,   261,   261,   261,
     262,   263,   264,   265,   265,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,   282,   283,
     284,   285,   285,   286,   286,   286,   286,   287,   288,   289,
     291,   290,   292,   292,   293,   293,   293,   294,   295,   297,
     296,   298,   298,   299,   299,   299,   299,   299,   300,   301,
     302,   303,   304,   305,   305,   306,   306,   306,   307,   309,
     308,   310,   310,   311,   311,   311,   311,   312,   313,   313,
     315,   314,   316,   316,   317,   317,   317,   317,   317,   317,
     317,   317,   319,   318,   320,   320,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   331,   330,   332,   332,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   335,   334,   336,   336,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   339,   338,   340,   340,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   343,   342,
     344,   344,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   363,   362,   364,   364,
     365,   365,   367,   366,   369,   368,   370,   370,   371,   371,
     371,   372,   372,   373,   373,   373,   373,   373,   375,   374,
     376,   376,   377,   377,   378,   379,   381,   380,   382,   382,
     383,   383,   383,   383,   383,   383,   383,   383,   383,   384,
     385,   386,   387,   389,   388,   390,   390,   391,   391,   391,
     391,   391,   391,   391,   391,   391,   391,   392,   393,   394,
     396,   395,   397,   397,   398,   398,   398,   398,   399,   400,
     401,   402,   403,   403,   404,   404,   405,   407,   406,   408,
     408,   409,   409,   409,   409,   410,   411,   413,   412,   414,
     414,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   417,   416,   418,   418,   419,   419,   419,   420,   422,
     421,   423,   423,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   426,   425,   427,   427,   428,   428,   428,
     428,   428,   428,   428,   428,   428,   428,   428,   428,   428,
     428,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     436,   438,   437,   439,   439,   440,   440,   441,   442,   443,
     444,   445,   447,   446,   448,   448,   449,   449,   449,   450,
     451,   453,   452,   454,   454,   455,   455,   455,   456,   457,
     458,   459,   459,   460,   460,   461,   463,   462,   464,   464,
     465,   465,   465,   466,   467,   468,   469,   469,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   502,   503,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   518,
     517,   519,   520,   520,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     523,   522,   524,   524,   525,   525,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   525,   525,   526,   527,   528,
     529,   530,   530,   531,   531,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   543,   544,   544,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   546,
     547,   548,   549,   550,   551,   552,   553,   554
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
       1,     3,     3,     1,     1,     1,     1,     1,     0,     6,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       1,     1,     0,     6,     0,     5,     3,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     2,     0,     5,
       3,     1,     1,     3,     4,     4,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       4,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     2,     4,     4,
       4,     5,     2,     1,     1,     1,     4,     0,     6,     2,
       1,     1,     1,     1,     2,     4,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     2,     1,     1,     1,     2,     4,     0,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     0,     5,     3,     1,     1,     1,     4,     4,     4,
       4,     4,     0,     6,     2,     1,     1,     1,     1,     4,
       4,     0,     6,     2,     1,     1,     1,     1,     4,     4,
       5,     2,     1,     1,     1,     4,     0,     6,     2,     1,
       1,     1,     1,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     4,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4
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
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2947 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2953 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2965 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2971 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 439 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2977 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 440 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2983 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 441 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2989 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 442 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 445 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 3001 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 446 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 3007 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 447 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 3013 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 448 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 3019 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 449 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 3025 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 462 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 3034 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 468 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3043 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 501 "conf_parser.y" /* yacc.c:1646  */
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
#line 3086 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 541 "conf_parser.y" /* yacc.c:1646  */
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
#line 3147 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 599 "conf_parser.y" /* yacc.c:1646  */
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
#line 3179 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 628 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3190 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 636 "conf_parser.y" /* yacc.c:1646  */
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
#line 3207 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 650 "conf_parser.y" /* yacc.c:1646  */
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
#line 3238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 678 "conf_parser.y" /* yacc.c:1646  */
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
#line 3256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 693 "conf_parser.y" /* yacc.c:1646  */
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
#line 3274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 708 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3287 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 718 "conf_parser.y" /* yacc.c:1646  */
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
#line 3304 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 732 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3316 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 741 "conf_parser.y" /* yacc.c:1646  */
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
#line 3347 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 769 "conf_parser.y" /* yacc.c:1646  */
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
#line 3378 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 797 "conf_parser.y" /* yacc.c:1646  */
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
#line 3406 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 822 "conf_parser.y" /* yacc.c:1646  */
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
#line 3431 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 844 "conf_parser.y" /* yacc.c:1646  */
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
#line 3456 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 866 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3465 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 884 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3477 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 893 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3489 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 902 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 915 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 919 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3527 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 936 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3536 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 942 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3545 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 952 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3554 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 956 "conf_parser.y" /* yacc.c:1646  */
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
#line 3572 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 974 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3581 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 980 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3590 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 986 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3599 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 992 "conf_parser.y" /* yacc.c:1646  */
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
#line 3620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1020 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3629 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1026 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3638 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1030 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1046 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3662 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1054 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3670 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1057 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3678 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1062 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3687 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1069 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3696 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1073 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3705 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1077 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3714 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1081 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3723 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1085 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3732 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1089 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3741 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1093 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3750 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1097 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3759 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1107 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3771 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1114 "conf_parser.y" /* yacc.c:1646  */
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
#line 3825 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1179 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3834 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1185 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3843 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1191 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3852 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1197 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3861 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1203 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3875 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1214 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3884 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1220 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3898 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1231 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3907 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1237 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3916 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1244 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3925 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1248 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3934 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1252 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3943 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1256 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3952 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1260 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3961 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1264 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3970 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1268 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1272 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3988 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1276 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 3997 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1280 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4006 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1284 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4015 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1288 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4024 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1292 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4033 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1296 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1300 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1304 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
}
#line 4060 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1310 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value = 0;
}
#line 4069 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1317 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_CCONN;
}
#line 4078 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1321 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_DEBUG;
}
#line 4087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1325 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_EXTERNAL;
}
#line 4096 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1329 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_FULL;
}
#line 4105 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1333 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_REJ;
}
#line 4114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1337 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_SKILL;
}
#line 4123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1341 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_NCHANGE;
}
#line 4132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1345 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_UNAUTH;
}
#line 4141 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1349 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_KLINE;
}
#line 4150 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1353 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_DLINE;
}
#line 4159 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1357 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_XLINE;
}
#line 4168 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1361 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_BOTS;
}
#line 4177 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1365 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_SERVREJ;
}
#line 4186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1369 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_GENERAL;
}
#line 4195 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1375 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1382 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4213 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1386 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4222 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1390 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4231 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1394 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4240 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1398 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4249 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1402 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1406 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4267 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1410 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4276 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1414 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4285 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1418 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4294 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1422 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4303 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1426 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4312 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1430 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4321 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1434 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4330 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1438 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4339 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1442 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1446 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4357 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1450 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4366 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1454 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4375 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1458 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4384 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1462 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4393 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1466 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4402 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1470 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4411 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1474 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1478 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4429 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1482 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4438 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1486 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4447 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1490 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4456 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1494 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4465 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1498 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4474 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1508 "conf_parser.y" /* yacc.c:1646  */
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
#line 4491 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1520 "conf_parser.y" /* yacc.c:1646  */
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
#line 4539 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1584 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4548 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1590 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4557 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1596 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4566 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1602 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4575 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1608 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4584 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1614 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4593 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1620 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4602 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1626 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4611 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1632 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1638 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4629 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1644 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4639 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1651 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4648 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1657 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4657 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1663 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4666 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1669 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4678 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1678 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4690 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1687 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4699 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1694 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4708 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1698 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4717 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1708 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4726 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1714 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4734 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1720 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4743 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1724 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4752 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1728 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4761 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1736 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4767 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1741 "conf_parser.y" /* yacc.c:1646  */
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
#line 4785 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1754 "conf_parser.y" /* yacc.c:1646  */
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
#line 4805 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1771 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4814 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1777 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4823 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1787 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4832 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1791 "conf_parser.y" /* yacc.c:1646  */
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
#line 4873 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1840 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4882 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1846 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4891 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1852 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4900 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1858 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1869 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1876 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1880 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4941 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1884 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1888 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1892 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4968 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1896 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4977 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1900 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1904 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1908 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 5004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1912 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 5013 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1918 "conf_parser.y" /* yacc.c:1646  */
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
#line 5030 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1932 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 5042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1941 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 5054 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1954 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 5066 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1961 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 5077 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1972 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5086 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1978 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5095 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1984 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5104 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1999 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5119 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2015 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5135 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2026 "conf_parser.y" /* yacc.c:1646  */
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
#line 5152 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2043 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5161 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2049 "conf_parser.y" /* yacc.c:1646  */
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
#line 5183 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2068 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5192 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2075 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5201 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2079 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5210 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2083 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5219 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2087 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2091 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5237 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2095 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5246 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2099 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5255 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2103 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5264 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2107 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5273 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2111 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5282 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2121 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5296 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2130 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5311 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2145 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5320 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2151 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5329 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2158 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5338 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2162 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5347 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2166 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5356 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2170 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5365 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2174 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5374 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2178 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5383 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2182 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5392 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2186 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5401 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2190 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5410 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2194 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5419 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2204 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5433 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2213 "conf_parser.y" /* yacc.c:1646  */
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
#line 5499 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2293 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5508 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2299 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5517 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2305 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5526 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2311 "conf_parser.y" /* yacc.c:1646  */
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
#line 5542 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2324 "conf_parser.y" /* yacc.c:1646  */
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
#line 5558 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2337 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5567 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2343 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2349 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2353 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2359 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5602 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2365 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5611 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2369 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2375 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5634 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2386 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5643 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2392 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2398 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2404 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5675 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2419 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5684 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2423 "conf_parser.y" /* yacc.c:1646  */
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
#line 5709 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2448 "conf_parser.y" /* yacc.c:1646  */
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
#line 5732 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2468 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5741 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2478 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5750 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2482 "conf_parser.y" /* yacc.c:1646  */
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
#line 5776 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2508 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5785 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2514 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5794 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2529 "conf_parser.y" /* yacc.c:1646  */
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
#line 5811 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2546 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5820 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2550 "conf_parser.y" /* yacc.c:1646  */
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
#line 5842 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2572 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5851 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2578 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5860 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2646 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5868 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2651 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5876 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2656 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5884 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2661 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5896 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2670 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5908 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2679 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5920 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2688 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
}
#line 5932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2697 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5941 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2703 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5949 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2708 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5957 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2713 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5965 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2718 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5973 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2723 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5985 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2732 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5993 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2737 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 6001 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2742 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 6009 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2747 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 6017 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2752 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 6025 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2757 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 6033 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2762 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 6041 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2767 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 6049 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2772 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 6057 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2777 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 6065 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2782 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 6074 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2788 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 6082 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2793 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 6090 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2798 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 6098 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2803 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6106 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2808 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2813 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6122 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2818 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6130 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2823 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6138 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2826 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6146 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2831 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6154 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2834 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6162 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2839 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6170 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2844 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6178 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2849 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2854 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6194 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2859 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2864 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6210 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2869 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6218 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2874 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6226 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2879 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6234 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2884 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6242 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2889 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6250 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2894 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2899 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.map_split_timeout = (yyvsp[-1].number);
}
#line 6266 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2909 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_split_history = (yyvsp[-1].number);
}
#line 6282 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2915 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6290 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2918 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6298 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2921 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6306 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2924 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6314 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2927 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6322 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2930 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6330 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2933 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6338 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2936 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6346 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2939 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6354 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2942 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6362 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2945 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6370 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2948 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6378 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2951 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6386 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2954 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6394 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2957 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6402 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2960 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
}
#line 6410 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2965 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2971 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6426 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2974 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6434 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2977 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6442 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2980 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6450 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2983 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6458 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2986 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2989 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6474 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2992 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6482 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2995 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6490 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2998 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6498 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3001 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6506 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3004 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6514 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3007 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6522 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3012 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6530 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 3017 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6538 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3022 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3047 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6554 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3052 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6562 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3057 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6570 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3062 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6578 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3067 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6586 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3072 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3077 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6602 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3082 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6610 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3087 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6618 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3092 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6626 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3097 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6634 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3120 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6643 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3126 "conf_parser.y" /* yacc.c:1646  */
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
#line 6662 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3142 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6674 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3151 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6683 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3157 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6692 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3163 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6701 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3169 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6713 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3178 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6722 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3184 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6731 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6735 "conf_parser.c" /* yacc.c:1646  */
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
