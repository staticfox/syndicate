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
    CLOSE = 278,
    CONNECT = 279,
    CONNECTFREQ = 280,
    CYCLE_ON_HOST_CHANGE = 281,
    DEFAULT_FLOODCOUNT = 282,
    DEFAULT_JOIN_FLOOD_COUNT = 283,
    DEFAULT_JOIN_FLOOD_TIME = 284,
    DEFAULT_MAX_CLIENTS = 285,
    DENY = 286,
    DESCRIPTION = 287,
    DIE = 288,
    DISABLE_AUTH = 289,
    DISABLE_FAKE_CHANNELS = 290,
    DISABLE_REMOTE_COMMANDS = 291,
    DLINE_MIN_CIDR = 292,
    DLINE_MIN_CIDR6 = 293,
    DOTS_IN_IDENT = 294,
    EMAIL = 295,
    ENABLE_CLOAK_SYSTEM = 296,
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
    IP = 322,
    IRCD_AUTH = 323,
    IRCD_FLAGS = 324,
    IRCD_SID = 325,
    JOIN = 326,
    KILL = 327,
    KILL_CHASE_TIME_LIMIT = 328,
    KLINE = 329,
    KLINE_EXEMPT = 330,
    KLINE_MIN_CIDR = 331,
    KLINE_MIN_CIDR6 = 332,
    KLINE_REASON = 333,
    KNOCK_CLIENT_COUNT = 334,
    KNOCK_CLIENT_TIME = 335,
    KNOCK_DELAY_CHANNEL = 336,
    LEAF_MASK = 337,
    LISTEN = 338,
    MASK = 339,
    MAX_ACCEPT = 340,
    MAX_BANS = 341,
    MAX_CHANNELS = 342,
    MAX_GLOBAL = 343,
    MAX_IDENT = 344,
    MAX_IDLE = 345,
    MAX_LOCAL = 346,
    MAX_NICK_CHANGES = 347,
    MAX_NICK_LENGTH = 348,
    MAX_NICK_TIME = 349,
    MAX_NUMBER = 350,
    MAX_TARGETS = 351,
    MAX_TOPIC_LENGTH = 352,
    MAX_WATCH = 353,
    MIN_IDLE = 354,
    MIN_NONWILDCARD = 355,
    MIN_NONWILDCARD_SIMPLE = 356,
    MODULE = 357,
    MODULES = 358,
    MOTD = 359,
    NAME = 360,
    NEED_IDENT = 361,
    NEED_PASSWORD = 362,
    NETADMIN = 363,
    NETWORK_DESC = 364,
    NETWORK_NAME = 365,
    NICK = 366,
    NO_OPER_FLOOD = 367,
    NO_TILDE = 368,
    NUMBER = 369,
    NUMBER_PER_CIDR = 370,
    NUMBER_PER_IP = 371,
    OPER_ONLY_UMODES = 372,
    OPER_UMODES = 373,
    OPERATOR = 374,
    OPERS_BYPASS_CALLERID = 375,
    PACE_WAIT = 376,
    PACE_WAIT_SIMPLE = 377,
    PASSWORD = 378,
    PATH = 379,
    PING_COOKIE = 380,
    PING_TIME = 381,
    PORT = 382,
    QSTRING = 383,
    RANDOM_IDLE = 384,
    REASON = 385,
    REDIRPORT = 386,
    REDIRSERV = 387,
    REHASH = 388,
    REMOTE = 389,
    REMOTEBAN = 390,
    RESV = 391,
    RESV_EXEMPT = 392,
    RSA_PRIVATE_KEY_FILE = 393,
    SECONDS = 394,
    MINUTES = 395,
    HOURS = 396,
    DAYS = 397,
    WEEKS = 398,
    MONTHS = 399,
    YEARS = 400,
    SEND_PASSWORD = 401,
    SENDQ = 402,
    SERVERHIDE = 403,
    SERVERINFO = 404,
    SHORT_MOTD = 405,
    SPOOF = 406,
    SPOOF_NOTICE = 407,
    SQUIT = 408,
    SSL_CERTIFICATE_FILE = 409,
    SSL_CERTIFICATE_FINGERPRINT = 410,
    SSL_CONNECTION_REQUIRED = 411,
    SSL_DH_ELLIPTIC_CURVE = 412,
    SSL_DH_PARAM_FILE = 413,
    SSL_MESSAGE_DIGEST_ALGORITHM = 414,
    STATS_E_DISABLED = 415,
    STATS_I_OPER_ONLY = 416,
    STATS_K_OPER_ONLY = 417,
    STATS_M_OPER_ONLY = 418,
    STATS_O_OPER_ONLY = 419,
    STATS_P_OPER_ONLY = 420,
    STATS_U_OPER_ONLY = 421,
    T_ALL = 422,
    T_BOTS = 423,
    T_CALLERID = 424,
    T_CCONN = 425,
    T_COMMAND = 426,
    T_CLUSTER = 427,
    T_DEAF = 428,
    T_DEBUG = 429,
    T_DLINE = 430,
    T_EXTERNAL = 431,
    T_FARCONNECT = 432,
    T_FILE = 433,
    T_FULL = 434,
    T_GLOBOPS = 435,
    T_INVISIBLE = 436,
    T_IPV4 = 437,
    T_IPV6 = 438,
    T_LOCOPS = 439,
    T_LOG = 440,
    T_NCHANGE = 441,
    T_NONONREG = 442,
    T_OPERWALL = 443,
    T_OPERWALLS = 444,
    T_OPME = 445,
    T_PREPEND = 446,
    T_PSEUDO = 447,
    T_RECVQ = 448,
    T_REJ = 449,
    T_RESTART = 450,
    T_SERVER = 451,
    T_SERVICE = 452,
    T_SERVNOTICE = 453,
    T_SET = 454,
    T_SHARED = 455,
    T_SIZE = 456,
    T_SKILL = 457,
    T_SOFTCALLERID = 458,
    T_SPY = 459,
    T_SSL = 460,
    T_SSL_CIPHER_LIST = 461,
    T_TARGET = 462,
    T_UMODES = 463,
    T_UNAUTH = 464,
    T_UNDLINE = 465,
    T_UNLIMITED = 466,
    T_UNRESV = 467,
    T_UNXLINE = 468,
    T_WALLOP = 469,
    T_WALLOPS = 470,
    T_WEBIRC = 471,
    TBOOL = 472,
    THROTTLE_COUNT = 473,
    THROTTLE_TIME = 474,
    TKLINE_EXPIRE_NOTICES = 475,
    TMASKED = 476,
    TS_MAX_DELTA = 477,
    TS_WARN_DELTA = 478,
    TWODOTS = 479,
    TYPE = 480,
    UNKLINE = 481,
    USE_LOGGING = 482,
    USER = 483,
    VHOST = 484,
    VHOST6 = 485,
    WARN_NO_CONNECT_BLOCK = 486,
    WHOIS = 487,
    WHOIS_NOTIFY = 488,
    XLINE = 489,
    XLINE_EXEMPT = 490
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
#define CLOSE 278
#define CONNECT 279
#define CONNECTFREQ 280
#define CYCLE_ON_HOST_CHANGE 281
#define DEFAULT_FLOODCOUNT 282
#define DEFAULT_JOIN_FLOOD_COUNT 283
#define DEFAULT_JOIN_FLOOD_TIME 284
#define DEFAULT_MAX_CLIENTS 285
#define DENY 286
#define DESCRIPTION 287
#define DIE 288
#define DISABLE_AUTH 289
#define DISABLE_FAKE_CHANNELS 290
#define DISABLE_REMOTE_COMMANDS 291
#define DLINE_MIN_CIDR 292
#define DLINE_MIN_CIDR6 293
#define DOTS_IN_IDENT 294
#define EMAIL 295
#define ENABLE_CLOAK_SYSTEM 296
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
#define IP 322
#define IRCD_AUTH 323
#define IRCD_FLAGS 324
#define IRCD_SID 325
#define JOIN 326
#define KILL 327
#define KILL_CHASE_TIME_LIMIT 328
#define KLINE 329
#define KLINE_EXEMPT 330
#define KLINE_MIN_CIDR 331
#define KLINE_MIN_CIDR6 332
#define KLINE_REASON 333
#define KNOCK_CLIENT_COUNT 334
#define KNOCK_CLIENT_TIME 335
#define KNOCK_DELAY_CHANNEL 336
#define LEAF_MASK 337
#define LISTEN 338
#define MASK 339
#define MAX_ACCEPT 340
#define MAX_BANS 341
#define MAX_CHANNELS 342
#define MAX_GLOBAL 343
#define MAX_IDENT 344
#define MAX_IDLE 345
#define MAX_LOCAL 346
#define MAX_NICK_CHANGES 347
#define MAX_NICK_LENGTH 348
#define MAX_NICK_TIME 349
#define MAX_NUMBER 350
#define MAX_TARGETS 351
#define MAX_TOPIC_LENGTH 352
#define MAX_WATCH 353
#define MIN_IDLE 354
#define MIN_NONWILDCARD 355
#define MIN_NONWILDCARD_SIMPLE 356
#define MODULE 357
#define MODULES 358
#define MOTD 359
#define NAME 360
#define NEED_IDENT 361
#define NEED_PASSWORD 362
#define NETADMIN 363
#define NETWORK_DESC 364
#define NETWORK_NAME 365
#define NICK 366
#define NO_OPER_FLOOD 367
#define NO_TILDE 368
#define NUMBER 369
#define NUMBER_PER_CIDR 370
#define NUMBER_PER_IP 371
#define OPER_ONLY_UMODES 372
#define OPER_UMODES 373
#define OPERATOR 374
#define OPERS_BYPASS_CALLERID 375
#define PACE_WAIT 376
#define PACE_WAIT_SIMPLE 377
#define PASSWORD 378
#define PATH 379
#define PING_COOKIE 380
#define PING_TIME 381
#define PORT 382
#define QSTRING 383
#define RANDOM_IDLE 384
#define REASON 385
#define REDIRPORT 386
#define REDIRSERV 387
#define REHASH 388
#define REMOTE 389
#define REMOTEBAN 390
#define RESV 391
#define RESV_EXEMPT 392
#define RSA_PRIVATE_KEY_FILE 393
#define SECONDS 394
#define MINUTES 395
#define HOURS 396
#define DAYS 397
#define WEEKS 398
#define MONTHS 399
#define YEARS 400
#define SEND_PASSWORD 401
#define SENDQ 402
#define SERVERHIDE 403
#define SERVERINFO 404
#define SHORT_MOTD 405
#define SPOOF 406
#define SPOOF_NOTICE 407
#define SQUIT 408
#define SSL_CERTIFICATE_FILE 409
#define SSL_CERTIFICATE_FINGERPRINT 410
#define SSL_CONNECTION_REQUIRED 411
#define SSL_DH_ELLIPTIC_CURVE 412
#define SSL_DH_PARAM_FILE 413
#define SSL_MESSAGE_DIGEST_ALGORITHM 414
#define STATS_E_DISABLED 415
#define STATS_I_OPER_ONLY 416
#define STATS_K_OPER_ONLY 417
#define STATS_M_OPER_ONLY 418
#define STATS_O_OPER_ONLY 419
#define STATS_P_OPER_ONLY 420
#define STATS_U_OPER_ONLY 421
#define T_ALL 422
#define T_BOTS 423
#define T_CALLERID 424
#define T_CCONN 425
#define T_COMMAND 426
#define T_CLUSTER 427
#define T_DEAF 428
#define T_DEBUG 429
#define T_DLINE 430
#define T_EXTERNAL 431
#define T_FARCONNECT 432
#define T_FILE 433
#define T_FULL 434
#define T_GLOBOPS 435
#define T_INVISIBLE 436
#define T_IPV4 437
#define T_IPV6 438
#define T_LOCOPS 439
#define T_LOG 440
#define T_NCHANGE 441
#define T_NONONREG 442
#define T_OPERWALL 443
#define T_OPERWALLS 444
#define T_OPME 445
#define T_PREPEND 446
#define T_PSEUDO 447
#define T_RECVQ 448
#define T_REJ 449
#define T_RESTART 450
#define T_SERVER 451
#define T_SERVICE 452
#define T_SERVNOTICE 453
#define T_SET 454
#define T_SHARED 455
#define T_SIZE 456
#define T_SKILL 457
#define T_SOFTCALLERID 458
#define T_SPY 459
#define T_SSL 460
#define T_SSL_CIPHER_LIST 461
#define T_TARGET 462
#define T_UMODES 463
#define T_UNAUTH 464
#define T_UNDLINE 465
#define T_UNLIMITED 466
#define T_UNRESV 467
#define T_UNXLINE 468
#define T_WALLOP 469
#define T_WALLOPS 470
#define T_WEBIRC 471
#define TBOOL 472
#define THROTTLE_COUNT 473
#define THROTTLE_TIME 474
#define TKLINE_EXPIRE_NOTICES 475
#define TMASKED 476
#define TS_MAX_DELTA 477
#define TS_WARN_DELTA 478
#define TWODOTS 479
#define TYPE 480
#define UNKLINE 481
#define USE_LOGGING 482
#define USER 483
#define VHOST 484
#define VHOST6 485
#define WARN_NO_CONNECT_BLOCK 486
#define WHOIS 487
#define WHOIS_NOTIFY 488
#define XLINE 489
#define XLINE_EXEMPT 490

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 706 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 721 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1386

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  242
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  297
/* YYNRULES -- Number of rules.  */
#define YYNRULES  679
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1335

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   490

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
       2,     2,     2,     2,   240,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   241,   236,
       2,   239,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   238,     2,   237,     2,     2,     2,     2,
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
     235
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   392,   392,   393,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   423,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   434,   434,
     435,   436,   437,   438,   445,   447,   447,   448,   448,   448,
     450,   456,   466,   468,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   489,   529,   587,   616,   624,   638,   666,
     681,   696,   706,   720,   729,   757,   785,   810,   832,   854,
     864,   866,   866,   867,   868,   869,   870,   872,   881,   890,
     904,   903,   921,   921,   922,   922,   922,   924,   930,   941,
     940,   959,   959,   960,   960,   960,   960,   960,   962,   968,
     974,   980,  1002,  1003,  1003,  1005,  1005,  1006,  1008,  1015,
    1015,  1028,  1029,  1031,  1031,  1032,  1032,  1034,  1042,  1045,
    1051,  1050,  1056,  1056,  1057,  1061,  1065,  1069,  1073,  1077,
    1081,  1085,  1096,  1095,  1152,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,  1159,  1160,  1161,  1162,  1163,  1165,  1171,  1177,
    1183,  1189,  1200,  1206,  1217,  1224,  1223,  1229,  1229,  1230,
    1234,  1238,  1242,  1246,  1250,  1254,  1258,  1262,  1266,  1270,
    1274,  1278,  1282,  1286,  1290,  1294,  1298,  1302,  1306,  1310,
    1314,  1318,  1322,  1329,  1328,  1334,  1334,  1335,  1339,  1343,
    1347,  1351,  1355,  1359,  1363,  1367,  1371,  1375,  1379,  1383,
    1387,  1391,  1395,  1399,  1403,  1407,  1411,  1415,  1419,  1423,
    1427,  1431,  1435,  1439,  1443,  1447,  1451,  1462,  1461,  1518,
    1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,  1527,
    1528,  1529,  1530,  1531,  1531,  1532,  1533,  1534,  1535,  1537,
    1543,  1549,  1555,  1561,  1567,  1573,  1579,  1585,  1591,  1597,
    1604,  1610,  1616,  1622,  1631,  1641,  1640,  1646,  1646,  1647,
    1651,  1662,  1661,  1668,  1667,  1672,  1672,  1673,  1677,  1681,
    1687,  1687,  1688,  1688,  1688,  1688,  1688,  1690,  1690,  1692,
    1692,  1694,  1707,  1724,  1730,  1741,  1740,  1782,  1782,  1783,
    1784,  1785,  1786,  1787,  1788,  1789,  1790,  1791,  1793,  1799,
    1805,  1811,  1823,  1822,  1828,  1828,  1829,  1833,  1837,  1841,
    1845,  1849,  1853,  1857,  1861,  1865,  1871,  1885,  1894,  1908,
    1907,  1922,  1922,  1923,  1923,  1923,  1923,  1925,  1931,  1937,
    1947,  1949,  1949,  1950,  1950,  1952,  1969,  1968,  1993,  1993,
    1994,  1994,  1994,  1994,  1996,  2002,  2022,  2021,  2027,  2027,
    2028,  2032,  2036,  2040,  2044,  2048,  2052,  2056,  2060,  2064,
    2075,  2074,  2095,  2095,  2096,  2096,  2096,  2098,  2105,  2104,
    2110,  2110,  2111,  2115,  2119,  2123,  2127,  2131,  2135,  2139,
    2143,  2147,  2158,  2157,  2229,  2229,  2230,  2231,  2232,  2233,
    2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,  2243,
    2244,  2246,  2252,  2258,  2264,  2277,  2290,  2296,  2302,  2306,
    2313,  2312,  2317,  2317,  2318,  2322,  2328,  2339,  2345,  2351,
    2357,  2373,  2372,  2398,  2398,  2399,  2399,  2399,  2401,  2421,
    2432,  2431,  2458,  2458,  2459,  2459,  2459,  2461,  2467,  2477,
    2479,  2479,  2480,  2480,  2482,  2500,  2499,  2522,  2522,  2523,
    2523,  2523,  2525,  2531,  2541,  2543,  2543,  2544,  2545,  2546,
    2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,
    2557,  2558,  2559,  2560,  2561,  2562,  2563,  2564,  2565,  2566,
    2567,  2568,  2569,  2570,  2571,  2572,  2573,  2574,  2575,  2576,
    2577,  2578,  2579,  2580,  2581,  2582,  2583,  2584,  2585,  2586,
    2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,  2597,  2602,
    2607,  2612,  2621,  2630,  2639,  2645,  2650,  2655,  2661,  2666,
    2671,  2680,  2685,  2690,  2695,  2700,  2705,  2710,  2715,  2720,
    2725,  2730,  2736,  2741,  2746,  2751,  2756,  2761,  2766,  2771,
    2774,  2779,  2782,  2787,  2792,  2797,  2802,  2807,  2812,  2817,
    2822,  2827,  2832,  2837,  2842,  2848,  2847,  2852,  2852,  2853,
    2856,  2859,  2862,  2865,  2868,  2871,  2874,  2877,  2880,  2883,
    2886,  2889,  2892,  2895,  2898,  2901,  2904,  2907,  2910,  2913,
    2916,  2919,  2922,  2928,  2927,  2932,  2932,  2933,  2936,  2939,
    2942,  2945,  2948,  2951,  2954,  2957,  2960,  2963,  2966,  2969,
    2972,  2975,  2978,  2981,  2984,  2987,  2990,  2993,  2996,  3001,
    3006,  3011,  3020,  3022,  3022,  3023,  3024,  3025,  3026,  3027,
    3028,  3029,  3030,  3031,  3032,  3033,  3034,  3036,  3041,  3046,
    3051,  3056,  3061,  3066,  3071,  3076,  3081,  3086,  3095,  3097,
    3097,  3098,  3099,  3100,  3101,  3102,  3103,  3104,  3105,  3106,
    3107,  3109,  3115,  3131,  3140,  3146,  3152,  3158,  3167,  3173
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
  "CLOAK_KEY1", "CLOAK_KEY2", "CLOAK_KEY3", "CLOSE", "CONNECT",
  "CONNECTFREQ", "CYCLE_ON_HOST_CHANGE", "DEFAULT_FLOODCOUNT",
  "DEFAULT_JOIN_FLOOD_COUNT", "DEFAULT_JOIN_FLOOD_TIME",
  "DEFAULT_MAX_CLIENTS", "DENY", "DESCRIPTION", "DIE", "DISABLE_AUTH",
  "DISABLE_FAKE_CHANNELS", "DISABLE_REMOTE_COMMANDS", "DLINE_MIN_CIDR",
  "DLINE_MIN_CIDR6", "DOTS_IN_IDENT", "EMAIL", "ENABLE_CLOAK_SYSTEM",
  "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT", "FAILED_OPER_NOTICE",
  "FLATTEN_LINKS", "FLATTEN_LINKS_DELAY", "FLATTEN_LINKS_FILE", "GECOS",
  "GENERAL", "HIDDEN", "HIDDEN_NAME", "HIDE_CHANS", "HIDE_IDLE",
  "HIDE_IDLE_FROM_OPERS", "HIDE_SERVER_IPS", "HIDE_SERVERS",
  "HIDE_SERVICES", "HOST", "HUB", "HUB_MASK", "IGNORE_BOGUS_TS",
  "INVISIBLE_ON_CONNECT", "INVITE_CLIENT_COUNT", "INVITE_CLIENT_TIME",
  "INVITE_DELAY_CHANNEL", "IP", "IRCD_AUTH", "IRCD_FLAGS", "IRCD_SID",
  "JOIN", "KILL", "KILL_CHASE_TIME_LIMIT", "KLINE", "KLINE_EXEMPT",
  "KLINE_MIN_CIDR", "KLINE_MIN_CIDR6", "KLINE_REASON",
  "KNOCK_CLIENT_COUNT", "KNOCK_CLIENT_TIME", "KNOCK_DELAY_CHANNEL",
  "LEAF_MASK", "LISTEN", "MASK", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANNELS",
  "MAX_GLOBAL", "MAX_IDENT", "MAX_IDLE", "MAX_LOCAL", "MAX_NICK_CHANGES",
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
  "general_cloak_key2", "general_cloak_key3",
  "general_cycle_on_host_change", "general_dline_min_cidr",
  "general_dline_min_cidr6", "general_enable_cloak_system",
  "general_kline_min_cidr", "general_kline_min_cidr6",
  "general_kline_reason", "general_tkline_expire_notices",
  "general_kill_chase_time_limit", "general_ignore_bogus_ts",
  "general_failed_oper_notice", "general_anti_nick_flood",
  "general_max_nick_time", "general_max_nick_changes",
  "general_max_accept", "general_anti_spam_exit_message_time",
  "general_ts_warn_delta", "general_ts_max_delta",
  "general_invisible_on_connect", "general_warn_no_connect_block",
  "general_stats_e_disabled", "general_stats_m_oper_only",
  "general_stats_o_oper_only", "general_stats_P_oper_only",
  "general_stats_u_oper_only", "general_stats_k_oper_only",
  "general_stats_i_oper_only", "general_pace_wait",
  "general_caller_id_wait", "general_opers_bypass_callerid",
  "general_pace_wait_simple", "general_short_motd",
  "general_no_oper_flood", "general_dots_in_ident", "general_max_targets",
  "general_ping_cookie", "general_disable_auth", "general_throttle_count",
  "general_throttle_time", "general_oper_umodes", "$@25", "umode_oitems",
  "umode_oitem", "general_oper_only_umodes", "$@26", "umode_items",
  "umode_item", "general_min_nonwildcard",
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
     485,   486,   487,   488,   489,   490,    59,   125,   123,    61,
      44,    58
};
# endif

