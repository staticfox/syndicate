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


#line 191 "conf_parser.c" /* yacc.c:339  */

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
    SECONDS = 395,
    MINUTES = 396,
    HOURS = 397,
    DAYS = 398,
    WEEKS = 399,
    MONTHS = 400,
    YEARS = 401,
    SEND_PASSWORD = 402,
    SENDQ = 403,
    SERVERHIDE = 404,
    SERVERINFO = 405,
    SHORT_MOTD = 406,
    SPOOF = 407,
    SPOOF_NOTICE = 408,
    SQUIT = 409,
    SSL_CERTIFICATE_FILE = 410,
    SSL_CERTIFICATE_FINGERPRINT = 411,
    SSL_CONNECTION_REQUIRED = 412,
    SSL_DH_ELLIPTIC_CURVE = 413,
    SSL_DH_PARAM_FILE = 414,
    SSL_MESSAGE_DIGEST_ALGORITHM = 415,
    STATS_E_DISABLED = 416,
    STATS_I_OPER_ONLY = 417,
    STATS_K_OPER_ONLY = 418,
    STATS_M_OPER_ONLY = 419,
    STATS_O_OPER_ONLY = 420,
    STATS_P_OPER_ONLY = 421,
    STATS_U_OPER_ONLY = 422,
    T_ALL = 423,
    T_BOTS = 424,
    T_CALLERID = 425,
    T_CCONN = 426,
    T_COMMAND = 427,
    T_CLUSTER = 428,
    T_DEAF = 429,
    T_DEBUG = 430,
    T_DLINE = 431,
    T_EXTERNAL = 432,
    T_FARCONNECT = 433,
    T_FILE = 434,
    T_FULL = 435,
    T_GLOBOPS = 436,
    T_INVISIBLE = 437,
    T_IPV4 = 438,
    T_IPV6 = 439,
    T_LOCOPS = 440,
    T_LOG = 441,
    T_NCHANGE = 442,
    T_NONONREG = 443,
    T_OPERWALL = 444,
    T_OPERWALLS = 445,
    T_OPME = 446,
    T_PREPEND = 447,
    T_PSEUDO = 448,
    T_RECVQ = 449,
    T_REJ = 450,
    T_RESTART = 451,
    T_SERVER = 452,
    T_SERVICE = 453,
    T_SERVNOTICE = 454,
    T_SET = 455,
    T_SHARED = 456,
    T_SIZE = 457,
    T_SKILL = 458,
    T_SOFTCALLERID = 459,
    T_SPY = 460,
    T_SSL = 461,
    T_SSL_CIPHER_LIST = 462,
    T_TARGET = 463,
    T_UMODES = 464,
    T_UNAUTH = 465,
    T_UNDLINE = 466,
    T_UNLIMITED = 467,
    T_UNRESV = 468,
    T_UNXLINE = 469,
    T_WALLOP = 470,
    T_WALLOPS = 471,
    T_WEBIRC = 472,
    TBOOL = 473,
    THROTTLE_COUNT = 474,
    THROTTLE_TIME = 475,
    TKLINE_EXPIRE_NOTICES = 476,
    TMASKED = 477,
    TS_MAX_DELTA = 478,
    TS_WARN_DELTA = 479,
    TWODOTS = 480,
    TYPE = 481,
    UNKLINE = 482,
    USE_LOGGING = 483,
    USER = 484,
    VHOST = 485,
    VHOST6 = 486,
    WARN_NO_CONNECT_BLOCK = 487,
    WHOIS = 488,
    WHOIS_NOTIFY = 489,
    XLINE = 490,
    XLINE_EXEMPT = 491
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
#define SECONDS 395
#define MINUTES 396
#define HOURS 397
#define DAYS 398
#define WEEKS 399
#define MONTHS 400
#define YEARS 401
#define SEND_PASSWORD 402
#define SENDQ 403
#define SERVERHIDE 404
#define SERVERINFO 405
#define SHORT_MOTD 406
#define SPOOF 407
#define SPOOF_NOTICE 408
#define SQUIT 409
#define SSL_CERTIFICATE_FILE 410
#define SSL_CERTIFICATE_FINGERPRINT 411
#define SSL_CONNECTION_REQUIRED 412
#define SSL_DH_ELLIPTIC_CURVE 413
#define SSL_DH_PARAM_FILE 414
#define SSL_MESSAGE_DIGEST_ALGORITHM 415
#define STATS_E_DISABLED 416
#define STATS_I_OPER_ONLY 417
#define STATS_K_OPER_ONLY 418
#define STATS_M_OPER_ONLY 419
#define STATS_O_OPER_ONLY 420
#define STATS_P_OPER_ONLY 421
#define STATS_U_OPER_ONLY 422
#define T_ALL 423
#define T_BOTS 424
#define T_CALLERID 425
#define T_CCONN 426
#define T_COMMAND 427
#define T_CLUSTER 428
#define T_DEAF 429
#define T_DEBUG 430
#define T_DLINE 431
#define T_EXTERNAL 432
#define T_FARCONNECT 433
#define T_FILE 434
#define T_FULL 435
#define T_GLOBOPS 436
#define T_INVISIBLE 437
#define T_IPV4 438
#define T_IPV6 439
#define T_LOCOPS 440
#define T_LOG 441
#define T_NCHANGE 442
#define T_NONONREG 443
#define T_OPERWALL 444
#define T_OPERWALLS 445
#define T_OPME 446
#define T_PREPEND 447
#define T_PSEUDO 448
#define T_RECVQ 449
#define T_REJ 450
#define T_RESTART 451
#define T_SERVER 452
#define T_SERVICE 453
#define T_SERVNOTICE 454
#define T_SET 455
#define T_SHARED 456
#define T_SIZE 457
#define T_SKILL 458
#define T_SOFTCALLERID 459
#define T_SPY 460
#define T_SSL 461
#define T_SSL_CIPHER_LIST 462
#define T_TARGET 463
#define T_UMODES 464
#define T_UNAUTH 465
#define T_UNDLINE 466
#define T_UNLIMITED 467
#define T_UNRESV 468
#define T_UNXLINE 469
#define T_WALLOP 470
#define T_WALLOPS 471
#define T_WEBIRC 472
#define TBOOL 473
#define THROTTLE_COUNT 474
#define THROTTLE_TIME 475
#define TKLINE_EXPIRE_NOTICES 476
#define TMASKED 477
#define TS_MAX_DELTA 478
#define TS_WARN_DELTA 479
#define TWODOTS 480
#define TYPE 481
#define UNKLINE 482
#define USE_LOGGING 483
#define USER 484
#define VHOST 485
#define VHOST6 486
#define WARN_NO_CONNECT_BLOCK 487
#define WHOIS 488
#define WHOIS_NOTIFY 489
#define XLINE 490
#define XLINE_EXEMPT 491

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 708 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 723 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1363

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  243
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  297
/* YYNRULES -- Number of rules.  */
#define YYNRULES  681
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1337

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   491

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
       2,     2,     2,     2,   241,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   242,   237,
       2,   240,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   239,     2,   238,     2,     2,     2,     2,
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
     235,   236
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   393,   393,   394,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   424,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   435,   435,
     436,   437,   438,   439,   446,   448,   448,   449,   449,   449,
     451,   457,   467,   469,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   490,   530,   588,   617,   625,   639,   667,
     682,   697,   707,   721,   730,   758,   786,   811,   833,   855,
     865,   867,   867,   868,   869,   870,   871,   873,   882,   891,
     905,   904,   922,   922,   923,   923,   923,   925,   931,   942,
     941,   960,   960,   961,   961,   961,   961,   961,   963,   969,
     975,   981,  1003,  1004,  1004,  1006,  1006,  1007,  1009,  1016,
    1016,  1029,  1030,  1032,  1032,  1033,  1033,  1035,  1043,  1046,
    1052,  1051,  1057,  1057,  1058,  1062,  1066,  1070,  1074,  1078,
    1082,  1086,  1097,  1096,  1153,  1153,  1154,  1155,  1156,  1157,
    1158,  1159,  1160,  1161,  1162,  1163,  1164,  1166,  1172,  1178,
    1184,  1190,  1201,  1207,  1218,  1225,  1224,  1230,  1230,  1231,
    1235,  1239,  1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,
    1275,  1279,  1283,  1287,  1291,  1295,  1299,  1303,  1307,  1311,
    1315,  1319,  1323,  1327,  1334,  1333,  1339,  1339,  1340,  1344,
    1348,  1352,  1356,  1360,  1364,  1368,  1372,  1376,  1380,  1384,
    1388,  1392,  1396,  1400,  1404,  1408,  1412,  1416,  1420,  1424,
    1428,  1432,  1436,  1440,  1444,  1448,  1452,  1456,  1467,  1466,
    1523,  1523,  1524,  1525,  1526,  1527,  1528,  1529,  1530,  1531,
    1532,  1533,  1534,  1535,  1536,  1536,  1537,  1538,  1539,  1540,
    1542,  1548,  1554,  1560,  1566,  1572,  1578,  1584,  1590,  1596,
    1602,  1609,  1615,  1621,  1627,  1636,  1646,  1645,  1651,  1651,
    1652,  1656,  1667,  1666,  1673,  1672,  1677,  1677,  1678,  1682,
    1686,  1692,  1692,  1693,  1693,  1693,  1693,  1693,  1695,  1695,
    1697,  1697,  1699,  1712,  1729,  1735,  1746,  1745,  1787,  1787,
    1788,  1789,  1790,  1791,  1792,  1793,  1794,  1795,  1796,  1798,
    1804,  1810,  1816,  1828,  1827,  1833,  1833,  1834,  1838,  1842,
    1846,  1850,  1854,  1858,  1862,  1866,  1870,  1876,  1890,  1899,
    1913,  1912,  1927,  1927,  1928,  1928,  1928,  1928,  1930,  1936,
    1942,  1952,  1954,  1954,  1955,  1955,  1957,  1974,  1973,  1998,
    1998,  1999,  1999,  1999,  1999,  2001,  2007,  2027,  2026,  2032,
    2032,  2033,  2037,  2041,  2045,  2049,  2053,  2057,  2061,  2065,
    2069,  2080,  2079,  2100,  2100,  2101,  2101,  2101,  2103,  2110,
    2109,  2115,  2115,  2116,  2120,  2124,  2128,  2132,  2136,  2140,
    2144,  2148,  2152,  2163,  2162,  2234,  2234,  2235,  2236,  2237,
    2238,  2239,  2240,  2241,  2242,  2243,  2244,  2245,  2246,  2247,
    2248,  2249,  2251,  2257,  2263,  2269,  2282,  2295,  2301,  2307,
    2311,  2318,  2317,  2322,  2322,  2323,  2327,  2333,  2344,  2350,
    2356,  2362,  2378,  2377,  2403,  2403,  2404,  2404,  2404,  2406,
    2426,  2437,  2436,  2463,  2463,  2464,  2464,  2464,  2466,  2472,
    2482,  2484,  2484,  2485,  2485,  2487,  2505,  2504,  2527,  2527,
    2528,  2528,  2528,  2530,  2536,  2546,  2548,  2548,  2549,  2550,
    2551,  2552,  2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,
    2561,  2562,  2563,  2564,  2565,  2566,  2567,  2568,  2569,  2570,
    2571,  2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,  2580,
    2581,  2582,  2583,  2584,  2585,  2586,  2587,  2588,  2589,  2590,
    2591,  2592,  2593,  2594,  2595,  2596,  2597,  2598,  2599,  2602,
    2607,  2612,  2617,  2626,  2635,  2644,  2653,  2659,  2664,  2669,
    2674,  2679,  2688,  2693,  2698,  2703,  2708,  2713,  2718,  2723,
    2728,  2733,  2738,  2744,  2749,  2754,  2759,  2764,  2769,  2774,
    2779,  2782,  2787,  2790,  2795,  2800,  2805,  2810,  2815,  2820,
    2825,  2830,  2835,  2840,  2845,  2850,  2856,  2855,  2860,  2860,
    2861,  2864,  2867,  2870,  2873,  2876,  2879,  2882,  2885,  2888,
    2891,  2894,  2897,  2900,  2903,  2906,  2909,  2912,  2915,  2918,
    2921,  2924,  2927,  2930,  2933,  2939,  2938,  2943,  2943,  2944,
    2947,  2950,  2953,  2956,  2959,  2962,  2965,  2968,  2971,  2974,
    2977,  2980,  2983,  2986,  2989,  2992,  2995,  2998,  3001,  3004,
    3007,  3012,  3017,  3022,  3031,  3033,  3033,  3034,  3035,  3036,
    3037,  3038,  3039,  3040,  3041,  3042,  3043,  3044,  3045,  3047,
    3052,  3057,  3062,  3067,  3072,  3077,  3082,  3087,  3092,  3097,
    3106,  3108,  3108,  3109,  3110,  3111,  3112,  3113,  3114,  3115,
    3116,  3117,  3118,  3120,  3126,  3142,  3151,  3157,  3163,  3169,
    3178,  3184
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
  "REMOTEBAN", "RESV", "RESV_EXEMPT", "RSA_PRIVATE_KEY_FILE", "SECONDS",
  "MINUTES", "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS", "SEND_PASSWORD",
  "SENDQ", "SERVERHIDE", "SERVERINFO", "SHORT_MOTD", "SPOOF",
  "SPOOF_NOTICE", "SQUIT", "SSL_CERTIFICATE_FILE",
  "SSL_CERTIFICATE_FINGERPRINT", "SSL_CONNECTION_REQUIRED",
  "SSL_DH_ELLIPTIC_CURVE", "SSL_DH_PARAM_FILE",
  "SSL_MESSAGE_DIGEST_ALGORITHM", "STATS_E_DISABLED", "STATS_I_OPER_ONLY",
  "STATS_K_OPER_ONLY", "STATS_M_OPER_ONLY", "STATS_O_OPER_ONLY",
  "STATS_P_OPER_ONLY", "STATS_U_OPER_ONLY", "T_ALL", "T_BOTS",
  "T_CALLERID", "T_CCONN", "T_COMMAND", "T_CLUSTER", "T_DEAF", "T_DEBUG",
  "T_DLINE", "T_EXTERNAL", "T_FARCONNECT", "T_FILE", "T_FULL", "T_GLOBOPS",
  "T_INVISIBLE", "T_IPV4", "T_IPV6", "T_LOCOPS", "T_LOG", "T_NCHANGE",
  "T_NONONREG", "T_OPERWALL", "T_OPERWALLS", "T_OPME", "T_PREPEND",
  "T_PSEUDO", "T_RECVQ", "T_REJ", "T_RESTART", "T_SERVER", "T_SERVICE",
  "T_SERVNOTICE", "T_SET", "T_SHARED", "T_SIZE", "T_SKILL",
  "T_SOFTCALLERID", "T_SPY", "T_SSL", "T_SSL_CIPHER_LIST", "T_TARGET",
  "T_UMODES", "T_UNAUTH", "T_UNDLINE", "T_UNLIMITED", "T_UNRESV",
  "T_UNXLINE", "T_WALLOP", "T_WALLOPS", "T_WEBIRC", "TBOOL",
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
  "oper_umodes_items", "oper_umodes_item", "oper_flags", "$@7",
  "oper_flags_items", "oper_flags_item", "class_entry", "$@8",
  "class_items", "class_item", "class_name", "class_ping_time",
  "class_number_per_ip", "class_connectfreq", "class_max_channels",
  "class_max_number", "class_max_global", "class_max_local",
  "class_max_ident", "class_sendq", "class_recvq",
  "class_cidr_bitlen_ipv4", "class_cidr_bitlen_ipv6",
  "class_number_per_cidr", "class_min_idle", "class_max_idle",
  "class_flags", "$@9", "class_flags_items", "class_flags_item",
  "listen_entry", "$@10", "listen_flags", "$@11", "listen_flags_items",
  "listen_flags_item", "listen_items", "listen_item", "listen_port",
  "$@12", "port_items", "port_item", "listen_address", "listen_host",
  "auth_entry", "$@13", "auth_items", "auth_item", "auth_user",
  "auth_passwd", "auth_class", "auth_encrypted", "auth_flags", "$@14",
  "auth_flags_items", "auth_flags_item", "auth_spoof", "auth_redir_serv",
  "auth_redir_port", "resv_entry", "$@15", "resv_items", "resv_item",
  "resv_mask", "resv_reason", "resv_exempt", "service_entry",
  "service_items", "service_item", "service_name", "shared_entry", "$@16",
  "shared_items", "shared_item", "shared_name", "shared_user",
  "shared_type", "$@17", "shared_types", "shared_type_item",
  "cluster_entry", "$@18", "cluster_items", "cluster_item", "cluster_name",
  "cluster_type", "$@19", "cluster_types", "cluster_type_item",
  "connect_entry", "$@20", "connect_items", "connect_item", "connect_name",
  "connect_host", "connect_vhost", "connect_send_password",
  "connect_accept_password", "connect_ssl_certificate_fingerprint",
  "connect_port", "connect_aftype", "connect_flags", "$@21",
  "connect_flags_items", "connect_flags_item", "connect_encrypted",
  "connect_hub_mask", "connect_leaf_mask", "connect_class",
  "connect_ssl_cipher_list", "kill_entry", "$@22", "kill_items",
  "kill_item", "kill_user", "kill_reason", "deny_entry", "$@23",
  "deny_items", "deny_item", "deny_ip", "deny_reason", "exempt_entry",
  "exempt_items", "exempt_item", "exempt_ip", "gecos_entry", "$@24",
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
  "$@25", "umode_oitems", "umode_oitem", "general_oper_only_umodes",
  "$@26", "umode_items", "umode_item", "general_min_nonwildcard",
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
     485,   486,   487,   488,   489,   490,   491,    59,   125,   123,
      61,    44,    58
};
# endif

