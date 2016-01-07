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
    MASK = 340,
    MAX_ACCEPT = 341,
    MAX_BANS = 342,
    MAX_CHANNELS = 343,
    MAX_GLOBAL = 344,
    MAX_IDENT = 345,
    MAX_IDLE = 346,
    MAX_LOCAL = 347,
    MAX_NICK_CHANGES = 348,
    MAX_NICK_LENGTH = 349,
    MAX_NICK_TIME = 350,
    MAX_NUMBER = 351,
    MAX_SPLIT_HISTORY = 352,
    MAX_TARGETS = 353,
    MAX_TOPIC_LENGTH = 354,
    MAX_WATCH = 355,
    MIN_IDLE = 356,
    MIN_NONWILDCARD = 357,
    MIN_NONWILDCARD_SIMPLE = 358,
    MODULE = 359,
    MODULES = 360,
    MOTD = 361,
    NAME = 362,
    NEED_IDENT = 363,
    NEED_PASSWORD = 364,
    NETADMIN = 365,
    NETWORK_DESC = 366,
    NETWORK_NAME = 367,
    NICK = 368,
    NO_OPER_FLOOD = 369,
    NO_TILDE = 370,
    NUMBER = 371,
    NUMBER_PER_CIDR = 372,
    NUMBER_PER_IP = 373,
    OPER_ONLY_UMODES = 374,
    OPER_UMODES = 375,
    OPERATOR = 376,
    OPERS_BYPASS_CALLERID = 377,
    PACE_WAIT = 378,
    PACE_WAIT_SIMPLE = 379,
    PASSWORD = 380,
    PATH = 381,
    PING_COOKIE = 382,
    PING_TIME = 383,
    PORT = 384,
    QSTRING = 385,
    RANDOM_IDLE = 386,
    REASON = 387,
    REDIRPORT = 388,
    REDIRSERV = 389,
    REHASH = 390,
    REMOTE = 391,
    REMOTEBAN = 392,
    RESV = 393,
    RESV_EXEMPT = 394,
    RSA_PRIVATE_KEY_FILE = 395,
    S_BOTS = 396,
    S_CCONN = 397,
    S_DLINESPAM = 398,
    S_EXTERNAL = 399,
    S_FULL = 400,
    S_KLINESPAM = 401,
    S_NCHANGE = 402,
    S_REJ = 403,
    S_SERVREJ = 404,
    S_SKILL = 405,
    S_SNOGENERAL = 406,
    S_UNAUTH = 407,
    S_XLINESPAM = 408,
    SECONDS = 409,
    MINUTES = 410,
    HOURS = 411,
    DAYS = 412,
    WEEKS = 413,
    MONTHS = 414,
    YEARS = 415,
    SEND_PASSWORD = 416,
    SENDQ = 417,
    SERVERHIDE = 418,
    SERVERINFO = 419,
    SHORT_MOTD = 420,
    SNOMODES = 421,
    SPOOF = 422,
    SPOOF_NOTICE = 423,
    SQUIT = 424,
    SSL_CERTIFICATE_FILE = 425,
    SSL_CERTIFICATE_FINGERPRINT = 426,
    SSL_CONNECTION_REQUIRED = 427,
    SSL_DH_ELLIPTIC_CURVE = 428,
    SSL_DH_PARAM_FILE = 429,
    SSL_MESSAGE_DIGEST_ALGORITHM = 430,
    STATS_E_DISABLED = 431,
    STATS_I_OPER_ONLY = 432,
    STATS_K_OPER_ONLY = 433,
    STATS_M_OPER_ONLY = 434,
    STATS_O_OPER_ONLY = 435,
    STATS_P_OPER_ONLY = 436,
    STATS_U_OPER_ONLY = 437,
    T_ALL = 438,
    T_CALLERID = 439,
    T_COMMAND = 440,
    T_CLUSTER = 441,
    T_DEAF = 442,
    S_DEBUG = 443,
    T_DLINE = 444,
    T_FARCONNECT = 445,
    T_FILE = 446,
    T_GLOBOPS = 447,
    T_INVISIBLE = 448,
    T_IPV4 = 449,
    T_IPV6 = 450,
    T_LOCOPS = 451,
    T_LOG = 452,
    T_NONONREG = 453,
    T_OPERWALL = 454,
    T_OPERWALLS = 455,
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
#define MASK 340
#define MAX_ACCEPT 341
#define MAX_BANS 342
#define MAX_CHANNELS 343
#define MAX_GLOBAL 344
#define MAX_IDENT 345
#define MAX_IDLE 346
#define MAX_LOCAL 347
#define MAX_NICK_CHANGES 348
#define MAX_NICK_LENGTH 349
#define MAX_NICK_TIME 350
#define MAX_NUMBER 351
#define MAX_SPLIT_HISTORY 352
#define MAX_TARGETS 353
#define MAX_TOPIC_LENGTH 354
#define MAX_WATCH 355
#define MIN_IDLE 356
#define MIN_NONWILDCARD 357
#define MIN_NONWILDCARD_SIMPLE 358
#define MODULE 359
#define MODULES 360
#define MOTD 361
#define NAME 362
#define NEED_IDENT 363
#define NEED_PASSWORD 364
#define NETADMIN 365
#define NETWORK_DESC 366
#define NETWORK_NAME 367
#define NICK 368
#define NO_OPER_FLOOD 369
#define NO_TILDE 370
#define NUMBER 371
#define NUMBER_PER_CIDR 372
#define NUMBER_PER_IP 373
#define OPER_ONLY_UMODES 374
#define OPER_UMODES 375
#define OPERATOR 376
#define OPERS_BYPASS_CALLERID 377
#define PACE_WAIT 378
#define PACE_WAIT_SIMPLE 379
#define PASSWORD 380
#define PATH 381
#define PING_COOKIE 382
#define PING_TIME 383
#define PORT 384
#define QSTRING 385
#define RANDOM_IDLE 386
#define REASON 387
#define REDIRPORT 388
#define REDIRSERV 389
#define REHASH 390
#define REMOTE 391
#define REMOTEBAN 392
#define RESV 393
#define RESV_EXEMPT 394
#define RSA_PRIVATE_KEY_FILE 395
#define S_BOTS 396
#define S_CCONN 397
#define S_DLINESPAM 398
#define S_EXTERNAL 399
#define S_FULL 400
#define S_KLINESPAM 401
#define S_NCHANGE 402
#define S_REJ 403
#define S_SERVREJ 404
#define S_SKILL 405
#define S_SNOGENERAL 406
#define S_UNAUTH 407
#define S_XLINESPAM 408
#define SECONDS 409
#define MINUTES 410
#define HOURS 411
#define DAYS 412
#define WEEKS 413
#define MONTHS 414
#define YEARS 415
#define SEND_PASSWORD 416
#define SENDQ 417
#define SERVERHIDE 418
#define SERVERINFO 419
#define SHORT_MOTD 420
#define SNOMODES 421
#define SPOOF 422
#define SPOOF_NOTICE 423
#define SQUIT 424
#define SSL_CERTIFICATE_FILE 425
#define SSL_CERTIFICATE_FINGERPRINT 426
#define SSL_CONNECTION_REQUIRED 427
#define SSL_DH_ELLIPTIC_CURVE 428
#define SSL_DH_PARAM_FILE 429
#define SSL_MESSAGE_DIGEST_ALGORITHM 430
#define STATS_E_DISABLED 431
#define STATS_I_OPER_ONLY 432
#define STATS_K_OPER_ONLY 433
#define STATS_M_OPER_ONLY 434
#define STATS_O_OPER_ONLY 435
#define STATS_P_OPER_ONLY 436
#define STATS_U_OPER_ONLY 437
#define T_ALL 438
#define T_CALLERID 439
#define T_COMMAND 440
#define T_CLUSTER 441
#define T_DEAF 442
#define S_DEBUG 443
#define T_DLINE 444
#define T_FARCONNECT 445
#define T_FILE 446
#define T_GLOBOPS 447
#define T_INVISIBLE 448
#define T_IPV4 449
#define T_IPV6 450
#define T_LOCOPS 451
#define T_LOG 452
#define T_NONONREG 453
#define T_OPERWALL 454
#define T_OPERWALLS 455
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
#define YYLAST   1385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  251
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  302
/* YYNRULES -- Number of rules.  */
#define YYNRULES  675
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1338

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
    1468,  1472,  1476,  1480,  1484,  1488,  1492,  1496,  1507,  1506,
    1563,  1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,  1571,
    1572,  1573,  1574,  1575,  1576,  1576,  1577,  1578,  1579,  1580,
    1582,  1588,  1594,  1600,  1606,  1612,  1618,  1624,  1630,  1636,
    1642,  1649,  1655,  1661,  1667,  1676,  1686,  1685,  1691,  1691,
    1692,  1696,  1707,  1706,  1713,  1712,  1717,  1717,  1718,  1722,
    1726,  1732,  1732,  1733,  1733,  1733,  1733,  1733,  1735,  1735,
    1737,  1737,  1739,  1752,  1769,  1775,  1786,  1785,  1827,  1827,
    1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,  1836,  1838,
    1844,  1850,  1856,  1868,  1867,  1873,  1873,  1874,  1878,  1882,
    1886,  1890,  1894,  1898,  1902,  1906,  1910,  1916,  1930,  1939,
    1953,  1952,  1967,  1967,  1968,  1968,  1968,  1968,  1970,  1976,
    1982,  1992,  1994,  1994,  1995,  1995,  1997,  2014,  2013,  2038,
    2038,  2039,  2039,  2039,  2039,  2041,  2047,  2067,  2066,  2072,
    2072,  2073,  2077,  2081,  2085,  2089,  2093,  2097,  2101,  2105,
    2109,  2120,  2119,  2140,  2140,  2141,  2141,  2141,  2143,  2150,
    2149,  2155,  2155,  2156,  2160,  2164,  2168,  2172,  2176,  2180,
    2184,  2188,  2192,  2203,  2202,  2274,  2274,  2275,  2276,  2277,
    2278,  2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,  2287,
    2288,  2289,  2291,  2297,  2303,  2309,  2322,  2335,  2341,  2347,
    2351,  2358,  2357,  2362,  2362,  2363,  2367,  2373,  2384,  2390,
    2396,  2402,  2418,  2417,  2443,  2443,  2444,  2444,  2444,  2446,
    2466,  2477,  2476,  2503,  2503,  2504,  2504,  2504,  2506,  2512,
    2522,  2524,  2524,  2525,  2525,  2527,  2545,  2544,  2567,  2567,
    2568,  2568,  2568,  2570,  2576,  2586,  2588,  2588,  2589,  2590,
    2591,  2592,  2593,  2594,  2595,  2596,  2597,  2598,  2599,  2600,
    2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,  2610,
    2611,  2612,  2613,  2614,  2615,  2616,  2617,  2618,  2619,  2620,
    2621,  2622,  2623,  2624,  2625,  2626,  2627,  2628,  2629,  2630,
    2631,  2632,  2633,  2634,  2635,  2636,  2637,  2638,  2639,  2640,
    2643,  2648,  2653,  2658,  2667,  2676,  2685,  2694,  2700,  2705,
    2710,  2715,  2720,  2729,  2734,  2739,  2744,  2749,  2754,  2759,
    2764,  2769,  2774,  2779,  2785,  2790,  2795,  2800,  2805,  2810,
    2815,  2820,  2823,  2828,  2831,  2836,  2841,  2846,  2851,  2856,
    2861,  2866,  2871,  2876,  2881,  2886,  2891,  2897,  2896,  2901,
    2906,  2906,  2907,  2910,  2913,  2916,  2919,  2922,  2925,  2928,
    2931,  2934,  2937,  2940,  2943,  2946,  2949,  2952,  2958,  2957,
    2962,  2962,  2963,  2966,  2969,  2972,  2975,  2978,  2981,  2984,
    2987,  2990,  2993,  2996,  2999,  3004,  3009,  3014,  3023,  3025,
    3025,  3026,  3027,  3028,  3029,  3030,  3031,  3032,  3033,  3034,
    3035,  3036,  3037,  3039,  3044,  3049,  3054,  3059,  3064,  3069,
    3074,  3079,  3084,  3089,  3098,  3100,  3100,  3101,  3102,  3103,
    3104,  3105,  3106,  3107,  3108,  3109,  3110,  3112,  3118,  3134,
    3143,  3149,  3155,  3161,  3170,  3176
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
  "MASK", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANNELS", "MAX_GLOBAL",
  "MAX_IDENT", "MAX_IDLE", "MAX_LOCAL", "MAX_NICK_CHANGES",
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
  "general_throttle_count", "general_throttle_time", "general_oper_umodes",
  "$@26", "general_max_split_history", "umode_oitems", "umode_oitem",
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