#define YYPACT_NINF -1069

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1069)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1069,   693, -1069,  -177,  -225,  -219, -1069, -1069, -1069,  -213,
   -1069,  -210, -1069, -1069, -1069,  -208, -1069, -1069, -1069,  -194,
    -188, -1069,  -181, -1069,  -173, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069,    21,   594,  -171,  -165,  -163,    32,  -145,   397,  -137,
     -89,   -86,   235,   -81,   -56,   -50,   683,   541,   -24,    53,
     -14,     6,   -12,     5,    -1,     9,    27,    26, -1069, -1069,
   -1069, -1069, -1069,    33,    48,    61,    66,    67,    69,    72,
      75,    78,    85,    90,   255, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069,   690,   522,    41,
   -1069,    99,     3, -1069, -1069,    25, -1069,   132,   133,   137,
     139,   142,   144,   146,   148,   150,   152,   153,   155,   157,
     158,   160,   161,   162,   163,   166,   169,   170,   171,   176,
     177,   181,   182,   183,   186,   187,   188, -1069, -1069,   189,
     191,   193,   198,   200,   201,   202,   204,   206,   207,   211,
     212,   215,   222,   223,   224,   226,   228,    42, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   326,
      23,   321,    56,   229,   230,    54, -1069, -1069, -1069,   175,
     324,    28, -1069,   232,   237,   239,   244,   246,   247,   248,
     249,   251,    38, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,   127,   257,   260,   263,   264,   266,   267,
     268,   272,   274,   277,   281,   282,   285,   287,   289,   290,
     291,   140, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
      30,   128,   292,    20, -1069, -1069, -1069,   208,   124, -1069,
     301,    40, -1069, -1069,    46, -1069,   286,   327,   366,   307,
   -1069,   431,   432,    36,   436,   432,   432,   439,   432,   432,
     441,   451,   331, -1069,   332,   330,   333,   335, -1069,   339,
     341,   345,   347,   348,   350,   351,   353,   354,   355,   357,
     359,   360,    96, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069,   334,   361,   363,   364,   368,   369,   379, -1069,   385,
     386,   387,   392,   393,   396,   398,   227, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,   400,   402,    31, -1069, -1069, -1069,   449,
     408, -1069, -1069,   406,   409,    45, -1069, -1069, -1069,   416,
     432,   533,   432,   432,   508,   525,   526,   438,   548,   448,
     555,   556,   557,   461,   465,   466,   471,   432,   572,   582,
     573,   588,   591,   432,   592,   596,   599,   600,   499,   479,
     481,   504,   432,   432,   505,   506,   509,  -207,  -206,   510,
     515,   516,   519,   624,   432,   527,   432,   432,   528,   512,
   -1069,   513,   507,   511, -1069,   514,   518,   521,   523,   524,
     216, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069,   529,   530,    39, -1069, -1069, -1069,   531,   535,   536,
   -1069,   543, -1069,    70, -1069, -1069, -1069, -1069, -1069,   626,
     627,   547, -1069,   552,   551,   553,   115, -1069, -1069, -1069,
     558,   554,   559, -1069,   561,   564,   565,   568, -1069,   569,
     570,   147, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,   574,   575,   578,   579,    44, -1069, -1069,
   -1069, -1069,   549,   602,   432,   630,   603,   644,   604,   605,
     607,   577, -1069, -1069,   638,   663,   608,   698,   697,   713,
     700,   702,   703,   705,   708,   710,   711,   712,   722,   723,
     724,   617, -1069,   618,   616, -1069,    91, -1069, -1069, -1069,
   -1069,   639,   621, -1069,   620,   623,   622,   625,   628,   629,
       2, -1069, -1069, -1069, -1069, -1069,   732,   633, -1069,   634,
     632, -1069,   636,    76, -1069, -1069, -1069, -1069,   637,   640,
     641, -1069,   643,   394,   645,   646,   648,   650,   651,   652,
     653,   655,   656,   658, -1069, -1069,   748,   749,   432,   657,
     752,   758,   766,   432,   783,   784,   432,   767,   785,   786,
     432,   790,   790,   669, -1069, -1069,   780,    -3,   787,   694,
     788,   794,   674,   795,   796,   804,   797,   798,   800,   801,
     696, -1069,   802,   805,   704, -1069,   707, -1069,   806,   810,
     709, -1069,   716,   717,   720,   725,   727,   728,   734,   735,
     736,   737,   738,   740,   741,   742,   744,   745,   746,   750,
     751,   753,   762,   765,   769,   770,   772,   776,   777,   779,
     782,   792,   823,   733,   793,   799,   803,   807,   808,   809,
     811,   812,   813,   814,   815,   816,   817,   818,   819,   821,
     822,   824,   825,   826, -1069, -1069,   820,   729,   755,   831,
     827,   860,   875,   888,   828, -1069,   891,   892,   829, -1069,
   -1069,   894,   895,   791,   830,   832, -1069,   833,   834, -1069,
   -1069,   896,   903,   835, -1069, -1069,   905,   842,   836,   906,
     908,   910,   846,   837,   912,   913,   838, -1069, -1069,   914,
     918,   938,   841, -1069,   843,   844,   845,   847,   848,   849,
     850,   851,   852, -1069,   853,   854,   855,   856,   857,   858,
     859,   861,   862,   863,   864,   865,   866,   867,   868,   869,
     870, -1069, -1069,   939,   839,   871, -1069,   872, -1069,    19,
   -1069,   944,   945,   954,   968,   873, -1069,   874, -1069, -1069,
     983,   876,   984,   877, -1069, -1069, -1069, -1069, -1069,   432,
     432,   432,   432,   432,   432,   432, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   878,   880,
     881,   -38,   882,   883,   884,   885,   886,   887,   889,   890,
     893,   897,   898,   338,   899,   900, -1069,   901,   902,   904,
     907,   909,   911,   915,     8,   916,   917,   919,   920,   921,
     922,   923, -1069,   924,   925, -1069, -1069,   926,   927, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069,  -202, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,  -158, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
     928,   929,   469,   930,   931,   932,   933,   934, -1069,   935,
     936, -1069,   937,   940,   -28,   715,   941, -1069, -1069, -1069,
   -1069,   942,   943, -1069,   946,   947,   477,   948,   949,   950,
     951,   781,   952,   953, -1069,   955,   956,   957, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069,   958,   430, -1069, -1069,   959,
     960,   961, -1069,    17, -1069, -1069, -1069, -1069,   962,   965,
     966,   967, -1069, -1069,   969,   589,   970, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
    -130, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,   790,   790,   790, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   -46,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,   823, -1069,   733, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   -21, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069,   -15, -1069,  1010,   830,   971, -1069, -1069, -1069,
   -1069, -1069, -1069,   963, -1069,   972,   973, -1069, -1069, -1069,
     974, -1069, -1069, -1069,   975, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   -13, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   104, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069,   120, -1069, -1069,   999,
    -102,   978,   976, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   122,
   -1069, -1069, -1069,   -38, -1069, -1069, -1069, -1069,     8, -1069,
   -1069, -1069,   469, -1069,   -28, -1069, -1069, -1069,   994,   995,
     996,  1003,   998, -1069,   477, -1069,   781, -1069,   430,   982,
     985,   986,   238, -1069, -1069,   589, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,   125,
   -1069, -1069, -1069,   238, -1069
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   237,   402,   450,     0,
     465,     0,   305,   441,   281,     0,   100,   152,   339,     0,
       0,   380,     0,   109,     0,   356,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   646,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   634,   645,   636,   637,   638,
     639,   640,   641,   642,   635,   643,   644,     0,     0,     0,
     463,     0,     0,   461,   462,     0,   527,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   603,   575,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   476,   477,
     478,   520,   523,   524,   525,   521,   515,   516,   522,   517,
     518,   526,   514,   488,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   489,   490,   519,   494,   495,   496,   497,
     493,   492,   498,   505,   506,   499,   500,   501,   491,   503,
     512,   513,   510,   511,   504,   502,   508,   509,   507,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,     0,
       0,     0,   670,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   660,   661,   662,   663,   664,   665,   666,
     668,   667,   669,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    69,    66,    64,    70,    71,    65,    55,
      68,    58,    59,    60,    56,    67,    61,    62,    63,    57,
       0,     0,     0,     0,   124,   125,   126,     0,     0,   354,
       0,     0,   352,   353,     0,    96,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   633,     0,     0,     0,     0,   275,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,   241,   244,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   242,   243,   245,   255,   256,
     257,     0,     0,     0,     0,     0,     0,     0,   430,     0,
       0,     0,     0,     0,     0,     0,     0,   405,   406,   407,
     408,   409,   410,   411,   413,   412,   415,   419,   416,   417,
     418,   414,   456,     0,     0,     0,   453,   454,   455,     0,
       0,   460,   471,     0,     0,     0,   468,   469,   470,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     475,     0,     0,     0,   322,     0,     0,     0,     0,     0,
       0,   308,   309,   310,   311,   316,   312,   313,   314,   315,
     447,     0,     0,     0,   444,   445,   446,     0,     0,     0,
     283,     0,   293,     0,   291,   292,   294,   295,    49,     0,
       0,     0,    45,     0,     0,     0,     0,   103,   104,   105,
       0,     0,     0,   203,     0,     0,     0,     0,   175,     0,
       0,     0,   155,   156,   157,   158,   159,   162,   163,   164,
     161,   160,   165,     0,     0,     0,     0,     0,   342,   343,
     344,   345,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   659,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,   388,     0,   383,   384,   385,
     127,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,   112,   113,   115,   114,   116,     0,     0,   351,     0,
       0,   366,     0,     0,   359,   360,   361,   362,     0,     0,
       0,    90,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   632,   258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   239,   420,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   404,     0,     0,     0,   452,     0,   459,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   474,   317,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   307,     0,     0,     0,   443,
     296,     0,     0,     0,     0,     0,   290,     0,     0,    44,
     106,     0,     0,     0,   102,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,   346,     0,
       0,     0,     0,   341,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   658,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,   386,     0,     0,     0,   382,     0,   122,     0,
     117,     0,     0,     0,     0,     0,   111,     0,   350,   363,
       0,     0,     0,     0,   358,    99,    98,    97,   656,    28,
      28,    28,    28,    28,    28,    28,    30,    29,   657,   647,
     648,   649,   650,   651,   652,   653,   655,   654,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,   238,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   403,     0,     0,   451,   464,     0,     0,   466,
     545,   549,   528,   529,   564,   531,   532,   533,   534,   631,
     572,   535,   536,   569,   537,   544,   543,   552,   542,   538,
     539,   540,   548,   547,   546,   570,   530,   629,   630,   568,
     613,   607,   623,   608,   609,   610,   618,   626,   611,   620,
     624,   614,   625,   627,   615,   619,   612,   622,   617,   616,
     621,   628,     0,   606,   584,   585,   586,   579,   597,   580,
     581,   582,   592,   600,   583,   594,   598,   588,   599,   601,
     589,   593,   587,   596,   591,   590,   595,   602,     0,   578,
     565,   563,   566,   571,   567,   554,   561,   562,   559,   560,
     555,   556,   557,   558,   573,   574,   541,   551,   550,   553,
       0,     0,     0,     0,     0,     0,     0,     0,   306,     0,
       0,   442,     0,     0,     0,   301,   297,   300,   282,    50,
      51,     0,     0,   101,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,     0,     0,     0,   340,   674,
     671,   672,   673,   678,   677,   679,   675,   676,    86,    81,
      89,    80,    87,    88,    79,    83,    82,    74,    73,    78,
      75,    77,    76,    84,    85,     0,     0,   381,   128,     0,
       0,     0,   140,     0,   132,   133,   135,   134,     0,     0,
       0,     0,   110,   355,     0,     0,     0,   357,    31,    32,
      33,    34,    35,    36,    37,   270,   271,   262,   280,   279,
       0,   278,   263,   265,   267,   274,   266,   264,   273,   259,
     272,   261,   260,    38,    38,    38,    40,    39,   268,   269,
     425,   428,   429,   439,   436,   422,   437,   434,   435,     0,
     433,   438,   421,   427,   424,   426,   440,   423,   457,   458,
     472,   473,   604,     0,   576,     0,   320,   321,   331,   327,
     328,   330,   335,   332,   333,   326,   334,   329,     0,   325,
     319,   338,   337,   336,   318,   449,   448,   304,   303,   288,
     289,   287,     0,   286,     0,     0,     0,   107,   108,   174,
     171,   222,   234,   210,   219,     0,   208,   213,   228,   236,
       0,   221,   226,   232,   212,   215,   223,   225,   235,   229,
     220,   227,   216,   233,   218,   224,   214,   217,     0,   206,
     167,   169,   172,   173,   184,   185,   186,   179,   197,   180,
     181,   182,   192,   200,   183,   194,   198,   188,   199,   201,
     189,   193,   187,   196,   191,   190,   195,   202,     0,   178,
     168,   170,   349,   347,   348,   387,   392,   398,   401,   394,
     400,   395,   399,   397,   393,   396,     0,   391,   136,     0,
       0,     0,     0,   131,   119,   118,   120,   121,   364,   370,
     376,   379,   372,   378,   373,   377,   375,   371,   374,     0,
     369,   365,   276,     0,    41,    42,    43,   431,     0,   605,
     577,   323,     0,   284,     0,   302,   299,   298,     0,     0,
       0,     0,     0,   204,     0,   176,     0,   389,     0,     0,
       0,     0,     0,   130,   367,     0,   277,   432,   324,   285,
     209,   231,   207,   230,   211,   205,   177,   390,   137,   139,
     138,   150,   149,   145,   147,   151,   148,   144,   146,     0,
     143,   368,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1069, -1069, -1069,    14,  -310, -1068,  -641, -1069, -1069,  1000,
   -1069, -1069, -1069, -1069,   879, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069,  1064, -1069, -1069, -1069, -1069, -1069,
   -1069,   642, -1069, -1069, -1069, -1069, -1069,   584, -1069, -1069,
   -1069, -1069, -1069, -1069,   964, -1069, -1069, -1069, -1069,    79,
   -1069, -1069, -1069, -1069, -1069,  -189, -1069, -1069, -1069,   654,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069,  -150, -1069, -1069, -1069,  -140, -1069, -1069, -1069,   977,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,  -124,
   -1069, -1069, -1069, -1069, -1069,  -107, -1069,   687, -1069, -1069,
   -1069,    43, -1069, -1069, -1069, -1069, -1069,   726, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069,   -92, -1069, -1069, -1069, -1069,
   -1069, -1069,   660, -1069, -1069, -1069, -1069, -1069,   979, -1069,
   -1069, -1069, -1069,   606, -1069, -1069, -1069, -1069, -1069,   -95,
   -1069, -1069, -1069,   635, -1069, -1069, -1069, -1069,   -79, -1069,
   -1069, -1069,   980, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069,   -58, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,   743, -1069, -1069, -1069, -1069, -1069,   840,
   -1069, -1069, -1069, -1069,  1111, -1069, -1069, -1069, -1069,   981,
   -1069, -1069, -1069, -1069,  1057, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069,    92, -1069, -1069, -1069,    95, -1069, -1069,
   -1069, -1069, -1069,  1135, -1069, -1069, -1069, -1069, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069,   988, -1069, -1069,
   -1069, -1069, -1069, -1069, -1069, -1069, -1069
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   836,   837,  1106,  1107,    27,   225,   226,
     227,   228,    28,   271,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    29,    77,    78,    79,    80,    81,    30,    63,
     506,   507,   508,   509,    31,    70,   590,   591,   592,   593,
     594,   595,    32,   293,   294,   295,   296,   297,  1063,  1064,
    1065,  1066,  1067,  1251,  1329,  1330,    33,    64,   521,   522,
     523,   524,   525,   526,   527,   528,   529,   530,   531,   763,
    1228,  1229,   532,   758,  1198,  1199,    34,    53,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   629,  1090,  1091,
      35,    61,   492,   743,  1162,  1163,   493,   494,   495,  1166,
    1006,  1007,   496,   497,    36,    59,   470,   471,   472,   473,
     474,   475,   476,   728,  1148,  1149,   477,   478,   479,    37,
      65,   537,   538,   539,   540,   541,    38,   301,   302,   303,
      39,    72,   603,   604,   605,   606,   607,   821,  1269,  1270,
      40,    68,   576,   577,   578,   579,   804,  1246,  1247,    41,
      54,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   652,  1119,  1120,   387,   388,   389,   390,   391,
      42,    60,   483,   484,   485,   486,    43,    55,   395,   396,
     397,   398,    44,   112,   113,   114,    45,    57,   405,   406,
     407,   408,    46,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   440,   968,   969,   215,   439,   942,   943,   216,   217,
     218,    47,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    48,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     864,   865,   614,   585,   110,   617,   618,   299,   620,   621,
     710,   712,   863,    51,   711,   713,  1117,  1088,  1059,    52,
    1059,   291,    73,  1159,   480,    56,   402,    73,    58,   533,
      62,   573,   392,   110,  1132,  1274,  1275,  1276,  1133,   232,
     480,   299,   392,   116,    66,   533,   402,   599,   117,   118,
      67,   119,   120,    74,   291,   222,   121,    69,    74,    49,
      50,    75,   122,   123,   124,    71,    75,   107,   125,   126,
     111,   487,   534,   108,   233,   109,   127,   599,  1134,   128,
     129,   130,  1135,   131,   234,   235,   236,   132,   534,   237,
     238,  1089,   573,   115,   239,   240,   241,   324,   393,   111,
     673,   219,   675,   676,   133,   134,  1272,   586,   393,  1300,
    1273,   300,   535,   325,   326,   135,   503,   690,   136,   137,
     138,   327,  1060,   696,  1060,   585,    76,   139,   535,   488,
     403,    76,   705,   706,   140,   574,   141,   489,   142,   490,
     143,   253,   144,   145,   719,   300,   721,   722,   510,   220,
     403,   600,   221,   481,   146,   404,   223,   229,   536,   147,
     148,   394,   149,   150,   151,   328,   511,   152,  1160,   481,
     254,   394,   255,   587,   536,   404,   503,  1161,   224,   868,
     869,   600,   230,   329,   330,   331,   332,   333,   231,   512,
    1277,   334,   153,   588,  1278,   335,   574,   491,  -129,   504,
     256,   336,   154,   155,   156,   157,   158,   159,   160,   589,
     257,   337,   338,  1118,   290,  1281,   513,   461,  1061,  1282,
    1061,  1283,   339,  1293,   298,  1284,   304,  1294,   361,   586,
     362,  -129,   363,   258,   776,   462,   222,   259,   306,   815,
     400,   305,  1062,   340,  1062,   260,   364,   292,   307,   261,
     262,   482,   514,   615,  1252,   575,    82,   582,   463,   504,
     161,   162,   163,   309,   164,   165,   308,   482,   664,   365,
     515,   601,   311,   166,   602,   551,   738,   597,   263,   459,
     292,   772,   670,    83,    84,   464,   366,   312,   367,   341,
      85,   501,   498,   505,   264,   587,   368,   265,   266,   267,
     313,   601,   516,   517,   602,   314,   315,   745,   316,   369,
    1321,   317,  1322,   823,   318,   588,   575,   319,   850,    86,
      87,    88,   487,   855,   320,   510,   858,   461,   805,   321,
     862,   589,   370,   643,    89,    90,    91,   223,   399,   465,
    1295,    92,    93,   511,  1296,   462,   268,   466,   467,  1103,
    1104,  1105,   753,   505,   371,   518,  1297,  1323,  1304,   224,
    1298,  1332,  1305,   553,   580,  1333,   512,   468,   463,   269,
     270,   409,   410,   372,  1324,   519,   411,   571,   412,   520,
     488,   413,   373,   414,   766,   415,   584,   416,   489,   417,
     490,   418,   419,   513,   420,   464,   421,   422,   116,   423,
     424,   425,   426,   117,   118,   427,   119,   120,   428,   429,
     430,   121,  1325,  1326,   608,   431,   432,   122,   123,   124,
     433,   434,   435,   125,   126,   436,   437,   438,   441,   514,
     442,   127,   443,   374,   128,   129,   130,   444,   131,   445,
     446,   447,   132,   448,   469,   449,   450,   515,   491,   465,
     451,   452,   863,   734,   453,   609,   375,   466,   467,   133,
     134,   454,   455,   456,   660,   457,  1327,   458,   499,   500,
     135,   542,  1328,   136,   137,   138,   543,   468,   544,   516,
     517,  1171,   139,   545,  1138,   546,   547,   548,   549,   140,
     550,   141,   322,   142,   610,   143,   554,   144,   145,   555,
    1172,  1173,   556,   557,  1236,   558,   559,   560,   613,   146,
    1174,   561,  1139,   562,   147,   148,   563,   149,   150,   151,
     564,   565,   152,   361,   566,   362,   567,   363,   568,   569,
     570,   581,   518,   829,   830,   831,   832,   833,   834,   835,
     596,   364,   253,   611,  1140,   612,   613,   153,  1175,  1176,
     616,  1177,   519,   619,   469,   622,   520,   154,   155,   156,
     157,   158,   159,   160,   365,   623,  1237,   624,   625,   626,
     645,   254,   627,   255,   628,  1141,  1142,   666,   630,  1178,
     631,   366,  1143,   367,   632,  1179,   633,   634,  1180,   635,
     636,   368,   637,   638,   639,    82,   640,  1238,   641,   642,
     646,   256,   647,   648,   369,  1239,  1144,   649,   650,  1301,
    1181,   257,  1182,  1183,  1240,   161,   162,   163,   651,   164,
     165,  1145,    83,    84,   653,   654,   655,   370,   166,    85,
    1184,   656,   657,   672,   258,   658,   677,   659,   259,   662,
    1241,   663,  1242,  1243,   667,   668,   260,   674,   669,   371,
     261,   262,  1185,   678,   679,   680,  1244,  1186,    86,    87,
      88,  1187,   681,  1259,  1245,   682,  1188,  1189,   372,   683,
     684,   685,  1190,    89,    90,    91,  1191,   373,   686,   263,
      92,    93,   687,   688,   232,  1146,   691,  1192,   689,  1193,
    1194,   324,  1195,     2,     3,   264,   692,     4,   265,   266,
     267,   693,   694,  1196,  1147,   695,   697,   325,   326,     5,
     698,  1197,     6,   699,   700,   327,   701,     7,   702,   233,
     703,   704,   707,   708,     8,  1260,   709,   714,   374,   234,
     235,   236,   715,   716,   237,   238,   717,     9,   718,   239,
     240,   241,    10,    11,   720,   723,   726,   268,   724,   725,
     727,   375,   784,   729,   747,   748,  1261,   730,   777,   328,
     731,    12,   732,   733,  1262,    13,   774,   740,   736,   737,
     269,   270,   779,  1263,   741,   742,    14,   329,   330,   331,
     332,   333,   744,   749,   944,   334,   945,   946,   750,   335,
     751,   785,   752,   756,   755,   336,    15,    16,   757,  1264,
     759,  1265,  1266,   760,   761,   337,   338,   762,   764,   765,
     768,   788,    17,   783,   769,  1267,   339,   770,   771,   775,
     778,   780,   781,  1268,   782,   786,   787,   789,   790,    18,
     791,   792,  1204,   793,  1205,  1206,   794,   340,   795,   796,
     797,    19,    20,  1078,  1079,  1080,  1081,  1082,  1083,  1084,
     798,   799,   800,   801,   802,   803,   807,   808,   809,   810,
     817,   811,   848,   849,   812,    21,   852,   813,   814,   818,
     819,   820,   853,   825,   920,   822,   826,   827,    22,   828,
     854,   838,   839,   341,   840,    23,   841,   842,   843,   844,
      24,   845,   846,    25,   847,   859,   851,   856,   857,   860,
     861,   947,   948,   949,   863,   866,   950,   951,   867,   952,
     953,   871,   954,   874,   955,   870,   872,   956,   877,   957,
     958,   959,   873,   875,   876,   878,   879,   960,   880,   881,
     883,   961,   882,   884,   887,   962,   963,   964,   888,  1164,
     885,   994,   965,   886,  1005,   889,   991,   966,   990,  1207,
    1208,  1209,   890,   891,  1210,  1211,   892,  1212,  1213,   993,
    1214,   893,  1215,   894,   895,  1216,   967,  1217,  1218,  1219,
     896,   897,   898,   899,   900,  1220,   901,   902,   903,  1221,
     904,   905,   906,  1222,  1223,  1224,   907,   908,   995,   909,
    1225,   921,   922,   923,   992,  1226,   924,   925,   910,   926,
     927,   911,   928,   996,   929,   912,   913,   930,   914,   931,
     932,   933,   915,   916,  1227,   917,   997,   934,   918,   999,
    1000,   935,  1002,  1003,  1011,   936,   937,   938,   919,   970,
    1004,  1012,   939,  1014,  1017,   971,  1018,   940,  1019,   972,
    1022,  1023,  1025,   973,   974,   975,  1026,   976,   977,   978,
     979,   980,   981,   982,   983,   984,   941,   985,   986,  1015,
     987,   988,   989,  1020,   998,  1001,  1027,  1055,  1008,  1009,
    1010,  1013,  1068,  1069,  1024,  1016,  1021,  1028,  1056,  1029,
    1030,  1031,  1070,  1032,  1033,  1034,  1035,  1036,  1037,  1038,
    1039,  1040,  1041,  1042,  1043,  1044,  1071,  1045,  1046,  1047,
    1048,  1049,  1050,  1051,  1052,  1053,  1054,  1057,  1058,  1072,
    1073,  1074,  1076,  1077,  1085,  1075,  1086,  1087,  1092,  1093,
    1094,  1095,  1096,  1097,  1285,  1098,  1099,  1299,  1310,  1100,
    1312,  1311,  1314,  1101,  1102,  1108,  1109,  1110,  1111,  1313,
    1112,   310,  1253,  1113,  1334,  1114,  1316,  1115,   754,  1306,
     572,  1116,  1121,  1122,  1315,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1136,  1137,  1150,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,   816,   767,  1158,  1309,  1167,  1168,
     746,  1165,  1169,  1170,  1200,  1201,  1202,  1203,  1230,  1231,
    1308,  1232,  1233,  1234,  1235,  1248,   735,   773,  1254,  1249,
    1250,  1255,  1256,  1257,  1288,  1258,  1271,  1287,  1286,   824,
    1331,   806,  1303,  1289,  1290,  1291,  1292,  1302,  1318,  1317,
    1307,  1319,  1320,   401,   460,   502,   739,  1280,  1279,   323,
     552,     0,     0,     0,     0,   665,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   583,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     598,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   644,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   661,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   671
};

