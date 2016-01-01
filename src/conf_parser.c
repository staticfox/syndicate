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
    MAX_TARGETS = 352,
    MAX_TOPIC_LENGTH = 353,
    MAX_WATCH = 354,
    MIN_IDLE = 355,
    MIN_NONWILDCARD = 356,
    MIN_NONWILDCARD_SIMPLE = 357,
    MODULE = 358,
    MODULES = 359,
    MOTD = 360,
    NAME = 361,
    NEED_IDENT = 362,
    NEED_PASSWORD = 363,
    NETADMIN = 364,
    NETWORK_DESC = 365,
    NETWORK_NAME = 366,
    NICK = 367,
    NO_OPER_FLOOD = 368,
    NO_TILDE = 369,
    NUMBER = 370,
    NUMBER_PER_CIDR = 371,
    NUMBER_PER_IP = 372,
    OPER_ONLY_UMODES = 373,
    OPER_UMODES = 374,
    OPERATOR = 375,
    OPERS_BYPASS_CALLERID = 376,
    PACE_WAIT = 377,
    PACE_WAIT_SIMPLE = 378,
    PASSWORD = 379,
    PATH = 380,
    PING_COOKIE = 381,
    PING_TIME = 382,
    PORT = 383,
    QSTRING = 384,
    RANDOM_IDLE = 385,
    REASON = 386,
    REDIRPORT = 387,
    REDIRSERV = 388,
    REHASH = 389,
    REMOTE = 390,
    REMOTEBAN = 391,
    RESV = 392,
    RESV_EXEMPT = 393,
    RSA_PRIVATE_KEY_FILE = 394,
    S_BOTS = 395,
    S_CCONN = 396,
    S_DLINESPAM = 397,
    S_EXTERNAL = 398,
    S_FULL = 399,
    S_KLINESPAM = 400,
    S_NCHANGE = 401,
    S_REJ = 402,
    S_SERVREJ = 403,
    S_SKILL = 404,
    S_SNOGENERAL = 405,
    S_UNAUTH = 406,
    S_XLINESPAM = 407,
    SECONDS = 408,
    MINUTES = 409,
    HOURS = 410,
    DAYS = 411,
    WEEKS = 412,
    MONTHS = 413,
    YEARS = 414,
    SEND_PASSWORD = 415,
    SENDQ = 416,
    SERVERHIDE = 417,
    SERVERINFO = 418,
    SHORT_MOTD = 419,
    SNOMODES = 420,
    SPOOF = 421,
    SPOOF_NOTICE = 422,
    SQUIT = 423,
    SSL_CERTIFICATE_FILE = 424,
    SSL_CERTIFICATE_FINGERPRINT = 425,
    SSL_CONNECTION_REQUIRED = 426,
    SSL_DH_ELLIPTIC_CURVE = 427,
    SSL_DH_PARAM_FILE = 428,
    SSL_MESSAGE_DIGEST_ALGORITHM = 429,
    STATS_E_DISABLED = 430,
    STATS_I_OPER_ONLY = 431,
    STATS_K_OPER_ONLY = 432,
    STATS_M_OPER_ONLY = 433,
    STATS_O_OPER_ONLY = 434,
    STATS_P_OPER_ONLY = 435,
    STATS_U_OPER_ONLY = 436,
    T_ALL = 437,
    T_CALLERID = 438,
    T_COMMAND = 439,
    T_CLUSTER = 440,
    T_DEAF = 441,
    S_DEBUG = 442,
    T_DLINE = 443,
    T_FARCONNECT = 444,
    T_FILE = 445,
    T_GLOBOPS = 446,
    T_INVISIBLE = 447,
    T_IPV4 = 448,
    T_IPV6 = 449,
    T_LOCOPS = 450,
    T_LOG = 451,
    T_NONONREG = 452,
    T_OPERWALL = 453,
    T_OPERWALLS = 454,
    T_OPME = 455,
    T_PREPEND = 456,
    T_PSEUDO = 457,
    T_RECVQ = 458,
    T_RESTART = 459,
    T_SERVER = 460,
    T_SERVICE = 461,
    T_SERVNOTICE = 462,
    T_SET = 463,
    T_SHARED = 464,
    T_SIZE = 465,
    T_SNOMODES = 466,
    T_SOFTCALLERID = 467,
    T_SPY = 468,
    T_SSL = 469,
    T_SSL_CIPHER_LIST = 470,
    T_TARGET = 471,
    T_UMODES = 472,
    T_UNDLINE = 473,
    T_UNLIMITED = 474,
    T_UNRESV = 475,
    T_UNXLINE = 476,
    T_WALLOP = 477,
    T_WALLOPS = 478,
    T_WEBIRC = 479,
    TBOOL = 480,
    THROTTLE_COUNT = 481,
    THROTTLE_TIME = 482,
    TKLINE_EXPIRE_NOTICES = 483,
    TMASKED = 484,
    TS_MAX_DELTA = 485,
    TS_WARN_DELTA = 486,
    TWODOTS = 487,
    TYPE = 488,
    UNKLINE = 489,
    USE_LOGGING = 490,
    USER = 491,
    VHOST = 492,
    VHOST6 = 493,
    WARN_NO_CONNECT_BLOCK = 494,
    WHOIS = 495,
    WHOIS_NOTIFY = 496,
    XLINE = 497,
    XLINE_EXEMPT = 498
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
#define MAX_TARGETS 352
#define MAX_TOPIC_LENGTH 353
#define MAX_WATCH 354
#define MIN_IDLE 355
#define MIN_NONWILDCARD 356
#define MIN_NONWILDCARD_SIMPLE 357
#define MODULE 358
#define MODULES 359
#define MOTD 360
#define NAME 361
#define NEED_IDENT 362
#define NEED_PASSWORD 363
#define NETADMIN 364
#define NETWORK_DESC 365
#define NETWORK_NAME 366
#define NICK 367
#define NO_OPER_FLOOD 368
#define NO_TILDE 369
#define NUMBER 370
#define NUMBER_PER_CIDR 371
#define NUMBER_PER_IP 372
#define OPER_ONLY_UMODES 373
#define OPER_UMODES 374
#define OPERATOR 375
#define OPERS_BYPASS_CALLERID 376
#define PACE_WAIT 377
#define PACE_WAIT_SIMPLE 378
#define PASSWORD 379
#define PATH 380
#define PING_COOKIE 381
#define PING_TIME 382
#define PORT 383
#define QSTRING 384
#define RANDOM_IDLE 385
#define REASON 386
#define REDIRPORT 387
#define REDIRSERV 388
#define REHASH 389
#define REMOTE 390
#define REMOTEBAN 391
#define RESV 392
#define RESV_EXEMPT 393
#define RSA_PRIVATE_KEY_FILE 394
#define S_BOTS 395
#define S_CCONN 396
#define S_DLINESPAM 397
#define S_EXTERNAL 398
#define S_FULL 399
#define S_KLINESPAM 400
#define S_NCHANGE 401
#define S_REJ 402
#define S_SERVREJ 403
#define S_SKILL 404
#define S_SNOGENERAL 405
#define S_UNAUTH 406
#define S_XLINESPAM 407
#define SECONDS 408
#define MINUTES 409
#define HOURS 410
#define DAYS 411
#define WEEKS 412
#define MONTHS 413
#define YEARS 414
#define SEND_PASSWORD 415
#define SENDQ 416
#define SERVERHIDE 417
#define SERVERINFO 418
#define SHORT_MOTD 419
#define SNOMODES 420
#define SPOOF 421
#define SPOOF_NOTICE 422
#define SQUIT 423
#define SSL_CERTIFICATE_FILE 424
#define SSL_CERTIFICATE_FINGERPRINT 425
#define SSL_CONNECTION_REQUIRED 426
#define SSL_DH_ELLIPTIC_CURVE 427
#define SSL_DH_PARAM_FILE 428
#define SSL_MESSAGE_DIGEST_ALGORITHM 429
#define STATS_E_DISABLED 430
#define STATS_I_OPER_ONLY 431
#define STATS_K_OPER_ONLY 432
#define STATS_M_OPER_ONLY 433
#define STATS_O_OPER_ONLY 434
#define STATS_P_OPER_ONLY 435
#define STATS_U_OPER_ONLY 436
#define T_ALL 437
#define T_CALLERID 438
#define T_COMMAND 439
#define T_CLUSTER 440
#define T_DEAF 441
#define S_DEBUG 442
#define T_DLINE 443
#define T_FARCONNECT 444
#define T_FILE 445
#define T_GLOBOPS 446
#define T_INVISIBLE 447
#define T_IPV4 448
#define T_IPV6 449
#define T_LOCOPS 450
#define T_LOG 451
#define T_NONONREG 452
#define T_OPERWALL 453
#define T_OPERWALLS 454
#define T_OPME 455
#define T_PREPEND 456
#define T_PSEUDO 457
#define T_RECVQ 458
#define T_RESTART 459
#define T_SERVER 460
#define T_SERVICE 461
#define T_SERVNOTICE 462
#define T_SET 463
#define T_SHARED 464
#define T_SIZE 465
#define T_SNOMODES 466
#define T_SOFTCALLERID 467
#define T_SPY 468
#define T_SSL 469
#define T_SSL_CIPHER_LIST 470
#define T_TARGET 471
#define T_UMODES 472
#define T_UNDLINE 473
#define T_UNLIMITED 474
#define T_UNRESV 475
#define T_UNXLINE 476
#define T_WALLOP 477
#define T_WALLOPS 478
#define T_WEBIRC 479
#define TBOOL 480
#define THROTTLE_COUNT 481
#define THROTTLE_TIME 482
#define TKLINE_EXPIRE_NOTICES 483
#define TMASKED 484
#define TS_MAX_DELTA 485
#define TS_WARN_DELTA 486
#define TWODOTS 487
#define TYPE 488
#define UNKLINE 489
#define USE_LOGGING 490
#define USER 491
#define VHOST 492
#define VHOST6 493
#define WARN_NO_CONNECT_BLOCK 494
#define WHOIS 495
#define WHOIS_NOTIFY 496
#define XLINE 497
#define XLINE_EXEMPT 498

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 154 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 723 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 738 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  250
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  301
/* YYNRULES -- Number of rules.  */
#define YYNRULES  673
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1333

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   498

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
       2,     2,     2,     2,   248,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   249,   244,
       2,   247,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   246,     2,   245,     2,     2,     2,     2,
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
     235,   236,   237,   238,   239,   240,   241,   242,   243
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   401,   401,   402,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   432,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   443,   443,
     444,   445,   446,   447,   454,   456,   456,   457,   457,   457,
     459,   465,   475,   477,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   498,   538,   596,   625,   633,   647,   675,
     690,   705,   715,   729,   738,   766,   794,   819,   841,   863,
     873,   875,   875,   876,   877,   878,   879,   881,   890,   899,
     913,   912,   930,   930,   931,   931,   931,   933,   939,   950,
     949,   968,   968,   969,   969,   969,   969,   969,   971,   977,
     983,   989,  1011,  1012,  1012,  1014,  1014,  1015,  1017,  1024,
    1024,  1037,  1038,  1040,  1040,  1041,  1041,  1043,  1051,  1054,
    1060,  1059,  1065,  1065,  1066,  1070,  1074,  1078,  1082,  1086,
    1090,  1094,  1105,  1104,  1162,  1162,  1163,  1164,  1165,  1166,
    1167,  1168,  1169,  1170,  1171,  1172,  1173,  1174,  1176,  1182,
    1188,  1194,  1200,  1211,  1217,  1228,  1235,  1234,  1240,  1240,
    1241,  1245,  1249,  1253,  1257,  1261,  1265,  1269,  1273,  1277,
    1281,  1285,  1289,  1293,  1297,  1301,  1308,  1307,  1313,  1313,
    1314,  1318,  1322,  1326,  1330,  1334,  1338,  1342,  1346,  1350,
    1354,  1358,  1362,  1366,  1373,  1372,  1378,  1378,  1379,  1383,
    1387,  1391,  1395,  1399,  1403,  1407,  1411,  1415,  1419,  1423,
    1427,  1431,  1435,  1439,  1443,  1447,  1451,  1455,  1459,  1463,
    1467,  1471,  1475,  1479,  1483,  1487,  1491,  1495,  1506,  1505,
    1562,  1562,  1563,  1564,  1565,  1566,  1567,  1568,  1569,  1570,
    1571,  1572,  1573,  1574,  1575,  1575,  1576,  1577,  1578,  1579,
    1581,  1587,  1593,  1599,  1605,  1611,  1617,  1623,  1629,  1635,
    1641,  1648,  1654,  1660,  1666,  1675,  1685,  1684,  1690,  1690,
    1691,  1695,  1706,  1705,  1712,  1711,  1716,  1716,  1717,  1721,
    1725,  1731,  1731,  1732,  1732,  1732,  1732,  1732,  1734,  1734,
    1736,  1736,  1738,  1751,  1768,  1774,  1785,  1784,  1826,  1826,
    1827,  1828,  1829,  1830,  1831,  1832,  1833,  1834,  1835,  1837,
    1843,  1849,  1855,  1867,  1866,  1872,  1872,  1873,  1877,  1881,
    1885,  1889,  1893,  1897,  1901,  1905,  1909,  1915,  1929,  1938,
    1952,  1951,  1966,  1966,  1967,  1967,  1967,  1967,  1969,  1975,
    1981,  1991,  1993,  1993,  1994,  1994,  1996,  2013,  2012,  2037,
    2037,  2038,  2038,  2038,  2038,  2040,  2046,  2066,  2065,  2071,
    2071,  2072,  2076,  2080,  2084,  2088,  2092,  2096,  2100,  2104,
    2108,  2119,  2118,  2139,  2139,  2140,  2140,  2140,  2142,  2149,
    2148,  2154,  2154,  2155,  2159,  2163,  2167,  2171,  2175,  2179,
    2183,  2187,  2191,  2202,  2201,  2273,  2273,  2274,  2275,  2276,
    2277,  2278,  2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,
    2287,  2288,  2290,  2296,  2302,  2308,  2321,  2334,  2340,  2346,
    2350,  2357,  2356,  2361,  2361,  2362,  2366,  2372,  2383,  2389,
    2395,  2401,  2417,  2416,  2442,  2442,  2443,  2443,  2443,  2445,
    2465,  2476,  2475,  2502,  2502,  2503,  2503,  2503,  2505,  2511,
    2521,  2523,  2523,  2524,  2524,  2526,  2544,  2543,  2566,  2566,
    2567,  2567,  2567,  2569,  2575,  2585,  2587,  2587,  2588,  2589,
    2590,  2591,  2592,  2593,  2594,  2595,  2596,  2597,  2598,  2599,
    2600,  2601,  2602,  2603,  2604,  2605,  2606,  2607,  2608,  2609,
    2610,  2611,  2612,  2613,  2614,  2615,  2616,  2617,  2618,  2619,
    2620,  2621,  2622,  2623,  2624,  2625,  2626,  2627,  2628,  2629,
    2630,  2631,  2632,  2633,  2634,  2635,  2636,  2637,  2638,  2641,
    2646,  2651,  2656,  2665,  2674,  2683,  2692,  2698,  2703,  2708,
    2713,  2718,  2727,  2732,  2737,  2742,  2747,  2752,  2757,  2762,
    2767,  2772,  2777,  2783,  2788,  2793,  2798,  2803,  2808,  2813,
    2818,  2821,  2826,  2829,  2834,  2839,  2844,  2849,  2854,  2859,
    2864,  2869,  2874,  2879,  2884,  2889,  2895,  2894,  2899,  2899,
    2900,  2903,  2906,  2909,  2912,  2915,  2918,  2921,  2924,  2927,
    2930,  2933,  2936,  2939,  2942,  2945,  2951,  2950,  2955,  2955,
    2956,  2959,  2962,  2965,  2968,  2971,  2974,  2977,  2980,  2983,
    2986,  2989,  2992,  2997,  3002,  3007,  3016,  3018,  3018,  3019,
    3020,  3021,  3022,  3023,  3024,  3025,  3026,  3027,  3028,  3029,
    3030,  3032,  3037,  3042,  3047,  3052,  3057,  3062,  3067,  3072,
    3077,  3082,  3091,  3093,  3093,  3094,  3095,  3096,  3097,  3098,
    3099,  3100,  3101,  3102,  3103,  3105,  3111,  3127,  3136,  3142,
    3148,  3154,  3163,  3169
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
  "MAX_NICK_LENGTH", "MAX_NICK_TIME", "MAX_NUMBER", "MAX_TARGETS",
  "MAX_TOPIC_LENGTH", "MAX_WATCH", "MIN_IDLE", "MIN_NONWILDCARD",
  "MIN_NONWILDCARD_SIMPLE", "MODULE", "MODULES", "MOTD", "NAME",
  "NEED_IDENT", "NEED_PASSWORD", "NETADMIN", "NETWORK_DESC",
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
  "$@26", "umode_oitems", "umode_oitem", "general_oper_only_umodes",
  "$@27", "umode_items", "umode_item", "general_min_nonwildcard",
  "general_min_nonwildcard_simple", "general_default_floodcount",
  "channel_entry", "channel_items", "channel_item",
  "channel_disable_fake_channels", "channel_invite_client_count",
  "channel_invite_client_time", "channel_invite_delay_channel",
  "channel_knock_client_count", "channel_knock_client_time",
  "channel_knock_delay_channel", "channel_max_channels",
  "channel_max_bans", "channel_default_join_flood_count",
  "channel_default_join_flood_time", "serverhide_entry",
  "serverhide_items", "serverhide_item", "serverhide_flatten_links",
  "serverhide_flatten_links_delay", "serverhide_flatten_links_file",
  "serverhide_disable_remote_commands", "serverhide_hide_servers",
  "serverhide_hide_services", "serverhide_hidden_name",
  "serverhide_hidden", "serverhide_hide_server_ips", YY_NULLPTR
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
     495,   496,   497,   498,    59,   125,   123,    61,    44,    58
};
# endif