#define YYPACT_NINF -1063

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1063)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1063,   703, -1063,  -178,  -226,  -211, -1063, -1063, -1063,  -193,
   -1063,  -187, -1063, -1063, -1063,  -152, -1063, -1063, -1063,  -134,
    -132, -1063,  -123, -1063,  -117, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,    20,   936,  -103,  -100,   -78,    28,   -52,   430,   -47,
     -24,   -13,    55,   -11,    13,    30,   521,   529,    44,    14,
      65,    35,    78,  -164,    -9,     3,    19,     6, -1063, -1063,
   -1063, -1063, -1063,    26,    70,    75,    82,    84,    88,    91,
      92,    94,    95,    97,     2, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063,   679,   335,    29,
   -1063,   101,    18, -1063, -1063,    47, -1063,   102,   103,   104,
     105,   106,   115,   118,   129,   132,   133,   134,   136,   138,
     139,   140,   142,   149,   152,   157,   158,   159,   160,   162,
     163,   164,   167,   169,   170,   180,   181, -1063, -1063,   184,
     187,   188,   189,   190,   192,   194,   195,   198,   202,   205,
     206,   207,   208,   214,   215,   219,   220,   128, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,   414,
      53,   349,    38,   224,   231,    49, -1063, -1063, -1063,    16,
     269,    80, -1063,   232,   233,   234,   239,   243,   245,   248,
     254,   256,    62, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063,    83,   259,   260,   261,   263,   265,   266,
     270,   272,   273,   277,   278,   279,   280,   284,   288,   296,
     297,   126, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
      79,   130,   299,    10, -1063, -1063, -1063,   137,     9, -1063,
     300,    24, -1063, -1063,    77, -1063,   368,   412,   416,   131,
   -1063,   204,   435,   336,   440,   435,   435,   442,   435,   435,
     444,   446,   326, -1063,   327,   330,   331,   334, -1063,   340,
     344,   346,   347,   348,   358,   359,   370,   372,   374,   375,
     376,   377,   295, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,   338,   378,   380,   381,   384,   385,   386, -1063,   396,
     397,   398,   401,   402,   405,   408,    15, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063,   415,   417,    23, -1063, -1063, -1063,   479,
     419, -1063, -1063,   418,   420,    39, -1063, -1063, -1063,   434,
     435,   544,   435,   435,   532,   534,   536,   537,   449,   554,
     452,   556,   557,   558,   456,   457,   458,   435,   562,   563,
     550,   567,   568,   435,   570,   575,   577,   578,   476,   459,
     462,   480,   435,   435,   490,   491,   493,  -196,  -195,   494,
     495,   496,   497,   601,   435,   499,   435,   435,   500,   483,
   -1063,   488,   487,   489, -1063,   492,   498,   501,   502,   504,
     238, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,   506,   508,    69, -1063, -1063, -1063,   503,   511,   514,
   -1063,   515, -1063,    36, -1063, -1063, -1063, -1063, -1063,   602,
     604,   513, -1063,   519,   517,   518,    40, -1063, -1063, -1063,
     525,   526,   533, -1063,   538,   540,   541,   543, -1063,   546,
     548,   257, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063,   528,   549,   552,   553,    87, -1063, -1063,
   -1063, -1063,   512,   516,   435,   610,   566,   661,   576,   579,
     580,   564, -1063, -1063,   684,   671,   584,   674,   689,   690,
     681,   685,   686,   687,   692,   693,   695,   697,   699,   700,
     701,   581, -1063,   594,   573, -1063,    76, -1063, -1063, -1063,
   -1063,   614,   597, -1063,   596,   599,   598,   603,   605,   607,
      63, -1063, -1063, -1063, -1063, -1063,   708,   609, -1063,   611,
     615, -1063,   616,    34, -1063, -1063, -1063, -1063,   612,   613,
     617, -1063,   620,   461,   621,   622,   623,   624,   625,   626,
     627,   628,   629,   630, -1063, -1063,   724,   727,   435,   631,
     729,   753,   754,   435,   755,   757,   435,   745,   760,   762,
     435,   763,   763,   645, -1063, -1063,   764,    -8,   765,   665,
     771,   773,   646,   774,   777,   776,   778,   779,   781,   782,
     675, -1063,   787,   788,   694, -1063,   702, -1063,   789,   792,
     704, -1063,   705,   711,   712,   713,   714,   715,   717,   718,
     719,   721,   722,   723,   730,   739,   742,   746,   747,   749,
     756,   759,   761,   769,   770,   772,   784,   785,   790,   791,
     793,   794,   800,   710,   795,   796,   798,   799,   801,   802,
     803,   804,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   816, -1063, -1063,   797,   706,   682,   835,
     819,   861,   862,   865,   817, -1063,   868,   879,   822, -1063,
   -1063,   882,   884,   683,   899,   823, -1063,   824,   825, -1063,
   -1063,   890,   896,   826, -1063, -1063,   897,   838,   827,   908,
     935,   937,   847,   828,   940,   941,   836, -1063, -1063,   943,
     945,   946,   839, -1063,   840,   841,   843,   845,   846,   848,
     849,   850,   851, -1063,   852,   853,   854,   855,   856,   857,
     858,   859,   860,   863,   864,   866,   867,   869,   870,   871,
     872, -1063, -1063,   952,   873,   874, -1063,   875, -1063,   127,
   -1063,   955,   969,   970,   973,   877, -1063,   878, -1063, -1063,
     976,   876,   981,   880, -1063, -1063, -1063, -1063, -1063,   435,
     435,   435,   435,   435,   435,   435, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,   881,   883,
     885,   -51,   886,   887,   888,   889,   891,   892,   893,   894,
     895,   898,   900,    81,   901,   902, -1063,   903,   904,   905,
     906,   907,   909,   910,     4,   911,   912,   913,   914,   915,
     916,   917, -1063,   918,   919, -1063, -1063,   920,   921, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063,  -192, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,  -186,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,   922,   923,   373,   924,   925,   926,   927,   928, -1063,
     929,   930, -1063,   931,   932,   -18,    42,   933, -1063, -1063,
   -1063, -1063,   934,   938, -1063,   939,   942,   510,   944,   947,
     948,   949,   758,   950,   951, -1063,   953,   954,   956, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063,   957,   606, -1063, -1063,
     958,   959,   960, -1063,    71, -1063, -1063, -1063, -1063,   961,
     964,   965,   966, -1063, -1063,   967,   844,   968, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,  -179, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063,   763,   763,   763, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
    -172, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063,   800, -1063,   710, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,  -166,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063,   -43, -1063,  1004,   899,   971, -1063, -1063,
   -1063, -1063, -1063, -1063,   688, -1063,   972,   974, -1063, -1063,
   -1063,   975, -1063, -1063, -1063,   977, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,   -38,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
     -33, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,   -28, -1063,
   -1063,   992,  -101,   978,   983, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,   -25, -1063, -1063, -1063,   -51, -1063, -1063, -1063, -1063,
       4, -1063, -1063, -1063,   373, -1063,   -18, -1063, -1063, -1063,
     998,   990,   999,  1008,  1001, -1063,   510, -1063,   758, -1063,
     606,   984,   985,   986,   286, -1063, -1063,   844, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,    27, -1063, -1063, -1063,   286, -1063
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   238,   403,   451,     0,
     466,     0,   306,   442,   282,     0,   100,   152,   340,     0,
       0,   381,     0,   109,     0,   357,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   648,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   636,   647,   638,   639,   640,
     641,   642,   643,   644,   637,   645,   646,     0,     0,     0,
     464,     0,     0,   462,   463,     0,   528,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   605,   576,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   477,   478,
     479,   521,   523,   524,   525,   526,   522,   516,   517,   518,
     519,   527,   515,   489,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   490,   491,   520,   495,   496,   497,   498,
     494,   493,   499,   506,   507,   500,   501,   502,   492,   504,
     513,   514,   511,   512,   505,   503,   509,   510,   508,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,     0,
       0,     0,   672,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   662,   663,   664,   665,   666,   667,   668,
     670,   669,   671,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    69,    66,    64,    70,    71,    65,    55,
      68,    58,    59,    60,    56,    67,    61,    62,    63,    57,
       0,     0,     0,     0,   124,   125,   126,     0,     0,   355,
       0,     0,   353,   354,     0,    96,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   635,     0,     0,     0,     0,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   242,   245,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   243,   244,   246,   256,   257,
     258,     0,     0,     0,     0,     0,     0,     0,   431,     0,
       0,     0,     0,     0,     0,     0,     0,   406,   407,   408,
     409,   410,   411,   412,   414,   413,   416,   420,   417,   418,
     419,   415,   457,     0,     0,     0,   454,   455,   456,     0,
       0,   461,   472,     0,     0,     0,   469,   470,   471,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     476,     0,     0,     0,   323,     0,     0,     0,     0,     0,
       0,   309,   310,   311,   312,   317,   313,   314,   315,   316,
     448,     0,     0,     0,   445,   446,   447,     0,     0,     0,
     284,     0,   294,     0,   292,   293,   295,   296,    49,     0,
       0,     0,    45,     0,     0,     0,     0,   103,   104,   105,
       0,     0,     0,   204,     0,     0,     0,     0,   175,     0,
       0,     0,   155,   156,   157,   158,   159,   162,   163,   164,
     161,   160,   165,     0,     0,     0,     0,     0,   343,   344,
     345,   346,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   661,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,   389,     0,   384,   385,   386,
     127,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   115,   114,   116,     0,     0,   352,     0,
       0,   367,     0,     0,   360,   361,   362,   363,     0,     0,
       0,    90,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   634,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   240,   421,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   405,     0,     0,     0,   453,     0,   460,     0,     0,
       0,   468,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   475,   318,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   308,     0,     0,     0,   444,
     297,     0,     0,     0,     0,     0,   291,     0,     0,    44,
     106,     0,     0,     0,   102,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,   347,     0,
       0,     0,     0,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   660,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,   387,     0,     0,     0,   383,     0,   122,     0,
     117,     0,     0,     0,     0,     0,   111,     0,   351,   364,
       0,     0,     0,     0,   359,    99,    98,    97,   658,    28,
      28,    28,    28,    28,    28,    28,    30,    29,   659,   649,
     650,   651,   652,   653,   654,   655,   657,   656,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,   239,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   404,     0,     0,   452,   465,     0,     0,   467,
     546,   550,   529,   530,   565,   532,   533,   534,   535,   536,
     633,   573,   537,   538,   570,   545,   544,   553,   543,   539,
     540,   541,   549,   548,   547,   571,   531,   631,   632,   569,
     615,   609,   625,   610,   611,   612,   620,   628,   613,   622,
     626,   616,   627,   629,   617,   621,   614,   624,   619,   618,
     623,   630,     0,   608,   585,   586,   587,   604,   580,   598,
     581,   582,   583,   593,   601,   584,   595,   599,   589,   600,
     602,   590,   594,   588,   597,   592,   591,   596,   603,     0,
     579,   566,   564,   567,   572,   568,   555,   562,   563,   560,
     561,   556,   557,   558,   559,   574,   575,   542,   552,   551,
     554,     0,     0,     0,     0,     0,     0,     0,     0,   307,
       0,     0,   443,     0,     0,     0,   302,   298,   301,   283,
      50,    51,     0,     0,   101,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   153,     0,     0,     0,   341,
     676,   673,   674,   675,   680,   679,   681,   677,   678,    86,
      81,    89,    80,    87,    88,    79,    83,    82,    74,    73,
      78,    75,    77,    76,    84,    85,     0,     0,   382,   128,
       0,     0,     0,   140,     0,   132,   133,   135,   134,     0,
       0,     0,     0,   110,   356,     0,     0,     0,   358,    31,
      32,    33,    34,    35,    36,    37,   271,   272,   263,   281,
     280,     0,   279,   264,   266,   268,   275,   267,   265,   274,
     260,   273,   262,   261,    38,    38,    38,    40,    39,   269,
     270,   426,   429,   430,   440,   437,   423,   438,   435,   436,
       0,   434,   439,   422,   428,   425,   427,   441,   424,   458,
     459,   473,   474,   606,     0,   577,     0,   321,   322,   332,
     328,   329,   331,   336,   333,   334,   327,   335,   330,     0,
     326,   320,   339,   338,   337,   319,   450,   449,   305,   304,
     289,   290,   288,     0,   287,     0,     0,     0,   107,   108,
     174,   171,   223,   235,   211,   220,     0,   209,   214,   229,
     237,     0,   222,   227,   233,   213,   216,   224,   226,   236,
     230,   221,   228,   217,   234,   219,   225,   215,   218,     0,
     207,   167,   169,   172,   173,   184,   185,   186,   203,   179,
     197,   180,   181,   182,   192,   200,   183,   194,   198,   188,
     199,   201,   189,   193,   187,   196,   191,   190,   195,   202,
       0,   178,   168,   170,   350,   348,   349,   388,   393,   399,
     402,   395,   401,   396,   400,   398,   394,   397,     0,   392,
     136,     0,     0,     0,     0,   131,   119,   118,   120,   121,
     365,   371,   377,   380,   373,   379,   374,   378,   376,   372,
     375,     0,   370,   366,   277,     0,    41,    42,    43,   432,
       0,   607,   578,   324,     0,   285,     0,   303,   300,   299,
       0,     0,     0,     0,     0,   205,     0,   176,     0,   390,
       0,     0,     0,     0,     0,   130,   368,     0,   278,   433,
     325,   286,   210,   232,   208,   231,   212,   206,   177,   391,
     137,   139,   138,   150,   149,   145,   147,   151,   148,   144,
     146,     0,   143,   369,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1063, -1063, -1063,  -201,  -310, -1062,  -641, -1063, -1063,   982,
   -1063, -1063, -1063, -1063,   962, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063,  1093, -1063, -1063, -1063, -1063, -1063,
   -1063,   666, -1063, -1063, -1063, -1063, -1063,   583, -1063, -1063,
   -1063, -1063, -1063, -1063,   963, -1063, -1063, -1063, -1063,   113,
   -1063, -1063, -1063, -1063, -1063,  -157, -1063, -1063, -1063,   659,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063,  -116, -1063, -1063, -1063,  -113, -1063, -1063, -1063,   979,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,   -86,
   -1063, -1063, -1063, -1063, -1063,   -94, -1063,   716, -1063, -1063,
   -1063,    31, -1063, -1063, -1063, -1063, -1063,   726, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063,   -74, -1063, -1063, -1063, -1063,
   -1063, -1063,   669, -1063, -1063, -1063, -1063, -1063,   980, -1063,
   -1063, -1063, -1063,   608, -1063, -1063, -1063, -1063, -1063,   -95,
   -1063, -1063, -1063,   637, -1063, -1063, -1063, -1063,   -85, -1063,
   -1063, -1063,   987, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063,   -56, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063,   743, -1063, -1063, -1063, -1063, -1063,   830,
   -1063, -1063, -1063, -1063,  1115, -1063, -1063, -1063, -1063,   829,
   -1063, -1063, -1063, -1063,  1061, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063,    93, -1063, -1063, -1063,    96, -1063, -1063,
   -1063, -1063, -1063,  1137, -1063, -1063, -1063, -1063, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063,   993, -1063, -1063,
   -1063, -1063, -1063, -1063, -1063, -1063, -1063
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   836,   837,  1107,  1108,    27,   225,   226,
     227,   228,    28,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    29,    77,    78,    79,    80,    81,    30,    63,
     506,   507,   508,   509,    31,    70,   590,   591,   592,   593,
     594,   595,    32,   293,   294,   295,   296,   297,  1064,  1065,
    1066,  1067,  1068,  1253,  1331,  1332,    33,    64,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   763,
    1230,  1231,   532,   758,  1199,  1200,    34,    53,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   629,  1091,  1092,
      35,    61,   492,   743,  1163,  1164,   493,   494,   495,  1167,
    1007,  1008,   496,   497,    36,    59,   470,   471,   472,   473,
     474,   475,   476,   728,  1149,  1150,   477,   478,   479,    37,
      65,   537,   538,   539,   540,   541,    38,   301,   302,   303,
      39,    72,   603,   604,   605,   606,   607,   821,  1271,  1272,
      40,    68,   576,   577,   578,   579,   804,  1248,  1249,    41,
      54,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   652,  1120,  1121,   387,   388,   389,   390,   391,
      42,    60,   483,   484,   485,   486,    43,    55,   395,   396,
     397,   398,    44,   112,   113,   114,    45,    57,   405,   406,
     407,   408,    46,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   440,   969,   970,   215,   439,   942,   943,   216,   217,
     218,    47,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    48,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     864,   865,   614,    82,  1089,   617,   618,    73,   620,   621,
     585,   291,  1118,    51,   863,   291,   361,   503,   362,   110,
     363,    73,   710,   712,   392,   299,   711,   713,    52,   110,
     392,    83,    84,  1160,   364,   599,   299,   487,    85,    74,
     402,   503,  1276,  1277,  1278,  1133,    56,    75,   402,  1134,
     222,  1135,    58,    74,   480,  1136,   222,   365,  1274,    49,
      50,    75,  1275,   232,   585,  1279,    86,    87,    88,  1280,
     480,  1283,  1060,   305,   366,  1284,   367,   573,   599,  1090,
     573,   533,    89,    90,    91,   368,   111,    62,   533,    92,
      93,   393,  1104,  1105,  1106,   488,   111,   393,   369,   233,
     673,   504,   675,   676,   489,    66,   490,    67,   234,   235,
     236,  1302,    76,   237,   238,   586,    69,   690,   239,   240,
     241,   370,    71,   696,   534,   504,    76,   253,  1060,   116,
     300,   534,   705,   706,   117,   118,   107,   119,   120,   108,
     600,   300,   121,   371,   719,   403,   721,   722,   122,   123,
     124,   125,   223,   403,   394,   126,   127,   254,   223,   255,
     394,   109,   372,   128,   491,   535,   129,   130,   131,   586,
     404,   373,   535,   132,   224,   868,   869,  1061,   404,  1161,
     224,   587,   574,   600,   481,   574,   256,   115,  1162,  -129,
     133,   134,   219,  -129,  1285,   505,   863,   257,  1286,  1295,
     481,   588,   135,  1296,  1297,   136,   137,   138,  1298,  1299,
    1119,   536,  1306,  1300,   139,   220,  1307,   589,   536,   505,
     258,   140,   374,   141,   259,   142,   221,   143,   229,   144,
     145,   306,   260,  1061,   776,   587,   261,   262,   292,   461,
     322,   146,   292,   307,   309,   375,   147,   148,   582,   149,
     150,   151,   230,   660,   152,   588,   400,   462,   510,   308,
     601,   664,   597,   602,  1334,   263,   311,  1165,  1335,   231,
     510,   589,   823,  1062,   745,   498,   511,   670,   753,   153,
     463,   264,   482,   290,   265,   266,   267,   501,   511,   154,
     155,   156,   157,   158,   159,   160,   324,  1063,   482,   512,
     551,   815,   575,   601,   298,   575,   602,   738,   464,  1254,
     312,   512,   325,   326,   805,   313,   584,   304,   850,   612,
     553,   327,   314,   855,   315,   772,   858,   513,   316,  1062,
     862,   317,   318,   268,   319,   320,   361,   321,   362,   513,
     363,   399,   409,   410,   411,   412,   413,   161,   162,   163,
     487,   164,   165,  1063,   364,   414,   269,   270,   415,  1323,
     166,  1324,   465,   514,   571,   328,   459,   580,   611,   416,
     466,   467,   417,   418,   419,   514,   420,   365,   421,   422,
     423,   515,   424,   329,   330,   331,   332,   333,  1139,   425,
     468,   334,   426,   515,   366,   335,   367,   427,   428,   429,
     430,   336,   431,   432,   433,   368,  1325,   434,   488,   435,
     436,   337,   338,   516,   517,   461,  1140,   489,   369,   490,
     437,   438,   339,  1326,   441,   516,   517,   442,   443,   444,
     445,   116,   446,   462,   447,   448,   117,   118,   449,   119,
     120,   370,   450,   340,   121,   451,   452,   453,   454,  1141,
     122,   123,   124,   125,   455,   456,   463,   126,   127,   457,
     458,  1327,  1328,   371,   499,   128,   518,   469,   129,   130,
     131,   500,   542,   543,   544,   132,   734,   491,   518,   545,
    1142,  1143,   372,   546,   464,   547,   519,  1144,   548,   341,
     520,   373,   133,   134,   549,   766,   550,   608,   519,   554,
     555,   556,   520,   557,   135,   558,   559,   136,   137,   138,
     560,  1145,   561,   562,  1172,  1329,   139,   563,   564,   565,
     566,  1330,   232,   140,   567,   141,  1146,   142,   568,   143,
     253,   144,   145,   643,  1173,  1174,   569,   570,   465,   581,
     596,   609,   374,   146,  1175,   610,   466,   467,   147,   148,
     613,   149,   150,   151,   615,   616,   152,   619,   233,   622,
     254,   623,   255,   624,   625,   375,   468,   234,   235,   236,
     626,   627,   237,   238,   628,   645,   613,   239,   240,   241,
     630,   153,  1176,  1177,   631,  1178,   632,   633,   634,   256,
    1147,   154,   155,   156,   157,   158,   159,   160,   635,   636,
     257,   829,   830,   831,   832,   833,   834,   835,   666,  1148,
     637,  1303,   638,  1179,   639,   640,   641,   642,   646,  1180,
     647,   648,  1181,   258,   649,   650,   651,   259,  1079,  1080,
    1081,  1082,  1083,  1084,  1085,   260,   653,   654,   655,   261,
     262,   656,   657,   469,  1182,   658,  1183,  1184,   659,   161,
     162,   163,   672,   164,   165,   662,   667,   663,   668,   674,
     669,   677,   166,   678,  1185,   679,   680,   681,   263,   682,
     683,   684,   685,   686,   687,   688,   689,   691,   692,   693,
     324,  1238,   694,   695,   264,   697,  1186,   265,   266,   267,
     698,  1187,   699,   700,   701,  1188,   325,   326,   704,   702,
    1189,  1190,   703,     2,     3,   327,  1191,     4,   707,   708,
    1192,   709,   714,   715,   716,   717,   718,   720,   723,     5,
     724,  1193,     6,  1194,  1195,   725,  1196,   726,     7,   727,
     774,   747,   729,   748,   775,     8,   268,  1197,   730,   777,
     740,   731,   732,  1239,   733,  1198,   736,     9,   737,   328,
     749,   741,    10,    11,   742,   744,   750,   751,   752,   269,
     270,   944,   755,   945,   946,   768,   756,   329,   330,   331,
     332,   333,    12,   757,  1240,   334,    13,   947,   759,   335,
     760,   761,  1241,   762,   778,   336,   764,    14,   765,   769,
     779,  1242,   770,   771,   780,   337,   338,   781,   782,   784,
     785,   783,   786,   787,   788,   789,   339,    15,    16,  1205,
     790,  1206,  1207,   803,   791,   792,   793,  1243,   801,  1244,
    1245,   794,   795,    17,   796,  1208,   797,   340,   798,   799,
     800,   802,   807,  1246,   808,   809,   810,   817,   811,   848,
      18,  1247,   849,   812,   852,   813,   818,   814,   819,   825,
     826,   920,    19,    20,   827,   820,   822,   828,   838,   839,
     840,   841,   842,   843,   844,   845,   846,   847,   853,   854,
     856,   851,   857,   341,   859,   860,    21,   861,   863,   948,
     949,   950,   866,   871,   951,   952,   874,   953,   954,    22,
     955,   877,   956,   867,   870,   957,    23,   958,   959,   960,
     872,    24,   873,   875,    25,   961,   876,   878,   879,   962,
     880,   881,   882,   963,   964,   965,   883,   884,   887,  1261,
     966,   888,   993,  1005,   992,   967,   991,  1209,  1210,  1211,
    1290,   885,  1212,  1213,   995,  1214,  1215,    82,  1216,   886,
    1217,   889,   890,  1218,   968,  1219,  1220,  1221,   891,   892,
     893,   894,   895,  1222,   896,   897,   898,  1223,   899,   900,
     901,  1224,  1225,  1226,   994,    83,    84,   902,  1227,   921,
     922,   923,    85,  1228,   924,   925,   903,   926,   927,   904,
     928,  1262,   929,   905,   906,   930,   907,   931,   932,   933,
     996,   997,  1229,   908,   998,   934,   909,  1000,   910,   935,
      86,    87,    88,   936,   937,   938,   911,   912,  1001,   913,
     939,  1003,  1263,  1004,  1006,   940,    89,    90,    91,  1012,
    1264,   914,   915,    92,    93,  1013,  1015,   916,   917,  1265,
     918,   919,   971,   972,   941,   973,   974,  1018,   975,   976,
     977,   978,   979,   980,   981,   982,   983,   984,   985,   986,
     987,   988,   989,   990,   999,  1266,  1016,  1267,  1268,  1002,
    1009,  1010,  1011,  1014,  1019,  1021,  1020,  1017,  1022,  1023,
    1024,  1269,  1026,  1025,  1027,  1028,  1029,  1030,  1031,  1270,
    1032,  1056,  1033,  1034,  1069,  1035,  1036,  1037,  1038,  1039,
    1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1070,  1071,
    1048,  1049,  1072,  1050,  1051,  1075,  1052,  1053,  1054,  1055,
    1077,  1058,  1059,  1057,  1073,  1074,  1076,  1078,  1086,  1287,
    1087,  1301,  1088,  1093,  1094,  1095,  1096,  1313,  1097,  1098,
    1099,  1100,  1101,  1312,  1314,  1102,  1316,  1103,  1109,  1110,
    1111,  1112,  1113,  1114,  1115,  1315,  1116,  1117,  1122,  1123,
    1124,  1125,  1126,  1127,  1128,  1129,  1130,  1131,  1132,  1137,
    1138,  1151,  1152,  1153,  1154,  1155,  1156,  1157,  1158,  1159,
     310,  1168,   754,   816,  1166,  1169,  1170,  1255,  1336,  1171,
     767,  1201,  1318,  1317,  1202,  1203,  1204,  1232,  1233,  1308,
    1234,  1235,  1311,  1236,  1237,  1250,   735,  1288,  1256,  1251,
    1252,  1257,  1258,  1259,  1260,  1273,   773,   502,  1289,   746,
    1310,   824,  1333,   806,  1291,  1319,  1292,  1293,  1304,  1294,
    1305,  1320,  1321,  1322,  1309,   665,   739,   401,   460,  1282,
    1281,   323,     0,   572,   671,   552,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   583,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   598,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   644,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   661
};