static const yytype_int16 yycheck[] =
{
     641,   642,   312,     1,     1,   315,   316,     1,   318,   319,
     217,   217,   114,   238,   221,   221,     8,    55,     1,   238,
       1,     1,     1,    51,     1,   238,     1,     1,   238,     1,
     238,     1,     1,     1,   236,  1103,  1104,  1105,   240,     1,
       1,     1,     1,     1,   238,     1,     1,     1,     6,     7,
     238,     9,    10,    32,     1,     1,    14,   238,    32,   236,
     237,    40,    20,    21,    22,   238,    40,   238,    26,    27,
      67,     1,    44,   238,    36,   238,    34,     1,   236,    37,
      38,    39,   240,    41,    46,    47,    48,    45,    44,    51,
      52,   129,     1,   238,    56,    57,    58,     1,    67,    67,
     410,   238,   412,   413,    62,    63,   236,   105,    67,   211,
     240,   105,    84,    17,    18,    73,     1,   427,    76,    77,
      78,    25,   105,   433,   105,     1,   105,    85,    84,    59,
     105,   105,   442,   443,    92,   105,    94,    67,    96,    69,
      98,     1,   100,   101,   454,   105,   456,   457,     1,   238,
     105,   105,   238,   130,   112,   130,   102,   238,   130,   117,
     118,   130,   120,   121,   122,    69,    19,   125,   196,   130,
      30,   130,    32,   171,   130,   130,     1,   205,   124,   182,
     183,   105,   238,    87,    88,    89,    90,    91,   238,    42,
     236,    95,   150,   191,   240,    99,   105,   127,   178,    84,
      60,   105,   160,   161,   162,   163,   164,   165,   166,   207,
      70,   115,   116,   205,   238,   236,    69,     1,   201,   240,
     201,   236,   126,   236,   238,   240,   238,   240,     1,   105,
       3,   178,     5,    93,   544,    19,     1,    97,   239,   237,
     237,   236,   225,   147,   225,   105,    19,   227,   239,   109,
     110,   228,   105,   217,   237,   225,     1,   237,    42,    84,
     218,   219,   220,   237,   222,   223,   239,   228,   237,    42,
     123,   225,   239,   231,   228,   237,   237,   237,   138,   237,
     227,   237,   237,    28,    29,    69,    59,   239,    61,   193,
      35,   237,   236,   178,   154,   171,    69,   157,   158,   159,
     239,   225,   155,   156,   228,   239,   239,   237,   239,    82,
      72,   239,    74,   237,   239,   191,   225,   239,   628,    64,
      65,    66,     1,   633,   239,     1,   636,     1,   237,   239,
     640,   207,   105,   237,    79,    80,    81,   102,   239,   123,
     236,    86,    87,    19,   240,    19,   206,   131,   132,    11,
      12,    13,   237,   178,   127,   208,   236,   119,   236,   124,
     240,   236,   240,   236,   236,   240,    42,   151,    42,   229,
     230,   239,   239,   146,   136,   228,   239,   237,   239,   232,
      59,   239,   155,   239,   237,   239,   178,   239,    67,   239,
      69,   239,   239,    69,   239,    69,   239,   239,     1,   239,
     239,   239,   239,     6,     7,   239,     9,    10,   239,   239,
     239,    14,   174,   175,   128,   239,   239,    20,    21,    22,
     239,   239,   239,    26,    27,   239,   239,   239,   239,   105,
     239,    34,   239,   206,    37,    38,    39,   239,    41,   239,
     239,   239,    45,   239,   228,   239,   239,   123,   127,   123,
     239,   239,   114,   237,   239,   128,   229,   131,   132,    62,
      63,   239,   239,   239,   237,   239,   228,   239,   239,   239,
      73,   239,   234,    76,    77,    78,   239,   151,   239,   155,
     156,     4,    85,   239,    15,   239,   239,   239,   239,    92,
     239,    94,   237,    96,   128,    98,   239,   100,   101,   239,
      23,    24,   239,   239,    74,   239,   239,   239,   114,   112,
      33,   239,    43,   239,   117,   118,   239,   120,   121,   122,
     239,   239,   125,     1,   239,     3,   239,     5,   239,   239,
     239,   239,   208,   139,   140,   141,   142,   143,   144,   145,
     239,    19,     1,   236,    75,   114,   114,   150,    71,    72,
     114,    74,   228,   114,   228,   114,   232,   160,   161,   162,
     163,   164,   165,   166,    42,   114,   136,   236,   236,   239,
     236,    30,   239,    32,   239,   106,   107,   128,   239,   102,
     239,    59,   113,    61,   239,   108,   239,   239,   111,   239,
     239,    69,   239,   239,   239,     1,   239,   167,   239,   239,
     239,    60,   239,   239,    82,   175,   137,   239,   239,  1250,
     133,    70,   135,   136,   184,   218,   219,   220,   239,   222,
     223,   152,    28,    29,   239,   239,   239,   105,   231,    35,
     153,   239,   239,   217,    93,   239,   128,   239,    97,   239,
     210,   239,   212,   213,   236,   239,   105,   114,   239,   127,
     109,   110,   175,   128,   128,   217,   226,   180,    64,    65,
      66,   184,   114,    74,   234,   217,   189,   190,   146,   114,
     114,   114,   195,    79,    80,    81,   199,   155,   217,   138,
      86,    87,   217,   217,     1,   216,   114,   210,   217,   212,
     213,     1,   215,     0,     1,   154,   114,     4,   157,   158,
     159,   128,   114,   226,   235,   114,   114,    17,    18,    16,
     114,   234,    19,   114,   114,    25,   217,    24,   239,    36,
     239,   217,   217,   217,    31,   136,   217,   217,   206,    46,
      47,    48,   217,   217,    51,    52,   217,    44,   114,    56,
      57,    58,    49,    50,   217,   217,   239,   206,   236,   236,
     239,   229,   114,   239,   128,   128,   167,   239,   128,    69,
     239,    68,   239,   239,   175,    72,   217,   236,   239,   239,
     229,   230,   128,   184,   239,   239,    83,    87,    88,    89,
      90,    91,   239,   236,    51,    95,    53,    54,   236,    99,
     239,   128,   239,   239,   236,   105,   103,   104,   239,   210,
     239,   212,   213,   239,   239,   115,   116,   239,   239,   239,
     236,   114,   119,   236,   239,   226,   126,   239,   239,   217,
     217,   217,   217,   234,   217,   217,   128,   114,   128,   136,
     128,   128,    51,   128,    53,    54,   128,   147,   128,   128,
     128,   148,   149,   829,   830,   831,   832,   833,   834,   835,
     128,   128,   128,   236,   236,   239,   217,   236,   238,   236,
     128,   239,   114,   114,   239,   172,   114,   239,   239,   236,
     236,   239,   114,   236,    51,   239,   236,   236,   185,   236,
     114,   236,   236,   193,   236,   192,   236,   236,   236,   236,
     197,   236,   236,   200,   236,   128,   239,   114,   114,   114,
     114,   168,   169,   170,   114,   236,   173,   174,   128,   176,
     177,   217,   179,   239,   181,   128,   128,   184,   114,   186,
     187,   188,   128,   128,   128,   128,   128,   194,   128,   128,
     128,   198,   236,   128,   128,   202,   203,   204,   128,   224,
     236,   114,   209,   236,   114,   236,   217,   214,   128,   168,
     169,   170,   236,   236,   173,   174,   236,   176,   177,   128,
     179,   236,   181,   236,   236,   184,   233,   186,   187,   188,
     236,   236,   236,   236,   236,   194,   236,   236,   236,   198,
     236,   236,   236,   202,   203,   204,   236,   236,   128,   236,
     209,   168,   169,   170,   239,   214,   173,   174,   236,   176,
     177,   236,   179,   128,   181,   236,   236,   184,   236,   186,
     187,   188,   236,   236,   233,   236,   128,   194,   236,   128,
     128,   198,   128,   128,   128,   202,   203,   204,   236,   236,
     239,   128,   209,   128,   128,   236,   128,   214,   128,   236,
     128,   128,   128,   236,   236,   236,   128,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   233,   236,   236,   217,
     236,   236,   236,   217,   236,   236,   128,   128,   236,   236,
     236,   236,   128,   128,   236,   239,   239,   236,   239,   236,
     236,   236,   128,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   128,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   128,   128,   236,   236,   239,   236,   236,   236,   236,
     236,   236,   236,   236,   114,   236,   236,   128,   134,   236,
     134,   136,   134,   236,   236,   236,   236,   236,   236,   136,
     236,    77,  1063,   236,  1333,   236,  1296,   236,   506,  1273,
     271,   236,   236,   236,  1294,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   590,   521,   236,  1284,   236,   236,
     493,   240,   236,   236,   236,   236,   236,   236,   236,   236,
    1282,   236,   236,   236,   236,   236,   470,   537,   236,   239,
     239,   236,   236,   236,   241,   236,   236,   236,  1165,   603,
    1305,   576,   236,   241,   241,   241,   241,   239,   236,  1298,
    1278,   236,   236,   112,   167,   225,   483,  1135,  1133,    94,
     242,    -1,    -1,    -1,    -1,   395,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   293,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   405
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   243,     0,     1,     4,    16,    19,    24,    31,    44,
      49,    50,    68,    72,    83,   103,   104,   119,   136,   148,
     149,   172,   185,   192,   197,   200,   244,   249,   254,   274,
     280,   286,   294,   308,   328,   352,   366,   381,   388,   392,
     402,   411,   432,   438,   444,   448,   454,   513,   527,   236,
     237,   238,   238,   329,   412,   439,   238,   449,   238,   367,
     433,   353,   238,   281,   309,   382,   238,   238,   403,   238,
     287,   238,   393,     1,    32,    40,   105,   275,   276,   277,
     278,   279,     1,    28,    29,    35,    64,    65,    66,    79,
      80,    81,    86,    87,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   238,   238,   238,
       1,    67,   445,   446,   447,   238,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    26,    27,    34,    37,    38,
      39,    41,    45,    62,    63,    73,    76,    77,    78,    85,
      92,    94,    96,    98,   100,   101,   112,   117,   118,   120,
     121,   122,   125,   150,   160,   161,   162,   163,   164,   165,
     166,   218,   219,   220,   222,   223,   231,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   501,   502,   506,   510,   511,   512,   238,
     238,   238,     1,   102,   124,   250,   251,   252,   253,   238,
     238,   238,     1,    36,    46,    47,    48,    51,    52,    56,
      57,    58,   528,   529,   530,   531,   532,   533,   534,   535,
     536,   537,   538,     1,    30,    32,    60,    70,    93,    97,
     105,   109,   110,   138,   154,   157,   158,   159,   206,   229,
     230,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     238,     1,   227,   295,   296,   297,   298,   299,   238,     1,
     105,   389,   390,   391,   238,   236,   239,   239,   239,   237,
     276,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   237,   515,     1,    17,    18,    25,    69,    87,
      88,    89,    90,    91,    95,    99,   105,   115,   116,   126,
     147,   193,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,     1,     3,     5,    19,    42,    59,    61,    69,    82,
     105,   127,   146,   155,   206,   229,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   422,   423,   427,   428,   429,
     430,   431,     1,    67,   130,   440,   441,   442,   443,   239,
     237,   446,     1,   105,   130,   450,   451,   452,   453,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   507,
     503,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   237,
     456,     1,    19,    42,    69,   123,   131,   132,   151,   228,
     368,   369,   370,   371,   372,   373,   374,   378,   379,   380,
       1,   130,   228,   434,   435,   436,   437,     1,    59,    67,
      69,   127,   354,   358,   359,   360,   364,   365,   236,   239,
     239,   237,   251,     1,    84,   178,   282,   283,   284,   285,
       1,    19,    42,    69,   105,   123,   155,   156,   208,   228,
     232,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   324,     1,    44,    84,   130,   383,   384,   385,
     386,   387,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   237,   529,   236,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   237,   256,     1,   105,   225,   404,   405,   406,   407,
     236,   239,   237,   296,   178,     1,   105,   171,   191,   207,
     288,   289,   290,   291,   292,   293,   239,   237,   390,     1,
     105,   225,   228,   394,   395,   396,   397,   398,   128,   128,
     128,   236,   114,   114,   246,   217,   114,   246,   246,   114,
     246,   246,   114,   114,   236,   236,   239,   239,   239,   349,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   237,   331,   236,   239,   239,   239,   239,
     239,   239,   424,   239,   239,   239,   239,   239,   239,   239,
     237,   414,   239,   239,   237,   441,   128,   236,   239,   239,
     237,   451,   217,   246,   114,   246,   246,   128,   128,   128,
     217,   114,   217,   114,   114,   114,   217,   217,   217,   217,
     246,   114,   114,   128,   114,   114,   246,   114,   114,   114,
     114,   217,   239,   239,   217,   246,   246,   217,   217,   217,
     217,   221,   217,   221,   217,   217,   217,   217,   114,   246,
     217,   246,   246,   217,   236,   236,   239,   239,   375,   239,
     239,   239,   239,   239,   237,   369,   239,   239,   237,   435,
     236,   239,   239,   355,   239,   237,   359,   128,   128,   236,
     236,   239,   239,   237,   283,   236,   239,   239,   325,   239,
     239,   239,   239,   321,   239,   239,   237,   311,   236,   239,
     239,   239,   237,   384,   217,   217,   246,   128,   217,   128,
     217,   217,   217,   236,   114,   128,   217,   128,   114,   114,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   236,   236,   239,   408,   237,   405,   217,   236,   238,
     236,   239,   239,   239,   239,   237,   289,   128,   236,   236,
     239,   399,   239,   237,   395,   236,   236,   236,   236,   139,
     140,   141,   142,   143,   144,   145,   245,   246,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   114,   114,
     246,   239,   114,   114,   114,   246,   114,   114,   246,   128,
     114,   114,   246,   114,   248,   248,   236,   128,   182,   183,
     128,   217,   128,   128,   239,   128,   128,   114,   128,   128,
     128,   128,   236,   128,   128,   236,   236,   128,   128,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
      51,   168,   169,   170,   173,   174,   176,   177,   179,   181,
     184,   186,   187,   188,   194,   198,   202,   203,   204,   209,
     214,   233,   508,   509,    51,    53,    54,   168,   169,   170,
     173,   174,   176,   177,   179,   181,   184,   186,   187,   188,
     194,   198,   202,   203,   204,   209,   214,   233,   504,   505,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     128,   217,   239,   128,   114,   128,   128,   128,   236,   128,
     128,   236,   128,   128,   239,   114,   362,   363,   236,   236,
     236,   128,   128,   236,   128,   217,   239,   128,   128,   128,
     217,   239,   128,   128,   236,   128,   128,   128,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   128,   239,   236,   236,     1,
     105,   201,   225,   300,   301,   302,   303,   304,   128,   128,
     128,   128,   236,   236,   128,   239,   128,   236,   245,   245,
     245,   245,   245,   245,   245,   236,   236,   236,    55,   129,
     350,   351,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,    11,    12,    13,   247,   248,   236,   236,
     236,   236,   236,   236,   236,   236,   236,     8,   205,   425,
     426,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   240,   236,   240,   236,   236,    15,    43,
      75,   106,   107,   113,   137,   152,   216,   235,   376,   377,
     236,   236,   236,   236,   236,   236,   236,   236,   236,    51,
     196,   205,   356,   357,   224,   240,   361,   236,   236,   236,
     236,     4,    23,    24,    33,    71,    72,    74,   102,   108,
     111,   133,   135,   136,   153,   175,   180,   184,   189,   190,
     195,   199,   210,   212,   213,   215,   226,   234,   326,   327,
     236,   236,   236,   236,    51,    53,    54,   168,   169,   170,
     173,   174,   176,   177,   179,   181,   184,   186,   187,   188,
     194,   198,   202,   203,   204,   209,   214,   233,   322,   323,
     236,   236,   236,   236,   236,   236,    74,   136,   167,   175,
     184,   210,   212,   213,   226,   234,   409,   410,   236,   239,
     239,   305,   237,   301,   236,   236,   236,   236,   236,    74,
     136,   167,   175,   184,   210,   212,   213,   226,   234,   400,
     401,   236,   236,   240,   247,   247,   247,   236,   240,   509,
     505,   236,   240,   236,   240,   114,   363,   236,   241,   241,
     241,   241,   241,   236,   240,   236,   240,   236,   240,   128,
     211,   248,   239,   236,   236,   240,   351,   426,   377,   357,
     134,   136,   134,   136,   134,   327,   323,   410,   236,   236,
     236,    72,    74,   119,   136,   174,   175,   228,   234,   306,
     307,   401,   236,   240,   307
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   242,   243,   243,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   245,   245,
     246,   246,   246,   246,   246,   246,   246,   246,   247,   247,
     248,   248,   248,   248,   249,   250,   250,   251,   251,   251,
     252,   253,   254,   255,   255,   256,   256,   256,   256,   256,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     256,   256,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   275,   276,   276,   276,   276,   277,   278,   279,
     281,   280,   282,   282,   283,   283,   283,   284,   285,   287,
     286,   288,   288,   289,   289,   289,   289,   289,   290,   291,
     292,   293,   294,   295,   295,   296,   296,   296,   297,   299,
     298,   300,   300,   301,   301,   301,   301,   302,   303,   303,
     305,   304,   306,   306,   307,   307,   307,   307,   307,   307,
     307,   307,   309,   308,   310,   310,   311,   311,   311,   311,
     311,   311,   311,   311,   311,   311,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   321,   320,   322,   322,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   325,   324,   326,   326,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   329,   328,   330,
     330,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   349,   348,   350,   350,   351,
     351,   353,   352,   355,   354,   356,   356,   357,   357,   357,
     358,   358,   359,   359,   359,   359,   359,   361,   360,   362,
     362,   363,   363,   364,   365,   367,   366,   368,   368,   369,
     369,   369,   369,   369,   369,   369,   369,   369,   370,   371,
     372,   373,   375,   374,   376,   376,   377,   377,   377,   377,
     377,   377,   377,   377,   377,   377,   378,   379,   380,   382,
     381,   383,   383,   384,   384,   384,   384,   385,   386,   387,
     388,   389,   389,   390,   390,   391,   393,   392,   394,   394,
     395,   395,   395,   395,   396,   397,   399,   398,   400,   400,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     403,   402,   404,   404,   405,   405,   405,   406,   408,   407,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   412,   411,   413,   413,   414,   414,   414,   414,
     414,   414,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   415,   416,   417,   418,   419,   420,   421,   422,   422,
     424,   423,   425,   425,   426,   426,   427,   428,   429,   430,
     431,   433,   432,   434,   434,   435,   435,   435,   436,   437,
     439,   438,   440,   440,   441,   441,   441,   442,   443,   444,
     445,   445,   446,   446,   447,   449,   448,   450,   450,   451,
     451,   451,   452,   453,   454,   455,   455,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     488,   489,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   503,   502,   504,   504,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   505,   505,   505,   505,   505,   505,   505,
     505,   505,   505,   507,   506,   508,   508,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   510,
     511,   512,   513,   514,   514,   515,   515,   515,   515,   515,
     515,   515,   515,   515,   515,   515,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527,   528,
     528,   529,   529,   529,   529,   529,   529,   529,   529,   529,
     529,   530,   531,   532,   533,   534,   535,   536,   537,   538
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
       1,     1,     1,     0,     5,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     0,     6,     2,
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
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 423 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2912 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 424 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2918 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 425 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2924 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 426 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 427 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2936 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 428 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 429 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 430 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 431 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2984 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 438 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 451 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 2999 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 457 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 3008 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 490 "conf_parser.y" /* yacc.c:1646  */
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
#line 530 "conf_parser.y" /* yacc.c:1646  */
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
#line 588 "conf_parser.y" /* yacc.c:1646  */
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
#line 617 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3155 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 625 "conf_parser.y" /* yacc.c:1646  */
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
#line 639 "conf_parser.y" /* yacc.c:1646  */
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
#line 667 "conf_parser.y" /* yacc.c:1646  */
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
#line 682 "conf_parser.y" /* yacc.c:1646  */
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
#line 697 "conf_parser.y" /* yacc.c:1646  */
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
#line 707 "conf_parser.y" /* yacc.c:1646  */
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
#line 721 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3281 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 730 "conf_parser.y" /* yacc.c:1646  */
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
#line 758 "conf_parser.y" /* yacc.c:1646  */
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
#line 786 "conf_parser.y" /* yacc.c:1646  */
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
#line 811 "conf_parser.y" /* yacc.c:1646  */
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
#line 833 "conf_parser.y" /* yacc.c:1646  */
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
#line 855 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3430 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 873 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3442 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 882 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3454 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 891 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 904 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3475 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 908 "conf_parser.y" /* yacc.c:1646  */
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
#line 925 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 931 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 941 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3519 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 945 "conf_parser.y" /* yacc.c:1646  */
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
#line 963 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 969 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 975 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 981 "conf_parser.y" /* yacc.c:1646  */
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
#line 1009 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1015 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3603 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1019 "conf_parser.y" /* yacc.c:1646  */
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
#line 1035 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3627 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1043 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3635 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1046 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3643 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1051 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1058 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1062 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3670 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1066 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1070 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1074 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3697 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1078 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3706 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1082 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3715 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1086 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3724 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1096 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3736 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1103 "conf_parser.y" /* yacc.c:1646  */
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
#line 1166 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3798 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1172 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3807 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1178 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3816 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1184 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3825 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1190 "conf_parser.y" /* yacc.c:1646  */
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
#line 1201 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3848 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1207 "conf_parser.y" /* yacc.c:1646  */
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
#line 1218 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3871 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1224 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3880 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1231 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
#line 3889 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1235 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
#line 3898 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1239 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3907 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1243 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
#line 3916 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1247 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
#line 3925 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1251 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3934 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1255 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3943 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1259 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3952 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1263 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
#line 3961 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1267 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
#line 3970 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1271 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
#line 3979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1275 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
#line 3988 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1279 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3997 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1283 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
#line 4006 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1287 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 4015 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1291 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 4024 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1295 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 4033 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1299 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 4042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1303 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1307 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4060 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1311 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4069 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1315 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4078 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1319 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1323 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4096 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1329 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4105 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1336 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1340 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1344 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1348 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4141 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1352 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4150 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1356 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4159 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1360 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4168 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1364 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4177 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1368 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1372 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4195 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1376 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1380 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4213 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1384 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4222 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1388 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4231 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1392 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4240 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1396 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4249 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1400 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1404 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4267 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1408 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4276 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1412 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4285 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1416 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4294 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1420 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4303 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1424 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4312 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1428 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4321 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1432 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4330 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1436 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4339 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1440 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1444 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4357 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1448 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4366 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1452 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4375 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1462 "conf_parser.y" /* yacc.c:1646  */
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
#line 4392 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1474 "conf_parser.y" /* yacc.c:1646  */
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
#line 4440 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1538 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4449 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1544 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4458 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1550 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4467 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1556 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1562 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4485 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1568 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4494 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1574 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4503 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1580 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1586 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4521 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1592 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4530 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1598 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4540 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1605 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4549 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1611 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4558 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1617 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4567 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1623 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4579 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1632 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1641 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1648 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1652 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4618 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1662 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4627 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1668 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4635 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1674 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1678 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4653 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1682 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4662 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1690 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4668 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1695 "conf_parser.y" /* yacc.c:1646  */
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
#line 4686 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1708 "conf_parser.y" /* yacc.c:1646  */
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
#line 4706 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1725 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4715 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1731 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4724 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1741 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4733 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1745 "conf_parser.y" /* yacc.c:1646  */
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
#line 4774 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1794 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4783 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1800 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4792 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1806 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4801 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1812 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4815 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1823 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4824 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1830 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4833 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1834 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4842 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1838 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4851 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1842 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4860 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1846 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1850 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4878 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1854 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4887 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1858 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4896 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1862 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1866 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1872 "conf_parser.y" /* yacc.c:1646  */
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
#line 4931 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1886 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 4943 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1895 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 4955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1908 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 4967 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1915 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 4978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1926 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4987 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1932 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1938 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 5005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1953 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5020 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1969 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5036 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1980 "conf_parser.y" /* yacc.c:1646  */
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
#line 5053 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1997 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5062 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2003 "conf_parser.y" /* yacc.c:1646  */
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
#line 5084 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2022 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5093 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2029 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5102 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2033 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5111 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2037 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5120 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2041 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5129 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2045 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5138 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2049 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5147 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2053 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5156 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2057 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5165 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2061 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5174 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2065 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5183 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2075 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5197 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2084 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5212 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2099 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5221 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2105 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5230 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2112 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5239 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2116 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5248 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2120 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5257 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2124 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5266 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2128 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2132 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5284 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2136 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5293 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2140 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5302 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2144 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5311 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2148 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5320 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2158 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5334 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2167 "conf_parser.y" /* yacc.c:1646  */
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
#line 5400 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2247 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5409 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2253 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2259 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2265 "conf_parser.y" /* yacc.c:1646  */
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
#line 5443 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2278 "conf_parser.y" /* yacc.c:1646  */
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
#line 5459 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2291 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5468 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2297 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5477 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2303 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5486 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 2307 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5495 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 2313 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5503 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2319 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2323 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5521 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2329 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5535 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2340 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5544 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2346 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5553 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2352 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5562 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2358 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2373 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2377 "conf_parser.y" /* yacc.c:1646  */
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
#line 5610 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2402 "conf_parser.y" /* yacc.c:1646  */
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
#line 5633 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2422 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5642 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2432 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2436 "conf_parser.y" /* yacc.c:1646  */
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
#line 5677 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2462 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5686 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2468 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5695 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2483 "conf_parser.y" /* yacc.c:1646  */
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
#line 5712 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2500 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2504 "conf_parser.y" /* yacc.c:1646  */
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
#line 5743 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2526 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5752 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2532 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5761 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2598 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5769 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2603 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5777 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2608 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5785 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2613 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5797 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2622 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5809 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2631 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5821 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2640 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5830 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2646 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5838 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2651 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5846 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2656 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.enable_cloak_system = yylval.number;
}
#line 5855 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2662 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5863 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2667 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5871 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2672 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.kline_reason);
    ConfigGeneral.kline_reason = xstrdup(yylval.string);
  }
}
#line 5883 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2681 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5891 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2686 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5899 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2691 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5907 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2696 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5915 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2701 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2706 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5931 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2711 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 5939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2716 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 5947 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2721 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 5955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2726 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 5963 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2731 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 5972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2737 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 5980 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2742 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 5988 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2747 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 5996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2752 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 6004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2757 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 6012 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2762 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 6020 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2767 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6028 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2772 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6036 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2775 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6044 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2780 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6052 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2783 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6060 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2788 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6068 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2793 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6076 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2798 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6084 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2803 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6092 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2808 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6100 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2813 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2818 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6116 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2823 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6124 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2828 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2833 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6140 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2838 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2843 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6156 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2848 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6164 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2854 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BOTS;
}
#line 6172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2857 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CCONN;
}
#line 6180 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2860 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6188 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2863 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEBUG;
}
#line 6196 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2866 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FULL;
}
#line 6204 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2869 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6212 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2872 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2875 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2878 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SKILL;
}
#line 6236 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2881 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NCHANGE;
}
#line 6244 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2884 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REJ;
}
#line 6252 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2887 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_UNAUTH;
}
#line 6260 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2890 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6268 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2893 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_EXTERNAL;
}
#line 6276 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2896 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6284 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2899 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2902 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2905 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6308 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2908 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6316 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2911 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6324 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2914 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2917 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6340 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2920 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6348 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2923 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6356 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2928 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6364 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2934 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_BOTS;
}
#line 6372 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2937 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CCONN;
}
#line 6380 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2940 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6388 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2943 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEBUG;
}
#line 6396 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2946 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FULL;
}
#line 6404 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2949 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SKILL;
}
#line 6412 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2952 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2955 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_NCHANGE;
}
#line 6428 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2958 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REJ;
}
#line 6436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2961 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_UNAUTH;
}
#line 6444 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2964 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6452 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2967 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_EXTERNAL;
}
#line 6460 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2970 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6468 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2973 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2976 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6484 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2979 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2982 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6500 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2985 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6508 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2988 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2991 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6524 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2994 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6532 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2997 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6540 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3002 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6548 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 630:
#line 3007 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6556 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 631:
#line 3012 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3037 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6572 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3042 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3047 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6588 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3052 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3057 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6604 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3062 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6612 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3067 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3072 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3077 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6636 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 656:
#line 3082 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3087 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6652 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3110 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6661 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3116 "conf_parser.y" /* yacc.c:1646  */
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
#line 3132 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6692 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3141 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6701 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3147 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6710 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3153 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6719 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3159 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6731 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 678:
#line 3168 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6740 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 679:
#line 3174 "conf_parser.y" /* yacc.c:1646  */
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