#define YYPACT_NINF -1028

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1028)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1028,   720, -1028,  -156,  -228,  -210, -1028, -1028, -1028,  -208,
   -1028,  -203, -1028, -1028, -1028,  -198, -1028, -1028, -1028,  -196,
    -173, -1028,  -165, -1028,  -148, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,    13,   396,  -136,  -131,   -89,    18,   -61,   429,   -18,
     -12,    -9,   135,    -3,    42,    49,   898,   540,    50,    27,
      52,    71,    65,  -154,  -216,   -52,   -39,    19, -1028, -1028,
   -1028, -1028, -1028,    30,    35,    66,    76,    86,    87,   100,
     105,   114,   115,   119,    40, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028,   758,   571,    43,
   -1028,   121,    24, -1028, -1028,    39, -1028,   122,   123,   124,
     125,   127,   130,   133,   134,   136,   140,   145,   147,   149,
     151,   155,   156,   161,   162,   163,   164,   165,   166,   169,
     170,   172,   173,   180,   184,   190,   194, -1028, -1028,   201,
     206,   207,   208,   212,   218,   219,   223,   224,   225,   228,
     232,   233,   234,   235,   238,   239,   240,   128, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,   403,
       9,   112,    68,   241,   243,    36, -1028, -1028, -1028,   111,
     323,   293, -1028,   248,   257,   258,   264,   265,   269,   270,
     271,   273,    10, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028,   131,   274,   276,   278,   285,   286,   290,
     291,   292,   296,   297,   298,   299,   302,   306,   307,   309,
     314,    20, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
      58,   177,   317,    21, -1028, -1028, -1028,   250,     2, -1028,
     318,    70, -1028, -1028,    54, -1028,   315,   437,   438,   331,
   -1028,   455,   469,   360,   471,   469,   469,   472,   469,   469,
     474,   477,   351, -1028,   352,   354,   356,   365, -1028,   367,
     368,   369,   370,   371,   373,   376,   377,   378,   379,   380,
     381,   382,   183, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,   355,   384,   388,   390,   393,   397,   398, -1028,   400,
     401,   405,   411,   415,   416,   417,    82, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028,   418,   419,    41, -1028, -1028, -1028,   514,
     423, -1028, -1028,   422,   424,    93, -1028, -1028, -1028,   445,
     469,   483,   469,   469,   549,   552,   553,   554,   461,   572,
     465,   576,   577,   580,   473,   475,   476,   469,   582,   587,
     575,   592,   596,   469,   600,   601,   602,   603,   497,   481,
     482,   498,   469,   469,   505,   508,   509,  -213,  -212,   510,
     512,   513,   515,   627,   469,   518,   469,   469,   519,   503,
   -1028,   506,   504,   507, -1028,   511,   516,   520,   521,   524,
     197, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,   526,   527,    23, -1028, -1028, -1028,   517,   532,   533,
   -1028,   534, -1028,    25, -1028, -1028, -1028, -1028, -1028,   624,
     628,   522, -1028,   538,   536,   541,    73, -1028, -1028, -1028,
     543,   544,   545, -1028,   547,   548,   550,   555, -1028, -1028,
     556,   558,   178, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028,   546,   559,   560,   562,    31,
   -1028, -1028, -1028, -1028,   535,   585,   469,   636,   586,   671,
     588,   589,   590,   557, -1028, -1028,   701,   689,   594,   691,
     706,   707,   697,   698,   700,   702,   703,   704,   705,   708,
     709,   710,   712,   591, -1028,   599,   597, -1028,    98, -1028,
   -1028, -1028, -1028,   611,   607, -1028,   606,   615,   598,   613,
     616,   619,    77, -1028, -1028, -1028, -1028, -1028,   733,   621,
   -1028,   623,   625, -1028,   626,    81, -1028, -1028, -1028, -1028,
     632,   642,   644, -1028,   645,   343,   647,   650,   651,   652,
     653,   654,   656,   657,   659,   660, -1028, -1028,   753,   755,
     469,   633,   756,   764,   791,   469,   794,   795,   469,   782,
     797,   798,   469,   799,   799,   674, -1028, -1028,   786,   -97,
     792,   699,   796,   801,   673,   803,   804,   808,   809,   810,
     812,   818,   683, -1028,   819,   822,   715, -1028,   716, -1028,
     824,   833,   719, -1028,   721,   722,   737,   738,   739,   740,
     741,   743,   744,   746,   747,   748,   749,   750,   751,   752,
     754,   757,   759,   760,   761,   762,   763,   765,   766,   767,
     768,   769,   770,   772,   193,   695,   773,   774,   775,   776,
     777,   778,   779,   780,   781,   783,   784,   785,   787,   788,
     789,   790,   793,   800,   802,   805, -1028, -1028,   835,   811,
     742,   868,   884,   871,   873,   879,   806, -1028,   897,   901,
     807, -1028, -1028,   906,   909,   813,   924,   814, -1028,   815,
     817, -1028, -1028,   911,   912,   820, -1028, -1028,   913,   823,
     816,   914,   916,   918,   827,   821,   825,   925,   926,   826,
   -1028, -1028,   927,   928,   933,   829, -1028,   830,   831,   832,
     834,   836,   837,   838,   839,   840, -1028,   841,   842,   843,
     844,   845,   846,   847,   848,   849,   850,   851,   852,   853,
     854,   855,   856,   857, -1028, -1028,   936,   858,   859, -1028,
     860, -1028,   174, -1028,   937,   938,   940,   942,   862, -1028,
     863, -1028, -1028,   948,   861,   950,   865, -1028, -1028, -1028,
   -1028, -1028,   469,   469,   469,   469,   469,   469,   469, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,   866,   867,   869,   -51,   870,   872,   874,   875,   876,
     877,   878,   880,   881,   882,   883,   220,   885,   886, -1028,
     887,   888,   889,   890,   891,   892,   893,    -1,   894,   895,
     896,   899,   900,   902,   903, -1028,   904,   905, -1028, -1028,
     907,   908, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028,  -221, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028,  -215, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028,   910,   915,   618,   917,
     919,   920,   921,   922, -1028,   923,   929, -1028,   930,   931,
     -36,   939,   864, -1028, -1028, -1028, -1028,   932,   934, -1028,
     935,   941,   485,   943,   944,   945,   946,   828,   745,   947,
     949, -1028,   951,   952,   953, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028,   954,   454, -1028, -1028,   955,   956,   957, -1028,
     106, -1028, -1028, -1028, -1028,   958,   961,   962,   963, -1028,
   -1028,   964,   635,   965, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028,  -214, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
     799,   799,   799, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028,  -209, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
     193, -1028,   695, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028,  -199, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,   -29,
   -1028,   987,   924,   966, -1028, -1028, -1028, -1028, -1028, -1028,
     967, -1028,   968,   969, -1028, -1028, -1028,   970, -1028, -1028,
   -1028,   971, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028,   -22, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028,    92, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028,    97, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,   102, -1028, -1028,   986,   -38,   974,   978, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028,   109, -1028, -1028, -1028,   -51, -1028,
   -1028, -1028, -1028,    -1, -1028, -1028, -1028,   618, -1028,   -36,
   -1028, -1028, -1028,   982,   991,   988,  1004,  1007, -1028,   485,
   -1028,   828, -1028,   745, -1028,   454,   979,   980,   981,   326,
   -1028, -1028,   635, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028,   116, -1028, -1028,
   -1028,   326, -1028
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
      95,    94,   640,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   628,   639,   630,   631,   632,
     633,   634,   635,   636,   629,   637,   638,     0,     0,     0,
     474,     0,     0,   472,   473,     0,   538,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   606,   586,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,   488,
     489,   531,   533,   534,   535,   536,   532,   526,   527,   528,
     529,   537,   525,   499,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   500,   501,   530,   505,   506,   507,   508,
     504,   503,   509,   516,   517,   510,   511,   512,   502,   514,
     523,   524,   521,   522,   515,   513,   519,   520,   518,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,     0,
       0,     0,   664,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   654,   655,   656,   657,   658,   659,   660,
     662,   661,   663,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    69,    66,    64,    70,    71,    65,    55,
      68,    58,    59,    60,    56,    67,    61,    62,    63,    57,
       0,     0,     0,     0,   124,   125,   126,     0,     0,   365,
       0,     0,   363,   364,     0,    96,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   627,     0,     0,     0,     0,   286,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   251,   252,   255,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   253,   254,   256,   266,   267,
     268,     0,     0,     0,     0,     0,     0,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,   416,   417,   418,
     419,   420,   421,   422,   424,   423,   426,   430,   427,   428,
     429,   425,   467,     0,     0,     0,   464,   465,   466,     0,
       0,   471,   482,     0,     0,     0,   479,   480,   481,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     486,     0,     0,     0,   333,     0,     0,     0,     0,     0,
       0,   319,   320,   321,   322,   327,   323,   324,   325,   326,
     458,     0,     0,     0,   455,   456,   457,     0,     0,     0,
     294,     0,   304,     0,   302,   303,   305,   306,    49,     0,
       0,     0,    45,     0,     0,     0,     0,   103,   104,   105,
       0,     0,     0,   214,     0,     0,     0,     0,   196,   176,
       0,     0,     0,   155,   156,   157,   158,   159,   162,   163,
     164,   161,   160,   166,   165,     0,     0,     0,     0,     0,
     353,   354,   355,   356,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   653,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,   399,     0,   394,
     395,   396,   127,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,   112,   113,   115,   114,   116,     0,     0,
     362,     0,     0,   377,     0,     0,   370,   371,   372,   373,
       0,     0,     0,    90,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   626,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   431,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   415,     0,     0,     0,   463,     0,   470,
       0,     0,     0,   478,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   485,   328,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
       0,   454,   307,     0,     0,     0,     0,     0,   301,     0,
       0,    44,   106,     0,     0,     0,   102,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     154,   357,     0,     0,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   652,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,   397,     0,     0,     0,   393,
       0,   122,     0,   117,     0,     0,     0,     0,     0,   111,
       0,   361,   374,     0,     0,     0,     0,   369,    99,    98,
      97,   650,    28,    28,    28,    28,    28,    28,    28,    30,
      29,   651,   641,   642,   643,   644,   645,   646,   647,   649,
     648,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,   249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   414,     0,     0,   462,   475,
       0,     0,   477,   556,   560,   539,   540,   575,   542,   543,
     544,   545,   546,   625,   583,   547,   548,   580,   555,   554,
     563,   553,   549,   550,   551,   559,   558,   557,   581,   541,
     623,   624,   579,   611,   617,   610,   620,   614,   618,   619,
     621,   613,   616,   612,   615,   622,     0,   609,   591,   592,
     593,   605,   599,   590,   602,   596,   600,   601,   603,   595,
     598,   594,   597,   604,     0,   589,   576,   574,   577,   582,
     578,   565,   572,   573,   570,   571,   566,   567,   568,   569,
     584,   585,   552,   562,   561,   564,     0,     0,     0,     0,
       0,     0,     0,     0,   317,     0,     0,   453,     0,     0,
       0,   312,   308,   311,   293,    50,    51,     0,     0,   101,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   153,     0,     0,     0,   351,   668,   665,   666,   667,
     672,   671,   673,   669,   670,    86,    81,    89,    80,    87,
      88,    79,    83,    82,    74,    73,    78,    75,    77,    76,
      84,    85,     0,     0,   392,   128,     0,     0,     0,   140,
       0,   132,   133,   135,   134,     0,     0,     0,     0,   110,
     366,     0,     0,     0,   368,    31,    32,    33,    34,    35,
      36,    37,   281,   282,   273,   291,   290,     0,   289,   274,
     276,   278,   285,   277,   275,   284,   270,   283,   272,   271,
      38,    38,    38,    40,    39,   279,   280,   436,   439,   440,
     450,   447,   433,   448,   445,   446,     0,   444,   449,   432,
     438,   435,   437,   451,   434,   468,   469,   483,   484,   607,
       0,   587,     0,   331,   332,   342,   338,   339,   341,   346,
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
      42,    43,   442,     0,   608,   588,   334,     0,   295,     0,
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
   -1028, -1028, -1028,  -255,  -310, -1027,  -643, -1028, -1028,   959,
   -1028, -1028, -1028, -1028,   960, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028,   976, -1028, -1028, -1028, -1028, -1028,
   -1028,   639, -1028, -1028, -1028, -1028, -1028,   561, -1028, -1028,
   -1028, -1028, -1028, -1028,   972, -1028, -1028, -1028, -1028,   107,
   -1028, -1028, -1028, -1028, -1028,  -181, -1028, -1028, -1028,   634,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,  -138, -1028, -1028, -1028,  -133, -1028, -1028, -1028,  -129,
   -1028, -1028, -1028,   973, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028,  -106, -1028, -1028, -1028, -1028, -1028,  -111,
   -1028,   676, -1028, -1028, -1028,    28, -1028, -1028, -1028, -1028,
   -1028,   711, -1028, -1028, -1028, -1028, -1028, -1028, -1028,  -107,
   -1028, -1028, -1028, -1028, -1028, -1028,   638, -1028, -1028, -1028,
   -1028, -1028,   975, -1028, -1028, -1028, -1028,   567, -1028, -1028,
   -1028, -1028, -1028,  -120, -1028, -1028, -1028,   605, -1028, -1028,
   -1028, -1028,  -109, -1028, -1028, -1028,   977, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,   -81, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028,   717, -1028, -1028,
   -1028, -1028, -1028,   983, -1028, -1028, -1028, -1028,  1082, -1028,
   -1028, -1028, -1028,   984, -1028, -1028, -1028, -1028,  1034, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028,    89, -1028, -1028,
   -1028,    94, -1028, -1028, -1028, -1028, -1028,  1118, -1028, -1028,
   -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028,   985, -1028, -1028, -1028, -1028, -1028, -1028, -1028, -1028,
   -1028
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   839,   840,  1093,  1094,    27,   225,   226,
     227,   228,    28,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    29,    77,    78,    79,    80,    81,    30,    63,
     506,   507,   508,   509,    31,    70,   592,   593,   594,   595,
     596,   597,    32,   293,   294,   295,   296,   297,  1050,  1051,
    1052,  1053,  1054,  1246,  1327,  1328,    33,    64,   522,   523,
     524,   525,   526,   527,   528,   529,   530,   531,   532,   766,
    1223,  1224,   533,   765,  1205,  1206,   534,   760,  1185,  1186,
      34,    53,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   631,  1077,  1078,    35,    61,   492,   745,  1149,  1150,
     493,   494,   495,  1153,   992,   993,   496,   497,    36,    59,
     470,   471,   472,   473,   474,   475,   476,   730,  1135,  1136,
     477,   478,   479,    37,    65,   539,   540,   541,   542,   543,
      38,   301,   302,   303,    39,    72,   605,   606,   607,   608,
     609,   824,  1264,  1265,    40,    68,   578,   579,   580,   581,
     807,  1241,  1242,    41,    54,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   654,  1106,  1107,   387,
     388,   389,   390,   391,    42,    60,   483,   484,   485,   486,
      43,    55,   395,   396,   397,   398,    44,   112,   113,   114,
      45,    57,   405,   406,   407,   408,    46,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   440,   954,   955,   215,   439,
     936,   937,   216,   217,   218,    47,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    48,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     867,   868,   616,   587,  1075,   619,   620,  1104,   622,   623,
     480,   232,   712,   714,    73,  1146,   713,   715,    51,   110,
      73,   253,   291,  1119,   480,   110,   487,  1120,   291,  1121,
    1267,   306,   535,  1122,  1268,  1272,    52,   222,    56,  1273,
     402,    82,   392,    58,   392,  1276,    74,   233,    62,  1277,
      66,   254,    74,   255,    75,   601,   234,   235,   236,   575,
      75,   237,   238,  1269,  1270,  1271,   239,   240,   241,    83,
      84,   299,   299,    67,   503,   536,    85,   866,   587,  1076,
     256,    69,   601,   361,   488,   362,   111,   363,    49,    50,
     305,   257,   111,   489,   402,   490,   871,   872,    71,   575,
     675,   364,   677,   678,    86,    87,    88,  1046,   588,   393,
     107,   393,   503,   487,   258,   108,   537,   692,   259,    76,
      89,    90,    91,   698,   365,    76,   260,    92,    93,   116,
     261,   262,   707,   708,   117,   118,   222,   119,   120,   223,
     481,   366,   121,   367,   721,   403,   723,   724,   122,   123,
     124,   125,   368,   491,   481,   126,   127,   109,   504,   263,
     602,   224,   538,   128,   576,   369,   129,   130,   131,  1147,
     404,   488,   394,   132,   394,  1046,   300,   300,  1148,   510,
     489,  1297,   490,   588,   324,   115,   589,   602,   370,   264,
     133,   134,   265,   266,   267,   307,   504,   511,   461,   403,
     325,   326,   135,   590,   576,   136,   137,   138,   308,   327,
     371,  -129,  1047,  1105,   139,  1278,   462,  -129,   591,  1279,
     512,   140,  1288,   141,   404,   142,  1289,   143,   219,   144,
     145,  1090,  1091,  1092,   220,   268,   779,   221,   223,   463,
     491,   146,   372,   229,   923,   482,   147,   148,   513,   149,
     150,   151,   373,   328,   152,   553,   292,   269,   270,   482,
     224,   589,   292,   505,   309,   573,   584,   464,   740,   400,
     747,   329,   330,   331,   332,   333,   775,   311,   590,   334,
    1047,   501,   312,   335,   514,   322,   666,   603,   230,   336,
     604,   577,   153,   591,   535,   231,   290,   374,   298,   337,
     338,   505,   515,   154,   155,   156,   157,   158,   159,   160,
     339,   304,   498,   313,   603,   599,  1048,   604,   755,   375,
     853,   465,   818,   314,   510,   858,   826,   662,   861,   466,
     467,   577,   865,   315,   316,   866,  1290,   536,   672,  1049,
    1291,  1292,   511,   808,   340,  1293,  1294,   317,   516,   517,
    1295,  1247,   318,  1301,   161,   162,   163,  1302,   164,   165,
    1330,   319,   320,   468,  1331,   512,   321,   166,   399,   409,
     410,   411,   412,   459,   413,   555,   924,   414,   537,   925,
     415,   416,   926,   417,  1048,   927,   341,   418,   928,   518,
     929,   930,   419,   513,   420,   519,   421,    82,   422,  1319,
     931,  1320,   423,   424,   461,   932,   933,  1049,   425,   426,
     427,   428,   429,   430,   520,   934,   431,   432,   521,   433,
     434,   582,   462,   769,   538,    83,    84,   435,   645,   514,
     116,   436,    85,   469,   935,   117,   118,   437,   119,   120,
     586,   438,   736,   121,   610,   463,  1321,   515,   441,   122,
     123,   124,   125,   442,   443,   444,   126,   127,   615,   445,
      86,    87,    88,  1322,   128,   446,   447,   129,   130,   131,
     448,   449,   450,   464,   132,   451,    89,    90,    91,   452,
     453,   454,   455,    92,    93,   456,   457,   458,   499,  1158,
     500,   133,   134,   516,   517,   544,   832,   833,   834,   835,
     836,   837,   838,   135,   545,   546,   136,   137,   138,  1159,
    1160,   547,   548,  1323,  1324,   139,   549,   550,   551,  1161,
     552,   556,   140,   557,   141,   558,   142,   465,   143,  1231,
     144,   145,   559,   560,   518,   466,   467,   561,   562,   563,
     519,   253,   146,   564,   565,   566,   567,   147,   148,   568,
     149,   150,   151,   569,   570,   152,   571,  1162,  1163,   520,
    1164,   572,  1325,   521,   583,   598,   611,   612,  1326,   468,
     614,   254,   361,   255,   362,   613,   363,  1065,  1066,  1067,
    1068,  1069,  1070,  1071,   615,   617,   618,   621,  1165,   624,
     364,  1232,   625,   153,  1166,   626,   627,  1167,   676,   647,
     256,   628,  1298,   629,   154,   155,   156,   157,   158,   159,
     160,   257,   630,   365,   632,   633,   634,   635,   636,  1168,
     637,  1169,  1170,   638,   639,   640,   641,   642,   643,   644,
     366,   648,   367,  1125,   258,   649,  1233,   650,   259,   469,
     651,   368,  1234,   668,   652,   653,   260,   655,   656,  1235,
     261,   262,   657,  1171,   369,   161,   162,   163,   658,   164,
     165,  1126,   659,   660,   661,   664,   665,   669,   166,   670,
     674,   671,  1236,  1172,  1237,  1238,  1173,   370,   679,   263,
    1174,   680,   681,   682,  1175,  1176,   683,   684,  1239,  1177,
     685,   686,   687,  1178,  1127,   688,  1240,   693,   689,   371,
     690,   691,   694,  1179,   695,  1180,  1181,   696,  1182,   264,
    1254,   697,   265,   266,   267,   699,   700,   701,   702,  1183,
       2,     3,   703,   706,     4,  1128,  1129,  1184,   704,   705,
     709,   372,  1130,   710,   711,   716,     5,   717,   718,     6,
     719,   373,   720,   722,   725,     7,   938,   726,   939,   940,
     727,   728,     8,   749,   729,   268,  1131,   750,   731,   324,
     777,   742,   941,   732,     9,   780,   751,   733,   734,    10,
      11,   735,  1255,   738,   739,   325,   326,   269,   270,   743,
     744,   746,   752,   753,   327,  1132,   374,   757,   754,    12,
     771,   758,   759,    13,   761,   762,  1207,   763,  1208,  1209,
     782,   786,   764,   767,    14,   768,   772,   773,   375,   774,
     778,   781,  1210,   783,   784,   785,   787,  1256,   788,   789,
     790,   791,   792,  1257,    15,    16,   793,   794,   328,   795,
    1258,   796,   797,   798,   799,   804,   810,   800,   801,   802,
      17,   803,  1133,   805,   806,   814,   329,   330,   331,   332,
     333,   811,   812,  1259,   334,  1260,  1261,    18,   335,   813,
     815,  1134,   820,   816,   336,   821,   817,   822,   851,  1262,
     852,   855,   823,   825,   337,   338,   828,  1263,   942,   856,
     854,   943,    19,    20,   944,   339,   829,   945,   830,   831,
     946,   841,   947,   948,   842,   843,   844,   845,   846,   232,
     847,   848,   949,   849,   850,    21,   857,   950,   951,   859,
     860,   862,   863,   864,   866,   870,    22,   952,   869,   340,
     877,   873,    23,   880,   874,   875,    24,   885,  1211,    25,
     876,  1212,   878,   879,  1213,   233,   953,  1214,   881,   882,
    1215,   883,  1216,  1217,   234,   235,   236,   884,   886,   237,
     238,   887,  1218,   890,   239,   240,   241,  1219,  1220,   888,
     889,   341,   891,   892,   976,   893,   894,  1221,  1191,  1192,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,  1200,  1201,  1202,
    1203,   895,   896,   897,   898,   899,  1222,   900,   901,   978,
     902,   903,   904,   905,   906,   907,   908,   979,   909,   980,
     981,   910,   982,   911,   912,   913,   914,   915,   983,   916,
     917,   918,   919,   920,   921,  1204,   922,   956,   957,   958,
     959,   960,   961,   962,   963,   964,   985,   965,   966,   967,
     986,   968,   969,   970,   971,   988,   977,   972,   989,   991,
     997,   998,  1000,  1003,   973,  1004,   974,  1005,  1001,   975,
     984,   987,  1006,   310,  1009,  1010,  1012,  1013,   994,   995,
     990,   996,  1014,  1002,   999,  1042,  1055,  1056,  1007,  1057,
    1011,  1058,  1008,  1015,  1016,  1017,  1018,  1061,  1019,  1063,
    1020,  1021,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,
    1030,  1031,  1032,  1033,  1034,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,  1280,  1044,  1045,  1043,  1059,  1060,  1062,  1064,
    1072,  1073,  1152,  1074,  1079,  1296,  1080,  1307,  1081,  1082,
    1083,  1084,  1085,  1309,  1086,  1087,  1088,  1089,  1308,  1095,
    1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,  1108,  1109,
    1110,  1310,  1311,  1111,  1112,   756,  1113,  1114,  1115,  1116,
    1332,  1117,  1118,   819,  1123,  1314,   770,  1248,  1313,  1124,
    1312,  1137,  1303,  1138,  1139,  1140,  1141,  1142,  1306,   748,
    1305,  1151,   827,  1143,  1144,  1145,  1154,   776,  1155,  1156,
    1281,   737,  1329,   809,   502,  1157,  1315,  1187,  1188,  1189,
    1190,  1225,  1304,  1226,   401,  1227,  1228,  1229,  1230,  1243,
     741,   460,  1249,  1244,  1245,  1250,  1251,  1252,  1253,  1266,
    1282,  1275,   323,     0,  1274,     0,  1283,  1284,  1285,  1286,
    1287,  1299,  1300,  1316,  1317,  1318,     0,   554,     0,     0,
       0,   574,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   585,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   600,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   646,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   663,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   667,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   673
};