#define YYPACT_NINF -910

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-910)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -910,   778,  -910,  -183,  -234,  -213,  -910,  -910,  -910,  -210,
    -910,  -208,  -910,  -910,  -910,  -193,  -910,  -910,  -910,  -170,
    -162,  -910,  -154,  -910,  -151,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,     2,   849,  -148,  -146,  -136,    19,  -134,   493,  -129,
    -121,  -118,    51,   -89,   -77,   -71,   943,   632,   -67,     6,
     -63,    13,   -38,  -198,   -28,   -18,   -10,    17,  -910,  -910,
    -910,  -910,  -910,    -3,    22,    48,    50,    72,    74,    76,
      84,    90,    96,    99,   153,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,   697,   389,    29,
    -910,   100,    37,  -910,  -910,    39,  -910,   102,   103,   114,
     115,   117,   119,   120,   124,   125,   128,   130,   135,   136,
     137,   138,   141,   145,   148,   150,   152,   155,   156,   157,
     158,   162,   163,   166,   167,   170,   171,   172,  -910,  -910,
     173,   174,   175,   178,   179,   180,   185,   186,   190,   191,
     192,   193,   199,   201,   203,   204,   205,   206,   129,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,   312,    41,   296,    -1,   207,   208,    40,  -910,  -910,
    -910,    93,   317,    27,  -910,   213,   214,   216,   217,   221,
     222,   223,   225,   228,     9,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,    44,   229,   230,   232,   233,
     236,   237,   239,   242,   247,   249,   257,   258,   260,   261,
     264,   269,   271,    20,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,    35,    85,   274,    14,  -910,  -910,  -910,   154,
     227,  -910,   275,    15,  -910,  -910,   105,  -910,   211,   279,
     302,   108,  -910,   285,   377,   151,   408,   377,   377,   409,
     377,   377,   410,   414,   291,  -910,   292,   298,   299,   300,
    -910,   303,   304,   309,   313,   314,   315,   316,   318,   320,
     321,   327,   328,   329,   184,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,   333,   332,   334,   337,   339,   341,   344,
    -910,   346,   350,   351,   352,   353,   354,   358,   220,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,   360,   361,    21,  -910,  -910,
    -910,   345,   336,  -910,  -910,   362,   363,   161,  -910,  -910,
    -910,   388,   377,   502,   377,   377,   489,   495,   496,   498,
     397,   513,   404,   515,   516,   518,   412,   413,   415,   377,
     519,   520,   514,   529,   531,   377,   534,   538,   540,   541,
     544,   438,   420,   429,   456,   377,   377,   457,   462,   463,
    -199,  -197,   464,   465,   467,   470,   563,   377,   471,   377,
     377,   473,   440,  -910,   455,   468,   469,  -910,   479,   481,
     482,   484,   486,   246,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,   487,   488,    82,  -910,  -910,  -910,
     466,   492,   494,  -910,   499,  -910,    11,  -910,  -910,  -910,
    -910,  -910,   571,   582,   474,  -910,   501,   500,   503,    25,
    -910,  -910,  -910,   507,   505,   508,  -910,   509,   511,   512,
     517,  -910,  -910,   521,   526,   245,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,   510,   527,
     528,   532,    31,  -910,  -910,  -910,  -910,   536,   555,   377,
     583,   557,   607,   564,   569,   570,   554,  -910,  -910,   650,
     670,   575,   678,   693,   695,   682,   683,   686,   687,   688,
     689,   690,   696,   699,   700,   701,   587,  -910,   588,   586,
    -910,    91,  -910,  -910,  -910,  -910,   609,   593,  -910,   592,
     595,   596,   597,   598,   604,    97,  -910,  -910,  -910,  -910,
    -910,   711,   608,  -910,   610,   606,  -910,   612,    58,  -910,
    -910,  -910,  -910,   611,   613,   616,  -910,   618,   385,   619,
     620,   621,   622,   623,   624,   628,   631,   635,   636,  -910,
    -910,   727,   741,   377,   629,   766,   771,   773,   377,   774,
     775,   377,   756,   776,   777,   377,   779,   779,   657,  -910,
    -910,   768,     5,   780,   679,   781,   782,   656,   787,   789,
     791,   790,   792,   795,   796,   676,  -910,   797,   798,   694,
    -910,   698,  -910,   802,   804,   702,  -910,   703,   704,   705,
     706,   708,   713,   714,   716,   717,   720,   722,   725,   726,
     728,   729,   731,   732,   734,   737,   742,   747,   751,   752,
     753,   757,   758,   759,   760,   761,   762,   763,   453,   710,
     764,   765,   783,   784,   785,   786,   788,   793,   794,   799,
     800,   801,   803,   805,   806,   807,   808,   809,   810,   811,
    -910,  -910,   815,   709,   692,   816,   822,   825,   826,   842,
     812,  -910,   856,   881,   813,  -910,  -910,   896,   897,   814,
     916,   818,  -910,   819,   820,  -910,  -910,   904,   905,   821,
    -910,  -910,   906,   817,   823,   907,   910,   911,   833,   824,
     827,   912,   917,   828,  -910,  -910,   919,   931,   937,   829,
    -910,   831,   832,   834,   835,   836,   837,   838,   839,   840,
    -910,   841,   843,   844,   845,   846,   847,   848,   850,   851,
     852,   853,   854,   855,   857,   858,   859,   860,  -910,  -910,
     938,   830,   861,  -910,   862,  -910,   106,  -910,   939,   940,
     957,   964,   863,  -910,   864,  -910,  -910,   971,   865,   980,
     866,  -910,  -910,  -910,  -910,  -910,   377,   377,   377,   377,
     377,   377,   377,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,   867,   869,   870,   -36,   871,
     873,   874,   875,   876,   877,   878,   879,   880,   882,   883,
      12,   884,   885,  -910,   886,   887,   888,   889,   890,   891,
     892,    -4,   893,   894,   895,   898,   899,   900,   901,  -910,
     902,   903,  -910,  -910,   908,   909,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -201,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -200,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,   913,   914,   359,   915,   918,   920,   921,   922,  -910,
     923,   924,  -910,   925,   926,   -34,   928,   868,  -910,  -910,
    -910,  -910,   927,   929,  -910,   930,   932,   549,   933,   934,
     935,   936,   872,   770,   941,   942,  -910,   944,   945,   946,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,   947,   459,  -910,
    -910,   948,   949,   950,  -910,    89,  -910,  -910,  -910,  -910,
     951,   954,   955,   956,  -910,  -910,   958,   653,   959,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -181,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,   779,   779,   779,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -176,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,   453,  -910,   710,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -173,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -171,  -910,  1010,   916,   960,  -910,
    -910,  -910,  -910,  -910,  -910,   952,  -910,   961,   962,  -910,
    -910,  -910,   963,  -910,  -910,  -910,   965,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -163,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -161,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -141,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -124,  -910,  -910,  1011,
    -105,   966,   972,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -108,
    -910,  -910,  -910,   -36,  -910,  -910,  -910,  -910,    -4,  -910,
    -910,  -910,   359,  -910,   -34,  -910,  -910,  -910,  1006,  1012,
    1013,  1014,  1015,  -910,   549,  -910,   872,  -910,   770,  -910,
     459,   973,   974,   975,   322,  -910,  -910,   653,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,   -70,  -910,  -910,  -910,   322,  -910
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
      95,    94,   642,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   630,   641,   632,   633,   634,
     635,   636,   637,   638,   631,   639,   640,     0,     0,     0,
     474,     0,     0,   472,   473,     0,   539,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   608,   587,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   487,
     488,   489,   531,   533,   534,   535,   536,   532,   526,   527,
     528,   529,   537,   525,   499,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   500,   501,   530,   505,   506,   507,
     508,   504,   503,   509,   516,   517,   510,   511,   512,   502,
     514,   523,   524,   521,   522,   515,   538,   513,   519,   520,
     518,     0,     0,     0,     0,     0,     0,     0,    46,    47,
      48,     0,     0,     0,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   656,   657,   658,   659,   660,
     661,   662,   664,   663,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    69,    66,    64,    70,    71,
      65,    55,    68,    58,    59,    60,    56,    67,    61,    62,
      63,    57,     0,     0,     0,     0,   124,   125,   126,     0,
       0,   365,     0,     0,   363,   364,     0,    96,     0,     0,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   629,     0,     0,     0,     0,
     286,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,   252,   255,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   253,   254,   256,
     266,   267,   268,     0,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,     0,     0,   416,
     417,   418,   419,   420,   421,   422,   424,   423,   426,   430,
     427,   428,   429,   425,   467,     0,     0,     0,   464,   465,
     466,     0,     0,   471,   482,     0,     0,     0,   479,   480,
     481,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   486,     0,     0,     0,   333,     0,     0,
       0,     0,     0,     0,   319,   320,   321,   322,   327,   323,
     324,   325,   326,   458,     0,     0,     0,   455,   456,   457,
       0,     0,     0,   294,     0,   304,     0,   302,   303,   305,
     306,    49,     0,     0,     0,    45,     0,     0,     0,     0,
     103,   104,   105,     0,     0,     0,   214,     0,     0,     0,
       0,   196,   176,     0,     0,     0,   155,   156,   157,   158,
     159,   162,   163,   164,   161,   160,   166,   165,     0,     0,
       0,     0,     0,   353,   354,   355,   356,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   655,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     399,     0,   394,   395,   396,   127,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   115,   114,
     116,     0,     0,   362,     0,     0,   377,     0,     0,   370,
     371,   372,   373,     0,     0,     0,    90,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   628,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     431,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   415,     0,     0,     0,
     463,     0,   470,     0,     0,     0,   478,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     485,   328,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   318,     0,     0,     0,   454,   307,     0,     0,     0,
       0,     0,   301,     0,     0,    44,   106,     0,     0,     0,
     102,   167,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   154,   357,     0,     0,     0,     0,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     654,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,   397,
       0,     0,     0,   393,     0,   122,     0,   117,     0,     0,
       0,     0,     0,   111,     0,   361,   374,     0,     0,     0,
       0,   369,    99,    98,    97,   652,    28,    28,    28,    28,
      28,    28,    28,    30,    29,   653,   643,   644,   645,   646,
     647,   648,   649,   651,   650,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,   249,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   414,
       0,     0,   462,   475,     0,     0,   477,   557,   561,   540,
     541,   576,   543,   544,   545,   546,   547,   627,   584,   548,
     549,   581,   556,   555,   564,   554,   550,   551,   552,   560,
     559,   558,   589,   582,   542,   625,   626,   580,   613,   619,
     612,   622,   616,   620,   621,   623,   615,   618,   614,   617,
     624,     0,   611,   593,   594,   595,   607,   601,   592,   604,
     598,   602,   603,   605,   597,   600,   596,   599,   606,     0,
     591,   577,   575,   578,   583,   579,   566,   573,   574,   571,
     572,   567,   568,   569,   570,   585,   586,   553,   563,   562,
     565,     0,     0,     0,     0,     0,     0,     0,     0,   317,
       0,     0,   453,     0,     0,     0,   312,   308,   311,   293,
      50,    51,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   153,     0,     0,     0,
     351,   670,   667,   668,   669,   674,   673,   675,   671,   672,
      86,    81,    89,    80,    87,    88,    79,    83,    82,    74,
      73,    78,    75,    77,    76,    84,    85,     0,     0,   392,
     128,     0,     0,     0,   140,     0,   132,   133,   135,   134,
       0,     0,     0,     0,   110,   366,     0,     0,     0,   368,
      31,    32,    33,    34,    35,    36,    37,   281,   282,   273,
     291,   290,     0,   289,   274,   276,   278,   285,   277,   275,
     284,   270,   283,   272,   271,    38,    38,    38,    40,    39,
     279,   280,   436,   439,   440,   450,   447,   433,   448,   445,
     446,     0,   444,   449,   432,   438,   435,   437,   451,   434,
     468,   469,   483,   484,   609,     0,   588,     0,   331,   332,
     342,   338,   339,   341,   346,   343,   344,   337,   345,   340,
       0,   336,   330,   349,   348,   347,   329,   460,   459,   315,
     314,   299,   300,   298,     0,   297,     0,     0,     0,   107,
     108,   175,   172,   233,   245,   221,   230,     0,   219,   224,
     239,   247,     0,   232,   237,   243,   223,   226,   234,   236,
     246,   240,   231,   238,   227,   244,   229,   235,   225,   228,
       0,   217,   168,   170,   173,   174,   211,   200,   209,   202,
     203,   208,   206,   204,   212,   205,   213,   207,   210,   201,
       0,   199,   181,   182,   183,   195,   189,   180,   192,   186,
     190,   191,   193,   185,   188,   184,   187,   194,     0,   179,
     169,   171,   360,   358,   359,   398,   403,   409,   412,   405,
     411,   406,   410,   408,   404,   407,     0,   402,   136,     0,
       0,     0,     0,   131,   119,   118,   120,   121,   375,   381,
     387,   390,   383,   389,   384,   388,   386,   382,   385,     0,
     380,   376,   287,     0,    41,    42,    43,   442,     0,   610,
     590,   334,     0,   295,     0,   313,   310,   309,     0,     0,
       0,     0,     0,   215,     0,   197,     0,   177,     0,   400,
       0,     0,     0,     0,     0,   130,   378,     0,   288,   443,
     335,   296,   220,   242,   218,   241,   222,   216,   198,   178,
     401,   137,   139,   138,   150,   149,   145,   147,   151,   148,
     144,   146,     0,   143,   379,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -910,  -910,  -910,  -132,  -312,  -909,  -646,  -910,  -910,   967,
    -910,  -910,  -910,  -910,   953,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  1078,  -910,  -910,  -910,  -910,  -910,
    -910,   647,  -910,  -910,  -910,  -910,  -910,   562,  -910,  -910,
    -910,  -910,  -910,  -910,   968,  -910,  -910,  -910,  -910,   107,
    -910,  -910,  -910,  -910,  -910,  -172,  -910,  -910,  -910,   648,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -122,  -910,  -910,  -910,  -114,  -910,  -910,  -910,  -111,
    -910,  -910,  -910,   969,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,   -88,  -910,  -910,  -910,  -910,  -910,  -100,
    -910,   712,  -910,  -910,  -910,    38,  -910,  -910,  -910,  -910,
    -910,   715,  -910,  -910,  -910,  -910,  -910,  -910,  -910,   -76,
    -910,  -910,  -910,  -910,  -910,  -910,   665,  -910,  -910,  -910,
    -910,  -910,   970,  -910,  -910,  -910,  -910,   601,  -910,  -910,
    -910,  -910,  -910,   -97,  -910,  -910,  -910,   640,  -910,  -910,
    -910,  -910,   -84,  -910,  -910,  -910,   976,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,   -56,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,   738,  -910,  -910,
    -910,  -910,  -910,   977,  -910,  -910,  -910,  -910,  1111,  -910,
    -910,  -910,  -910,   978,  -910,  -910,  -910,  -910,  1057,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,   101,  -910,
    -910,  -910,   104,  -910,  -910,  -910,  -910,  -910,  1133,  -910,
    -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910,   986,  -910,  -910,  -910,  -910,  -910,  -910,  -910,
    -910,  -910
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   843,   844,  1098,  1099,    27,   227,   228,
     229,   230,    28,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,    29,    77,    78,    79,    80,    81,    30,    63,
     509,   510,   511,   512,    31,    70,   595,   596,   597,   598,
     599,   600,    32,   295,   296,   297,   298,   299,  1055,  1056,
    1057,  1058,  1059,  1251,  1332,  1333,    33,    64,   525,   526,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   770,
    1228,  1229,   536,   769,  1210,  1211,   537,   764,  1190,  1191,
      34,    53,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   634,  1082,  1083,    35,    61,   495,   749,  1154,  1155,
     496,   497,   498,  1158,   997,   998,   499,   500,    36,    59,
     473,   474,   475,   476,   477,   478,   479,   734,  1140,  1141,
     480,   481,   482,    37,    65,   542,   543,   544,   545,   546,
      38,   303,   304,   305,    39,    72,   608,   609,   610,   611,
     612,   828,  1269,  1270,    40,    68,   581,   582,   583,   584,
     811,  1246,  1247,    41,    54,   378,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   657,  1111,  1112,   389,
     390,   391,   392,   393,    42,    60,   486,   487,   488,   489,
      43,    55,   397,   398,   399,   400,    44,   112,   113,   114,
      45,    57,   407,   408,   409,   410,    46,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   443,   216,   959,   960,   217,
     442,   941,   942,   218,   219,   220,    47,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      48,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     871,   872,   619,    73,  1109,   622,   623,   293,   625,   626,
     234,   870,   490,    51,   301,   293,   301,  1151,    73,  1080,
     110,   255,   394,  1095,  1096,  1097,   506,   716,   538,   718,
     394,   717,   538,   719,    52,    74,   578,    56,   110,    58,
     404,   224,   483,    75,  1124,  1126,   235,   307,  1125,  1127,
      74,   256,   224,   257,    62,   236,   237,   238,    75,   604,
     239,   240,    49,    50,  1272,   241,   242,   243,  1273,  1277,
     491,   539,  1281,  1278,  1283,   539,  1282,    66,  1284,   492,
     258,   493,  1293,   483,  1295,    67,  1294,   111,  1296,   395,
    1051,   259,   578,    69,   506,  1081,    71,   395,   590,   107,
     678,   108,   680,   681,  1297,   111,   604,  1051,  1298,    76,
     507,   109,   540,   115,   260,  1302,   540,   695,   221,   261,
     302,  1299,   302,   701,    76,  1300,   222,   262,   870,   223,
     116,   263,   264,   711,   712,   117,   118,  1306,   119,   120,
     494,  1307,   579,   121,   225,   725,   405,   727,   728,   122,
     123,   124,   125,   396,    82,   225,   126,   127,   231,   541,
     265,   396,   404,   541,   128,   605,   226,   129,   130,   131,
     232,   406,  1152,   484,   132,  1335,   233,   226,   507,  1336,
     292,  1153,    83,    84,   300,   326,  1274,  1275,  1276,    85,
     266,   133,   134,   267,   268,   269,  1052,  -129,   579,   875,
     876,   327,   328,   135,   591,  -129,   136,   137,   138,   306,
     329,  1110,   605,  1052,   484,   139,   508,    86,    87,    88,
     308,   363,   140,   364,   141,   365,   142,   143,   590,   144,
     309,   145,   146,    89,    90,    91,   270,   783,   310,   366,
      92,    93,   294,   147,   501,   313,   513,   464,   148,   149,
     294,   150,   151,   152,   330,   556,   153,   751,   271,   272,
     587,   602,   367,   311,   514,   465,   576,   669,   405,   580,
     314,   759,   331,   332,   333,   334,   335,   779,   485,   368,
     336,   369,   592,   402,   508,   337,   504,   515,   466,   558,
     370,   338,   606,   406,   154,   607,   315,   490,   316,   593,
    1053,   339,   340,   371,   830,   155,   156,   157,   158,   159,
     160,   161,   341,   464,   594,   516,   467,  1053,   513,   485,
     317,   857,   318,  1054,   319,   580,   862,   372,   744,   865,
     585,   465,   320,   869,   591,  1252,   514,   812,   321,   606,
    1054,   613,   607,   822,   322,   589,   342,   323,   401,   373,
     411,   412,   517,   616,   466,   491,   162,   163,   164,   515,
     165,   166,   413,   414,   492,   415,   493,   416,   417,   167,
     518,   468,   418,   419,  1130,   462,   420,   620,   421,   469,
     470,   374,   467,   422,   423,   424,   425,   516,   343,   426,
     363,   375,   364,   427,   365,  1324,   428,  1325,   429,   324,
     430,   617,  1131,   431,   432,   433,   434,   675,   366,   614,
     435,   436,   592,   471,   437,   438,   519,   520,   439,   440,
     441,   444,   445,   446,   517,   494,   447,   448,   449,   593,
     648,   367,   615,   450,   451,  1132,   376,   468,   452,   453,
     454,   455,   518,  1326,   594,   469,   470,   456,   368,   457,
     369,   458,   459,   460,   461,   502,   503,   521,   377,   370,
    1327,   547,   548,   522,   549,   550,   665,  1133,  1134,   551,
     552,   553,   371,   554,  1135,   671,   555,   559,   560,   471,
     561,   562,   523,   472,   563,   564,   524,   565,   519,   520,
     566,   773,   740,   618,   116,   567,   372,   568,  1136,   117,
     118,   618,   119,   120,   928,   569,   570,   121,   571,   572,
    1328,  1329,   573,   122,   123,   124,   125,   574,   373,   575,
     126,   127,   586,   601,   621,   624,   627,  1137,   128,   521,
     628,   129,   130,   131,  1236,   522,   629,   630,   132,   836,
     837,   838,   839,   840,   841,   842,   631,   632,   633,   472,
     374,   635,   636,  1163,   523,   133,   134,   637,   524,  1330,
     375,   638,   639,   640,   641,  1331,   642,   135,   643,   644,
     136,   137,   138,  1164,  1165,   645,   646,   647,   650,   139,
     651,   672,   652,  1166,  1138,   653,   140,   654,   141,   655,
     142,   143,   656,   144,   658,   145,   146,  1237,   659,   660,
     661,   662,   663,  1139,  1303,   376,   664,   147,   667,   668,
     673,   674,   148,   149,   677,   150,   151,   152,   679,   682,
     153,  1167,  1168,   686,  1169,   683,   684,   377,   685,   687,
     688,   689,   690,   255,   691,   696,   697,   929,   692,   693,
     930,   694,  1238,   931,   698,   699,   932,   700,  1239,   933,
     702,   934,   935,  1170,   703,  1240,   704,   705,   154,  1171,
     706,   936,  1172,   256,   707,   257,   937,   938,   708,   155,
     156,   157,   158,   159,   160,   161,   939,   709,  1241,   724,
    1242,  1243,   710,   713,  1173,   730,  1174,  1175,   714,   715,
     720,   721,   258,   722,  1244,   940,   723,   726,   326,   729,
     731,   753,  1245,   259,  1070,  1071,  1072,  1073,  1074,  1075,
    1076,   746,   754,   784,   327,   328,   732,   733,  1176,   755,
     162,   163,   164,   329,   165,   166,   260,   735,  1259,   736,
     737,   261,   738,   167,   739,   742,   743,   786,  1177,   262,
     747,  1178,   748,   263,   264,  1179,   756,   750,   757,  1180,
    1181,   758,   761,   762,  1182,   775,   763,   765,  1183,   766,
     767,   943,   781,   944,   945,   768,   791,   330,  1184,   771,
    1185,  1186,   265,  1187,   772,   776,   777,   946,     2,     3,
     778,   782,     4,   785,  1188,   331,   332,   333,   334,   335,
     787,  1260,  1189,   336,     5,   788,   789,     6,   337,   790,
     792,   793,   266,     7,   338,   267,   268,   269,   794,   795,
       8,   796,   797,   798,   339,   340,   799,   800,   801,   802,
     803,  1212,     9,  1213,  1214,   341,   804,    10,    11,   805,
     806,   807,   808,   809,   810,   814,  1261,  1215,   815,   816,
     817,   824,  1262,   855,   818,   819,   820,    12,   270,  1263,
      82,    13,   821,   825,   827,   826,   832,   856,   833,   342,
     829,   834,    14,   835,   845,   846,   847,   848,   849,   850,
     271,   272,  1264,   851,  1265,  1266,   852,   858,    83,    84,
     853,   854,   859,    15,    16,    85,   866,   860,  1267,   861,
     863,   864,   867,   868,   947,   870,  1268,   948,   874,    17,
     949,   343,   873,   950,   881,   878,   951,   884,   952,   953,
     877,   879,   880,    86,    87,    88,    18,   882,   954,   883,
     885,   889,   886,   955,   956,   887,   888,   890,   891,    89,
      90,    91,   894,   957,   895,   982,    92,    93,   985,   892,
     983,    19,    20,   893,   234,   981,   984,   896,   897,   898,
     899,   900,   958,   901,  1216,   986,   987,  1217,   902,   903,
    1218,   904,   905,  1219,    21,   906,  1220,   907,  1221,  1222,
     908,   909,   988,   910,   911,    22,   912,   913,  1223,   914,
     235,    23,   915,  1224,  1225,    24,   990,   916,    25,   236,
     237,   238,   917,  1226,   239,   240,   918,   919,   920,   241,
     242,   243,   921,   922,   923,   924,   925,   926,   927,   961,
     962,   991,  1227,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,  1204,  1205,  1206,  1207,  1208,   993,   994,   963,   964,
     965,   966,   996,   967,  1002,  1003,  1005,  1008,   968,   969,
    1009,  1010,  1014,  1006,   970,   971,   972,  1015,   973,  1017,
     974,   975,   976,   977,   978,   979,   980,   989,   992,  1011,
    1209,  1018,   995,   999,  1000,  1001,  1004,  1019,  1047,  1060,
    1061,  1007,  1012,  1016,  1020,  1013,  1021,  1022,  1048,  1023,
    1024,  1025,  1026,  1027,  1028,  1029,  1030,  1062,  1031,  1032,
    1033,  1034,  1035,  1036,  1063,  1037,  1038,  1039,  1040,  1041,
    1042,  1066,  1043,  1044,  1045,  1046,  1049,  1050,  1064,  1065,
    1068,  1069,  1077,  1067,  1078,  1079,  1084,  1157,  1085,  1086,
    1087,  1088,  1089,  1090,  1091,  1092,  1285,  1093,  1094,  1100,
    1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,  1113,  1114,
    1115,  1301,  1312,  1116,  1117,  1118,  1119,  1120,  1121,  1314,
    1313,  1316,  1315,  1122,  1123,   312,   760,   823,  1128,  1129,
    1142,  1156,  1253,  1143,  1337,  1144,  1145,  1146,  1147,  1148,
    1149,  1150,  1159,   774,  1160,  1161,  1319,  1162,  1192,  1193,
    1194,  1195,  1318,  1317,  1311,  1308,  1230,  1231,   741,  1232,
    1233,  1234,  1235,  1248,   505,  1286,  1254,  1249,  1250,  1255,
    1256,  1257,  1288,  1258,  1271,  1287,  1310,   780,   752,   831,
    1334,  1289,  1290,  1291,  1304,  1292,  1320,  1305,  1321,  1322,
    1323,   813,  1309,   403,   745,   463,   577,   325,  1280,  1279,
     557,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   588,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   603,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   649,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   666,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   670,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   676
};

