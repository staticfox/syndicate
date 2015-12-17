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
    KNOCK_CLIENT_COUNT = 333,
    KNOCK_CLIENT_TIME = 334,
    KNOCK_DELAY_CHANNEL = 335,
    LEAF_MASK = 336,
    LISTEN = 337,
    MASK = 338,
    MAX_ACCEPT = 339,
    MAX_BANS = 340,
    MAX_CHANNELS = 341,
    MAX_GLOBAL = 342,
    MAX_IDENT = 343,
    MAX_IDLE = 344,
    MAX_LOCAL = 345,
    MAX_NICK_CHANGES = 346,
    MAX_NICK_LENGTH = 347,
    MAX_NICK_TIME = 348,
    MAX_NUMBER = 349,
    MAX_TARGETS = 350,
    MAX_TOPIC_LENGTH = 351,
    MAX_WATCH = 352,
    MIN_IDLE = 353,
    MIN_NONWILDCARD = 354,
    MIN_NONWILDCARD_SIMPLE = 355,
    MODULE = 356,
    MODULES = 357,
    MOTD = 358,
    NAME = 359,
    NEED_IDENT = 360,
    NEED_PASSWORD = 361,
    NETADMIN = 362,
    NETWORK_DESC = 363,
    NETWORK_NAME = 364,
    NICK = 365,
    NO_OPER_FLOOD = 366,
    NO_TILDE = 367,
    NUMBER = 368,
    NUMBER_PER_CIDR = 369,
    NUMBER_PER_IP = 370,
    OPER_ONLY_UMODES = 371,
    OPER_UMODES = 372,
    OPERATOR = 373,
    OPERS_BYPASS_CALLERID = 374,
    PACE_WAIT = 375,
    PACE_WAIT_SIMPLE = 376,
    PASSWORD = 377,
    PATH = 378,
    PING_COOKIE = 379,
    PING_TIME = 380,
    PORT = 381,
    QSTRING = 382,
    RANDOM_IDLE = 383,
    REASON = 384,
    REDIRPORT = 385,
    REDIRSERV = 386,
    REHASH = 387,
    REMOTE = 388,
    REMOTEBAN = 389,
    RESV = 390,
    RESV_EXEMPT = 391,
    RSA_PRIVATE_KEY_FILE = 392,
    SECONDS = 393,
    MINUTES = 394,
    HOURS = 395,
    DAYS = 396,
    WEEKS = 397,
    MONTHS = 398,
    YEARS = 399,
    SEND_PASSWORD = 400,
    SENDQ = 401,
    SERVERHIDE = 402,
    SERVERINFO = 403,
    SHORT_MOTD = 404,
    SPOOF = 405,
    SPOOF_NOTICE = 406,
    SQUIT = 407,
    SSL_CERTIFICATE_FILE = 408,
    SSL_CERTIFICATE_FINGERPRINT = 409,
    SSL_CONNECTION_REQUIRED = 410,
    SSL_DH_ELLIPTIC_CURVE = 411,
    SSL_DH_PARAM_FILE = 412,
    SSL_MESSAGE_DIGEST_ALGORITHM = 413,
    STATS_E_DISABLED = 414,
    STATS_I_OPER_ONLY = 415,
    STATS_K_OPER_ONLY = 416,
    STATS_M_OPER_ONLY = 417,
    STATS_O_OPER_ONLY = 418,
    STATS_P_OPER_ONLY = 419,
    STATS_U_OPER_ONLY = 420,
    T_ALL = 421,
    T_BOTS = 422,
    T_CALLERID = 423,
    T_CCONN = 424,
    T_COMMAND = 425,
    T_CLUSTER = 426,
    T_DEAF = 427,
    T_DEBUG = 428,
    T_DLINE = 429,
    T_EXTERNAL = 430,
    T_FARCONNECT = 431,
    T_FILE = 432,
    T_FULL = 433,
    T_GLOBOPS = 434,
    T_INVISIBLE = 435,
    T_IPV4 = 436,
    T_IPV6 = 437,
    T_LOCOPS = 438,
    T_LOG = 439,
    T_NCHANGE = 440,
    T_NONONREG = 441,
    T_OPERWALL = 442,
    T_OPERWALLS = 443,
    T_OPME = 444,
    T_PREPEND = 445,
    T_PSEUDO = 446,
    T_RECVQ = 447,
    T_REJ = 448,
    T_RESTART = 449,
    T_SERVER = 450,
    T_SERVICE = 451,
    T_SERVNOTICE = 452,
    T_SET = 453,
    T_SHARED = 454,
    T_SIZE = 455,
    T_SKILL = 456,
    T_SOFTCALLERID = 457,
    T_SPY = 458,
    T_SSL = 459,
    T_SSL_CIPHER_LIST = 460,
    T_TARGET = 461,
    T_UMODES = 462,
    T_UNAUTH = 463,
    T_UNDLINE = 464,
    T_UNLIMITED = 465,
    T_UNRESV = 466,
    T_UNXLINE = 467,
    T_WALLOP = 468,
    T_WALLOPS = 469,
    T_WEBIRC = 470,
    TBOOL = 471,
    THROTTLE_COUNT = 472,
    THROTTLE_TIME = 473,
    TKLINE_EXPIRE_NOTICES = 474,
    TMASKED = 475,
    TS_MAX_DELTA = 476,
    TS_WARN_DELTA = 477,
    TWODOTS = 478,
    TYPE = 479,
    UNKLINE = 480,
    USE_LOGGING = 481,
    USER = 482,
    VHOST = 483,
    VHOST6 = 484,
    WARN_NO_CONNECT_BLOCK = 485,
    WHOIS = 486,
    WHOIS_NOTIFY = 487,
    XLINE = 488,
    XLINE_EXEMPT = 489
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
#define KNOCK_CLIENT_COUNT 333
#define KNOCK_CLIENT_TIME 334
#define KNOCK_DELAY_CHANNEL 335
#define LEAF_MASK 336
#define LISTEN 337
#define MASK 338
#define MAX_ACCEPT 339
#define MAX_BANS 340
#define MAX_CHANNELS 341
#define MAX_GLOBAL 342
#define MAX_IDENT 343
#define MAX_IDLE 344
#define MAX_LOCAL 345
#define MAX_NICK_CHANGES 346
#define MAX_NICK_LENGTH 347
#define MAX_NICK_TIME 348
#define MAX_NUMBER 349
#define MAX_TARGETS 350
#define MAX_TOPIC_LENGTH 351
#define MAX_WATCH 352
#define MIN_IDLE 353
#define MIN_NONWILDCARD 354
#define MIN_NONWILDCARD_SIMPLE 355
#define MODULE 356
#define MODULES 357
#define MOTD 358
#define NAME 359
#define NEED_IDENT 360
#define NEED_PASSWORD 361
#define NETADMIN 362
#define NETWORK_DESC 363
#define NETWORK_NAME 364
#define NICK 365
#define NO_OPER_FLOOD 366
#define NO_TILDE 367
#define NUMBER 368
#define NUMBER_PER_CIDR 369
#define NUMBER_PER_IP 370
#define OPER_ONLY_UMODES 371
#define OPER_UMODES 372
#define OPERATOR 373
#define OPERS_BYPASS_CALLERID 374
#define PACE_WAIT 375
#define PACE_WAIT_SIMPLE 376
#define PASSWORD 377
#define PATH 378
#define PING_COOKIE 379
#define PING_TIME 380
#define PORT 381
#define QSTRING 382
#define RANDOM_IDLE 383
#define REASON 384
#define REDIRPORT 385
#define REDIRSERV 386
#define REHASH 387
#define REMOTE 388
#define REMOTEBAN 389
#define RESV 390
#define RESV_EXEMPT 391
#define RSA_PRIVATE_KEY_FILE 392
#define SECONDS 393
#define MINUTES 394
#define HOURS 395
#define DAYS 396
#define WEEKS 397
#define MONTHS 398
#define YEARS 399
#define SEND_PASSWORD 400
#define SENDQ 401
#define SERVERHIDE 402
#define SERVERINFO 403
#define SHORT_MOTD 404
#define SPOOF 405
#define SPOOF_NOTICE 406
#define SQUIT 407
#define SSL_CERTIFICATE_FILE 408
#define SSL_CERTIFICATE_FINGERPRINT 409
#define SSL_CONNECTION_REQUIRED 410
#define SSL_DH_ELLIPTIC_CURVE 411
#define SSL_DH_PARAM_FILE 412
#define SSL_MESSAGE_DIGEST_ALGORITHM 413
#define STATS_E_DISABLED 414
#define STATS_I_OPER_ONLY 415
#define STATS_K_OPER_ONLY 416
#define STATS_M_OPER_ONLY 417
#define STATS_O_OPER_ONLY 418
#define STATS_P_OPER_ONLY 419
#define STATS_U_OPER_ONLY 420
#define T_ALL 421
#define T_BOTS 422
#define T_CALLERID 423
#define T_CCONN 424
#define T_COMMAND 425
#define T_CLUSTER 426
#define T_DEAF 427
#define T_DEBUG 428
#define T_DLINE 429
#define T_EXTERNAL 430
#define T_FARCONNECT 431
#define T_FILE 432
#define T_FULL 433
#define T_GLOBOPS 434
#define T_INVISIBLE 435
#define T_IPV4 436
#define T_IPV6 437
#define T_LOCOPS 438
#define T_LOG 439
#define T_NCHANGE 440
#define T_NONONREG 441
#define T_OPERWALL 442
#define T_OPERWALLS 443
#define T_OPME 444
#define T_PREPEND 445
#define T_PSEUDO 446
#define T_RECVQ 447
#define T_REJ 448
#define T_RESTART 449
#define T_SERVER 450
#define T_SERVICE 451
#define T_SERVNOTICE 452
#define T_SET 453
#define T_SHARED 454
#define T_SIZE 455
#define T_SKILL 456
#define T_SOFTCALLERID 457
#define T_SPY 458
#define T_SSL 459
#define T_SSL_CIPHER_LIST 460
#define T_TARGET 461
#define T_UMODES 462
#define T_UNAUTH 463
#define T_UNDLINE 464
#define T_UNLIMITED 465
#define T_UNRESV 466
#define T_UNXLINE 467
#define T_WALLOP 468
#define T_WALLOPS 469
#define T_WEBIRC 470
#define TBOOL 471
#define THROTTLE_COUNT 472
#define THROTTLE_TIME 473
#define TKLINE_EXPIRE_NOTICES 474
#define TMASKED 475
#define TS_MAX_DELTA 476
#define TS_WARN_DELTA 477
#define TWODOTS 478
#define TYPE 479
#define UNKLINE 480
#define USE_LOGGING 481
#define USER 482
#define VHOST 483
#define VHOST6 484
#define WARN_NO_CONNECT_BLOCK 485
#define WHOIS 486
#define WHOIS_NOTIFY 487
#define XLINE 488
#define XLINE_EXEMPT 489

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 704 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 719 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1360

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  241
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  296
/* YYNRULES -- Number of rules.  */
#define YYNRULES  677
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1330

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   489

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
       2,     2,     2,     2,   239,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   240,   235,
       2,   238,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   237,     2,   236,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   391,   391,   392,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   422,   422,
     423,   424,   425,   426,   427,   428,   429,   430,   433,   433,
     434,   435,   436,   437,   444,   446,   446,   447,   447,   447,
     449,   455,   465,   467,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   488,   528,   586,   615,   623,   637,   665,
     680,   695,   705,   719,   728,   756,   784,   809,   831,   853,
     863,   865,   865,   866,   867,   868,   869,   871,   880,   889,
     903,   902,   920,   920,   921,   921,   921,   923,   929,   940,
     939,   958,   958,   959,   959,   959,   959,   959,   961,   967,
     973,   979,  1001,  1002,  1002,  1004,  1004,  1005,  1007,  1014,
    1014,  1027,  1028,  1030,  1030,  1031,  1031,  1033,  1041,  1044,
    1050,  1049,  1055,  1055,  1056,  1060,  1064,  1068,  1072,  1076,
    1080,  1084,  1095,  1094,  1151,  1151,  1152,  1153,  1154,  1155,
    1156,  1157,  1158,  1159,  1160,  1161,  1162,  1164,  1170,  1176,
    1182,  1188,  1199,  1205,  1216,  1223,  1222,  1228,  1228,  1229,
    1233,  1237,  1241,  1245,  1249,  1253,  1257,  1261,  1265,  1269,
    1273,  1277,  1281,  1285,  1289,  1293,  1297,  1301,  1305,  1309,
    1313,  1317,  1321,  1328,  1327,  1333,  1333,  1334,  1338,  1342,
    1346,  1350,  1354,  1358,  1362,  1366,  1370,  1374,  1378,  1382,
    1386,  1390,  1394,  1398,  1402,  1406,  1410,  1414,  1418,  1422,
    1426,  1430,  1434,  1438,  1442,  1446,  1450,  1461,  1460,  1517,
    1517,  1518,  1519,  1520,  1521,  1522,  1523,  1524,  1525,  1526,
    1527,  1528,  1529,  1530,  1530,  1531,  1532,  1533,  1534,  1536,
    1542,  1548,  1554,  1560,  1566,  1572,  1578,  1584,  1590,  1596,
    1603,  1609,  1615,  1621,  1630,  1640,  1639,  1645,  1645,  1646,
    1650,  1661,  1660,  1667,  1666,  1671,  1671,  1672,  1676,  1680,
    1686,  1686,  1687,  1687,  1687,  1687,  1687,  1689,  1689,  1691,
    1691,  1693,  1706,  1723,  1729,  1740,  1739,  1781,  1781,  1782,
    1783,  1784,  1785,  1786,  1787,  1788,  1789,  1790,  1792,  1798,
    1804,  1810,  1822,  1821,  1827,  1827,  1828,  1832,  1836,  1840,
    1844,  1848,  1852,  1856,  1860,  1864,  1870,  1884,  1893,  1907,
    1906,  1921,  1921,  1922,  1922,  1922,  1922,  1924,  1930,  1936,
    1946,  1948,  1948,  1949,  1949,  1951,  1968,  1967,  1992,  1992,
    1993,  1993,  1993,  1993,  1995,  2001,  2021,  2020,  2026,  2026,
    2027,  2031,  2035,  2039,  2043,  2047,  2051,  2055,  2059,  2063,
    2074,  2073,  2094,  2094,  2095,  2095,  2095,  2097,  2104,  2103,
    2109,  2109,  2110,  2114,  2118,  2122,  2126,  2130,  2134,  2138,
    2142,  2146,  2157,  2156,  2228,  2228,  2229,  2230,  2231,  2232,
    2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,
    2243,  2245,  2251,  2257,  2263,  2276,  2289,  2295,  2301,  2305,
    2312,  2311,  2316,  2316,  2317,  2321,  2327,  2338,  2344,  2350,
    2356,  2372,  2371,  2397,  2397,  2398,  2398,  2398,  2400,  2420,
    2431,  2430,  2457,  2457,  2458,  2458,  2458,  2460,  2466,  2476,
    2478,  2478,  2479,  2479,  2481,  2499,  2498,  2521,  2521,  2522,
    2522,  2522,  2524,  2530,  2540,  2542,  2542,  2543,  2544,  2545,
    2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,
    2556,  2557,  2558,  2559,  2560,  2561,  2562,  2563,  2564,  2565,
    2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,  2574,  2575,
    2576,  2577,  2578,  2579,  2580,  2581,  2582,  2583,  2584,  2585,
    2586,  2587,  2588,  2589,  2590,  2591,  2592,  2595,  2600,  2605,
    2610,  2619,  2628,  2637,  2643,  2648,  2653,  2659,  2664,  2669,
    2674,  2679,  2684,  2689,  2694,  2699,  2704,  2709,  2714,  2719,
    2725,  2730,  2735,  2740,  2745,  2750,  2755,  2760,  2763,  2768,
    2771,  2776,  2781,  2786,  2791,  2796,  2801,  2806,  2811,  2816,
    2821,  2826,  2831,  2837,  2836,  2841,  2841,  2842,  2845,  2848,
    2851,  2854,  2857,  2860,  2863,  2866,  2869,  2872,  2875,  2878,
    2881,  2884,  2887,  2890,  2893,  2896,  2899,  2902,  2905,  2908,
    2911,  2917,  2916,  2921,  2921,  2922,  2925,  2928,  2931,  2934,
    2937,  2940,  2943,  2946,  2949,  2952,  2955,  2958,  2961,  2964,
    2967,  2970,  2973,  2976,  2979,  2982,  2985,  2990,  2995,  3000,
    3009,  3011,  3011,  3012,  3013,  3014,  3015,  3016,  3017,  3018,
    3019,  3020,  3021,  3022,  3023,  3025,  3030,  3035,  3040,  3045,
    3050,  3055,  3060,  3065,  3070,  3075,  3084,  3086,  3086,  3087,
    3088,  3089,  3090,  3091,  3092,  3093,  3094,  3095,  3096,  3098,
    3104,  3120,  3129,  3135,  3141,  3147,  3156,  3162
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
  "KLINE_MIN_CIDR", "KLINE_MIN_CIDR6", "KNOCK_CLIENT_COUNT",
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
  "general_cloak_key2", "general_cloak_key3",
  "general_cycle_on_host_change", "general_dline_min_cidr",
  "general_dline_min_cidr6", "general_enable_cloak_system",
  "general_kline_min_cidr", "general_kline_min_cidr6",
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
     485,   486,   487,   488,   489,    59,   125,   123,    61,    44,
      58
};
# endif