static const yytype_int16 yycheck[] =
{
     641,   642,   312,     1,    55,   315,   316,     1,   318,   319,
       1,     1,     8,   239,   115,     1,     1,     1,     3,     1,
       5,     1,   218,   218,     1,     1,   222,   222,   239,     1,
       1,    29,    30,    51,    19,     1,     1,     1,    36,    33,
       1,     1,  1104,  1105,  1106,   237,   239,    41,     1,   241,
       1,   237,   239,    33,     1,   241,     1,    42,   237,   237,
     238,    41,   241,     1,     1,   237,    64,    65,    66,   241,
       1,   237,     1,   237,    59,   241,    61,     1,     1,   130,
       1,     1,    80,    81,    82,    70,    68,   239,     1,    87,
      88,    68,    11,    12,    13,    59,    68,    68,    83,    37,
     410,    85,   412,   413,    68,   239,    70,   239,    46,    47,
      48,   212,   106,    51,    52,   106,   239,   427,    56,    57,
      58,   106,   239,   433,    44,    85,   106,     1,     1,     1,
     106,    44,   442,   443,     6,     7,   239,     9,    10,   239,
     106,   106,    14,   128,   454,   106,   456,   457,    20,    21,
      22,    23,   103,   106,   131,    27,    28,    31,   103,    33,
     131,   239,   147,    35,   128,    85,    38,    39,    40,   106,
     131,   156,    85,    45,   125,   183,   184,   106,   131,   197,
     125,   172,   106,   106,   131,   106,    60,   239,   206,   179,
      62,    63,   239,   179,   237,   179,   115,    71,   241,   237,
     131,   192,    74,   241,   237,    77,    78,    79,   241,   237,
     206,   131,   237,   241,    86,   239,   241,   208,   131,   179,
      94,    93,   207,    95,    98,    97,   239,    99,   239,   101,
     102,   240,   106,   106,   544,   172,   110,   111,   228,     1,
     238,   113,   228,   240,   238,   230,   118,   119,   238,   121,
     122,   123,   239,   238,   126,   192,   238,    19,     1,   240,
     226,   238,   238,   229,   237,   139,   240,   225,   241,   239,
       1,   208,   238,   202,   238,   237,    19,   238,   238,   151,
      42,   155,   229,   239,   158,   159,   160,   238,    19,   161,
     162,   163,   164,   165,   166,   167,     1,   226,   229,    42,
     238,   238,   226,   226,   239,   226,   229,   238,    70,   238,
     240,    42,    17,    18,   238,   240,   179,   239,   628,   115,
     237,    26,   240,   633,   240,   238,   636,    70,   240,   202,
     640,   240,   240,   207,   240,   240,     1,   240,     3,    70,
       5,   240,   240,   240,   240,   240,   240,   219,   220,   221,
       1,   223,   224,   226,    19,   240,   230,   231,   240,    73,
     232,    75,   124,   106,   238,    70,   238,   237,   237,   240,
     132,   133,   240,   240,   240,   106,   240,    42,   240,   240,
     240,   124,   240,    88,    89,    90,    91,    92,    15,   240,
     152,    96,   240,   124,    59,   100,    61,   240,   240,   240,
     240,   106,   240,   240,   240,    70,   120,   240,    59,   240,
     240,   116,   117,   156,   157,     1,    43,    68,    83,    70,
     240,   240,   127,   137,   240,   156,   157,   240,   240,   240,
     240,     1,   240,    19,   240,   240,     6,     7,   240,     9,
      10,   106,   240,   148,    14,   240,   240,   240,   240,    76,
      20,    21,    22,    23,   240,   240,    42,    27,    28,   240,
     240,   175,   176,   128,   240,    35,   209,   229,    38,    39,
      40,   240,   240,   240,   240,    45,   238,   128,   209,   240,
     107,   108,   147,   240,    70,   240,   229,   114,   240,   194,
     233,   156,    62,    63,   240,   238,   240,   129,   229,   240,
     240,   240,   233,   240,    74,   240,   240,    77,    78,    79,
     240,   138,   240,   240,     4,   229,    86,   240,   240,   240,
     240,   235,     1,    93,   240,    95,   153,    97,   240,    99,
       1,   101,   102,   238,    24,    25,   240,   240,   124,   240,
     240,   129,   207,   113,    34,   129,   132,   133,   118,   119,
     115,   121,   122,   123,   218,   115,   126,   115,    37,   115,
      31,   115,    33,   237,   237,   230,   152,    46,    47,    48,
     240,   240,    51,    52,   240,   237,   115,    56,    57,    58,
     240,   151,    72,    73,   240,    75,   240,   240,   240,    60,
     217,   161,   162,   163,   164,   165,   166,   167,   240,   240,
      71,   140,   141,   142,   143,   144,   145,   146,   129,   236,
     240,  1252,   240,   103,   240,   240,   240,   240,   240,   109,
     240,   240,   112,    94,   240,   240,   240,    98,   829,   830,
     831,   832,   833,   834,   835,   106,   240,   240,   240,   110,
     111,   240,   240,   229,   134,   240,   136,   137,   240,   219,
     220,   221,   218,   223,   224,   240,   237,   240,   240,   115,
     240,   129,   232,   129,   154,   129,   129,   218,   139,   115,
     218,   115,   115,   115,   218,   218,   218,   115,   115,   129,
       1,    75,   115,   115,   155,   115,   176,   158,   159,   160,
     115,   181,   115,   115,   218,   185,    17,    18,   218,   240,
     190,   191,   240,     0,     1,    26,   196,     4,   218,   218,
     200,   218,   218,   218,   218,   218,   115,   218,   218,    16,
     237,   211,    19,   213,   214,   237,   216,   240,    25,   240,
     218,   129,   240,   129,   218,    32,   207,   227,   240,   129,
     237,   240,   240,   137,   240,   235,   240,    44,   240,    70,
     237,   240,    49,    50,   240,   240,   237,   240,   240,   230,
     231,    51,   237,    53,    54,   237,   240,    88,    89,    90,
      91,    92,    69,   240,   168,    96,    73,    67,   240,   100,
     240,   240,   176,   240,   218,   106,   240,    84,   240,   240,
     129,   185,   240,   240,   218,   116,   117,   218,   218,   115,
     129,   237,   218,   129,   115,   115,   127,   104,   105,    51,
     129,    53,    54,   240,   129,   129,   129,   211,   237,   213,
     214,   129,   129,   120,   129,    67,   129,   148,   129,   129,
     129,   237,   218,   227,   237,   239,   237,   129,   240,   115,
     137,   235,   115,   240,   115,   240,   237,   240,   237,   237,
     237,    51,   149,   150,   237,   240,   240,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   115,   115,
     115,   240,   115,   194,   129,   115,   173,   115,   115,   169,
     170,   171,   237,   218,   174,   175,   240,   177,   178,   186,
     180,   115,   182,   129,   129,   185,   193,   187,   188,   189,
     129,   198,   129,   129,   201,   195,   129,   129,   129,   199,
     129,   129,   237,   203,   204,   205,   129,   129,   129,    75,
     210,   129,   240,   240,   218,   215,   129,   169,   170,   171,
     242,   237,   174,   175,   115,   177,   178,     1,   180,   237,
     182,   237,   237,   185,   234,   187,   188,   189,   237,   237,
     237,   237,   237,   195,   237,   237,   237,   199,   237,   237,
     237,   203,   204,   205,   129,    29,    30,   237,   210,   169,
     170,   171,    36,   215,   174,   175,   237,   177,   178,   237,
     180,   137,   182,   237,   237,   185,   237,   187,   188,   189,
     129,   129,   234,   237,   129,   195,   237,   129,   237,   199,
      64,    65,    66,   203,   204,   205,   237,   237,   129,   237,
     210,   129,   168,   129,   115,   215,    80,    81,    82,   129,
     176,   237,   237,    87,    88,   129,   129,   237,   237,   185,
     237,   237,   237,   237,   234,   237,   237,   129,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   211,   218,   213,   214,   237,
     237,   237,   237,   237,   129,   218,   129,   240,   240,   129,
     129,   227,   129,   237,   129,   129,   237,   237,   237,   235,
     237,   129,   237,   237,   129,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   129,   129,
     237,   237,   129,   237,   237,   129,   237,   237,   237,   237,
     129,   237,   237,   240,   237,   237,   240,   237,   237,   115,
     237,   129,   237,   237,   237,   237,   237,   137,   237,   237,
     237,   237,   237,   135,   135,   237,   135,   237,   237,   237,
     237,   237,   237,   237,   237,   137,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
      77,   237,   506,   590,   241,   237,   237,  1064,  1335,   237,
     521,   237,  1298,  1296,   237,   237,   237,   237,   237,  1275,
     237,   237,  1286,   237,   237,   237,   470,  1166,   237,   240,
     240,   237,   237,   237,   237,   237,   537,   225,   237,   493,
    1284,   603,  1307,   576,   242,  1300,   242,   242,   240,   242,
     237,   237,   237,   237,  1280,   395,   483,   112,   167,  1136,
    1134,    94,    -1,   271,   405,   242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   342,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   376
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   244,     0,     1,     4,    16,    19,    25,    32,    44,
      49,    50,    69,    73,    84,   104,   105,   120,   137,   149,
     150,   173,   186,   193,   198,   201,   245,   250,   255,   275,
     281,   287,   295,   309,   329,   353,   367,   382,   389,   393,
     403,   412,   433,   439,   445,   449,   455,   514,   528,   237,
     238,   239,   239,   330,   413,   440,   239,   450,   239,   368,
     434,   354,   239,   282,   310,   383,   239,   239,   404,   239,
     288,   239,   394,     1,    33,    41,   106,   276,   277,   278,
     279,   280,     1,    29,    30,    36,    64,    65,    66,    80,
      81,    82,    87,    88,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   239,   239,   239,
       1,    68,   446,   447,   448,   239,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    23,    27,    28,    35,    38,
      39,    40,    45,    62,    63,    74,    77,    78,    79,    86,
      93,    95,    97,    99,   101,   102,   113,   118,   119,   121,
     122,   123,   126,   151,   161,   162,   163,   164,   165,   166,
     167,   219,   220,   221,   223,   224,   232,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,   501,   502,   503,   507,   511,   512,   513,   239,
     239,   239,     1,   103,   125,   251,   252,   253,   254,   239,
     239,   239,     1,    37,    46,    47,    48,    51,    52,    56,
      57,    58,   529,   530,   531,   532,   533,   534,   535,   536,
     537,   538,   539,     1,    31,    33,    60,    71,    94,    98,
     106,   110,   111,   139,   155,   158,   159,   160,   207,   230,
     231,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     239,     1,   228,   296,   297,   298,   299,   300,   239,     1,
     106,   390,   391,   392,   239,   237,   240,   240,   240,   238,
     277,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   238,   516,     1,    17,    18,    26,    70,    88,
      89,    90,    91,    92,    96,   100,   106,   116,   117,   127,
     148,   194,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,     1,     3,     5,    19,    42,    59,    61,    70,    83,
     106,   128,   147,   156,   207,   230,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   428,   429,   430,
     431,   432,     1,    68,   131,   441,   442,   443,   444,   240,
     238,   447,     1,   106,   131,   451,   452,   453,   454,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   508,
     504,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   238,
     457,     1,    19,    42,    70,   124,   132,   133,   152,   229,
     369,   370,   371,   372,   373,   374,   375,   379,   380,   381,
       1,   131,   229,   435,   436,   437,   438,     1,    59,    68,
      70,   128,   355,   359,   360,   361,   365,   366,   237,   240,
     240,   238,   252,     1,    85,   179,   283,   284,   285,   286,
       1,    19,    42,    70,   106,   124,   156,   157,   209,   229,
     233,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   325,     1,    44,    85,   131,   384,   385,   386,
     387,   388,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   238,   530,   237,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   238,   257,     1,   106,   226,   405,   406,   407,   408,
     237,   240,   238,   297,   179,     1,   106,   172,   192,   208,
     289,   290,   291,   292,   293,   294,   240,   238,   391,     1,
     106,   226,   229,   395,   396,   397,   398,   399,   129,   129,
     129,   237,   115,   115,   247,   218,   115,   247,   247,   115,
     247,   247,   115,   115,   237,   237,   240,   240,   240,   350,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   240,   240,   238,   332,   237,   240,   240,   240,   240,
     240,   240,   425,   240,   240,   240,   240,   240,   240,   240,
     238,   415,   240,   240,   238,   442,   129,   237,   240,   240,
     238,   452,   218,   247,   115,   247,   247,   129,   129,   129,
     129,   218,   115,   218,   115,   115,   115,   218,   218,   218,
     247,   115,   115,   129,   115,   115,   247,   115,   115,   115,
     115,   218,   240,   240,   218,   247,   247,   218,   218,   218,
     218,   222,   218,   222,   218,   218,   218,   218,   115,   247,
     218,   247,   247,   218,   237,   237,   240,   240,   376,   240,
     240,   240,   240,   240,   238,   370,   240,   240,   238,   436,
     237,   240,   240,   356,   240,   238,   360,   129,   129,   237,
     237,   240,   240,   238,   284,   237,   240,   240,   326,   240,
     240,   240,   240,   322,   240,   240,   238,   312,   237,   240,
     240,   240,   238,   385,   218,   218,   247,   129,   218,   129,
     218,   218,   218,   237,   115,   129,   218,   129,   115,   115,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   237,   237,   240,   409,   238,   406,   218,   237,   239,
     237,   240,   240,   240,   240,   238,   290,   129,   237,   237,
     240,   400,   240,   238,   396,   237,   237,   237,   237,   140,
     141,   142,   143,   144,   145,   146,   246,   247,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   115,   115,
     247,   240,   115,   115,   115,   247,   115,   115,   247,   129,
     115,   115,   247,   115,   249,   249,   237,   129,   183,   184,
     129,   218,   129,   129,   240,   129,   129,   115,   129,   129,
     129,   129,   237,   129,   129,   237,   237,   129,   129,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
      51,   169,   170,   171,   174,   175,   177,   178,   180,   182,
     185,   187,   188,   189,   195,   199,   203,   204,   205,   210,
     215,   234,   509,   510,    51,    53,    54,    67,   169,   170,
     171,   174,   175,   177,   178,   180,   182,   185,   187,   188,
     189,   195,   199,   203,   204,   205,   210,   215,   234,   505,
     506,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   129,   218,   240,   129,   115,   129,   129,   129,   237,
     129,   129,   237,   129,   129,   240,   115,   363,   364,   237,
     237,   237,   129,   129,   237,   129,   218,   240,   129,   129,
     129,   218,   240,   129,   129,   237,   129,   129,   129,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   129,   240,   237,   237,
       1,   106,   202,   226,   301,   302,   303,   304,   305,   129,
     129,   129,   129,   237,   237,   129,   240,   129,   237,   246,
     246,   246,   246,   246,   246,   246,   237,   237,   237,    55,
     130,   351,   352,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,    11,    12,    13,   248,   249,   237,
     237,   237,   237,   237,   237,   237,   237,   237,     8,   206,
     426,   427,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   241,   237,   241,   237,   237,    15,
      43,    76,   107,   108,   114,   138,   153,   217,   236,   377,
     378,   237,   237,   237,   237,   237,   237,   237,   237,   237,
      51,   197,   206,   357,   358,   225,   241,   362,   237,   237,
     237,   237,     4,    24,    25,    34,    72,    73,    75,   103,
     109,   112,   134,   136,   137,   154,   176,   181,   185,   190,
     191,   196,   200,   211,   213,   214,   216,   227,   235,   327,
     328,   237,   237,   237,   237,    51,    53,    54,    67,   169,
     170,   171,   174,   175,   177,   178,   180,   182,   185,   187,
     188,   189,   195,   199,   203,   204,   205,   210,   215,   234,
     323,   324,   237,   237,   237,   237,   237,   237,    75,   137,
     168,   176,   185,   211,   213,   214,   227,   235,   410,   411,
     237,   240,   240,   306,   238,   302,   237,   237,   237,   237,
     237,    75,   137,   168,   176,   185,   211,   213,   214,   227,
     235,   401,   402,   237,   237,   241,   248,   248,   248,   237,
     241,   510,   506,   237,   241,   237,   241,   115,   364,   237,
     242,   242,   242,   242,   242,   237,   241,   237,   241,   237,
     241,   129,   212,   249,   240,   237,   237,   241,   352,   427,
     378,   358,   135,   137,   135,   137,   135,   328,   324,   411,
     237,   237,   237,    73,    75,   120,   137,   175,   176,   229,
     235,   307,   308,   402,   237,   241,   308
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   243,   244,   244,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   246,   246,
     247,   247,   247,   247,   247,   247,   247,   247,   248,   248,
     249,   249,   249,   249,   250,   251,   251,   252,   252,   252,
     253,   254,   255,   256,   256,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   276,   277,   277,   277,   277,   278,   279,   280,
     282,   281,   283,   283,   284,   284,   284,   285,   286,   288,
     287,   289,   289,   290,   290,   290,   290,   290,   291,   292,
     293,   294,   295,   296,   296,   297,   297,   297,   298,   300,
     299,   301,   301,   302,   302,   302,   302,   303,   304,   304,
     306,   305,   307,   307,   308,   308,   308,   308,   308,   308,
     308,   308,   310,   309,   311,   311,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   322,   321,   323,   323,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   326,   325,   327,   327,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   330,   329,
     331,   331,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   350,   349,   351,   351,
     352,   352,   354,   353,   356,   355,   357,   357,   358,   358,
     358,   359,   359,   360,   360,   360,   360,   360,   362,   361,
     363,   363,   364,   364,   365,   366,   368,   367,   369,   369,
     370,   370,   370,   370,   370,   370,   370,   370,   370,   371,
     372,   373,   374,   376,   375,   377,   377,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   379,   380,   381,
     383,   382,   384,   384,   385,   385,   385,   385,   386,   387,
     388,   389,   390,   390,   391,   391,   392,   394,   393,   395,
     395,   396,   396,   396,   396,   397,   398,   400,   399,   401,
     401,   402,   402,   402,   402,   402,   402,   402,   402,   402,
     402,   404,   403,   405,   405,   406,   406,   406,   407,   409,
     408,   410,   410,   411,   411,   411,   411,   411,   411,   411,
     411,   411,   411,   413,   412,   414,   414,   415,   415,   415,
     415,   415,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   416,   417,   418,   419,   420,   421,   422,   423,
     423,   425,   424,   426,   426,   427,   427,   428,   429,   430,
     431,   432,   434,   433,   435,   435,   436,   436,   436,   437,
     438,   440,   439,   441,   441,   442,   442,   442,   443,   444,
     445,   446,   446,   447,   447,   448,   450,   449,   451,   451,
     452,   452,   452,   453,   454,   455,   456,   456,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   457,
     457,   457,   457,   457,   457,   457,   457,   457,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   489,   490,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   504,   503,   505,   505,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   508,   507,   509,   509,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   511,   512,   513,   514,   515,   515,   516,   516,   516,
     516,   516,   516,   516,   516,   516,   516,   516,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   525,   526,   527,
     528,   529,   529,   530,   530,   530,   530,   530,   530,   530,
     530,   530,   530,   531,   532,   533,   534,   535,   536,   537,
     538,   539
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
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     5,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       5,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     4,     4,     4,     4,     4,
       4,     4
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
#line 424 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2912 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 425 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2918 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 426 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2924 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 427 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 428 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2936 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 429 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 430 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 431 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 432 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 439 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 452 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 2999 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 458 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3008 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 491 "conf_parser.y" /* yacc.c:1646  */
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
#line 3051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 531 "conf_parser.y" /* yacc.c:1646  */
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
#line 3112 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 589 "conf_parser.y" /* yacc.c:1646  */
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
#line 3144 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 618 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3155 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 626 "conf_parser.y" /* yacc.c:1646  */
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
#line 3172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 640 "conf_parser.y" /* yacc.c:1646  */
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
#line 3203 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 668 "conf_parser.y" /* yacc.c:1646  */
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
#line 3221 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 683 "conf_parser.y" /* yacc.c:1646  */
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
#line 3239 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 698 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3252 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 708 "conf_parser.y" /* yacc.c:1646  */
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
#line 3269 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 722 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3281 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 731 "conf_parser.y" /* yacc.c:1646  */
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
#line 3312 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 759 "conf_parser.y" /* yacc.c:1646  */
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
#line 3343 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 787 "conf_parser.y" /* yacc.c:1646  */
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
#line 3371 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 812 "conf_parser.y" /* yacc.c:1646  */
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
#line 3396 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 834 "conf_parser.y" /* yacc.c:1646  */
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
#line 3421 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 856 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3430 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 874 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3442 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 883 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3454 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 892 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 905 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3475 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 909 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 926 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 932 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 942 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3519 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 946 "conf_parser.y" /* yacc.c:1646  */
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
#line 3537 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 964 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 970 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 976 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 982 "conf_parser.y" /* yacc.c:1646  */
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
#line 3585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1010 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1016 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3603 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1020 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3616 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1036 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3627 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1044 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3635 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1047 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3643 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1052 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1059 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1063 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3670 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1067 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1071 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1075 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3697 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1079 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3706 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1083 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3715 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1087 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3724 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1097 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3736 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1104 "conf_parser.y" /* yacc.c:1646  */
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
    conf->port  = block_state.port.value;
    conf->htype = parse_netmask(conf->host, &conf->addr, &conf->bits);

    conf_add_class_to_conf(conf, block_state.class.buf);
  }
}
#line 3789 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1167 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3798 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1173 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3807 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1179 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3816 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1185 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3825 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1191 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3839 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1202 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3848 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1208 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3862 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1219 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3871 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1225 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3880 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1232 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
#line 3889 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1236 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
#line 3898 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1240 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3907 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1244 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
#line 3916 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1248 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
#line 3925 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1252 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3934 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1256 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3943 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1260 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3952 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1264 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
#line 3961 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1268 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
#line 3970 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1272 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
#line 3979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1276 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
#line 3988 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1280 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3997 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1284 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
#line 4006 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1288 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 4015 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1292 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 4024 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1296 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 4033 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1300 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 4042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1304 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1308 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4060 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1312 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4069 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1316 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4078 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1320 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1324 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4096 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1328 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BLOCKINVITES;
}
#line 4105 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1334 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1341 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1345 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1349 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4141 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1353 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4150 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1357 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4159 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1361 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4168 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1365 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4177 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1369 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1373 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4195 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1377 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1381 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4213 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1385 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4222 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1389 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4231 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1393 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4240 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1397 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4249 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1401 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1405 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4267 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1409 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4276 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1413 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4285 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1417 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4294 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1421 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4303 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1425 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4312 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1429 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4321 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1433 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4330 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1437 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4339 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1441 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1445 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4357 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1449 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4366 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1453 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4375 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1457 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4384 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1467 "conf_parser.y" /* yacc.c:1646  */
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
#line 4401 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 239:
#line 1479 "conf_parser.y" /* yacc.c:1646  */
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
#line 4449 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1543 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4458 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1549 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4467 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1555 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1561 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4485 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1567 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4494 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1573 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4503 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1579 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1585 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4521 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1591 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4530 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1597 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4539 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1603 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4549 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1610 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4558 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1616 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4567 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1622 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1628 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4588 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1637 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 276:
#line 1646 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1653 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4618 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1657 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4627 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1667 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4636 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 284:
#line 1673 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1679 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4653 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1683 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4662 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 290:
#line 1687 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4671 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 298:
#line 1695 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4677 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1700 "conf_parser.y" /* yacc.c:1646  */
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
#line 4695 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1713 "conf_parser.y" /* yacc.c:1646  */
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
#line 4715 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1730 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4724 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1736 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4733 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1746 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4742 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 307:
#line 1750 "conf_parser.y" /* yacc.c:1646  */
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
#line 4783 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1799 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4792 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1805 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4801 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1811 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4810 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1817 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4824 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 323:
#line 1828 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4833 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1835 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4842 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1839 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4851 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1843 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4860 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1847 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1851 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4878 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1855 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4887 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1859 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4896 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1863 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1867 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1871 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1877 "conf_parser.y" /* yacc.c:1646  */
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
#line 4940 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1891 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 4952 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1900 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 4964 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1913 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 4976 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 341:
#line 1920 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 4987 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1931 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1937 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 350:
#line 1943 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1958 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5029 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1974 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5045 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 358:
#line 1985 "conf_parser.y" /* yacc.c:1646  */
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
#line 5062 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2002 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5071 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2008 "conf_parser.y" /* yacc.c:1646  */
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
#line 5093 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 367:
#line 2027 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5102 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2034 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5111 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2038 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5120 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2042 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5129 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2046 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5138 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2050 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5147 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2054 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5156 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2058 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5165 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2062 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5174 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2066 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5183 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2070 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5192 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2080 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5206 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 382:
#line 2089 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5221 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2104 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5230 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 389:
#line 2110 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5239 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2117 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5248 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2121 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5257 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2125 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5266 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2129 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2133 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5284 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2137 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5293 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2141 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5302 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2145 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5311 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2149 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5320 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2153 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5329 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2163 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5343 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 404:
#line 2172 "conf_parser.y" /* yacc.c:1646  */
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
#line 5409 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2252 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2258 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2264 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2270 "conf_parser.y" /* yacc.c:1646  */
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
#line 5452 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2283 "conf_parser.y" /* yacc.c:1646  */
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
#line 5468 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2296 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5477 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2302 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5486 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 2308 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5495 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 2312 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5504 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 431:
#line 2318 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2324 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5521 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2328 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5530 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2334 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5544 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2345 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5553 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2351 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5562 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2357 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5571 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2363 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2378 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 443:
#line 2382 "conf_parser.y" /* yacc.c:1646  */
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
#line 5619 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2407 "conf_parser.y" /* yacc.c:1646  */
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
#line 5642 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2427 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2437 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5660 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 452:
#line 2441 "conf_parser.y" /* yacc.c:1646  */
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
#line 5686 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2467 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5695 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 459:
#line 2473 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5704 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2488 "conf_parser.y" /* yacc.c:1646  */
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
#line 5721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2505 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5730 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 467:
#line 2509 "conf_parser.y" /* yacc.c:1646  */
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
#line 5752 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2531 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5761 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 474:
#line 2537 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5770 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2603 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5778 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2608 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5786 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2613 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5794 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2618 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5806 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2627 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5818 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2636 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5830 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2645 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_mask);
    ConfigGeneral.cloak_mask = xstrdup(yylval.string);
  }
}
#line 5842 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2654 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5851 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2660 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5859 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2665 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5867 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2670 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5875 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2675 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5883 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2680 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5895 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2689 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2694 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5911 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2699 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5919 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2704 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5927 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2709 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5935 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2714 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5943 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2719 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 5951 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2724 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 5959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2729 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 5967 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2734 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 5975 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2739 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 5984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2745 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 5992 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2750 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 6000 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2755 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 6008 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2760 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6016 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2765 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6024 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2770 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6032 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2775 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6040 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2780 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6048 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2783 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6056 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2788 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6064 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2791 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6072 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2796 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6080 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2801 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6088 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2806 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6096 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2811 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6104 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2816 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6112 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2821 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6120 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2826 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6128 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2831 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6136 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2836 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6144 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2841 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6152 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2846 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6160 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2851 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6168 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2856 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6176 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2862 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BOTS;
}
#line 6184 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2865 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CCONN;
}
#line 6192 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2868 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6200 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2871 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEBUG;
}
#line 6208 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2874 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FULL;
}
#line 6216 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2877 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6224 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2880 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6232 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2883 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6240 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2886 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SKILL;
}
#line 6248 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2889 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NCHANGE;
}
#line 6256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2892 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REJ;
}
#line 6264 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2895 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_UNAUTH;
}
#line 6272 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2898 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6280 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2901 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_EXTERNAL;
}
#line 6288 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6296 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2907 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6304 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2910 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6312 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2913 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6320 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2916 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6328 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2919 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6336 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2922 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6344 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2925 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6352 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2928 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6360 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2931 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6368 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2934 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BLOCKINVITES;
}
#line 6376 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2939 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6384 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2945 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_BOTS;
}
#line 6392 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2948 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CCONN;
}
#line 6400 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2951 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6408 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2954 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEBUG;
}
#line 6416 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2957 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FULL;
}
#line 6424 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2960 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SKILL;
}
#line 6432 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2963 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6440 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2966 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_NCHANGE;
}
#line 6448 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2969 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REJ;
}
#line 6456 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2972 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_UNAUTH;
}
#line 6464 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2975 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6472 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2978 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_EXTERNAL;
}
#line 6480 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2981 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6488 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2984 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6496 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2987 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6504 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2990 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2993 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6520 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2996 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6528 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2999 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6536 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 3002 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6544 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3005 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6552 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3008 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6560 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3013 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6568 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 632:
#line 3018 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 3023 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6584 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3048 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6592 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3053 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3058 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6608 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3063 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6616 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3068 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6624 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3073 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6632 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3078 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6640 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3083 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6648 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3088 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6656 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3093 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6664 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3098 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6672 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3121 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6681 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3127 "conf_parser.y" /* yacc.c:1646  */
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
#line 6700 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3143 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6712 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3152 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3158 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6730 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 3164 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6739 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3170 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6751 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 680:
#line 3179 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6760 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 681:
#line 3185 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6769 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6773 "conf_parser.c" /* yacc.c:1646  */
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