static const yytype_int16 yycheck[] =
{
     646,   647,   314,     1,     8,   317,   318,     1,   320,   321,
       1,   116,     1,   247,     1,     1,     1,    51,     1,    55,
       1,     1,     1,    11,    12,    13,     1,   226,     1,   226,
       1,   230,     1,   230,   247,    33,     1,   247,     1,   247,
       1,     1,     1,    41,   245,   245,    37,   245,   249,   249,
      33,    31,     1,    33,   247,    46,    47,    48,    41,     1,
      51,    52,   245,   246,   245,    56,    57,    58,   249,   245,
      59,    44,   245,   249,   245,    44,   249,   247,   249,    68,
      60,    70,   245,     1,   245,   247,   249,    68,   249,    68,
       1,    71,     1,   247,     1,   131,   247,    68,     1,   247,
     412,   247,   414,   415,   245,    68,     1,     1,   249,   107,
      85,   247,    85,   247,    94,   220,    85,   429,   247,    99,
     107,   245,   107,   435,   107,   249,   247,   107,   116,   247,
       1,   111,   112,   445,   446,     6,     7,   245,     9,    10,
     129,   249,   107,    14,   104,   457,   107,   459,   460,    20,
      21,    22,    23,   132,     1,   104,    27,    28,   247,   132,
     140,   132,     1,   132,    35,   107,   126,    38,    39,    40,
     247,   132,   206,   132,    45,   245,   247,   126,    85,   249,
     247,   215,    29,    30,   247,     1,  1095,  1096,  1097,    36,
     170,    62,    63,   173,   174,   175,   107,   191,   107,   194,
     195,    17,    18,    74,   107,   191,    77,    78,    79,   247,
      26,   215,   107,   107,   132,    86,   191,    64,    65,    66,
     248,     1,    93,     3,    95,     5,    97,    98,     1,   100,
     248,   102,   103,    80,    81,    82,   216,   549,   248,    19,
      87,    88,   236,   114,   245,   248,     1,     1,   119,   120,
     236,   122,   123,   124,    70,   246,   127,   246,   238,   239,
     246,   246,    42,   246,    19,    19,   246,   246,   107,   234,
     248,   246,    88,    89,    90,    91,    92,   246,   237,    59,
      96,    61,   185,   246,   191,   101,   246,    42,    42,   245,
      70,   107,   234,   132,   165,   237,   248,     1,   248,   202,
     211,   117,   118,    83,   246,   176,   177,   178,   179,   180,
     181,   182,   128,     1,   217,    70,    70,   211,     1,   237,
     248,   633,   248,   234,   248,   234,   638,   107,   246,   641,
     245,    19,   248,   645,   107,   246,    19,   246,   248,   234,
     234,   130,   237,   246,   248,   191,   162,   248,   248,   129,
     248,   248,   107,   245,    42,    59,   227,   228,   229,    42,
     231,   232,   248,   248,    68,   248,    70,   248,   248,   240,
     125,   125,   248,   248,    15,   246,   248,   226,   248,   133,
     134,   161,    70,   248,   248,   248,   248,    70,   204,   248,
       1,   171,     3,   248,     5,    73,   248,    75,   248,   246,
     248,   116,    43,   248,   248,   248,   248,   246,    19,   130,
     248,   248,   185,   167,   248,   248,   171,   172,   248,   248,
     248,   248,   248,   248,   107,   129,   248,   248,   248,   202,
     246,    42,   130,   248,   248,    76,   216,   125,   248,   248,
     248,   248,   125,   121,   217,   133,   134,   248,    59,   248,
      61,   248,   248,   248,   248,   248,   248,   212,   238,    70,
     138,   248,   248,   218,   248,   248,   246,   108,   109,   248,
     248,   248,    83,   248,   115,   130,   248,   248,   248,   167,
     248,   248,   237,   237,   248,   248,   241,   248,   171,   172,
     248,   246,   246,   116,     1,   248,   107,   248,   139,     6,
       7,   116,     9,    10,    51,   248,   248,    14,   248,   248,
     188,   189,   248,    20,    21,    22,    23,   248,   129,   248,
      27,    28,   248,   248,   116,   116,   116,   168,    35,   212,
     116,    38,    39,    40,    75,   218,   245,   245,    45,   154,
     155,   156,   157,   158,   159,   160,   248,   248,   248,   237,
     161,   248,   248,     4,   237,    62,    63,   248,   241,   237,
     171,   248,   248,   248,   248,   243,   248,    74,   248,   248,
      77,    78,    79,    24,    25,   248,   248,   248,   245,    86,
     248,   245,   248,    34,   225,   248,    93,   248,    95,   248,
      97,    98,   248,   100,   248,   102,   103,   138,   248,   248,
     248,   248,   248,   244,  1250,   216,   248,   114,   248,   248,
     248,   248,   119,   120,   226,   122,   123,   124,   116,   130,
     127,    72,    73,   226,    75,   130,   130,   238,   130,   116,
     226,   116,   116,     1,   116,   116,   116,   184,   226,   226,
     187,   226,   183,   190,   130,   116,   193,   116,   189,   196,
     116,   198,   199,   104,   116,   196,   116,   116,   165,   110,
     116,   208,   113,    31,   226,    33,   213,   214,   248,   176,
     177,   178,   179,   180,   181,   182,   223,   248,   219,   116,
     221,   222,   226,   226,   135,   245,   137,   138,   226,   226,
     226,   226,    60,   226,   235,   242,   226,   226,     1,   226,
     245,   130,   243,    71,   836,   837,   838,   839,   840,   841,
     842,   245,   130,   130,    17,    18,   248,   248,   169,   245,
     227,   228,   229,    26,   231,   232,    94,   248,    75,   248,
     248,    99,   248,   240,   248,   248,   248,   130,   189,   107,
     248,   192,   248,   111,   112,   196,   245,   248,   248,   200,
     201,   248,   245,   248,   205,   245,   248,   248,   209,   248,
     248,    51,   226,    53,    54,   248,   116,    70,   219,   248,
     221,   222,   140,   224,   248,   248,   248,    67,     0,     1,
     248,   226,     4,   226,   235,    88,    89,    90,    91,    92,
     226,   138,   243,    96,    16,   226,   226,    19,   101,   245,
     130,   226,   170,    25,   107,   173,   174,   175,   130,   116,
      32,   116,   130,   130,   117,   118,   130,   130,   130,   130,
     130,    51,    44,    53,    54,   128,   130,    49,    50,   130,
     130,   130,   245,   245,   248,   226,   183,    67,   245,   247,
     245,   130,   189,   116,   248,   248,   248,    69,   216,   196,
       1,    73,   248,   245,   248,   245,   245,   116,   245,   162,
     248,   245,    84,   245,   245,   245,   245,   245,   245,   245,
     238,   239,   219,   245,   221,   222,   245,   248,    29,    30,
     245,   245,   116,   105,   106,    36,   130,   116,   235,   116,
     116,   116,   116,   116,   184,   116,   243,   187,   130,   121,
     190,   204,   245,   193,   248,   226,   196,   116,   198,   199,
     130,   130,   130,    64,    65,    66,   138,   130,   208,   130,
     130,   245,   130,   213,   214,   130,   130,   130,   130,    80,
      81,    82,   130,   223,   130,   226,    87,    88,   116,   245,
     248,   163,   164,   245,     1,   130,   130,   245,   245,   245,
     245,   245,   242,   245,   184,   130,   130,   187,   245,   245,
     190,   245,   245,   193,   186,   245,   196,   245,   198,   199,
     245,   245,   130,   245,   245,   197,   245,   245,   208,   245,
      37,   203,   245,   213,   214,   207,   130,   245,   210,    46,
      47,    48,   245,   223,    51,    52,   245,   245,   245,    56,
      57,    58,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   130,   242,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   130,   130,   245,   245,
     245,   245,   116,   245,   130,   130,   130,   130,   245,   245,
     130,   130,   130,   226,   245,   245,   245,   130,   245,   130,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   226,
     188,   130,   248,   245,   245,   245,   245,   130,   130,   130,
     130,   248,   248,   245,   245,   248,   245,   245,   248,   245,
     245,   245,   245,   245,   245,   245,   245,   130,   245,   245,
     245,   245,   245,   245,   130,   245,   245,   245,   245,   245,
     245,   130,   245,   245,   245,   245,   245,   245,   245,   245,
     130,   245,   245,   248,   245,   245,   245,   249,   245,   245,
     245,   245,   245,   245,   245,   245,   116,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   130,   136,   245,   245,   245,   245,   245,   245,   136,
     138,   136,   138,   245,   245,    77,   509,   595,   245,   245,
     245,   233,  1055,   245,  1336,   245,   245,   245,   245,   245,
     245,   245,   245,   525,   245,   245,  1298,   245,   245,   245,
     245,   245,  1296,  1294,  1284,  1273,   245,   245,   473,   245,
     245,   245,   245,   245,   227,  1157,   245,   248,   248,   245,
     245,   245,   250,   245,   245,   245,  1282,   542,   496,   608,
    1307,   250,   250,   250,   248,   250,  1300,   245,   245,   245,
     245,   581,  1278,   112,   486,   168,   273,    94,  1127,  1125,
     244,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   378,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   397,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   407
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   252,     0,     1,     4,    16,    19,    25,    32,    44,
      49,    50,    69,    73,    84,   105,   106,   121,   138,   163,
     164,   186,   197,   203,   207,   210,   253,   258,   263,   283,
     289,   295,   303,   317,   341,   365,   379,   394,   401,   405,
     415,   424,   445,   451,   457,   461,   467,   527,   541,   245,
     246,   247,   247,   342,   425,   452,   247,   462,   247,   380,
     446,   366,   247,   290,   318,   395,   247,   247,   416,   247,
     296,   247,   406,     1,    33,    41,   107,   284,   285,   286,
     287,   288,     1,    29,    30,    36,    64,    65,    66,    80,
      81,    82,    87,    88,   528,   529,   530,   531,   532,   533,
     534,   535,   536,   537,   538,   539,   540,   247,   247,   247,
       1,    68,   458,   459,   460,   247,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    23,    27,    28,    35,    38,
      39,    40,    45,    62,    63,    74,    77,    78,    79,    86,
      93,    95,    97,    98,   100,   102,   103,   114,   119,   120,
     122,   123,   124,   127,   165,   176,   177,   178,   179,   180,
     181,   182,   227,   228,   229,   231,   232,   240,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   517,   520,   524,   525,
     526,   247,   247,   247,     1,   104,   126,   259,   260,   261,
     262,   247,   247,   247,     1,    37,    46,    47,    48,    51,
      52,    56,    57,    58,   542,   543,   544,   545,   546,   547,
     548,   549,   550,   551,   552,     1,    31,    33,    60,    71,
      94,    99,   107,   111,   112,   140,   170,   173,   174,   175,
     216,   238,   239,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   247,     1,   236,   304,   305,   306,   307,   308,
     247,     1,   107,   402,   403,   404,   247,   245,   248,   248,
     248,   246,   285,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   246,   529,     1,    17,    18,    26,
      70,    88,    89,    90,    91,    92,    96,   101,   107,   117,
     118,   128,   162,   204,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,     1,     3,     5,    19,    42,    59,    61,
      70,    83,   107,   129,   161,   171,   216,   238,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   440,
     441,   442,   443,   444,     1,    68,   132,   453,   454,   455,
     456,   248,   246,   459,     1,   107,   132,   463,   464,   465,
     466,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   521,   516,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   246,   469,     1,    19,    42,    70,   125,   133,
     134,   167,   237,   381,   382,   383,   384,   385,   386,   387,
     391,   392,   393,     1,   132,   237,   447,   448,   449,   450,
       1,    59,    68,    70,   129,   367,   371,   372,   373,   377,
     378,   245,   248,   248,   246,   260,     1,    85,   191,   291,
     292,   293,   294,     1,    19,    42,    70,   107,   125,   171,
     172,   212,   218,   237,   241,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   333,   337,     1,    44,
      85,   132,   396,   397,   398,   399,   400,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   246,   543,   245,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   246,   265,     1,   107,
     234,   417,   418,   419,   420,   245,   248,   246,   305,   191,
       1,   107,   185,   202,   217,   297,   298,   299,   300,   301,
     302,   248,   246,   403,     1,   107,   234,   237,   407,   408,
     409,   410,   411,   130,   130,   130,   245,   116,   116,   255,
     226,   116,   255,   255,   116,   255,   255,   116,   116,   245,
     245,   248,   248,   248,   362,   248,   248,   248,   248,   248,
     248,   248,   248,   248,   248,   248,   248,   248,   246,   344,
     245,   248,   248,   248,   248,   248,   248,   437,   248,   248,
     248,   248,   248,   248,   248,   246,   427,   248,   248,   246,
     454,   130,   245,   248,   248,   246,   464,   226,   255,   116,
     255,   255,   130,   130,   130,   130,   226,   116,   226,   116,
     116,   116,   226,   226,   226,   255,   116,   116,   130,   116,
     116,   255,   116,   116,   116,   116,   116,   226,   248,   248,
     226,   255,   255,   226,   226,   226,   226,   230,   226,   230,
     226,   226,   226,   226,   116,   255,   226,   255,   255,   226,
     245,   245,   248,   248,   388,   248,   248,   248,   248,   248,
     246,   382,   248,   248,   246,   448,   245,   248,   248,   368,
     248,   246,   372,   130,   130,   245,   245,   248,   248,   246,
     292,   245,   248,   248,   338,   248,   248,   248,   248,   334,
     330,   248,   248,   246,   320,   245,   248,   248,   248,   246,
     397,   226,   226,   255,   130,   226,   130,   226,   226,   226,
     245,   116,   130,   226,   130,   116,   116,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   245,   245,
     248,   421,   246,   418,   226,   245,   247,   245,   248,   248,
     248,   248,   246,   298,   130,   245,   245,   248,   412,   248,
     246,   408,   245,   245,   245,   245,   154,   155,   156,   157,
     158,   159,   160,   254,   255,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   116,   116,   255,   248,   116,
     116,   116,   255,   116,   116,   255,   130,   116,   116,   255,
     116,   257,   257,   245,   130,   194,   195,   130,   226,   130,
     130,   248,   130,   130,   116,   130,   130,   130,   130,   245,
     130,   130,   245,   245,   130,   130,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,    51,   184,
     187,   190,   193,   196,   198,   199,   208,   213,   214,   223,
     242,   522,   523,    51,    53,    54,    67,   184,   187,   190,
     193,   196,   198,   199,   208,   213,   214,   223,   242,   518,
     519,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   130,   226,   248,   130,   116,   130,   130,   130,   245,
     130,   130,   245,   130,   130,   248,   116,   375,   376,   245,
     245,   245,   130,   130,   245,   130,   226,   248,   130,   130,
     130,   226,   248,   248,   130,   130,   245,   130,   130,   130,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   130,   248,   245,
     245,     1,   107,   211,   234,   309,   310,   311,   312,   313,
     130,   130,   130,   130,   245,   245,   130,   248,   130,   245,
     254,   254,   254,   254,   254,   254,   254,   245,   245,   245,
      55,   131,   363,   364,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,    11,    12,    13,   256,   257,
     245,   245,   245,   245,   245,   245,   245,   245,   245,     8,
     215,   438,   439,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   249,   245,   249,   245,   245,
      15,    43,    76,   108,   109,   115,   139,   168,   225,   244,
     389,   390,   245,   245,   245,   245,   245,   245,   245,   245,
     245,    51,   206,   215,   369,   370,   233,   249,   374,   245,
     245,   245,   245,     4,    24,    25,    34,    72,    73,    75,
     104,   110,   113,   135,   137,   138,   169,   189,   192,   196,
     200,   201,   205,   209,   219,   221,   222,   224,   235,   243,
     339,   340,   245,   245,   245,   245,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   188,
     335,   336,    51,    53,    54,    67,   184,   187,   190,   193,
     196,   198,   199,   208,   213,   214,   223,   242,   331,   332,
     245,   245,   245,   245,   245,   245,    75,   138,   183,   189,
     196,   219,   221,   222,   235,   243,   422,   423,   245,   248,
     248,   314,   246,   310,   245,   245,   245,   245,   245,    75,
     138,   183,   189,   196,   219,   221,   222,   235,   243,   413,
     414,   245,   245,   249,   256,   256,   256,   245,   249,   523,
     519,   245,   249,   245,   249,   116,   376,   245,   250,   250,
     250,   250,   250,   245,   249,   245,   249,   245,   249,   245,
     249,   130,   220,   257,   248,   245,   245,   249,   364,   439,
     390,   370,   136,   138,   136,   138,   136,   340,   336,   332,
     423,   245,   245,   245,    73,    75,   121,   138,   188,   189,
     237,   243,   315,   316,   414,   245,   249,   316
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
     340,   340,   340,   340,   340,   340,   340,   340,   342,   341,
     343,   343,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   362,   361,   363,   363,
     364,   364,   366,   365,   368,   367,   369,   369,   370,   370,
     370,   371,   371,   372,   372,   372,   372,   372,   374,   373,
     375,   375,   376,   376,   377,   378,   380,   379,   381,   381,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   383,
     384,   385,   386,   388,   387,   389,   389,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,   391,   392,   393,
     395,   394,   396,   396,   397,   397,   397,   397,   398,   399,
     400,   401,   402,   402,   403,   403,   404,   406,   405,   407,
     407,   408,   408,   408,   408,   409,   410,   412,   411,   413,
     413,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   416,   415,   417,   417,   418,   418,   418,   419,   421,
     420,   422,   422,   423,   423,   423,   423,   423,   423,   423,
     423,   423,   423,   425,   424,   426,   426,   427,   427,   427,
     427,   427,   427,   427,   427,   427,   427,   427,   427,   427,
     427,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     435,   437,   436,   438,   438,   439,   439,   440,   441,   442,
     443,   444,   446,   445,   447,   447,   448,   448,   448,   449,
     450,   452,   451,   453,   453,   454,   454,   454,   455,   456,
     457,   458,   458,   459,   459,   460,   462,   461,   463,   463,
     464,   464,   464,   465,   466,   467,   468,   468,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   501,   502,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   516,   515,   517,
     518,   518,   519,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   521,   520,
     522,   522,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   524,   525,   526,   527,   528,
     528,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     529,   529,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   541,   542,   542,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   544,   545,   546,
     547,   548,   549,   550,   551,   552
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
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     0,     5,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 2936 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 439 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 440 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 441 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 444 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 445 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 446 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 3002 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 447 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 3008 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 448 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 3014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 461 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 3023 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 467 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3032 "conf_parser.c" /* yacc.c:1646  */
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
#line 3075 "conf_parser.c" /* yacc.c:1646  */
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
#line 3136 "conf_parser.c" /* yacc.c:1646  */
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
#line 3168 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 627 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3179 "conf_parser.c" /* yacc.c:1646  */
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
#line 3196 "conf_parser.c" /* yacc.c:1646  */
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
#line 3227 "conf_parser.c" /* yacc.c:1646  */
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
#line 3245 "conf_parser.c" /* yacc.c:1646  */
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
#line 3263 "conf_parser.c" /* yacc.c:1646  */
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
#line 3276 "conf_parser.c" /* yacc.c:1646  */
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
#line 3293 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 731 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3305 "conf_parser.c" /* yacc.c:1646  */
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
#line 3336 "conf_parser.c" /* yacc.c:1646  */
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
#line 3367 "conf_parser.c" /* yacc.c:1646  */
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
#line 3395 "conf_parser.c" /* yacc.c:1646  */
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
#line 3420 "conf_parser.c" /* yacc.c:1646  */
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
#line 3445 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 865 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3454 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 883 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 892 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3478 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 901 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  xfree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3490 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 914 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3499 "conf_parser.c" /* yacc.c:1646  */
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
#line 3516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 935 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3525 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 941 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3534 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 951 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3543 "conf_parser.c" /* yacc.c:1646  */
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
#line 3561 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 973 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3570 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 979 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3579 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 985 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3588 "conf_parser.c" /* yacc.c:1646  */
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
#line 3609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1019 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3618 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1025 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3627 "conf_parser.c" /* yacc.c:1646  */
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
#line 3640 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1045 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1053 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3659 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1056 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1061 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3676 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1068 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3685 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1072 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3694 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1076 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3703 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1080 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3712 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1084 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1088 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3730 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1092 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3739 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1096 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3748 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3760 "conf_parser.c" /* yacc.c:1646  */
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
#line 3814 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1178 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3823 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1184 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3832 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1190 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3841 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1196 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3850 "conf_parser.c" /* yacc.c:1646  */
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
#line 3864 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1213 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3873 "conf_parser.c" /* yacc.c:1646  */
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
#line 3887 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1230 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3896 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1236 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1243 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1247 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1251 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1255 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3941 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1259 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1263 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1267 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3968 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1271 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3977 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1275 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 3986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1279 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 3995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1283 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1287 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4013 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1291 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4022 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1295 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4031 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1299 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4040 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1303 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
}
#line 4049 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1309 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value = 0;
}
#line 4058 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1316 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_CCONN;
}
#line 4067 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1320 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_DEBUG;
}
#line 4076 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1324 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_EXTERNAL;
}
#line 4085 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1328 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_FULL;
}
#line 4094 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1332 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_REJ;
}
#line 4103 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1336 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_SKILL;
}
#line 4112 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1340 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_NCHANGE;
}
#line 4121 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1344 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_UNAUTH;
}
#line 4130 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1348 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_KLINE;
}
#line 4139 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1352 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_DLINE;
}
#line 4148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1356 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_XLINE;
}
#line 4157 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1360 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_BOTS;
}
#line 4166 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1364 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_SERVREJ;
}
#line 4175 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1368 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_GENERAL;
}
#line 4184 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4193 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1381 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1385 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1389 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1393 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4229 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1397 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1401 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4247 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1405 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1409 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4265 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1413 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1417 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4283 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1421 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1425 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4301 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1429 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4310 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1433 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4319 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1437 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4328 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1441 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4337 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1445 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4346 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1449 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4355 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1453 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4364 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1457 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4373 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1461 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4382 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1465 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4391 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1469 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4400 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1473 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4409 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1477 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1481 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1485 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1489 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4445 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1493 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4454 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1497 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4463 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1507 "conf_parser.y" /* yacc.c:1646  */
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
#line 4480 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1519 "conf_parser.y" /* yacc.c:1646  */
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
#line 4528 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1583 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4537 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1589 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1595 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1601 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1607 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4573 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1613 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4582 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1619 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1625 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1631 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1637 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4618 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1643 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1650 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4637 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1656 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4646 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1662 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4655 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1668 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1677 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1686 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1693 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4697 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1697 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4706 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1707 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4715 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1713 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4723 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1719 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4732 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1723 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4741 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1727 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4750 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1735 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4756 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1740 "conf_parser.y" /* yacc.c:1646  */
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
#line 4774 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1753 "conf_parser.y" /* yacc.c:1646  */
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
#line 4794 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1770 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4803 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1776 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4812 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1786 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4821 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1790 "conf_parser.y" /* yacc.c:1646  */
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
#line 4862 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1839 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4871 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1845 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4880 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1851 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4889 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1857 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1868 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4912 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1875 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4921 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1879 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1883 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1887 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1891 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4957 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1895 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1899 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4975 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1903 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1907 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4993 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1911 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 5002 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1917 "conf_parser.y" /* yacc.c:1646  */
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
#line 5019 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1931 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 5031 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1940 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 5043 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1953 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 5055 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1960 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 5066 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1971 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5075 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1977 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5084 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1983 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5093 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1998 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2014 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5124 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2025 "conf_parser.y" /* yacc.c:1646  */
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
#line 5141 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2042 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5150 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2048 "conf_parser.y" /* yacc.c:1646  */
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
#line 5172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2067 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5181 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2074 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5190 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2078 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5199 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2082 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5208 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2086 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5217 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2090 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5226 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2094 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5235 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2098 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5244 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2102 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5253 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5262 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2110 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5271 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2120 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5285 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2129 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2144 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5309 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2150 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5318 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2157 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5327 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2161 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5336 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2165 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5345 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2169 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5354 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2173 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5372 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2181 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5381 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2185 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5390 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2189 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5399 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2193 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5408 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2203 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5422 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2212 "conf_parser.y" /* yacc.c:1646  */
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
#line 5488 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2292 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5497 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2298 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5506 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2304 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5515 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2310 "conf_parser.y" /* yacc.c:1646  */
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
#line 5531 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2323 "conf_parser.y" /* yacc.c:1646  */
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
#line 5547 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2336 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5556 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2342 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5565 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2348 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5574 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2352 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5583 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2358 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2364 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2368 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5623 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2385 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5632 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2391 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5641 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2397 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5650 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2403 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5664 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2418 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5673 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2422 "conf_parser.y" /* yacc.c:1646  */
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
#line 5698 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2447 "conf_parser.y" /* yacc.c:1646  */
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
#line 5721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2467 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5730 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2477 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5739 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2481 "conf_parser.y" /* yacc.c:1646  */
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
#line 5765 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2507 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5774 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2513 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5783 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2528 "conf_parser.y" /* yacc.c:1646  */
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
#line 5800 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2545 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5809 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2549 "conf_parser.y" /* yacc.c:1646  */
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
#line 5831 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2571 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5840 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2577 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5849 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2644 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5857 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2649 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5865 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2654 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5873 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2659 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2668 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5897 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2677 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5909 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2686 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
}
#line 5921 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2695 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2701 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5938 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2706 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5946 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2711 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2716 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5962 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2721 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5974 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2730 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5982 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2735 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2740 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5998 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2745 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 6006 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2750 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 6014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2755 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 6022 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2760 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 6030 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2765 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 6038 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2770 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 6046 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2775 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 6054 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2780 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 6063 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2786 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 6071 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2791 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 6079 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2796 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 6087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2801 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6095 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2806 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6103 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2811 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6111 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2816 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6119 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2821 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6127 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2824 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6135 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2829 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6143 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2832 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6151 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2837 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6159 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2842 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6167 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2847 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6175 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2852 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6183 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2857 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6191 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2862 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6199 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2867 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6207 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2872 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6215 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2877 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6223 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2882 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6231 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2887 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6239 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2892 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6247 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2897 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6255 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2902 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_split_history = (yyvsp[-1].number);
}
#line 6263 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2908 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6271 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2911 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6279 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2914 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6287 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2917 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6295 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2920 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6303 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2923 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6311 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2926 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6319 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2929 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6327 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2932 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6335 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2935 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6343 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2938 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6351 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2941 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6359 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2944 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6367 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2947 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6375 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2950 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6383 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2953 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
}
#line 6391 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2958 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6399 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2964 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6407 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2967 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6415 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2970 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6423 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2973 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6431 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2976 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6439 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2979 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6447 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2982 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6455 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2985 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6463 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2988 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6471 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2991 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6479 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2994 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6487 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2997 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6495 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3000 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6503 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3005 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6511 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 3010 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6519 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 3015 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6527 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3040 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6535 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3045 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6543 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3050 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6551 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3055 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6559 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3060 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6567 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3065 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6575 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3070 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6583 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3075 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3080 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6599 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3085 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6607 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3090 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6615 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3113 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6624 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3119 "conf_parser.y" /* yacc.c:1646  */
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
#line 6643 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3135 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6655 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3144 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6664 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3150 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6673 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3156 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6682 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3162 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    xfree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6694 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3171 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6703 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6712 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6716 "conf_parser.c" /* yacc.c:1646  */
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