#define YYPACT_NINF -1041

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1041)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
   -1041,   711, -1041,  -164,  -230,  -207, -1041, -1041, -1041,  -193,
   -1041,  -187, -1041, -1041, -1041,  -172, -1041, -1041, -1041,  -163,
    -149, -1041,  -138, -1041,  -136, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041,   308,   972,  -128,  -126,  -121,    10,   -86,   396,   -80,
     -60,   -51,   127,   -23,    -3,    40,   769,   540,    47,    45,
      48,     9,    50,    57,    63,    67,    73,    46, -1041, -1041,
   -1041, -1041, -1041,    75,    85,    96,    97,   101,   104,   105,
     106,   113,   115,   116,   146, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041,   708,   524,   285,
   -1041,   117,    18, -1041, -1041,    25, -1041,   118,   119,   123,
     124,   125,   128,   129,   130,   132,   133,   142,   143,   145,
     148,   149,   151,   153,   155,   157,   158,   160,   161,   162,
     163,   169,   171,   173,   182,   186, -1041, -1041,   187,   190,
     191,   194,   198,   202,   204,   205,   213,   214,   215,   216,
     218,   219,   222,   223,   225,   227,    42, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041,   523,    53,   305,
      69,   229,   230,    26, -1041, -1041, -1041,    13,   272,    11,
   -1041,   233,   236,   237,   240,   244,   245,   246,   247,   248,
     137, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041,    86,   250,   252,   254,   256,   259,   260,   264,   267,
     268,   270,   271,   273,   276,   280,   281,   283,   284,    60,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,    88,    92,
     288,    72, -1041, -1041, -1041,   170,   179, -1041,   290,    20,
   -1041, -1041,     3, -1041,   238,   265,   339,   180, -1041,   410,
     418,   317,   421,   418,   418,   422,   418,   418,   424,   425,
     304, -1041,   309,   302,   312,   314, -1041,   315,   316,   324,
     325,   329,   330,   331,   333,   335,   336,   337,   338,   341,
     154, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   311,
     342,   343,   344,   348,   350,   351, -1041,   352,   353,   358,
     359,   360,   361,   364,   234, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041,   365,   366,    15, -1041, -1041, -1041,   420,   371, -1041,
   -1041,   370,   378,    19, -1041, -1041, -1041,   403,   418,   464,
     418,   418,   493,   494,   495,   407,   511,   411,   517,   518,
     520,   419,   423,   426,   427,   418,   521,   525,   528,   533,
     418,   534,   539,   542,   544,   442,   399,   429,   443,   418,
     418,   445,   446,   447,  -203,  -192,   448,   452,   454,   456,
     561,   418,   460,   418,   418,   471,   455, -1041,   457,   461,
     462, -1041,   463,   465,   467,   468,   469,   228, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   470,   475,
     109, -1041, -1041, -1041,   459,   476,   478, -1041,   479, -1041,
      39, -1041, -1041, -1041, -1041, -1041,   568,   591,   484, -1041,
     485,   483,   486,    38, -1041, -1041, -1041,   487,   490,   496,
   -1041,   498,   499,   500,   502, -1041,   503,   505,   177, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
     497,   506,   508,   509,    31, -1041, -1041, -1041, -1041,   515,
     532,   418,   622,   535,   626,   538,   541,   543,   527, -1041,
   -1041,   643,   631,   547,   637,   652,   653,   640,   644,   645,
     646,   647,   648,   649,   651,   654,   655,   657,   545, -1041,
     550,   548, -1041,    66, -1041, -1041, -1041, -1041,   572,   556,
   -1041,   555,   564,   562,   563,   565,   566,    30, -1041, -1041,
   -1041, -1041, -1041,   680,   573, -1041,   574,   580, -1041,   581,
      83, -1041, -1041, -1041, -1041,   575,   576,   589, -1041,   593,
     306,   595,   596,   597,   599,   601,   604,   605,   606,   607,
     608, -1041, -1041,   731,   732,   418,   609,   735,   737,   738,
     418,   739,   740,   418,   722,   749,   752,   418,   754,   754,
     634, -1041, -1041,   743,    27,   745,   660,   750,   751,   641,
     756,   759,   774,   761,   765,   766,   767,   662, -1041,   771,
     772,   671, -1041,   678, -1041,   788,   790,   683, -1041,   689,
     690,   691,   692,   693,   695,   696,   697,   699,   700,   701,
     705,   707,   712,   713,   715,   719,   720,   723,   726,   728,
     730,   744,   747,   748,   753,   755,   760,   763,   688,   736,
     764,   768,   770,   773,   775,   776,   777,   778,   779,   785,
     789,   791,   792,   793,   794,   795,   797,   798,   799,   805,
   -1041, -1041,   816,   758,   787,   819,   853,   848,   851,   864,
     807, -1041,   867,   869,   809, -1041, -1041,   875,   877,   803,
     893,   811, -1041,   812,   813, -1041, -1041,   882,   896,   814,
   -1041, -1041,   918,   837,   817,   927,   929,   932,   844,   823,
     935,   936,   829, -1041, -1041,   938,   939,   940,   833, -1041,
     834,   835,   836,   838,   839,   840,   841,   842,   843, -1041,
     845,   846,   847,   849,   850,   852,   854,   855,   856,   857,
     858,   859,   860,   861,   862,   863,   865, -1041, -1041,   945,
     866,   868, -1041,   870, -1041,    94, -1041,   952,   956,   959,
     961,   871, -1041,   872, -1041, -1041,   974,   873,   975,   874,
   -1041, -1041, -1041, -1041, -1041,   418,   418,   418,   418,   418,
     418,   418, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,   878,   879,   880,   -37,   881,   883,
     884,   885,   886,   887,   888,   889,   890,   891,   892,    23,
     894,   895, -1041,   897,   898,   899,   900,   901,   902,   903,
      -5,   904,   905,   906,   907,   908,   909,   910, -1041,   911,
     912, -1041, -1041,   913,   914, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041,  -210, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041,  -202, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041,   915,   916,   489,   917,   919,
     920,   921,   922, -1041,   923,   924, -1041,   925,   926,   -28,
     876,   928, -1041, -1041, -1041, -1041,   930,   931, -1041,   933,
     934,   477,   937,   941,   942,   943,   784,   944,   946, -1041,
     947,   948,   949, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
     950,   806, -1041, -1041,   951,   953,   954, -1041,    21, -1041,
   -1041, -1041, -1041,   955,   958,   960,   962, -1041, -1041,   963,
     810,   964, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041,  -197, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   754,   754,
     754, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,  -194, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   688, -1041,
     736, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041,  -182, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041,  -169, -1041,   995,
     893,   965, -1041, -1041, -1041, -1041, -1041, -1041,   966, -1041,
     967,   968, -1041, -1041, -1041,   969, -1041, -1041, -1041,   970,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041,  -142, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041,    81, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041,    89, -1041, -1041,   983,   -98,   973,   977, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,    91, -1041, -1041, -1041,   -37, -1041,
   -1041, -1041, -1041,    -5, -1041, -1041, -1041,   489, -1041,   -28,
   -1041, -1041, -1041,   979,   982,   998,   993,  1020, -1041,   477,
   -1041,   784, -1041,   806,   978,   980,   981,   303, -1041, -1041,
     810, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,    98, -1041, -1041, -1041,   303, -1041
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
      95,    94,   644,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   632,   643,   634,   635,   636,
     637,   638,   639,   640,   633,   641,   642,     0,     0,     0,
     463,     0,     0,   461,   462,     0,   526,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   601,   573,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   476,   477,   478,
     520,   523,   524,   525,   521,   515,   516,   522,   517,   518,
     514,   488,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   489,   490,   519,   494,   495,   496,   497,   493,   492,
     498,   505,   506,   499,   500,   501,   491,   503,   512,   513,
     510,   511,   504,   502,   508,   509,   507,     0,     0,     0,
       0,     0,     0,     0,    46,    47,    48,     0,     0,     0,
     668,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   658,   659,   660,   661,   662,   663,   664,   666,   665,
     667,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    69,    66,    64,    70,    71,    65,    55,    68,    58,
      59,    60,    56,    67,    61,    62,    63,    57,     0,     0,
       0,     0,   124,   125,   126,     0,     0,   354,     0,     0,
     352,   353,     0,    96,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   631,     0,     0,     0,     0,   275,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   240,   241,   244,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   242,   243,   245,   255,   256,   257,     0,
       0,     0,     0,     0,     0,     0,   430,     0,     0,     0,
       0,     0,     0,     0,     0,   405,   406,   407,   408,   409,
     410,   411,   413,   412,   415,   419,   416,   417,   418,   414,
     456,     0,     0,     0,   453,   454,   455,     0,     0,   460,
     471,     0,     0,     0,   468,   469,   470,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,     0,     0,
       0,   322,     0,     0,     0,     0,     0,     0,   308,   309,
     310,   311,   316,   312,   313,   314,   315,   447,     0,     0,
       0,   444,   445,   446,     0,     0,     0,   283,     0,   293,
       0,   291,   292,   294,   295,    49,     0,     0,     0,    45,
       0,     0,     0,     0,   103,   104,   105,     0,     0,     0,
     203,     0,     0,     0,     0,   175,     0,     0,     0,   155,
     156,   157,   158,   159,   162,   163,   164,   161,   160,   165,
       0,     0,     0,     0,     0,   342,   343,   344,   345,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   657,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,   388,     0,   383,   384,   385,   127,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     115,   114,   116,     0,     0,   351,     0,     0,   366,     0,
       0,   359,   360,   361,   362,     0,     0,     0,    90,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   630,   258,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   420,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   404,     0,
       0,     0,   452,     0,   459,     0,     0,     0,   467,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     474,   317,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,     0,     0,     0,   443,   296,     0,     0,     0,
       0,     0,   290,     0,     0,    44,   106,     0,     0,     0,
     102,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,   346,     0,     0,     0,     0,   341,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   656,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   386,     0,
       0,     0,   382,     0,   122,     0,   117,     0,     0,     0,
       0,     0,   111,     0,   350,   363,     0,     0,     0,     0,
     358,    99,    98,    97,   654,    28,    28,    28,    28,    28,
      28,    28,    30,    29,   655,   645,   646,   647,   648,   649,
     650,   651,   653,   652,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,   238,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403,     0,
       0,   451,   464,     0,     0,   466,   543,   547,   527,   528,
     562,   530,   531,   532,   533,   629,   570,   534,   535,   567,
     536,   542,   541,   550,   540,   537,   538,   546,   545,   544,
     568,   529,   627,   628,   566,   611,   605,   621,   606,   607,
     608,   616,   624,   609,   618,   622,   612,   623,   625,   613,
     617,   610,   620,   615,   614,   619,   626,     0,   604,   582,
     583,   584,   577,   595,   578,   579,   580,   590,   598,   581,
     592,   596,   586,   597,   599,   587,   591,   585,   594,   589,
     588,   593,   600,     0,   576,   563,   561,   564,   569,   565,
     552,   559,   560,   557,   558,   553,   554,   555,   556,   571,
     572,   539,   549,   548,   551,     0,     0,     0,     0,     0,
       0,     0,     0,   306,     0,     0,   442,     0,     0,     0,
     301,   297,   300,   282,    50,    51,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   340,   672,   669,   670,   671,   676,   675,
     677,   673,   674,    86,    81,    89,    80,    87,    88,    79,
      83,    82,    74,    73,    78,    75,    77,    76,    84,    85,
       0,     0,   381,   128,     0,     0,     0,   140,     0,   132,
     133,   135,   134,     0,     0,     0,     0,   110,   355,     0,
       0,     0,   357,    31,    32,    33,    34,    35,    36,    37,
     270,   271,   262,   280,   279,     0,   278,   263,   265,   267,
     274,   266,   264,   273,   259,   272,   261,   260,    38,    38,
      38,    40,    39,   268,   269,   425,   428,   429,   439,   436,
     422,   437,   434,   435,     0,   433,   438,   421,   427,   424,
     426,   440,   423,   457,   458,   472,   473,   602,     0,   574,
       0,   320,   321,   331,   327,   328,   330,   335,   332,   333,
     326,   334,   329,     0,   325,   319,   338,   337,   336,   318,
     449,   448,   304,   303,   288,   289,   287,     0,   286,     0,
       0,     0,   107,   108,   174,   171,   222,   234,   210,   219,
       0,   208,   213,   228,   236,     0,   221,   226,   232,   212,
     215,   223,   225,   235,   229,   220,   227,   216,   233,   218,
     224,   214,   217,     0,   206,   167,   169,   172,   173,   184,
     185,   186,   179,   197,   180,   181,   182,   192,   200,   183,
     194,   198,   188,   199,   201,   189,   193,   187,   196,   191,
     190,   195,   202,     0,   178,   168,   170,   349,   347,   348,
     387,   392,   398,   401,   394,   400,   395,   399,   397,   393,
     396,     0,   391,   136,     0,     0,     0,     0,   131,   119,
     118,   120,   121,   364,   370,   376,   379,   372,   378,   373,
     377,   375,   371,   374,     0,   369,   365,   276,     0,    41,
      42,    43,   431,     0,   603,   575,   323,     0,   284,     0,
     302,   299,   298,     0,     0,     0,     0,     0,   204,     0,
     176,     0,   389,     0,     0,     0,     0,     0,   130,   367,
       0,   277,   432,   324,   285,   209,   231,   207,   230,   211,
     205,   177,   390,   137,   139,   138,   150,   149,   145,   147,
     151,   148,   144,   146,     0,   143,   368,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -1041, -1041, -1041,  -146,  -308, -1040,  -638, -1041, -1041,   957,
   -1041, -1041, -1041, -1041,   971, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,  1085, -1041, -1041, -1041, -1041, -1041,
   -1041,   661, -1041, -1041, -1041, -1041, -1041,   583, -1041, -1041,
   -1041, -1041, -1041, -1041,   976, -1041, -1041, -1041, -1041,   131,
   -1041, -1041, -1041, -1041, -1041,  -165, -1041, -1041, -1041,   656,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041,  -120, -1041, -1041, -1041,  -116, -1041, -1041, -1041,   984,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   -93,
   -1041, -1041, -1041, -1041, -1041,   -92, -1041,   698, -1041, -1041,
   -1041,    34, -1041, -1041, -1041, -1041, -1041,   729, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041,   -76, -1041, -1041, -1041, -1041,
   -1041, -1041,   668, -1041, -1041, -1041, -1041, -1041,   985, -1041,
   -1041, -1041, -1041,   603, -1041, -1041, -1041, -1041, -1041,   -96,
   -1041, -1041, -1041,   632, -1041, -1041, -1041, -1041,   -79, -1041,
   -1041, -1041,   986, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,   -56, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041,   741, -1041, -1041, -1041, -1041, -1041,   825,
   -1041, -1041, -1041, -1041,  1107, -1041, -1041, -1041, -1041,   820,
   -1041, -1041, -1041, -1041,  1054, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041,    95, -1041, -1041, -1041,    99, -1041, -1041, -1041,
   -1041, -1041,  1128, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041,   988, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   832,   833,  1101,  1102,    27,   223,   224,
     225,   226,    28,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,    29,    77,    78,    79,    80,    81,    30,    63,
     503,   504,   505,   506,    31,    70,   587,   588,   589,   590,
     591,   592,    32,   291,   292,   293,   294,   295,  1058,  1059,
    1060,  1061,  1062,  1246,  1324,  1325,    33,    64,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   759,
    1223,  1224,   529,   754,  1193,  1194,    34,    53,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   626,  1085,  1086,
      35,    61,   489,   739,  1157,  1158,   490,   491,   492,  1161,
    1001,  1002,   493,   494,    36,    59,   467,   468,   469,   470,
     471,   472,   473,   724,  1143,  1144,   474,   475,   476,    37,
      65,   534,   535,   536,   537,   538,    38,   299,   300,   301,
      39,    72,   600,   601,   602,   603,   604,   817,  1264,  1265,
      40,    68,   573,   574,   575,   576,   800,  1241,  1242,    41,
      54,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,   384,   649,  1114,  1115,   385,   386,   387,   388,   389,
      42,    60,   480,   481,   482,   483,    43,    55,   393,   394,
     395,   396,    44,   112,   113,   114,    45,    57,   403,   404,
     405,   406,    46,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     437,   963,   964,   213,   436,   937,   938,   214,   215,   216,
      47,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    48,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     860,   861,   611,  1112,   596,   614,   615,    51,   617,   618,
     297,   110,   530,   706,   500,   859,   390,   707,  1083,   110,
     400,   297,  1054,  1154,   708,  1127,   400,   220,   709,  1128,
      52,   582,   530,  1129,  1098,  1099,  1100,  1130,  1267,   500,
     484,  1272,  1268,   116,    56,  1273,   289,    73,   117,   118,
      58,   119,   120,  1276,   477,   531,   121,  1277,  1269,  1270,
    1271,   251,   122,   123,   124,    62,  1278,   570,   125,   126,
    1279,    49,    50,   289,    66,   531,   127,   111,    74,   128,
     129,   130,   391,   131,   596,   111,    75,   132,    67,   570,
     252,  1084,   253,  1288,   532,  1054,   501,  1289,   485,    69,
     670,    71,   672,   673,   133,   134,   486,   597,   487,   107,
     477,   108,  1295,   298,   532,   135,   109,   687,   136,   137,
     254,   501,   692,   401,   298,  1055,   138,   221,   220,   401,
     255,   701,   702,   139,   583,   140,   859,   141,   230,   142,
     533,   143,   144,   715,   392,   717,   718,    82,   402,   222,
      76,   115,   256,   145,   402,   322,   257,   217,   146,   147,
     533,   148,   149,   150,   258,   488,   151,  1155,   259,   260,
     571,   323,   324,   231,    83,    84,  1156,   218,   507,   325,
     582,    85,   478,   232,   233,   234,   219,   597,   235,   236,
     502,   152,   571,   237,   238,   239,   508,   261,  1055,  1113,
     584,   153,   154,   155,   156,   157,   158,   159,   864,   865,
      86,    87,    88,   262,   227,   502,   263,   264,   265,   509,
     585,  1056,  -129,   326,    89,    90,    91,   598,   221,   458,
     599,    92,    93,   772,   228,   359,   586,   360,   478,   361,
     327,   328,   329,   330,   331,  1057,   510,   459,   332,  -129,
     222,   661,   333,   362,   398,   667,   594,  1247,   334,   160,
     161,   162,   498,   163,   164,   266,   811,   768,   335,   336,
     460,   290,   165,   507,   749,   741,   363,   229,   456,   337,
     479,   511,   307,   583,   288,   296,   390,   302,   267,   268,
     572,   508,   303,   364,  1056,   365,   568,   461,   290,   512,
     338,   304,   801,   366,   495,   305,   484,   598,   579,    73,
     599,   306,   572,   309,   509,   367,  1290,   846,  1057,   819,
    1291,   550,   851,   310,  1292,   854,  1299,   577,  1293,   858,
    1300,   513,   514,  1327,   311,   312,   479,  1328,   368,   313,
      74,   510,   314,   315,   316,   734,   339,   581,    75,   584,
     462,   317,   391,   318,   319,   397,   407,   408,   463,   464,
     369,   409,   410,   411,   485,   605,   412,   413,   414,   585,
     415,   416,   486,   548,   487,  1316,   511,  1317,   465,   370,
     417,   418,   320,   419,   515,   586,   420,   421,   371,   422,
     640,   423,   606,   424,   512,   425,   426,   116,   427,   428,
     429,   430,   117,   118,   516,   119,   120,   431,   517,   432,
     121,   433,    76,   762,   392,   608,   122,   123,   124,   610,
     434,  1318,   125,   126,   435,   438,   513,   514,   439,   440,
     127,   488,   441,   128,   129,   130,   442,   131,  1319,   372,
     443,   132,   444,   445,   825,   826,   827,   828,   829,   830,
     831,   446,   447,   448,   449,   466,   450,   451,   133,   134,
     452,   453,   373,   454,   730,   455,   607,   496,   497,   135,
     657,   539,   136,   137,   540,   541,  1320,  1321,   542,   515,
     138,  1166,   543,   544,   545,   546,   547,   139,   551,   140,
     552,   141,   553,   142,   554,   143,   144,   555,   556,   516,
    1167,  1168,   557,   517,  1133,   558,   559,   145,   560,   561,
    1169,   562,   146,   147,   563,   148,   149,   150,   564,   565,
     151,   566,   567,   609,   458,   359,   578,   360,   593,   361,
    1322,   610,  1134,   612,   613,   616,  1323,   619,   620,   621,
     623,   251,   459,   362,   622,   152,   642,   663,  1170,  1171,
     624,  1172,   625,   627,   628,   153,   154,   155,   156,   157,
     158,   159,   629,   630,  1135,   460,   363,   631,   632,   633,
     252,   634,   253,   635,   636,   637,   638,   671,  1173,   639,
     643,   644,   645,   364,  1174,   365,   646,  1175,   647,   648,
     650,   651,   461,   366,  1136,  1137,   652,   653,   654,   655,
     254,  1138,   656,   659,   660,   367,   664,  1296,   665,  1176,
     255,  1177,  1178,   160,   161,   162,   666,   163,   164,   669,
     674,   675,   676,   677,   678,  1139,   165,   679,   368,  1179,
     680,   681,   256,   682,   688,   683,   257,   698,   689,   684,
    1140,   690,   685,   686,   258,   462,   691,   693,   259,   260,
     369,  1180,   694,   463,   464,   695,  1181,   696,   697,   700,
    1182,   703,   704,   705,   710,  1183,  1184,   699,   711,   370,
     712,  1185,   713,   465,   714,  1186,   716,   261,   371,  1073,
    1074,  1075,  1076,  1077,  1078,  1079,  1187,   719,  1188,  1189,
     720,  1190,   721,   262,   736,   743,   263,   264,   265,   722,
     723,   725,  1191,   726,  1141,   727,   728,   729,   732,   322,
    1192,     2,     3,   733,   737,     4,   738,   740,   744,   745,
     746,   747,   751,  1142,   748,   323,   324,     5,   752,   372,
       6,   770,   764,   325,   753,     7,   755,   756,   757,   915,
     758,   760,     8,   761,   765,   266,   766,   767,   771,   773,
     466,   774,   373,   775,   776,     9,   780,   777,   781,   778,
      10,    11,   779,   782,   783,   784,   785,   786,   267,   268,
     230,   787,   788,   789,   790,   791,   792,   326,   793,    12,
     797,   794,   795,    13,   796,   798,   799,   939,   803,   940,
     941,   804,   805,    14,   327,   328,   329,   330,   331,   806,
     807,   808,   332,   809,   810,   231,   333,   813,   814,   815,
     821,   822,   334,    15,    16,   232,   233,   234,   816,   818,
     235,   236,   335,   336,   823,   237,   238,   239,   824,    17,
     834,   835,   836,   337,   837,  1199,   838,  1200,  1201,   839,
     840,   841,   842,   843,   844,   845,    18,   847,   848,   855,
     849,   850,   852,   853,   338,   916,   917,   918,    19,    20,
     919,   920,   856,   921,   922,   857,   923,   859,   924,   862,
     863,   925,   866,   926,   927,   928,   867,   868,   869,   870,
    1231,   929,    21,   871,  1254,   930,   872,   873,   874,   931,
     932,   933,   875,   876,   877,    22,   934,   878,   879,   880,
     339,   935,    23,   942,   943,   944,   881,    24,   945,   946,
      25,   947,   948,   882,   949,   883,   950,   884,   885,   951,
     936,   952,   953,   954,   886,   887,   888,   889,   890,   955,
     891,   892,   893,   956,   894,   895,   896,   957,   958,   959,
     897,  1232,   898,   985,   960,  1255,   988,   899,   900,   961,
     901,  1202,  1203,  1204,   902,   903,  1205,  1206,   904,  1207,
    1208,   905,  1209,   906,  1210,   907,   989,  1211,   962,  1212,
    1213,  1214,  1233,    82,   986,   990,  1256,  1215,   991,   908,
    1234,  1216,   909,   910,  1257,  1217,  1218,  1219,   911,  1235,
     912,   992,  1220,  1258,   994,   913,   995,  1221,   914,   965,
      83,    84,   997,   966,   998,   967,  1000,    85,   968,  1006,
     969,   970,   971,   972,   973,  1236,  1222,  1237,  1238,  1259,
     974,  1260,  1261,  1007,   975,   987,   976,   977,   978,   979,
     980,  1239,   981,   982,   983,  1262,    86,    87,    88,  1240,
     984,   999,   993,  1263,   996,  1009,  1003,  1004,  1005,  1008,
      89,    90,    91,  1010,  1012,  1011,  1013,    92,    93,  1014,
    1015,  1016,  1017,  1018,  1019,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1050,  1027,  1028,  1029,  1030,  1031,  1032,  1063,
    1033,  1034,  1035,  1064,  1036,  1037,  1065,  1038,  1066,  1039,
    1040,  1041,  1042,  1043,  1044,  1045,  1046,  1047,  1048,  1159,
    1049,  1069,  1071,  1052,  1051,  1053,  1067,  1068,  1280,  1072,
    1294,  1070,  1305,  1080,  1081,  1082,  1087,  1306,  1088,  1089,
    1090,  1091,  1092,  1093,  1094,  1095,  1096,  1097,  1308,  1103,
    1104,  1307,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1116,
    1117,  1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,
    1131,  1132,  1145,  1309,  1146,  1147,  1148,  1149,  1150,  1151,
    1152,  1153,   308,  1329,   750,  1162,  1163,  1160,  1164,  1165,
     812,  1311,  1195,  1310,   763,  1301,  1196,  1197,  1198,  1225,
     499,  1226,  1227,  1228,  1229,  1230,  1243,  1304,   742,  1248,
    1249,  1244,  1245,  1250,  1281,  1251,   731,  1252,  1253,  1266,
    1282,  1303,   769,   820,  1326,   802,  1283,  1284,  1285,  1286,
    1287,  1297,  1298,  1313,  1312,  1314,  1315,  1302,   662,   399,
     457,   735,   321,   668,     0,  1275,     0,  1274,   549,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     569,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   580,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   595,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   641,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     658
};