static const yytype_int16 yycheck[] =
{
     643,   644,   312,     1,    55,   315,   316,     8,   318,   319,
       1,     1,   225,   225,     1,    51,   229,   229,   246,     1,
       1,     1,     1,   244,     1,     1,     1,   248,     1,   244,
     244,   247,     1,   248,   248,   244,   246,     1,   246,   248,
       1,     1,     1,   246,     1,   244,    33,    37,   246,   248,
     246,    31,    33,    33,    41,     1,    46,    47,    48,     1,
      41,    51,    52,  1090,  1091,  1092,    56,    57,    58,    29,
      30,     1,     1,   246,     1,    44,    36,   115,     1,   130,
      60,   246,     1,     1,    59,     3,    68,     5,   244,   245,
     244,    71,    68,    68,     1,    70,   193,   194,   246,     1,
     410,    19,   412,   413,    64,    65,    66,     1,   106,    68,
     246,    68,     1,     1,    94,   246,    85,   427,    98,   106,
      80,    81,    82,   433,    42,   106,   106,    87,    88,     1,
     110,   111,   442,   443,     6,     7,     1,     9,    10,   103,
     131,    59,    14,    61,   454,   106,   456,   457,    20,    21,
      22,    23,    70,   128,   131,    27,    28,   246,    85,   139,
     106,   125,   131,    35,   106,    83,    38,    39,    40,   205,
     131,    59,   131,    45,   131,     1,   106,   106,   214,     1,
      68,   219,    70,   106,     1,   246,   184,   106,   106,   169,
      62,    63,   172,   173,   174,   247,    85,    19,     1,   106,
      17,    18,    74,   201,   106,    77,    78,    79,   247,    26,
     128,   190,   106,   214,    86,   244,    19,   190,   216,   248,
      42,    93,   244,    95,   131,    97,   248,    99,   246,   101,
     102,    11,    12,    13,   246,   215,   546,   246,   103,    42,
     128,   113,   160,   246,    51,   236,   118,   119,    70,   121,
     122,   123,   170,    70,   126,   245,   235,   237,   238,   236,
     125,   184,   235,   190,   245,   245,   245,    70,   245,   245,
     245,    88,    89,    90,    91,    92,   245,   247,   201,    96,
     106,   245,   247,   100,   106,   245,   245,   233,   246,   106,
     236,   233,   164,   216,     1,   246,   246,   215,   246,   116,
     117,   190,   124,   175,   176,   177,   178,   179,   180,   181,
     127,   246,   244,   247,   233,   245,   210,   236,   245,   237,
     630,   124,   245,   247,     1,   635,   245,   245,   638,   132,
     133,   233,   642,   247,   247,   115,   244,    44,   245,   233,
     248,   244,    19,   245,   161,   248,   244,   247,   170,   171,
     248,   245,   247,   244,   226,   227,   228,   248,   230,   231,
     244,   247,   247,   166,   248,    42,   247,   239,   247,   247,
     247,   247,   247,   245,   247,   244,   183,   247,    85,   186,
     247,   247,   189,   247,   210,   192,   203,   247,   195,   211,
     197,   198,   247,    70,   247,   217,   247,     1,   247,    73,
     207,    75,   247,   247,     1,   212,   213,   233,   247,   247,
     247,   247,   247,   247,   236,   222,   247,   247,   240,   247,
     247,   244,    19,   245,   131,    29,    30,   247,   245,   106,
       1,   247,    36,   236,   241,     6,     7,   247,     9,    10,
     190,   247,   245,    14,   129,    42,   120,   124,   247,    20,
      21,    22,    23,   247,   247,   247,    27,    28,   115,   247,
      64,    65,    66,   137,    35,   247,   247,    38,    39,    40,
     247,   247,   247,    70,    45,   247,    80,    81,    82,   247,
     247,   247,   247,    87,    88,   247,   247,   247,   247,     4,
     247,    62,    63,   170,   171,   247,   153,   154,   155,   156,
     157,   158,   159,    74,   247,   247,    77,    78,    79,    24,
      25,   247,   247,   187,   188,    86,   247,   247,   247,    34,
     247,   247,    93,   247,    95,   247,    97,   124,    99,    75,
     101,   102,   247,   247,   211,   132,   133,   247,   247,   247,
     217,     1,   113,   247,   247,   247,   247,   118,   119,   247,
     121,   122,   123,   247,   247,   126,   247,    72,    73,   236,
      75,   247,   236,   240,   247,   247,   129,   129,   242,   166,
     115,    31,     1,    33,     3,   244,     5,   832,   833,   834,
     835,   836,   837,   838,   115,   225,   115,   115,   103,   115,
      19,   137,   115,   164,   109,   244,   244,   112,   115,   244,
      60,   247,  1245,   247,   175,   176,   177,   178,   179,   180,
     181,    71,   247,    42,   247,   247,   247,   247,   247,   134,
     247,   136,   137,   247,   247,   247,   247,   247,   247,   247,
      59,   247,    61,    15,    94,   247,   182,   247,    98,   236,
     247,    70,   188,   129,   247,   247,   106,   247,   247,   195,
     110,   111,   247,   168,    83,   226,   227,   228,   247,   230,
     231,    43,   247,   247,   247,   247,   247,   244,   239,   247,
     225,   247,   218,   188,   220,   221,   191,   106,   129,   139,
     195,   129,   129,   129,   199,   200,   225,   115,   234,   204,
     225,   115,   115,   208,    76,   115,   242,   115,   225,   128,
     225,   225,   115,   218,   129,   220,   221,   115,   223,   169,
      75,   115,   172,   173,   174,   115,   115,   115,   115,   234,
       0,     1,   225,   225,     4,   107,   108,   242,   247,   247,
     225,   160,   114,   225,   225,   225,    16,   225,   225,    19,
     225,   170,   115,   225,   225,    25,    51,   244,    53,    54,
     244,   247,    32,   129,   247,   215,   138,   129,   247,     1,
     225,   244,    67,   247,    44,   129,   244,   247,   247,    49,
      50,   247,   137,   247,   247,    17,    18,   237,   238,   247,
     247,   247,   244,   247,    26,   167,   215,   244,   247,    69,
     244,   247,   247,    73,   247,   247,    51,   247,    53,    54,
     129,   244,   247,   247,    84,   247,   247,   247,   237,   247,
     225,   225,    67,   225,   225,   225,   115,   182,   129,   225,
     129,   115,   115,   188,   104,   105,   129,   129,    70,   129,
     195,   129,   129,   129,   129,   244,   225,   129,   129,   129,
     120,   129,   224,   244,   247,   247,    88,    89,    90,    91,
      92,   244,   246,   218,    96,   220,   221,   137,   100,   244,
     247,   243,   129,   247,   106,   244,   247,   244,   115,   234,
     115,   115,   247,   247,   116,   117,   244,   242,   183,   115,
     247,   186,   162,   163,   189,   127,   244,   192,   244,   244,
     195,   244,   197,   198,   244,   244,   244,   244,   244,     1,
     244,   244,   207,   244,   244,   185,   115,   212,   213,   115,
     115,   129,   115,   115,   115,   129,   196,   222,   244,   161,
     247,   129,   202,   115,   225,   129,   206,   244,   183,   209,
     129,   186,   129,   129,   189,    37,   241,   192,   129,   129,
     195,   129,   197,   198,    46,    47,    48,   129,   129,    51,
      52,   129,   207,   129,    56,    57,    58,   212,   213,   244,
     244,   203,   129,   244,   129,   244,   244,   222,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   244,   244,   244,   244,   244,   241,   244,   244,   247,
     244,   244,   244,   244,   244,   244,   244,   129,   244,   115,
     129,   244,   129,   244,   244,   244,   244,   244,   129,   244,
     244,   244,   244,   244,   244,   187,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   129,   244,   244,   244,
     129,   244,   244,   244,   244,   129,   225,   244,   129,   115,
     129,   129,   129,   129,   244,   129,   244,   129,   225,   244,
     244,   244,   225,    77,   129,   129,   129,   129,   244,   244,
     247,   244,   129,   247,   244,   129,   129,   129,   247,   129,
     244,   129,   247,   244,   244,   244,   244,   129,   244,   129,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   115,   244,   244,   247,   244,   244,   247,   244,
     244,   244,   248,   244,   244,   129,   244,   135,   244,   244,
     244,   244,   244,   135,   244,   244,   244,   244,   137,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   137,   135,   244,   244,   506,   244,   244,   244,   244,
    1331,   244,   244,   592,   244,  1293,   522,  1050,  1291,   244,
    1289,   244,  1268,   244,   244,   244,   244,   244,  1279,   493,
    1277,   232,   605,   244,   244,   244,   244,   539,   244,   244,
    1152,   470,  1302,   578,   225,   244,  1295,   244,   244,   244,
     244,   244,  1273,   244,   112,   244,   244,   244,   244,   244,
     483,   167,   244,   247,   247,   244,   244,   244,   244,   244,
     244,  1122,    94,    -1,  1120,    -1,   249,   249,   249,   249,
     249,   247,   244,   244,   244,   244,    -1,   242,    -1,    -1,
      -1,   271,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   395,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   405
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   251,     0,     1,     4,    16,    19,    25,    32,    44,
      49,    50,    69,    73,    84,   104,   105,   120,   137,   162,
     163,   185,   196,   202,   206,   209,   252,   257,   262,   282,
     288,   294,   302,   316,   340,   364,   378,   393,   400,   404,
     414,   423,   444,   450,   456,   460,   466,   525,   539,   244,
     245,   246,   246,   341,   424,   451,   246,   461,   246,   379,
     445,   365,   246,   289,   317,   394,   246,   246,   415,   246,
     295,   246,   405,     1,    33,    41,   106,   283,   284,   285,
     286,   287,     1,    29,    30,    36,    64,    65,    66,    80,
      81,    82,    87,    88,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   246,   246,   246,
       1,    68,   457,   458,   459,   246,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    23,    27,    28,    35,    38,
      39,    40,    45,    62,    63,    74,    77,    78,    79,    86,
      93,    95,    97,    99,   101,   102,   113,   118,   119,   121,
     122,   123,   126,   164,   175,   176,   177,   178,   179,   180,
     181,   226,   227,   228,   230,   231,   239,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   518,   522,   523,   524,   246,
     246,   246,     1,   103,   125,   258,   259,   260,   261,   246,
     246,   246,     1,    37,    46,    47,    48,    51,    52,    56,
      57,    58,   540,   541,   542,   543,   544,   545,   546,   547,
     548,   549,   550,     1,    31,    33,    60,    71,    94,    98,
     106,   110,   111,   139,   169,   172,   173,   174,   215,   237,
     238,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     246,     1,   235,   303,   304,   305,   306,   307,   246,     1,
     106,   401,   402,   403,   246,   244,   247,   247,   247,   245,
     284,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   245,   527,     1,    17,    18,    26,    70,    88,
      89,    90,    91,    92,    96,   100,   106,   116,   117,   127,
     161,   203,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,     1,     3,     5,    19,    42,    59,    61,    70,    83,
     106,   128,   160,   170,   215,   237,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   439,   440,   441,
     442,   443,     1,    68,   131,   452,   453,   454,   455,   247,
     245,   458,     1,   106,   131,   462,   463,   464,   465,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   519,
     515,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   245,
     468,     1,    19,    42,    70,   124,   132,   133,   166,   236,
     380,   381,   382,   383,   384,   385,   386,   390,   391,   392,
       1,   131,   236,   446,   447,   448,   449,     1,    59,    68,
      70,   128,   366,   370,   371,   372,   376,   377,   244,   247,
     247,   245,   259,     1,    85,   190,   290,   291,   292,   293,
       1,    19,    42,    70,   106,   124,   170,   171,   211,   217,
     236,   240,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   332,   336,     1,    44,    85,   131,   395,
     396,   397,   398,   399,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   245,   541,   244,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   245,   264,     1,   106,   233,   416,   417,
     418,   419,   244,   247,   245,   304,   190,     1,   106,   184,
     201,   216,   296,   297,   298,   299,   300,   301,   247,   245,
     402,     1,   106,   233,   236,   406,   407,   408,   409,   410,
     129,   129,   129,   244,   115,   115,   254,   225,   115,   254,
     254,   115,   254,   254,   115,   115,   244,   244,   247,   247,
     247,   361,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   245,   343,   244,   247,   247,
     247,   247,   247,   247,   436,   247,   247,   247,   247,   247,
     247,   247,   245,   426,   247,   247,   245,   453,   129,   244,
     247,   247,   245,   463,   225,   254,   115,   254,   254,   129,
     129,   129,   129,   225,   115,   225,   115,   115,   115,   225,
     225,   225,   254,   115,   115,   129,   115,   115,   254,   115,
     115,   115,   115,   225,   247,   247,   225,   254,   254,   225,
     225,   225,   225,   229,   225,   229,   225,   225,   225,   225,
     115,   254,   225,   254,   254,   225,   244,   244,   247,   247,
     387,   247,   247,   247,   247,   247,   245,   381,   247,   247,
     245,   447,   244,   247,   247,   367,   247,   245,   371,   129,
     129,   244,   244,   247,   247,   245,   291,   244,   247,   247,
     337,   247,   247,   247,   247,   333,   329,   247,   247,   245,
     319,   244,   247,   247,   247,   245,   396,   225,   225,   254,
     129,   225,   129,   225,   225,   225,   244,   115,   129,   225,
     129,   115,   115,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   244,   244,   247,   420,   245,   417,
     225,   244,   246,   244,   247,   247,   247,   247,   245,   297,
     129,   244,   244,   247,   411,   247,   245,   407,   244,   244,
     244,   244,   153,   154,   155,   156,   157,   158,   159,   253,
     254,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   115,   115,   254,   247,   115,   115,   115,   254,   115,
     115,   254,   129,   115,   115,   254,   115,   256,   256,   244,
     129,   193,   194,   129,   225,   129,   129,   247,   129,   129,
     115,   129,   129,   129,   129,   244,   129,   129,   244,   244,
     129,   129,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,    51,   183,   186,   189,   192,   195,   197,
     198,   207,   212,   213,   222,   241,   520,   521,    51,    53,
      54,    67,   183,   186,   189,   192,   195,   197,   198,   207,
     212,   213,   222,   241,   516,   517,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   129,   225,   247,   129,
     115,   129,   129,   129,   244,   129,   129,   244,   129,   129,
     247,   115,   374,   375,   244,   244,   244,   129,   129,   244,
     129,   225,   247,   129,   129,   129,   225,   247,   247,   129,
     129,   244,   129,   129,   129,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   129,   247,   244,   244,     1,   106,   210,   233,
     308,   309,   310,   311,   312,   129,   129,   129,   129,   244,
     244,   129,   247,   129,   244,   253,   253,   253,   253,   253,
     253,   253,   244,   244,   244,    55,   130,   362,   363,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
      11,    12,    13,   255,   256,   244,   244,   244,   244,   244,
     244,   244,   244,   244,     8,   214,   437,   438,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     248,   244,   248,   244,   244,    15,    43,    76,   107,   108,
     114,   138,   167,   224,   243,   388,   389,   244,   244,   244,
     244,   244,   244,   244,   244,   244,    51,   205,   214,   368,
     369,   232,   248,   373,   244,   244,   244,   244,     4,    24,
      25,    34,    72,    73,    75,   103,   109,   112,   134,   136,
     137,   168,   188,   191,   195,   199,   200,   204,   208,   218,
     220,   221,   223,   234,   242,   338,   339,   244,   244,   244,
     244,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   187,   334,   335,    51,    53,    54,
      67,   183,   186,   189,   192,   195,   197,   198,   207,   212,
     213,   222,   241,   330,   331,   244,   244,   244,   244,   244,
     244,    75,   137,   182,   188,   195,   218,   220,   221,   234,
     242,   421,   422,   244,   247,   247,   313,   245,   309,   244,
     244,   244,   244,   244,    75,   137,   182,   188,   195,   218,
     220,   221,   234,   242,   412,   413,   244,   244,   248,   255,
     255,   255,   244,   248,   521,   517,   244,   248,   244,   248,
     115,   375,   244,   249,   249,   249,   249,   249,   244,   248,
     244,   248,   244,   248,   244,   248,   129,   219,   256,   247,
     244,   244,   248,   363,   438,   389,   369,   135,   137,   135,
     137,   135,   339,   335,   331,   422,   244,   244,   244,    73,
      75,   120,   137,   187,   188,   236,   242,   314,   315,   413,
     244,   248,   315
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   250,   251,   251,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   252,   253,   253,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   255,
     256,   256,   256,   256,   257,   258,   258,   259,   259,   259,
     260,   261,   262,   263,   263,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   283,   284,   284,   284,   284,   285,   286,   287,
     289,   288,   290,   290,   291,   291,   291,   292,   293,   295,
     294,   296,   296,   297,   297,   297,   297,   297,   298,   299,
     300,   301,   302,   303,   303,   304,   304,   304,   305,   307,
     306,   308,   308,   309,   309,   309,   309,   310,   311,   311,
     313,   312,   314,   314,   315,   315,   315,   315,   315,   315,
     315,   315,   317,   316,   318,   318,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   329,   328,   330,   330,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   333,   332,   334,   334,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   337,   336,   338,   338,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   341,   340,
     342,   342,   343,   343,   343,   343,   343,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   361,   360,   362,   362,
     363,   363,   365,   364,   367,   366,   368,   368,   369,   369,
     369,   370,   370,   371,   371,   371,   371,   371,   373,   372,
     374,   374,   375,   375,   376,   377,   379,   378,   380,   380,
     381,   381,   381,   381,   381,   381,   381,   381,   381,   382,
     383,   384,   385,   387,   386,   388,   388,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   390,   391,   392,
     394,   393,   395,   395,   396,   396,   396,   396,   397,   398,
     399,   400,   401,   401,   402,   402,   403,   405,   404,   406,
     406,   407,   407,   407,   407,   408,   409,   411,   410,   412,
     412,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   415,   414,   416,   416,   417,   417,   417,   418,   420,
     419,   421,   421,   422,   422,   422,   422,   422,   422,   422,
     422,   422,   422,   424,   423,   425,   425,   426,   426,   426,
     426,   426,   426,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     434,   436,   435,   437,   437,   438,   438,   439,   440,   441,
     442,   443,   445,   444,   446,   446,   447,   447,   447,   448,
     449,   451,   450,   452,   452,   453,   453,   453,   454,   455,
     456,   457,   457,   458,   458,   459,   461,   460,   462,   462,
     463,   463,   463,   464,   465,   466,   467,   467,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   468,
     468,   468,   468,   468,   468,   468,   468,   468,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   500,   501,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   515,   514,   516,   516,
     517,   517,   517,   517,   517,   517,   517,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   519,   518,   520,   520,
     521,   521,   521,   521,   521,   521,   521,   521,   521,   521,
     521,   521,   521,   522,   523,   524,   525,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   528,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   540,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   542,   543,   544,   545,   546,
     547,   548,   549,   550
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     5,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     4,     4,
       4,     4,     4,     4
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
#line 432 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 433 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2938 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2944 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2956 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2962 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2968 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 439 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2974 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 440 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2980 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 443 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 444 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2992 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 445 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2998 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 446 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 3004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 447 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 3010 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 460 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 3019 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 466 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3028 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 499 "conf_parser.y" /* yacc.c:1646  */
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
#line 3071 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 539 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 3132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 597 "conf_parser.y" /* yacc.c:1646  */
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
#line 3164 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 626 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3175 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 634 "conf_parser.y" /* yacc.c:1646  */
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
#line 3192 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 648 "conf_parser.y" /* yacc.c:1646  */
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
#line 3223 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 676 "conf_parser.y" /* yacc.c:1646  */
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
#line 3241 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 691 "conf_parser.y" /* yacc.c:1646  */
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
#line 3259 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 706 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3272 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 716 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    char *p;

    if ((p = strchr(yylval.string, ' ')))
      *p = '\0';

    MyFree(ConfigServerInfo.network_name);
    ConfigServerInfo.network_name = xstrdup(yylval.string);
  }
}
#line 3289 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 730 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3301 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 739 "conf_parser.y" /* yacc.c:1646  */
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
#line 3332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 767 "conf_parser.y" /* yacc.c:1646  */
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
#line 3363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 795 "conf_parser.y" /* yacc.c:1646  */
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
#line 3391 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 820 "conf_parser.y" /* yacc.c:1646  */
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
#line 3416 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 842 "conf_parser.y" /* yacc.c:1646  */
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
#line 3441 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 864 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3450 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 882 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3462 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 891 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3474 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 900 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3486 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 913 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3495 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 917 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 934 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3521 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 940 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3530 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 950 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3539 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 954 "conf_parser.y" /* yacc.c:1646  */
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
#line 3557 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 972 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3566 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 978 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3575 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 984 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3584 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 990 "conf_parser.y" /* yacc.c:1646  */
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
#line 3605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1018 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3614 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1024 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3623 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1028 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3636 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1044 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3647 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1052 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3655 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1055 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3663 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1060 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3672 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1067 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3681 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1071 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3690 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1075 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3699 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1079 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3708 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1083 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3717 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1087 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3726 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1091 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3735 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1095 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3744 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1105 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3756 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1112 "conf_parser.y" /* yacc.c:1646  */
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
#line 3810 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3819 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1183 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3828 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1189 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3837 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1195 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3846 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1201 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3860 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1212 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1218 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3883 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1229 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3892 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1235 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3901 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1242 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3910 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1246 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3919 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1250 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3928 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1254 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3937 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1258 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3946 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1262 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1266 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3964 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1270 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3973 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1274 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 3982 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1278 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 3991 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1282 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4000 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1286 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4009 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1290 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4018 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1294 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1298 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4036 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1302 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
}
#line 4045 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1308 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value = 0;
}
#line 4054 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1315 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_CCONN;
}
#line 4063 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1319 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_DEBUG;
}
#line 4072 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1323 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_EXTERNAL;
}
#line 4081 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1327 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_FULL;
}
#line 4090 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1331 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_REJ;
}
#line 4099 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1335 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_SKILL;
}
#line 4108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1339 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_NCHANGE;
}
#line 4117 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1343 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_UNAUTH;
}
#line 4126 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1347 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value |= SNO_KLINE;
}
#line 4135 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1351 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_DLINE;
}
#line 4144 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1355 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_XLINE;
}
#line 4153 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1359 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_BOTS;
}
#line 4162 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1363 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_SERVREJ;
}
#line 4171 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1367 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.snomodes.value += SNO_GENERAL;
}
#line 4180 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1373 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4189 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1380 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4198 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1384 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4207 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1388 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4216 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1392 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4225 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1396 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4234 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1400 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4243 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1404 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4252 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1408 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4261 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1412 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4270 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1416 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4279 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1420 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4288 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1424 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4297 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1428 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4306 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1432 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4315 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1436 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4324 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1440 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4333 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1444 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4342 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1448 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4351 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1452 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4360 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1456 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4369 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1460 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4378 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1464 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4387 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 240:
#line 1468 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4396 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 241:
#line 1472 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4405 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 242:
#line 1476 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4414 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 243:
#line 1480 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4423 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 244:
#line 1484 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4432 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 245:
#line 1488 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4441 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 246:
#line 1492 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4450 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 247:
#line 1496 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4459 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 248:
#line 1506 "conf_parser.y" /* yacc.c:1646  */
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
#line 4476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 249:
#line 1518 "conf_parser.y" /* yacc.c:1646  */
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
}
#line 4524 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1582 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4533 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1588 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4542 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1594 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4551 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1600 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4560 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1606 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4569 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1612 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4578 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1618 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4587 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1624 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1630 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1636 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4614 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1642 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4624 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1649 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4633 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1655 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4642 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1661 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1667 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4663 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1676 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4675 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1685 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4684 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1692 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4693 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 291:
#line 1696 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4702 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 292:
#line 1706 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4711 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 294:
#line 1712 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4719 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1718 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4728 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1722 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4737 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1726 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4746 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 308:
#line 1734 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4752 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 312:
#line 1739 "conf_parser.y" /* yacc.c:1646  */
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
#line 4770 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 313:
#line 1752 "conf_parser.y" /* yacc.c:1646  */
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
#line 4790 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 314:
#line 1769 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4799 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 315:
#line 1775 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4808 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1785 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4817 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1789 "conf_parser.y" /* yacc.c:1646  */
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
#line 4858 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1838 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4867 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1844 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4876 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1850 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1856 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4899 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1867 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4908 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1874 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4917 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1878 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4926 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1882 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4935 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1886 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4944 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1890 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4953 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 342:
#line 1894 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4962 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 343:
#line 1898 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4971 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 344:
#line 1902 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4980 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1906 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4989 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1910 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4998 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1916 "conf_parser.y" /* yacc.c:1646  */
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
#line 5015 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1930 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 5027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1939 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 5039 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1952 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 5051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 351:
#line 1959 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 5062 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1970 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5071 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 359:
#line 1976 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5080 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 360:
#line 1982 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5089 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 1997 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5104 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2013 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5120 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2024 "conf_parser.y" /* yacc.c:1646  */
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
#line 5137 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2041 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5146 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2047 "conf_parser.y" /* yacc.c:1646  */
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
#line 5168 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2066 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5177 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2073 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2077 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5195 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 383:
#line 2081 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 384:
#line 2085 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5213 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2089 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5222 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2093 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5231 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2097 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5240 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2101 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5249 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2105 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2109 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5267 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2119 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5281 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2128 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5296 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2143 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5305 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2149 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5314 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2156 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5323 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2160 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 405:
#line 2164 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5341 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 406:
#line 2168 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5350 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 407:
#line 2172 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5359 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 408:
#line 2176 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5368 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 409:
#line 2180 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5377 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 410:
#line 2184 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5386 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 411:
#line 2188 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5395 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 412:
#line 2192 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5404 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 413:
#line 2202 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 414:
#line 2211 "conf_parser.y" /* yacc.c:1646  */
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
#line 5484 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2291 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5493 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2297 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5502 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2303 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5511 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2309 "conf_parser.y" /* yacc.c:1646  */
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
#line 5527 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2322 "conf_parser.y" /* yacc.c:1646  */
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
#line 5543 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2335 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5552 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2341 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5561 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2347 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5570 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2351 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5579 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2357 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5587 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 445:
#line 2363 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2367 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2373 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5619 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2384 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2390 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5637 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2396 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5646 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2402 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5660 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2417 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5669 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 453:
#line 2421 "conf_parser.y" /* yacc.c:1646  */
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
#line 5694 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2446 "conf_parser.y" /* yacc.c:1646  */
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
#line 5717 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 460:
#line 2466 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5726 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 461:
#line 2476 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5735 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2480 "conf_parser.y" /* yacc.c:1646  */
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
#line 5761 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 468:
#line 2506 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5770 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 469:
#line 2512 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5779 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 475:
#line 2527 "conf_parser.y" /* yacc.c:1646  */
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
#line 5796 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 476:
#line 2544 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5805 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 477:
#line 2548 "conf_parser.y" /* yacc.c:1646  */
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
#line 5827 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 483:
#line 2570 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5836 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 484:
#line 2576 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5845 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2642 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5853 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2647 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5861 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2652 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2657 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5881 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2666 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5893 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2675 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2684 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
}
#line 5917 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2693 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5926 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2699 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5934 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2704 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2709 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2714 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5958 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2719 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5970 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2728 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2733 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2738 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5994 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2743 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 6002 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2748 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 6010 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2753 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 6018 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2758 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 6026 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2763 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 6034 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2768 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 6042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2773 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 6050 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2778 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 6059 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2784 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 6067 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2789 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 6075 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2794 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 6083 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2799 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6091 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2804 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6099 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2809 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6107 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2814 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6115 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2819 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2822 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6131 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2827 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6139 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2830 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6147 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2835 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6155 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2840 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6163 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2845 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6171 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2850 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6179 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2855 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6187 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2860 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6195 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2865 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6203 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2870 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2875 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6219 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2880 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6227 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2885 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6235 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2890 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6243 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2895 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6251 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2901 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6259 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6267 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2907 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2910 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6283 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2913 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6291 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2916 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6299 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2919 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6307 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2922 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6315 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2925 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6323 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2928 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6331 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2931 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6339 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2934 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6347 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2937 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6355 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2940 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2943 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6371 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2946 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
}
#line 6379 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2951 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6387 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2957 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6395 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2960 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6403 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2963 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6411 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2966 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6419 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2969 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2972 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6435 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2975 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6443 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2978 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6451 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2981 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6459 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2984 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6467 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2987 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6475 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2990 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6483 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2993 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6491 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2998 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6499 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 3003 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6507 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 3008 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6515 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 3033 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6523 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3038 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6531 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3043 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6539 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3048 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6547 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3053 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3058 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6563 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3063 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6571 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3068 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6579 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3073 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6587 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3078 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6595 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3083 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6603 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6612 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3112 "conf_parser.y" /* yacc.c:1646  */
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
#line 6631 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3128 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6643 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3137 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3143 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3149 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6670 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3155 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6682 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3164 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6691 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3170 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6700 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6704 "conf_parser.c" /* yacc.c:1646  */
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