static const yytype_int16 yycheck[] =
{
     638,   639,   310,     8,     1,   313,   314,   237,   316,   317,
       1,     1,     1,   216,     1,   113,     1,   220,    55,     1,
       1,     1,     1,    51,   216,   235,     1,     1,   220,   239,
     237,     1,     1,   235,    11,    12,    13,   239,   235,     1,
       1,   235,   239,     1,   237,   239,     1,     1,     6,     7,
     237,     9,    10,   235,     1,    44,    14,   239,  1098,  1099,
    1100,     1,    20,    21,    22,   237,   235,     1,    26,    27,
     239,   235,   236,     1,   237,    44,    34,    67,    32,    37,
      38,    39,    67,    41,     1,    67,    40,    45,   237,     1,
      30,   128,    32,   235,    83,     1,    83,   239,    59,   237,
     408,   237,   410,   411,    62,    63,    67,   104,    69,   237,
       1,   237,   210,   104,    83,    73,   237,   425,    76,    77,
      60,    83,   430,   104,   104,   104,    84,   101,     1,   104,
      70,   439,   440,    91,   104,    93,   113,    95,     1,    97,
     129,    99,   100,   451,   129,   453,   454,     1,   129,   123,
     104,   237,    92,   111,   129,     1,    96,   237,   116,   117,
     129,   119,   120,   121,   104,   126,   124,   195,   108,   109,
     104,    17,    18,    36,    28,    29,   204,   237,     1,    25,
       1,    35,   129,    46,    47,    48,   237,   104,    51,    52,
     177,   149,   104,    56,    57,    58,    19,   137,   104,   204,
     170,   159,   160,   161,   162,   163,   164,   165,   181,   182,
      64,    65,    66,   153,   237,   177,   156,   157,   158,    42,
     190,   200,   177,    69,    78,    79,    80,   224,   101,     1,
     227,    85,    86,   541,   237,     1,   206,     3,   129,     5,
      86,    87,    88,    89,    90,   224,    69,    19,    94,   177,
     123,   236,    98,    19,   236,   236,   236,   236,   104,   217,
     218,   219,   236,   221,   222,   205,   236,   236,   114,   115,
      42,   226,   230,     1,   236,   236,    42,   237,   236,   125,
     227,   104,   236,   104,   237,   237,     1,   237,   228,   229,
     224,    19,   235,    59,   200,    61,   236,    69,   226,   122,
     146,   238,   236,    69,   235,   238,     1,   224,   236,     1,
     227,   238,   224,   238,    42,    81,   235,   625,   224,   236,
     239,   235,   630,   238,   235,   633,   235,   235,   239,   637,
     239,   154,   155,   235,   238,   238,   227,   239,   104,   238,
      32,    69,   238,   238,   238,   236,   192,   177,    40,   170,
     122,   238,    67,   238,   238,   238,   238,   238,   130,   131,
     126,   238,   238,   238,    59,   127,   238,   238,   238,   190,
     238,   238,    67,   236,    69,    72,   104,    74,   150,   145,
     238,   238,   236,   238,   207,   206,   238,   238,   154,   238,
     236,   238,   127,   238,   122,   238,   238,     1,   238,   238,
     238,   238,     6,     7,   227,     9,    10,   238,   231,   238,
      14,   238,   104,   236,   129,   235,    20,    21,    22,   113,
     238,   118,    26,    27,   238,   238,   154,   155,   238,   238,
      34,   126,   238,    37,    38,    39,   238,    41,   135,   205,
     238,    45,   238,   238,   138,   139,   140,   141,   142,   143,
     144,   238,   238,   238,   238,   227,   238,   238,    62,    63,
     238,   238,   228,   238,   236,   238,   127,   238,   238,    73,
     236,   238,    76,    77,   238,   238,   173,   174,   238,   207,
      84,     4,   238,   238,   238,   238,   238,    91,   238,    93,
     238,    95,   238,    97,   238,    99,   100,   238,   238,   227,
      23,    24,   238,   231,    15,   238,   238,   111,   238,   238,
      33,   238,   116,   117,   238,   119,   120,   121,   238,   238,
     124,   238,   238,   113,     1,     1,   238,     3,   238,     5,
     227,   113,    43,   216,   113,   113,   233,   113,   113,   235,
     238,     1,    19,    19,   235,   149,   235,   127,    71,    72,
     238,    74,   238,   238,   238,   159,   160,   161,   162,   163,
     164,   165,   238,   238,    75,    42,    42,   238,   238,   238,
      30,   238,    32,   238,   238,   238,   238,   113,   101,   238,
     238,   238,   238,    59,   107,    61,   238,   110,   238,   238,
     238,   238,    69,    69,   105,   106,   238,   238,   238,   238,
      60,   112,   238,   238,   238,    81,   235,  1245,   238,   132,
      70,   134,   135,   217,   218,   219,   238,   221,   222,   216,
     127,   127,   127,   216,   113,   136,   230,   216,   104,   152,
     113,   113,    92,   113,   113,   216,    96,   238,   113,   216,
     151,   113,   216,   216,   104,   122,   113,   113,   108,   109,
     126,   174,   113,   130,   131,   113,   179,   113,   216,   216,
     183,   216,   216,   216,   216,   188,   189,   238,   216,   145,
     216,   194,   216,   150,   113,   198,   216,   137,   154,   825,
     826,   827,   828,   829,   830,   831,   209,   216,   211,   212,
     235,   214,   235,   153,   235,   127,   156,   157,   158,   238,
     238,   238,   225,   238,   215,   238,   238,   238,   238,     1,
     233,     0,     1,   238,   238,     4,   238,   238,   127,   235,
     235,   238,   235,   234,   238,    17,    18,    16,   238,   205,
      19,   216,   235,    25,   238,    24,   238,   238,   238,    51,
     238,   238,    31,   238,   238,   205,   238,   238,   216,   127,
     227,   216,   228,   127,   216,    44,   113,   216,   127,   216,
      49,    50,   235,   216,   127,   113,   113,   127,   228,   229,
       1,   127,   127,   127,   127,   127,   127,    69,   127,    68,
     235,   127,   127,    72,   127,   235,   238,    51,   216,    53,
      54,   235,   237,    82,    86,    87,    88,    89,    90,   235,
     238,   238,    94,   238,   238,    36,    98,   127,   235,   235,
     235,   235,   104,   102,   103,    46,    47,    48,   238,   238,
      51,    52,   114,   115,   235,    56,    57,    58,   235,   118,
     235,   235,   235,   125,   235,    51,   235,    53,    54,   235,
     235,   235,   235,   235,   113,   113,   135,   238,   113,   127,
     113,   113,   113,   113,   146,   167,   168,   169,   147,   148,
     172,   173,   113,   175,   176,   113,   178,   113,   180,   235,
     127,   183,   127,   185,   186,   187,   216,   127,   127,   238,
      74,   193,   171,   127,    74,   197,   127,   113,   127,   201,
     202,   203,   127,   127,   127,   184,   208,   235,   127,   127,
     192,   213,   191,   167,   168,   169,   235,   196,   172,   173,
     199,   175,   176,   235,   178,   127,   180,   127,   235,   183,
     232,   185,   186,   187,   235,   235,   235,   235,   235,   193,
     235,   235,   235,   197,   235,   235,   235,   201,   202,   203,
     235,   135,   235,   127,   208,   135,   127,   235,   235,   213,
     235,   167,   168,   169,   235,   235,   172,   173,   235,   175,
     176,   235,   178,   235,   180,   235,   113,   183,   232,   185,
     186,   187,   166,     1,   216,   127,   166,   193,   127,   235,
     174,   197,   235,   235,   174,   201,   202,   203,   235,   183,
     235,   127,   208,   183,   127,   235,   127,   213,   235,   235,
      28,    29,   127,   235,   127,   235,   113,    35,   235,   127,
     235,   235,   235,   235,   235,   209,   232,   211,   212,   209,
     235,   211,   212,   127,   235,   238,   235,   235,   235,   235,
     235,   225,   235,   235,   235,   225,    64,    65,    66,   233,
     235,   238,   235,   233,   235,   127,   235,   235,   235,   235,
      78,    79,    80,   216,   127,   238,   127,    85,    86,   127,
     216,   238,   127,   127,   235,   127,   127,   127,   235,   235,
     235,   235,   127,   235,   235,   235,   235,   235,   235,   127,
     235,   235,   235,   127,   235,   235,   127,   235,   127,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   223,
     235,   127,   127,   235,   238,   235,   235,   235,   113,   235,
     127,   238,   133,   235,   235,   235,   235,   135,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   135,   235,
     235,   133,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   133,   235,   235,   235,   235,   235,   235,
     235,   235,    77,  1328,   503,   235,   235,   239,   235,   235,
     587,  1291,   235,  1289,   518,  1268,   235,   235,   235,   235,
     223,   235,   235,   235,   235,   235,   235,  1279,   490,  1058,
     235,   238,   238,   235,  1160,   235,   467,   235,   235,   235,
     235,  1277,   534,   600,  1300,   573,   240,   240,   240,   240,
     240,   238,   235,   235,  1293,   235,   235,  1273,   393,   112,
     166,   480,    94,   403,    -1,  1130,    -1,  1128,   240,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   291,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   299,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     374
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   242,     0,     1,     4,    16,    19,    24,    31,    44,
      49,    50,    68,    72,    82,   102,   103,   118,   135,   147,
     148,   171,   184,   191,   196,   199,   243,   248,   253,   273,
     279,   285,   293,   307,   327,   351,   365,   380,   387,   391,
     401,   410,   431,   437,   443,   447,   453,   511,   525,   235,
     236,   237,   237,   328,   411,   438,   237,   448,   237,   366,
     432,   352,   237,   280,   308,   381,   237,   237,   402,   237,
     286,   237,   392,     1,    32,    40,   104,   274,   275,   276,
     277,   278,     1,    28,    29,    35,    64,    65,    66,    78,
      79,    80,    85,    86,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   523,   524,   237,   237,   237,
       1,    67,   444,   445,   446,   237,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    26,    27,    34,    37,    38,
      39,    41,    45,    62,    63,    73,    76,    77,    84,    91,
      93,    95,    97,    99,   100,   111,   116,   117,   119,   120,
     121,   124,   149,   159,   160,   161,   162,   163,   164,   165,
     217,   218,   219,   221,   222,   230,   454,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,   504,   508,   509,   510,   237,   237,   237,
       1,   101,   123,   249,   250,   251,   252,   237,   237,   237,
       1,    36,    46,    47,    48,    51,    52,    56,    57,    58,
     526,   527,   528,   529,   530,   531,   532,   533,   534,   535,
     536,     1,    30,    32,    60,    70,    92,    96,   104,   108,
     109,   137,   153,   156,   157,   158,   205,   228,   229,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   237,     1,
     226,   294,   295,   296,   297,   298,   237,     1,   104,   388,
     389,   390,   237,   235,   238,   238,   238,   236,   275,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     236,   513,     1,    17,    18,    25,    69,    86,    87,    88,
      89,    90,    94,    98,   104,   114,   115,   125,   146,   192,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,     1,
       3,     5,    19,    42,    59,    61,    69,    81,   104,   126,
     145,   154,   205,   228,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   422,   426,   427,   428,   429,   430,
       1,    67,   129,   439,   440,   441,   442,   238,   236,   445,
       1,   104,   129,   449,   450,   451,   452,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   505,   501,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   236,   455,     1,    19,
      42,    69,   122,   130,   131,   150,   227,   367,   368,   369,
     370,   371,   372,   373,   377,   378,   379,     1,   129,   227,
     433,   434,   435,   436,     1,    59,    67,    69,   126,   353,
     357,   358,   359,   363,   364,   235,   238,   238,   236,   250,
       1,    83,   177,   281,   282,   283,   284,     1,    19,    42,
      69,   104,   122,   154,   155,   207,   227,   231,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   323,
       1,    44,    83,   129,   382,   383,   384,   385,   386,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   236,   527,
     235,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   236,   255,
       1,   104,   224,   403,   404,   405,   406,   235,   238,   236,
     295,   177,     1,   104,   170,   190,   206,   287,   288,   289,
     290,   291,   292,   238,   236,   389,     1,   104,   224,   227,
     393,   394,   395,   396,   397,   127,   127,   127,   235,   113,
     113,   245,   216,   113,   245,   245,   113,   245,   245,   113,
     113,   235,   235,   238,   238,   238,   348,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     236,   330,   235,   238,   238,   238,   238,   238,   238,   423,
     238,   238,   238,   238,   238,   238,   238,   236,   413,   238,
     238,   236,   440,   127,   235,   238,   238,   236,   450,   216,
     245,   113,   245,   245,   127,   127,   127,   216,   113,   216,
     113,   113,   113,   216,   216,   216,   216,   245,   113,   113,
     113,   113,   245,   113,   113,   113,   113,   216,   238,   238,
     216,   245,   245,   216,   216,   216,   216,   220,   216,   220,
     216,   216,   216,   216,   113,   245,   216,   245,   245,   216,
     235,   235,   238,   238,   374,   238,   238,   238,   238,   238,
     236,   368,   238,   238,   236,   434,   235,   238,   238,   354,
     238,   236,   358,   127,   127,   235,   235,   238,   238,   236,
     282,   235,   238,   238,   324,   238,   238,   238,   238,   320,
     238,   238,   236,   310,   235,   238,   238,   238,   236,   383,
     216,   216,   245,   127,   216,   127,   216,   216,   216,   235,
     113,   127,   216,   127,   113,   113,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   235,   235,   238,
     407,   236,   404,   216,   235,   237,   235,   238,   238,   238,
     238,   236,   288,   127,   235,   235,   238,   398,   238,   236,
     394,   235,   235,   235,   235,   138,   139,   140,   141,   142,
     143,   144,   244,   245,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   113,   113,   245,   238,   113,   113,
     113,   245,   113,   113,   245,   127,   113,   113,   245,   113,
     247,   247,   235,   127,   181,   182,   127,   216,   127,   127,
     238,   127,   127,   113,   127,   127,   127,   127,   235,   127,
     127,   235,   235,   127,   127,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,    51,   167,   168,   169,   172,
     173,   175,   176,   178,   180,   183,   185,   186,   187,   193,
     197,   201,   202,   203,   208,   213,   232,   506,   507,    51,
      53,    54,   167,   168,   169,   172,   173,   175,   176,   178,
     180,   183,   185,   186,   187,   193,   197,   201,   202,   203,
     208,   213,   232,   502,   503,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   127,   216,   238,   127,   113,
     127,   127,   127,   235,   127,   127,   235,   127,   127,   238,
     113,   361,   362,   235,   235,   235,   127,   127,   235,   127,
     216,   238,   127,   127,   127,   216,   238,   127,   127,   235,
     127,   127,   127,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     127,   238,   235,   235,     1,   104,   200,   224,   299,   300,
     301,   302,   303,   127,   127,   127,   127,   235,   235,   127,
     238,   127,   235,   244,   244,   244,   244,   244,   244,   244,
     235,   235,   235,    55,   128,   349,   350,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,    11,    12,
      13,   246,   247,   235,   235,   235,   235,   235,   235,   235,
     235,   235,     8,   204,   424,   425,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   239,   235,
     239,   235,   235,    15,    43,    75,   105,   106,   112,   136,
     151,   215,   234,   375,   376,   235,   235,   235,   235,   235,
     235,   235,   235,   235,    51,   195,   204,   355,   356,   223,
     239,   360,   235,   235,   235,   235,     4,    23,    24,    33,
      71,    72,    74,   101,   107,   110,   132,   134,   135,   152,
     174,   179,   183,   188,   189,   194,   198,   209,   211,   212,
     214,   225,   233,   325,   326,   235,   235,   235,   235,    51,
      53,    54,   167,   168,   169,   172,   173,   175,   176,   178,
     180,   183,   185,   186,   187,   193,   197,   201,   202,   203,
     208,   213,   232,   321,   322,   235,   235,   235,   235,   235,
     235,    74,   135,   166,   174,   183,   209,   211,   212,   225,
     233,   408,   409,   235,   238,   238,   304,   236,   300,   235,
     235,   235,   235,   235,    74,   135,   166,   174,   183,   209,
     211,   212,   225,   233,   399,   400,   235,   235,   239,   246,
     246,   246,   235,   239,   507,   503,   235,   239,   235,   239,
     113,   362,   235,   240,   240,   240,   240,   240,   235,   239,
     235,   239,   235,   239,   127,   210,   247,   238,   235,   235,
     239,   350,   425,   376,   356,   133,   135,   133,   135,   133,
     326,   322,   409,   235,   235,   235,    72,    74,   118,   135,
     173,   174,   227,   233,   305,   306,   400,   235,   239,   306
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   241,   242,   242,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   244,   244,
     245,   245,   245,   245,   245,   245,   245,   245,   246,   246,
     247,   247,   247,   247,   248,   249,   249,   250,   250,   250,
     251,   252,   253,   254,   254,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   274,   275,   275,   275,   275,   276,   277,   278,
     280,   279,   281,   281,   282,   282,   282,   283,   284,   286,
     285,   287,   287,   288,   288,   288,   288,   288,   289,   290,
     291,   292,   293,   294,   294,   295,   295,   295,   296,   298,
     297,   299,   299,   300,   300,   300,   300,   301,   302,   302,
     304,   303,   305,   305,   306,   306,   306,   306,   306,   306,
     306,   306,   308,   307,   309,   309,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   320,   319,   321,   321,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   324,   323,   325,   325,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   328,   327,   329,
     329,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   348,   347,   349,   349,   350,
     350,   352,   351,   354,   353,   355,   355,   356,   356,   356,
     357,   357,   358,   358,   358,   358,   358,   360,   359,   361,
     361,   362,   362,   363,   364,   366,   365,   367,   367,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   369,   370,
     371,   372,   374,   373,   375,   375,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   377,   378,   379,   381,
     380,   382,   382,   383,   383,   383,   383,   384,   385,   386,
     387,   388,   388,   389,   389,   390,   392,   391,   393,   393,
     394,   394,   394,   394,   395,   396,   398,   397,   399,   399,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     402,   401,   403,   403,   404,   404,   404,   405,   407,   406,
     408,   408,   409,   409,   409,   409,   409,   409,   409,   409,
     409,   409,   411,   410,   412,   412,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   421,
     423,   422,   424,   424,   425,   425,   426,   427,   428,   429,
     430,   432,   431,   433,   433,   434,   434,   434,   435,   436,
     438,   437,   439,   439,   440,   440,   440,   441,   442,   443,
     444,   444,   445,   445,   446,   448,   447,   449,   449,   450,
     450,   450,   451,   452,   453,   454,   454,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   486,   487,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   501,   500,   502,   502,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   505,   504,   506,   506,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   507,   507,   507,
     507,   507,   507,   507,   507,   507,   507,   508,   509,   510,
     511,   512,   512,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   528,
     529,   530,   531,   532,   533,   534,   535,   536
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
       1,     1,     1,     1,     1,     1,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 422 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2901 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 423 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2907 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 424 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2913 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 425 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2919 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 426 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2925 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 427 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2931 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 428 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2937 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 429 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2943 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 430 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2949 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 433 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2961 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2967 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2973 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 437 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 450 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 2988 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 456 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 2997 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 489 "conf_parser.y" /* yacc.c:1646  */
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
#line 3040 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 529 "conf_parser.y" /* yacc.c:1646  */
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
#line 3101 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 587 "conf_parser.y" /* yacc.c:1646  */
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
#line 3133 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 616 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3144 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 624 "conf_parser.y" /* yacc.c:1646  */
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
#line 3161 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 638 "conf_parser.y" /* yacc.c:1646  */
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
#line 3192 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 666 "conf_parser.y" /* yacc.c:1646  */
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
#line 3210 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 681 "conf_parser.y" /* yacc.c:1646  */
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
#line 3228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 696 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3241 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 706 "conf_parser.y" /* yacc.c:1646  */
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
#line 3258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 720 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3270 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 729 "conf_parser.y" /* yacc.c:1646  */
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
#line 3301 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 757 "conf_parser.y" /* yacc.c:1646  */
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
#line 3332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 785 "conf_parser.y" /* yacc.c:1646  */
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
#line 3360 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 810 "conf_parser.y" /* yacc.c:1646  */
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
#line 3385 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 832 "conf_parser.y" /* yacc.c:1646  */
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
#line 3410 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 854 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3419 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 872 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3431 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 881 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3443 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 890 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3455 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 903 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3464 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 907 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3481 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 924 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3490 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 930 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3499 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 940 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3508 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 944 "conf_parser.y" /* yacc.c:1646  */
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
#line 3526 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 962 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3535 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 968 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3544 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 974 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3553 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 980 "conf_parser.y" /* yacc.c:1646  */
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
#line 3574 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1008 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3583 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1014 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3592 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1018 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1034 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3616 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1042 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3624 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1045 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3632 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1050 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3641 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1057 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3650 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1061 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3659 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1065 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3668 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1069 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3677 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1073 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3686 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1077 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3695 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1081 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3704 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1085 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3713 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1095 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3725 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1102 "conf_parser.y" /* yacc.c:1646  */
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
#line 3778 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1165 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3787 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1171 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3796 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3805 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1183 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3814 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1189 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3828 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1200 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3837 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1206 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3851 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1217 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3860 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1223 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1230 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
#line 3878 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1234 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
#line 3887 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1238 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3896 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1242 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
#line 3905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1246 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
#line 3914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1250 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1254 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1258 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3941 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1262 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
#line 3950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1266 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
#line 3959 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1270 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
#line 3968 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1274 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
#line 3977 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1278 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1282 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
#line 3995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1286 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 4004 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1290 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 4013 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1294 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 4022 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1298 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 4031 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1302 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4040 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1306 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4049 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1310 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4058 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1314 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4067 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1318 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4076 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1322 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4085 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1328 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4094 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1335 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4103 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1339 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4112 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1343 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4121 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1347 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4130 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1351 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4139 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1355 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1359 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4157 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1363 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4166 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1367 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4175 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1371 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4184 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1375 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4193 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1379 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1383 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1387 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1391 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4229 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1395 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1399 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4247 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1403 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1407 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4265 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1411 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1415 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4283 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1419 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1423 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4301 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1427 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4310 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1431 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4319 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1435 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4328 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1439 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4337 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1443 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4346 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1447 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4355 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1451 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NETADMIN;
}
#line 4364 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1461 "conf_parser.y" /* yacc.c:1646  */
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
#line 4381 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 238:
#line 1473 "conf_parser.y" /* yacc.c:1646  */
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
#line 4429 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1537 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4438 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1543 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4447 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1549 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4456 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1555 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4465 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1561 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4474 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1567 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4483 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1573 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1579 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1585 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1591 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4519 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1597 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4529 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1604 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4538 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1610 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4547 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1616 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4556 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1622 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4568 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1631 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 275:
#line 1640 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4589 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1647 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4598 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1651 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4607 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1661 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4616 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 283:
#line 1667 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4624 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1673 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4633 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1677 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4642 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 289:
#line 1681 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 297:
#line 1689 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4657 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1694 "conf_parser.y" /* yacc.c:1646  */
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
#line 4675 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1707 "conf_parser.y" /* yacc.c:1646  */
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
#line 4695 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1724 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4704 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1730 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4713 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1740 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4722 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 306:
#line 1744 "conf_parser.y" /* yacc.c:1646  */
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
#line 4763 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1793 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4772 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1799 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4781 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1805 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4790 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1811 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4804 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 322:
#line 1822 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4813 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1829 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4822 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1833 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4831 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1837 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4840 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1841 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4849 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1845 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4858 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1849 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4867 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1853 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4876 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1857 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1861 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4894 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1865 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1871 "conf_parser.y" /* yacc.c:1646  */
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
#line 4920 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1885 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 4932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1894 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 4944 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1907 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 4956 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 340:
#line 1914 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 4967 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1925 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4976 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1931 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4985 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 349:
#line 1937 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4994 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1952 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 5009 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1968 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5025 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 357:
#line 1979 "conf_parser.y" /* yacc.c:1646  */
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
#line 5042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1996 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2002 "conf_parser.y" /* yacc.c:1646  */
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
#line 5073 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 366:
#line 2021 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5082 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2028 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5091 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2032 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5100 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2036 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5109 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2040 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5118 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2044 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5127 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2048 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5136 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2052 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5145 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2056 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5154 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2060 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5163 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2064 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5172 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2074 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 381:
#line 2083 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5201 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2098 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5210 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 388:
#line 2104 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5219 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2111 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2115 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5237 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2119 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5246 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2123 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5255 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2127 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5264 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2131 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5273 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2135 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5282 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2139 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5291 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2143 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2147 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5309 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2157 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5323 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 403:
#line 2166 "conf_parser.y" /* yacc.c:1646  */
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
#line 5389 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2246 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5398 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2252 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5407 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2258 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5416 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2264 "conf_parser.y" /* yacc.c:1646  */
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
#line 5432 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2277 "conf_parser.y" /* yacc.c:1646  */
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
#line 5448 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2290 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5457 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2296 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2302 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5475 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 2306 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5484 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 430:
#line 2312 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2318 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2322 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2328 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5524 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2339 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5533 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2345 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5542 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2351 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5551 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2357 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5565 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2372 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5574 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 442:
#line 2376 "conf_parser.y" /* yacc.c:1646  */
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
#line 5599 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2401 "conf_parser.y" /* yacc.c:1646  */
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
#line 5622 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2421 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5631 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2431 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5640 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 451:
#line 2435 "conf_parser.y" /* yacc.c:1646  */
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
#line 5666 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2461 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5675 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 458:
#line 2467 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5684 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2482 "conf_parser.y" /* yacc.c:1646  */
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
#line 5701 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2499 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5710 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 466:
#line 2503 "conf_parser.y" /* yacc.c:1646  */
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
#line 5732 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2525 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5741 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 473:
#line 2531 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5750 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2596 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5758 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2601 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5766 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2606 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5774 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2611 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5786 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2620 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5798 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2629 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5810 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2638 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5819 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2644 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5827 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2649 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5835 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2654 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.enable_cloak_system = yylval.number;
}
#line 5844 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2660 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5852 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2665 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5860 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2670 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5868 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2675 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5876 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2680 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5884 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2685 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5892 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2690 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5900 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2695 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5908 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2700 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 5916 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2705 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 5924 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2710 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 5932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2715 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 5940 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2720 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 5949 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2726 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 5957 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2731 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 5965 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2736 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 5973 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2741 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 5981 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2746 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 5989 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2751 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 5997 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2756 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 6005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2761 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 6013 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2764 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 6021 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2769 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 6029 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2772 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6037 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2777 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6045 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2782 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6053 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2787 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6061 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2792 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6069 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2797 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6077 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2802 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6085 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2807 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6093 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2812 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6101 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2817 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6109 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2822 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6117 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2827 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6125 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2832 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6133 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2837 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6141 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2843 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BOTS;
}
#line 6149 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2846 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CCONN;
}
#line 6157 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2849 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6165 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2852 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEBUG;
}
#line 6173 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2855 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FULL;
}
#line 6181 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2858 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6189 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2861 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6197 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2864 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6205 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2867 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SKILL;
}
#line 6213 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2870 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NCHANGE;
}
#line 6221 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2873 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REJ;
}
#line 6229 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2876 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_UNAUTH;
}
#line 6237 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2879 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6245 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2882 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_EXTERNAL;
}
#line 6253 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2885 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6261 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2888 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6269 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2891 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6277 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2894 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6285 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2897 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6293 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2900 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6301 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2903 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6309 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2906 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6317 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2909 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6325 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2912 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6333 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2917 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6341 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2923 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_BOTS;
}
#line 6349 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2926 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CCONN;
}
#line 6357 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2929 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6365 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2932 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEBUG;
}
#line 6373 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2935 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FULL;
}
#line 6381 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2938 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SKILL;
}
#line 6389 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2941 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6397 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2944 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_NCHANGE;
}
#line 6405 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2947 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REJ;
}
#line 6413 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2950 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_UNAUTH;
}
#line 6421 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2953 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6429 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2956 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_EXTERNAL;
}
#line 6437 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2959 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6445 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2962 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6453 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2965 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6461 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2968 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6469 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2971 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6477 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2974 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6485 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2977 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6493 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2980 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2983 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6509 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2986 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6517 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2991 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6525 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2996 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6533 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 629:
#line 3001 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6541 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3026 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6549 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3031 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6557 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3036 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6565 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3041 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6573 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3046 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6581 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3051 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6589 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3056 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6597 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3061 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3066 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6613 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3071 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6621 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 655:
#line 3076 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6629 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3099 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6638 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3105 "conf_parser.y" /* yacc.c:1646  */
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
#line 6657 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3121 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6669 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3130 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6678 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3136 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6687 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3142 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6696 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3148 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6708 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3157 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6717 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 677:
#line 3163 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6726 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6730 "conf_parser.c" /* yacc.c:1646  */
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
