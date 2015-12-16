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
    NETWORK_DESC = 362,
    NETWORK_NAME = 363,
    NICK = 364,
    NO_OPER_FLOOD = 365,
    NO_TILDE = 366,
    NUMBER = 367,
    NUMBER_PER_CIDR = 368,
    NUMBER_PER_IP = 369,
    OPER_ONLY_UMODES = 370,
    OPER_UMODES = 371,
    OPERATOR = 372,
    OPERS_BYPASS_CALLERID = 373,
    PACE_WAIT = 374,
    PACE_WAIT_SIMPLE = 375,
    PASSWORD = 376,
    PATH = 377,
    PING_COOKIE = 378,
    PING_TIME = 379,
    PORT = 380,
    QSTRING = 381,
    RANDOM_IDLE = 382,
    REASON = 383,
    REDIRPORT = 384,
    REDIRSERV = 385,
    REHASH = 386,
    REMOTE = 387,
    REMOTEBAN = 388,
    RESV = 389,
    RESV_EXEMPT = 390,
    RSA_PRIVATE_KEY_FILE = 391,
    SECONDS = 392,
    MINUTES = 393,
    HOURS = 394,
    DAYS = 395,
    WEEKS = 396,
    MONTHS = 397,
    YEARS = 398,
    SEND_PASSWORD = 399,
    SENDQ = 400,
    SERVERHIDE = 401,
    SERVERINFO = 402,
    SHORT_MOTD = 403,
    SPOOF = 404,
    SPOOF_NOTICE = 405,
    SQUIT = 406,
    SSL_CERTIFICATE_FILE = 407,
    SSL_CERTIFICATE_FINGERPRINT = 408,
    SSL_CONNECTION_REQUIRED = 409,
    SSL_DH_ELLIPTIC_CURVE = 410,
    SSL_DH_PARAM_FILE = 411,
    SSL_MESSAGE_DIGEST_ALGORITHM = 412,
    STATS_E_DISABLED = 413,
    STATS_I_OPER_ONLY = 414,
    STATS_K_OPER_ONLY = 415,
    STATS_M_OPER_ONLY = 416,
    STATS_O_OPER_ONLY = 417,
    STATS_P_OPER_ONLY = 418,
    STATS_U_OPER_ONLY = 419,
    T_ALL = 420,
    T_BOTS = 421,
    T_CALLERID = 422,
    T_CCONN = 423,
    T_COMMAND = 424,
    T_CLUSTER = 425,
    T_DEAF = 426,
    T_DEBUG = 427,
    T_DLINE = 428,
    T_EXTERNAL = 429,
    T_FARCONNECT = 430,
    T_FILE = 431,
    T_FULL = 432,
    T_GLOBOPS = 433,
    T_INVISIBLE = 434,
    T_IPV4 = 435,
    T_IPV6 = 436,
    T_LOCOPS = 437,
    T_LOG = 438,
    T_NCHANGE = 439,
    T_NONONREG = 440,
    T_OPERWALL = 441,
    T_OPERWALLS = 442,
    T_OPME = 443,
    T_PREPEND = 444,
    T_PSEUDO = 445,
    T_RECVQ = 446,
    T_REJ = 447,
    T_RESTART = 448,
    T_SERVER = 449,
    T_SERVICE = 450,
    T_SERVNOTICE = 451,
    T_SET = 452,
    T_SHARED = 453,
    T_SIZE = 454,
    T_SKILL = 455,
    T_SOFTCALLERID = 456,
    T_SPY = 457,
    T_SSL = 458,
    T_SSL_CIPHER_LIST = 459,
    T_TARGET = 460,
    T_UMODES = 461,
    T_UNAUTH = 462,
    T_UNDLINE = 463,
    T_UNLIMITED = 464,
    T_UNRESV = 465,
    T_UNXLINE = 466,
    T_WALLOP = 467,
    T_WALLOPS = 468,
    T_WEBIRC = 469,
    TBOOL = 470,
    THROTTLE_COUNT = 471,
    THROTTLE_TIME = 472,
    TKLINE_EXPIRE_NOTICES = 473,
    TMASKED = 474,
    TS_MAX_DELTA = 475,
    TS_WARN_DELTA = 476,
    TWODOTS = 477,
    TYPE = 478,
    UNKLINE = 479,
    USE_LOGGING = 480,
    USER = 481,
    VHOST = 482,
    VHOST6 = 483,
    WARN_NO_CONNECT_BLOCK = 484,
    WHOIS = 485,
    WHOIS_NOTIFY = 486,
    XLINE = 487,
    XLINE_EXEMPT = 488
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
#define NETWORK_DESC 362
#define NETWORK_NAME 363
#define NICK 364
#define NO_OPER_FLOOD 365
#define NO_TILDE 366
#define NUMBER 367
#define NUMBER_PER_CIDR 368
#define NUMBER_PER_IP 369
#define OPER_ONLY_UMODES 370
#define OPER_UMODES 371
#define OPERATOR 372
#define OPERS_BYPASS_CALLERID 373
#define PACE_WAIT 374
#define PACE_WAIT_SIMPLE 375
#define PASSWORD 376
#define PATH 377
#define PING_COOKIE 378
#define PING_TIME 379
#define PORT 380
#define QSTRING 381
#define RANDOM_IDLE 382
#define REASON 383
#define REDIRPORT 384
#define REDIRSERV 385
#define REHASH 386
#define REMOTE 387
#define REMOTEBAN 388
#define RESV 389
#define RESV_EXEMPT 390
#define RSA_PRIVATE_KEY_FILE 391
#define SECONDS 392
#define MINUTES 393
#define HOURS 394
#define DAYS 395
#define WEEKS 396
#define MONTHS 397
#define YEARS 398
#define SEND_PASSWORD 399
#define SENDQ 400
#define SERVERHIDE 401
#define SERVERINFO 402
#define SHORT_MOTD 403
#define SPOOF 404
#define SPOOF_NOTICE 405
#define SQUIT 406
#define SSL_CERTIFICATE_FILE 407
#define SSL_CERTIFICATE_FINGERPRINT 408
#define SSL_CONNECTION_REQUIRED 409
#define SSL_DH_ELLIPTIC_CURVE 410
#define SSL_DH_PARAM_FILE 411
#define SSL_MESSAGE_DIGEST_ALGORITHM 412
#define STATS_E_DISABLED 413
#define STATS_I_OPER_ONLY 414
#define STATS_K_OPER_ONLY 415
#define STATS_M_OPER_ONLY 416
#define STATS_O_OPER_ONLY 417
#define STATS_P_OPER_ONLY 418
#define STATS_U_OPER_ONLY 419
#define T_ALL 420
#define T_BOTS 421
#define T_CALLERID 422
#define T_CCONN 423
#define T_COMMAND 424
#define T_CLUSTER 425
#define T_DEAF 426
#define T_DEBUG 427
#define T_DLINE 428
#define T_EXTERNAL 429
#define T_FARCONNECT 430
#define T_FILE 431
#define T_FULL 432
#define T_GLOBOPS 433
#define T_INVISIBLE 434
#define T_IPV4 435
#define T_IPV6 436
#define T_LOCOPS 437
#define T_LOG 438
#define T_NCHANGE 439
#define T_NONONREG 440
#define T_OPERWALL 441
#define T_OPERWALLS 442
#define T_OPME 443
#define T_PREPEND 444
#define T_PSEUDO 445
#define T_RECVQ 446
#define T_REJ 447
#define T_RESTART 448
#define T_SERVER 449
#define T_SERVICE 450
#define T_SERVNOTICE 451
#define T_SET 452
#define T_SHARED 453
#define T_SIZE 454
#define T_SKILL 455
#define T_SOFTCALLERID 456
#define T_SPY 457
#define T_SSL 458
#define T_SSL_CIPHER_LIST 459
#define T_TARGET 460
#define T_UMODES 461
#define T_UNAUTH 462
#define T_UNDLINE 463
#define T_UNLIMITED 464
#define T_UNRESV 465
#define T_UNXLINE 466
#define T_WALLOP 467
#define T_WALLOPS 468
#define T_WEBIRC 469
#define TBOOL 470
#define THROTTLE_COUNT 471
#define THROTTLE_TIME 472
#define TKLINE_EXPIRE_NOTICES 473
#define TMASKED 474
#define TS_MAX_DELTA 475
#define TS_WARN_DELTA 476
#define TWODOTS 477
#define TYPE 478
#define UNKLINE 479
#define USE_LOGGING 480
#define USER 481
#define VHOST 482
#define VHOST6 483
#define WARN_NO_CONNECT_BLOCK 484
#define WHOIS 485
#define WHOIS_NOTIFY 486
#define XLINE 487
#define XLINE_EXEMPT 488

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 702 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 717 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1277

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  240
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  296
/* YYNRULES -- Number of rules.  */
#define YYNRULES  676
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1329

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   488

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
       2,     2,     2,     2,   238,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   239,   234,
       2,   237,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   236,     2,   235,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   390,   390,   391,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   421,   421,
     422,   423,   424,   425,   426,   427,   428,   429,   432,   432,
     433,   434,   435,   436,   443,   445,   445,   446,   446,   446,
     448,   454,   464,   466,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   487,   527,   585,   614,   622,   636,   664,
     679,   694,   704,   718,   727,   755,   783,   808,   830,   852,
     862,   864,   864,   865,   866,   867,   868,   870,   879,   888,
     902,   901,   919,   919,   920,   920,   920,   922,   928,   939,
     938,   957,   957,   958,   958,   958,   958,   958,   960,   966,
     972,   978,  1000,  1001,  1001,  1003,  1003,  1004,  1006,  1013,
    1013,  1026,  1027,  1029,  1029,  1030,  1030,  1032,  1040,  1043,
    1049,  1048,  1054,  1054,  1055,  1059,  1063,  1067,  1071,  1075,
    1079,  1083,  1094,  1093,  1150,  1150,  1151,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1160,  1161,  1163,  1169,  1175,
    1181,  1187,  1198,  1204,  1215,  1222,  1221,  1227,  1227,  1228,
    1232,  1236,  1240,  1244,  1248,  1252,  1256,  1260,  1264,  1268,
    1272,  1276,  1280,  1284,  1288,  1292,  1296,  1300,  1304,  1308,
    1312,  1316,  1320,  1327,  1326,  1332,  1332,  1333,  1337,  1341,
    1345,  1349,  1353,  1357,  1361,  1365,  1369,  1373,  1377,  1381,
    1385,  1389,  1393,  1397,  1401,  1405,  1409,  1413,  1417,  1421,
    1425,  1429,  1433,  1437,  1441,  1445,  1456,  1455,  1512,  1512,
    1513,  1514,  1515,  1516,  1517,  1518,  1519,  1520,  1521,  1522,
    1523,  1524,  1525,  1525,  1526,  1527,  1528,  1529,  1531,  1537,
    1543,  1549,  1555,  1561,  1567,  1573,  1579,  1585,  1591,  1598,
    1604,  1610,  1616,  1625,  1635,  1634,  1640,  1640,  1641,  1645,
    1656,  1655,  1662,  1661,  1666,  1666,  1667,  1671,  1675,  1681,
    1681,  1682,  1682,  1682,  1682,  1682,  1684,  1684,  1686,  1686,
    1688,  1701,  1718,  1724,  1735,  1734,  1776,  1776,  1777,  1778,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,  1787,  1793,  1799,
    1805,  1817,  1816,  1822,  1822,  1823,  1827,  1831,  1835,  1839,
    1843,  1847,  1851,  1855,  1859,  1865,  1879,  1888,  1902,  1901,
    1916,  1916,  1917,  1917,  1917,  1917,  1919,  1925,  1931,  1941,
    1943,  1943,  1944,  1944,  1946,  1963,  1962,  1987,  1987,  1988,
    1988,  1988,  1988,  1990,  1996,  2016,  2015,  2021,  2021,  2022,
    2026,  2030,  2034,  2038,  2042,  2046,  2050,  2054,  2058,  2069,
    2068,  2089,  2089,  2090,  2090,  2090,  2092,  2099,  2098,  2104,
    2104,  2105,  2109,  2113,  2117,  2121,  2125,  2129,  2133,  2137,
    2141,  2152,  2151,  2223,  2223,  2224,  2225,  2226,  2227,  2228,
    2229,  2230,  2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,
    2240,  2246,  2252,  2258,  2271,  2284,  2290,  2296,  2300,  2307,
    2306,  2311,  2311,  2312,  2316,  2322,  2333,  2339,  2345,  2351,
    2367,  2366,  2392,  2392,  2393,  2393,  2393,  2395,  2415,  2426,
    2425,  2452,  2452,  2453,  2453,  2453,  2455,  2461,  2471,  2473,
    2473,  2474,  2474,  2476,  2494,  2493,  2516,  2516,  2517,  2517,
    2517,  2519,  2525,  2535,  2537,  2537,  2538,  2539,  2540,  2541,
    2542,  2543,  2544,  2545,  2546,  2547,  2548,  2549,  2550,  2551,
    2552,  2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,
    2562,  2563,  2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,
    2572,  2573,  2574,  2575,  2576,  2577,  2578,  2579,  2580,  2581,
    2582,  2583,  2584,  2585,  2586,  2587,  2590,  2595,  2600,  2605,
    2614,  2623,  2632,  2638,  2643,  2648,  2654,  2659,  2664,  2669,
    2674,  2679,  2684,  2689,  2694,  2699,  2704,  2709,  2714,  2720,
    2725,  2730,  2735,  2740,  2745,  2750,  2755,  2758,  2763,  2766,
    2771,  2776,  2781,  2786,  2791,  2796,  2801,  2806,  2811,  2816,
    2821,  2826,  2832,  2831,  2836,  2836,  2837,  2840,  2843,  2846,
    2849,  2852,  2855,  2858,  2861,  2864,  2867,  2870,  2873,  2876,
    2879,  2882,  2885,  2888,  2891,  2894,  2897,  2900,  2903,  2906,
    2912,  2911,  2916,  2916,  2917,  2920,  2923,  2926,  2929,  2932,
    2935,  2938,  2941,  2944,  2947,  2950,  2953,  2956,  2959,  2962,
    2965,  2968,  2971,  2974,  2977,  2980,  2985,  2990,  2995,  3004,
    3006,  3006,  3007,  3008,  3009,  3010,  3011,  3012,  3013,  3014,
    3015,  3016,  3017,  3018,  3020,  3025,  3030,  3035,  3040,  3045,
    3050,  3055,  3060,  3065,  3070,  3079,  3081,  3081,  3082,  3083,
    3084,  3085,  3086,  3087,  3088,  3089,  3090,  3091,  3093,  3099,
    3115,  3124,  3130,  3136,  3142,  3151,  3157
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
  "NEED_IDENT", "NEED_PASSWORD", "NETWORK_DESC", "NETWORK_NAME", "NICK",
  "NO_OPER_FLOOD", "NO_TILDE", "NUMBER", "NUMBER_PER_CIDR",
  "NUMBER_PER_IP", "OPER_ONLY_UMODES", "OPER_UMODES", "OPERATOR",
  "OPERS_BYPASS_CALLERID", "PACE_WAIT", "PACE_WAIT_SIMPLE", "PASSWORD",
  "PATH", "PING_COOKIE", "PING_TIME", "PORT", "QSTRING", "RANDOM_IDLE",
  "REASON", "REDIRPORT", "REDIRSERV", "REHASH", "REMOTE", "REMOTEBAN",
  "RESV", "RESV_EXEMPT", "RSA_PRIVATE_KEY_FILE", "SECONDS", "MINUTES",
  "HOURS", "DAYS", "WEEKS", "MONTHS", "YEARS", "SEND_PASSWORD", "SENDQ",
  "SERVERHIDE", "SERVERINFO", "SHORT_MOTD", "SPOOF", "SPOOF_NOTICE",
  "SQUIT", "SSL_CERTIFICATE_FILE", "SSL_CERTIFICATE_FINGERPRINT",
  "SSL_CONNECTION_REQUIRED", "SSL_DH_ELLIPTIC_CURVE", "SSL_DH_PARAM_FILE",
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
     485,   486,   487,   488,    59,   125,   123,    61,    44,    58
};
# endif

#define YYPACT_NINF -761

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-761)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -761,   707,  -761,  -177,  -223,  -218,  -761,  -761,  -761,  -208,
    -761,  -190,  -761,  -761,  -761,  -181,  -761,  -761,  -761,  -176,
    -171,  -761,  -112,  -761,   -87,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,   325,   736,   -72,   -55,   -49,    23,   -38,   438,   -29,
     -12,   -11,    26,    36,    57,    67,   355,   577,    73,    58,
      74,    16,    78,  -203,  -197,  -165,  -162,    21,  -761,  -761,
    -761,  -761,  -761,  -138,    37,    83,    86,    87,   104,   105,
     113,   115,   116,   123,   269,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,   742,   490,    44,
    -761,   124,    11,  -761,  -761,   107,  -761,   126,   129,   130,
     131,   134,   135,   136,   138,   141,   143,   144,   145,   150,
     151,   153,   155,   157,   159,   160,   161,   167,   171,   172,
     173,   185,   187,   191,   194,   196,  -761,  -761,   197,   198,
     199,   203,   204,   205,   206,   209,   212,   213,   217,   218,
     219,   220,   225,   229,   232,   237,    42,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,   357,    95,   326,
      18,   243,   244,    29,  -761,  -761,  -761,     6,   317,    10,
    -761,   245,   247,   248,   251,   252,   253,   255,   257,   259,
     127,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,    60,   261,   262,   265,   266,   268,   270,   271,   273,
     276,   279,   280,   281,   282,   283,   287,   288,   289,    84,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,    46,    68,
     290,    40,  -761,  -761,  -761,   170,   195,  -761,   297,     9,
    -761,  -761,    25,  -761,   299,   306,   337,   302,  -761,   427,
     430,   329,   433,   430,   430,   434,   430,   430,   440,   443,
     335,  -761,   336,   323,   338,   340,  -761,   342,   343,   344,
     345,   347,   348,   350,   356,   366,   367,   368,   371,   373,
     192,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,   358,
     374,   375,   376,   377,   379,   380,  -761,   382,   383,   384,
     385,   386,   387,   388,   226,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,   390,   393,    31,  -761,  -761,  -761,   446,   397,  -761,
    -761,   395,   396,    93,  -761,  -761,  -761,   359,   430,   523,
     430,   430,   510,   512,   513,   425,   529,   429,   530,   533,
     534,   437,   442,   445,   448,   430,   537,   541,   549,   552,
     430,   553,   554,   558,   559,   457,   439,   441,   459,   430,
     430,   460,   462,   464,  -199,  -196,   465,   468,   471,   472,
     579,   430,   474,   430,   430,   477,   463,  -761,   466,   461,
     469,  -761,   475,   478,   479,   481,   482,    65,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,   483,   484,
      41,  -761,  -761,  -761,   467,   487,   499,  -761,   502,  -761,
     188,  -761,  -761,  -761,  -761,  -761,   567,   570,   506,  -761,
     508,   507,   509,   139,  -761,  -761,  -761,   511,   515,   518,
    -761,   521,   525,   526,   531,  -761,   532,   535,     2,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
     514,   536,   539,   540,    38,  -761,  -761,  -761,  -761,   488,
     494,   430,   576,   551,   621,   563,   565,   568,   516,  -761,
    -761,   642,   648,   569,   656,   673,   674,   662,   664,   666,
     671,   677,   680,   681,   682,   687,   691,   692,   585,  -761,
     589,   550,  -761,   108,  -761,  -761,  -761,  -761,   610,   593,
    -761,   597,   601,   600,   602,   611,   612,    49,  -761,  -761,
    -761,  -761,  -761,   712,   613,  -761,   616,   614,  -761,   615,
      66,  -761,  -761,  -761,  -761,   623,   624,   625,  -761,   626,
     277,   627,   628,   629,   630,   631,   633,   634,   636,   639,
     640,  -761,  -761,   763,   764,   430,   641,   767,   768,   769,
     430,   770,   771,   430,   760,   776,   777,   430,   779,   779,
     658,  -761,  -761,   772,    62,   773,   679,   774,   775,   659,
     778,   783,   798,   787,   790,   792,   794,   669,  -761,   795,
     797,   693,  -761,   694,  -761,   803,   804,   697,  -761,   700,
     701,   703,   704,   705,   709,   710,   711,   714,   715,   716,
     717,   719,   720,   721,   722,   726,   727,   730,   733,   735,
     738,   744,   745,   746,   747,   748,   750,   751,   833,   740,
     752,   754,   755,   756,   761,   762,   780,   782,   786,   789,
     793,   796,   802,   805,   807,   808,   809,   810,   812,   813,
    -761,  -761,   820,   759,   757,   871,   890,   880,   883,   885,
     814,  -761,   887,   895,   815,  -761,  -761,   898,   900,   800,
     916,   816,  -761,   817,   818,  -761,  -761,   905,   906,   819,
    -761,  -761,   912,   839,   821,   929,   930,   931,   844,   823,
     935,   936,   829,  -761,  -761,   939,   940,   941,   834,  -761,
     835,   836,   837,   838,   840,   841,   842,   843,   845,  -761,
     846,   847,   848,   849,   850,   851,   852,   853,   854,   855,
     856,   857,   858,   859,   860,   861,   862,  -761,  -761,   947,
     863,   864,  -761,   865,  -761,   146,  -761,   952,   971,   975,
     976,   869,  -761,   870,  -761,  -761,   979,   872,   980,   873,
    -761,  -761,  -761,  -761,  -761,   430,   430,   430,   430,   430,
     430,   430,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,   874,   876,   877,   -41,   878,   879,
     881,   882,   884,   886,   888,   889,   891,   892,   893,    24,
     894,   896,  -761,   897,   899,   901,   902,   903,   904,   907,
      -4,   908,   909,   910,   911,   913,   914,   915,  -761,   917,
     918,  -761,  -761,   919,   920,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -205,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -200,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,   921,   922,   362,   923,   924,
     925,   926,   927,  -761,   928,   932,  -761,   933,   934,   -26,
     942,   657,  -761,  -761,  -761,  -761,   937,   938,  -761,   943,
     944,   517,   945,   946,   948,   949,   791,   950,   951,  -761,
     953,   954,   955,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
     956,   588,  -761,  -761,   957,   958,   959,  -761,   109,  -761,
    -761,  -761,  -761,   960,   963,   964,   965,  -761,  -761,   966,
     661,   967,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -164,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,   779,   779,
     779,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -161,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,   833,  -761,
     740,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -146,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -143,  -761,  1002,
     916,   968,  -761,  -761,  -761,  -761,  -761,  -761,   969,  -761,
     970,   972,  -761,  -761,   973,  -761,  -761,  -761,   974,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -137,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,   -67,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
     -19,  -761,  -761,   991,   -97,   977,   981,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,    -8,  -761,  -761,  -761,   -41,  -761,  -761,
    -761,  -761,    -4,  -761,  -761,  -761,   362,  -761,   -26,  -761,
    -761,  -761,   987,   990,   989,   995,  1000,  -761,   517,  -761,
     791,  -761,   588,   982,   983,   984,   456,  -761,  -761,   661,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,    15,  -761,  -761,  -761,   456,  -761
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   236,   401,   449,     0,
     464,     0,   304,   440,   280,     0,   100,   152,   338,     0,
       0,   379,     0,   109,     0,   355,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   643,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   631,   642,   633,   634,   635,
     636,   637,   638,   639,   632,   640,   641,     0,     0,     0,
     462,     0,     0,   460,   461,     0,   525,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   600,   572,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   475,   476,   477,
     519,   522,   523,   524,   520,   514,   515,   521,   516,   517,
     513,   487,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   488,   489,   518,   493,   494,   495,   496,   492,   491,
     497,   504,   505,   498,   499,   500,   490,   502,   511,   512,
     509,   510,   503,   501,   507,   508,   506,     0,     0,     0,
       0,     0,     0,     0,    46,    47,    48,     0,     0,     0,
     667,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   657,   658,   659,   660,   661,   662,   663,   665,   664,
     666,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    69,    66,    64,    70,    71,    65,    55,    68,    58,
      59,    60,    56,    67,    61,    62,    63,    57,     0,     0,
       0,     0,   124,   125,   126,     0,     0,   353,     0,     0,
     351,   352,     0,    96,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   630,     0,     0,     0,     0,   274,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   240,   243,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   241,   242,   244,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,   429,     0,     0,     0,
       0,     0,     0,     0,     0,   404,   405,   406,   407,   408,
     409,   410,   412,   411,   414,   418,   415,   416,   417,   413,
     455,     0,     0,     0,   452,   453,   454,     0,     0,   459,
     470,     0,     0,     0,   467,   468,   469,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   474,     0,     0,
       0,   321,     0,     0,     0,     0,     0,     0,   307,   308,
     309,   310,   315,   311,   312,   313,   314,   446,     0,     0,
       0,   443,   444,   445,     0,     0,     0,   282,     0,   292,
       0,   290,   291,   293,   294,    49,     0,     0,     0,    45,
       0,     0,     0,     0,   103,   104,   105,     0,     0,     0,
     203,     0,     0,     0,     0,   175,     0,     0,     0,   155,
     156,   157,   158,   159,   162,   163,   164,   161,   160,   165,
       0,     0,     0,     0,     0,   341,   342,   343,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   656,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    53,
       0,     0,   387,     0,   382,   383,   384,   127,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,   112,   113,
     115,   114,   116,     0,     0,   350,     0,     0,   365,     0,
       0,   358,   359,   360,   361,     0,     0,     0,    90,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   629,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   419,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   403,     0,
       0,     0,   451,     0,   458,     0,     0,     0,   466,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     473,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,     0,     0,     0,   442,   295,     0,     0,     0,
       0,     0,   289,     0,     0,    44,   106,     0,     0,     0,
     102,   166,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   154,   345,     0,     0,     0,     0,   340,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   655,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   385,     0,
       0,     0,   381,     0,   122,     0,   117,     0,     0,     0,
       0,     0,   111,     0,   349,   362,     0,     0,     0,     0,
     357,    99,    98,    97,   653,    28,    28,    28,    28,    28,
      28,    28,    30,    29,   654,   644,   645,   646,   647,   648,
     649,   650,   652,   651,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,   237,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   402,     0,
       0,   450,   463,     0,     0,   465,   542,   546,   526,   527,
     561,   529,   530,   531,   532,   628,   569,   533,   534,   566,
     535,   541,   540,   549,   539,   536,   537,   545,   544,   543,
     567,   528,   626,   627,   565,   610,   604,   620,   605,   606,
     607,   615,   623,   608,   617,   621,   611,   622,   624,   612,
     616,   609,   619,   614,   613,   618,   625,     0,   603,   581,
     582,   583,   576,   594,   577,   578,   579,   589,   597,   580,
     591,   595,   585,   596,   598,   586,   590,   584,   593,   588,
     587,   592,   599,     0,   575,   562,   560,   563,   568,   564,
     551,   558,   559,   556,   557,   552,   553,   554,   555,   570,
     571,   538,   548,   547,   550,     0,     0,     0,     0,     0,
       0,     0,     0,   305,     0,     0,   441,     0,     0,     0,
     300,   296,   299,   281,    50,    51,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   339,   671,   668,   669,   670,   675,   674,
     676,   672,   673,    86,    81,    89,    80,    87,    88,    79,
      83,    82,    74,    73,    78,    75,    77,    76,    84,    85,
       0,     0,   380,   128,     0,     0,     0,   140,     0,   132,
     133,   135,   134,     0,     0,     0,     0,   110,   354,     0,
       0,     0,   356,    31,    32,    33,    34,    35,    36,    37,
     269,   270,   261,   279,   278,     0,   277,   262,   264,   266,
     273,   265,   263,   272,   258,   271,   260,   259,    38,    38,
      38,    40,    39,   267,   268,   424,   427,   428,   438,   435,
     421,   436,   433,   434,     0,   432,   437,   420,   426,   423,
     425,   439,   422,   456,   457,   471,   472,   601,     0,   573,
       0,   319,   320,   330,   326,   327,   329,   334,   331,   332,
     325,   333,   328,     0,   324,   318,   337,   336,   335,   317,
     448,   447,   303,   302,   287,   288,   286,     0,   285,     0,
       0,     0,   107,   108,   174,   171,   222,   234,   210,   219,
       0,   208,   213,   228,     0,   221,   226,   232,   212,   215,
     223,   225,   235,   229,   220,   227,   216,   233,   218,   224,
     214,   217,     0,   206,   167,   169,   172,   173,   184,   185,
     186,   179,   197,   180,   181,   182,   192,   200,   183,   194,
     198,   188,   199,   201,   189,   193,   187,   196,   191,   190,
     195,   202,     0,   178,   168,   170,   348,   346,   347,   386,
     391,   397,   400,   393,   399,   394,   398,   396,   392,   395,
       0,   390,   136,     0,     0,     0,     0,   131,   119,   118,
     120,   121,   363,   369,   375,   378,   371,   377,   372,   376,
     374,   370,   373,     0,   368,   364,   275,     0,    41,    42,
      43,   430,     0,   602,   574,   322,     0,   283,     0,   301,
     298,   297,     0,     0,     0,     0,     0,   204,     0,   176,
       0,   388,     0,     0,     0,     0,     0,   130,   366,     0,
     276,   431,   323,   284,   209,   231,   207,   230,   211,   205,
     177,   389,   137,   139,   138,   150,   149,   145,   147,   151,
     148,   144,   146,     0,   143,   367,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -761,  -761,  -761,  -263,  -308,  -760,  -638,  -761,  -761,   996,
    -761,  -761,  -761,  -761,   961,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  1057,  -761,  -761,  -761,  -761,  -761,
    -761,   637,  -761,  -761,  -761,  -761,  -761,   578,  -761,  -761,
    -761,  -761,  -761,  -761,   962,  -761,  -761,  -761,  -761,    81,
    -761,  -761,  -761,  -761,  -761,  -158,  -761,  -761,  -761,   632,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -144,  -761,  -761,  -761,  -125,  -761,  -761,  -761,   830,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,   -94,
    -761,  -761,  -761,  -761,  -761,  -104,  -761,   685,  -761,  -761,
    -761,    32,  -761,  -761,  -761,  -761,  -761,   737,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -100,  -761,  -761,  -761,  -761,
    -761,  -761,   647,  -761,  -761,  -761,  -761,  -761,   978,  -761,
    -761,  -761,  -761,   586,  -761,  -761,  -761,  -761,  -761,  -106,
    -761,  -761,  -761,   649,  -761,  -761,  -761,  -761,   -89,  -761,
    -761,  -761,   831,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,   -66,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,   741,  -761,  -761,  -761,  -761,  -761,   827,
    -761,  -761,  -761,  -761,  1095,  -761,  -761,  -761,  -761,   822,
    -761,  -761,  -761,  -761,  1044,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,    94,  -761,  -761,  -761,    98,  -761,  -761,  -761,
    -761,  -761,  1129,  -761,  -761,  -761,  -761,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761,   988,  -761,  -761,  -761,
    -761,  -761,  -761,  -761,  -761,  -761
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
    1060,  1061,  1062,  1245,  1323,  1324,    33,    64,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   759,
    1222,  1223,   529,   754,  1192,  1193,    34,    53,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   626,  1085,  1086,
      35,    61,   489,   739,  1157,  1158,   490,   491,   492,  1161,
    1001,  1002,   493,   494,    36,    59,   467,   468,   469,   470,
     471,   472,   473,   724,  1143,  1144,   474,   475,   476,    37,
      65,   534,   535,   536,   537,   538,    38,   299,   300,   301,
      39,    72,   600,   601,   602,   603,   604,   817,  1263,  1264,
      40,    68,   573,   574,   575,   576,   800,  1240,  1241,    41,
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
     860,   861,   611,   507,  1112,   614,   615,   500,   617,   618,
     297,   530,   110,    51,  1083,   859,   706,   297,    52,   708,
     707,   508,    73,   709,   110,  1154,   596,   220,    56,  1127,
     220,   303,   390,  1128,  1129,  1098,  1099,  1100,  1130,   530,
     304,   289,   477,   116,   509,   390,    58,   570,   117,   118,
     582,   119,   120,    74,   531,    62,   121,    49,    50,   289,
      66,    75,   122,   123,   124,    67,   458,   596,   125,   126,
    1266,   510,   305,  1271,  1267,   306,   127,  1272,   111,   128,
     129,   130,   531,   131,   459,   251,  1084,   132,  1275,   501,
     111,  1277,  1276,   532,   400,  1278,   477,  1287,   391,   309,
     670,  1288,   672,   673,   133,   134,   511,   460,   400,   570,
    1054,   391,  1294,   298,   252,   135,   253,   687,   136,   137,
     298,   532,   692,   512,    69,    76,   138,   221,   230,   597,
     221,   701,   702,   139,   461,   140,   859,   141,   533,   142,
     500,   143,   144,   715,   254,   717,   718,  1054,   222,    71,
     571,   222,   145,   583,   255,   513,   514,   146,   147,   392,
     148,   149,   150,   231,   107,   151,   533,  1289,  1155,   478,
     597,  1290,   392,   232,   233,   234,   256,  1156,   235,   236,
     257,   108,   502,   237,   238,   239,   462,   109,   258,   484,
     152,   259,   260,   322,   463,   464,   582,   401,   115,  1113,
     153,   154,   155,   156,   157,   158,   159,   217,   515,   323,
     324,   401,   571,  1055,   465,  1291,  -129,   325,   584,  1292,
     261,   402,   501,   478,   218,   219,  1298,   359,   516,   360,
    1299,   361,   517,   772,  -129,   402,   262,   762,   585,   263,
     264,   265,   864,   865,   594,   362,   398,   485,   598,  1326,
    1055,   599,   495,  1327,   586,   486,   307,   487,   160,   161,
     162,   326,   163,   164,   498,   290,   661,   479,   363,   572,
      82,   165,   227,   768,   310,   579,   734,   456,   327,   328,
     329,   330,   331,   290,   811,   364,   332,   365,   266,   598,
     333,   466,   599,   228,   550,   366,   334,    83,    84,   583,
     730,   819,   577,   229,    85,   335,   336,   367,  1056,   288,
     296,   267,   268,   488,   302,   502,   337,   846,   507,   568,
     311,   479,   851,   312,   313,   854,    73,   484,   667,   858,
     368,   572,  1057,    86,    87,    88,   508,   338,  1268,  1269,
    1270,   314,   315,   801,  1246,  1056,   581,    89,    90,    91,
     316,   369,   317,   318,    92,    93,   230,    74,   458,   509,
     319,   397,   548,   407,   584,    75,   408,   409,   410,  1057,
     370,   411,   412,   413,   749,   414,   459,  1133,   415,   371,
     416,   417,   418,   339,   585,   485,   510,   419,   420,   610,
     421,   231,   422,   486,   423,   487,   424,   425,   426,   460,
     586,   232,   233,   234,   427,  1134,   235,   236,   428,   429,
     430,   237,   238,   239,   825,   826,   827,   828,   829,   830,
     831,   511,   431,   741,   432,   605,   461,   640,   433,    76,
     372,   434,   606,   435,   438,   439,   440,  1135,   512,   116,
     441,   442,   443,   444,   117,   118,   445,   119,   120,   446,
     447,   488,   121,   373,   448,   449,   450,   451,   122,   123,
     124,   657,   452,   607,   125,   126,   453,  1136,  1137,   454,
     513,   514,   127,  1138,   455,   128,   129,   130,   462,   131,
     496,   497,   539,   132,   540,   541,   463,   464,   542,   543,
     544,   359,   545,   360,   546,   361,   547,  1139,   551,   552,
     133,   134,   553,   554,   320,   555,   465,   556,   557,   362,
     558,   135,  1140,   559,   136,   137,   560,   561,   562,   563,
     564,  1166,   138,   515,   565,   566,   567,   578,  1315,   139,
    1316,   140,   363,   141,   593,   142,   608,   143,   144,   609,
    1167,  1168,   610,   516,   612,   613,   616,   517,   145,   364,
    1169,   365,   619,   146,   147,   620,   148,   149,   150,   366,
     623,   151,  1073,  1074,  1075,  1076,  1077,  1078,  1079,   621,
     622,   367,   663,  1317,   669,   624,  1141,   625,   251,   627,
     628,   629,   630,   466,   631,   632,   152,   633,  1170,  1171,
    1318,  1172,   642,   634,   368,  1142,   153,   154,   155,   156,
     157,   158,   159,   635,   636,   637,  1295,   252,   638,   253,
     639,   643,   644,   645,   646,   369,   647,   648,  1173,   650,
     651,   652,   653,   654,   655,   656,  1174,   659,  1319,  1320,
     660,   664,   665,   666,   370,   671,   674,   254,   675,   676,
     677,   678,   680,   371,   679,   681,   682,   255,  1175,   688,
    1176,  1177,   683,   689,   160,   161,   162,   684,   163,   164,
     685,   690,  1230,   686,   691,   693,   694,   165,  1178,   256,
     695,   696,   697,   257,   700,   703,   698,   704,   699,   705,
     710,   258,  1321,   711,   259,   260,   712,   713,  1322,   716,
    1179,   714,   719,   743,   372,  1180,   744,   720,   722,  1181,
     721,   736,   773,   770,  1182,  1183,   723,     2,     3,   771,
    1184,     4,   725,   261,  1185,   726,   727,   373,   728,   729,
     732,   733,  1231,     5,   737,  1186,     6,  1187,  1188,   262,
    1189,     7,   263,   264,   265,  1253,   738,    82,     8,   740,
     745,  1190,   746,   322,   747,   751,   748,   775,   764,  1191,
     779,     9,   752,  1232,   780,   753,    10,    11,   755,   323,
     324,  1233,   756,   757,    83,    84,   774,   325,   758,   760,
    1234,    85,   761,   765,   781,    12,   766,   767,   776,    13,
     777,   266,   783,   778,   782,   784,   785,   799,   786,    14,
     787,   939,   788,   940,   941,  1254,  1235,   789,  1236,  1237,
      86,    87,    88,   790,   267,   268,   791,   792,   793,    15,
      16,   326,  1238,   794,    89,    90,    91,   795,   796,   797,
    1239,    92,    93,   798,    17,   803,  1255,   804,   327,   328,
     329,   330,   331,   805,  1256,   806,   332,   807,   813,   808,
     333,    18,  1198,  1257,  1199,  1200,   334,   814,   809,   810,
     815,   816,   818,    19,    20,   335,   336,   821,   822,   823,
     824,   834,   835,   836,   837,   838,   337,   839,   840,  1258,
     841,  1259,  1260,   842,   843,   844,   845,    21,   847,   848,
     849,   850,   852,   853,   915,  1261,   855,   338,   856,   857,
      22,   859,   862,  1262,   867,  1160,   870,    23,   863,   866,
     868,   869,    24,   878,   871,    25,   942,   943,   944,   872,
     873,   945,   946,   874,   947,   948,   875,   949,   876,   950,
     877,   879,   951,   880,   952,   953,   954,   881,   882,   883,
     884,   885,   955,   339,   886,   887,   956,   888,   889,   890,
     957,   958,   959,   891,   892,   893,   985,   960,   894,   895,
     896,   897,   961,   898,   899,   900,   901,  1201,  1202,  1203,
     902,   903,  1204,  1205,   904,  1206,  1207,   905,  1208,   906,
    1209,   962,   907,  1210,   986,  1211,  1212,  1213,   908,   909,
     910,   911,   912,  1214,   913,   914,   965,  1215,   966,   967,
     968,  1216,  1217,  1218,   987,   969,   970,   988,  1219,   916,
     917,   918,   989,  1220,   919,   920,   990,   921,   922,   991,
     923,   992,   924,   994,   971,   925,   972,   926,   927,   928,
     973,   995,  1221,   974,   997,   929,   998,   975,  1000,   930,
     976,  1006,  1007,   931,   932,   933,   977,   999,  1009,   978,
     934,   979,   980,   981,   982,   935,   983,   984,   993,   996,
    1003,  1004,  1005,  1008,  1010,  1012,  1013,  1014,  1011,  1015,
    1016,  1017,  1018,  1019,   936,  1020,  1021,  1022,  1023,  1024,
    1025,  1026,  1027,  1050,  1028,  1029,  1030,  1031,  1063,  1032,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1046,  1047,  1048,  1049,  1064,  1052,  1053,
    1051,  1065,  1066,  1067,  1068,  1069,  1071,  1072,  1080,  1070,
    1081,  1082,  1087,  1088,  1279,  1089,  1090,  1293,  1091,  1304,
    1092,  1306,  1093,  1094,  1305,  1095,  1096,  1097,  1103,  1307,
    1104,  1105,  1308,  1106,   308,  1107,  1108,  1109,  1110,  1247,
     750,  1111,  1116,  1117,  1118,  1119,  1310,  1120,  1121,  1122,
     763,  1123,  1124,  1125,  1126,  1131,  1132,  1145,  1146,  1147,
    1148,  1149,  1150,  1309,  1159,   812,  1151,  1152,  1153,  1328,
     641,  1162,  1163,  1300,  1303,   742,  1302,  1164,  1165,  1194,
    1195,   769,  1196,  1197,  1224,  1225,   820,  1226,  1227,  1228,
    1229,  1242,  1280,  1325,  1248,  1243,  1244,  1249,  1250,  1251,
    1252,  1265,  1281,  1311,   731,   658,  1301,   399,  1282,  1283,
     457,  1284,  1285,  1286,  1296,  1297,  1312,  1313,  1314,   499,
     662,   735,   802,   321,  1274,   668,  1273,     0,   549,     0,
     569,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   580,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   595
};

static const yytype_int16 yycheck[] =
{
     638,   639,   310,     1,     8,   313,   314,     1,   316,   317,
       1,     1,     1,   236,    55,   112,   215,     1,   236,   215,
     219,    19,     1,   219,     1,    51,     1,     1,   236,   234,
       1,   234,     1,   238,   234,    11,    12,    13,   238,     1,
     237,     1,     1,     1,    42,     1,   236,     1,     6,     7,
       1,     9,    10,    32,    44,   236,    14,   234,   235,     1,
     236,    40,    20,    21,    22,   236,     1,     1,    26,    27,
     234,    69,   237,   234,   238,   237,    34,   238,    67,    37,
      38,    39,    44,    41,    19,     1,   127,    45,   234,    83,
      67,   234,   238,    83,     1,   238,     1,   234,    67,   237,
     408,   238,   410,   411,    62,    63,   104,    42,     1,     1,
       1,    67,   209,   104,    30,    73,    32,   425,    76,    77,
     104,    83,   430,   121,   236,   104,    84,   101,     1,   104,
     101,   439,   440,    91,    69,    93,   112,    95,   128,    97,
       1,    99,   100,   451,    60,   453,   454,     1,   122,   236,
     104,   122,   110,   104,    70,   153,   154,   115,   116,   128,
     118,   119,   120,    36,   236,   123,   128,   234,   194,   128,
     104,   238,   128,    46,    47,    48,    92,   203,    51,    52,
      96,   236,   176,    56,    57,    58,   121,   236,   104,     1,
     148,   107,   108,     1,   129,   130,     1,   104,   236,   203,
     158,   159,   160,   161,   162,   163,   164,   236,   206,    17,
      18,   104,   104,   104,   149,   234,   176,    25,   169,   238,
     136,   128,    83,   128,   236,   236,   234,     1,   226,     3,
     238,     5,   230,   541,   176,   128,   152,   235,   189,   155,
     156,   157,   180,   181,   235,    19,   235,    59,   223,   234,
     104,   226,   234,   238,   205,    67,   235,    69,   216,   217,
     218,    69,   220,   221,   235,   225,   235,   226,    42,   223,
       1,   229,   236,   235,   237,   235,   235,   235,    86,    87,
      88,    89,    90,   225,   235,    59,    94,    61,   204,   223,
      98,   226,   226,   236,   234,    69,   104,    28,    29,   104,
     235,   235,   234,   236,    35,   113,   114,    81,   199,   236,
     236,   227,   228,   125,   236,   176,   124,   625,     1,   235,
     237,   226,   630,   237,   237,   633,     1,     1,   235,   637,
     104,   223,   223,    64,    65,    66,    19,   145,  1098,  1099,
    1100,   237,   237,   235,   235,   199,   176,    78,    79,    80,
     237,   125,   237,   237,    85,    86,     1,    32,     1,    42,
     237,   237,   235,   237,   169,    40,   237,   237,   237,   223,
     144,   237,   237,   237,   235,   237,    19,    15,   237,   153,
     237,   237,   237,   191,   189,    59,    69,   237,   237,   112,
     237,    36,   237,    67,   237,    69,   237,   237,   237,    42,
     205,    46,    47,    48,   237,    43,    51,    52,   237,   237,
     237,    56,    57,    58,   137,   138,   139,   140,   141,   142,
     143,   104,   237,   235,   237,   126,    69,   235,   237,   104,
     204,   237,   126,   237,   237,   237,   237,    75,   121,     1,
     237,   237,   237,   237,     6,     7,   237,     9,    10,   237,
     237,   125,    14,   227,   237,   237,   237,   237,    20,    21,
      22,   235,   237,   126,    26,    27,   237,   105,   106,   237,
     153,   154,    34,   111,   237,    37,    38,    39,   121,    41,
     237,   237,   237,    45,   237,   237,   129,   130,   237,   237,
     237,     1,   237,     3,   237,     5,   237,   135,   237,   237,
      62,    63,   237,   237,   235,   237,   149,   237,   237,    19,
     237,    73,   150,   237,    76,    77,   237,   237,   237,   237,
     237,     4,    84,   206,   237,   237,   237,   237,    72,    91,
      74,    93,    42,    95,   237,    97,   234,    99,   100,   112,
      23,    24,   112,   226,   215,   112,   112,   230,   110,    59,
      33,    61,   112,   115,   116,   112,   118,   119,   120,    69,
     237,   123,   825,   826,   827,   828,   829,   830,   831,   234,
     234,    81,   126,   117,   215,   237,   214,   237,     1,   237,
     237,   237,   237,   226,   237,   237,   148,   237,    71,    72,
     134,    74,   234,   237,   104,   233,   158,   159,   160,   161,
     162,   163,   164,   237,   237,   237,  1244,    30,   237,    32,
     237,   237,   237,   237,   237,   125,   237,   237,   101,   237,
     237,   237,   237,   237,   237,   237,   109,   237,   172,   173,
     237,   234,   237,   237,   144,   112,   126,    60,   126,   126,
     215,   112,   112,   153,   215,   112,   112,    70,   131,   112,
     133,   134,   215,   112,   216,   217,   218,   215,   220,   221,
     215,   112,    74,   215,   112,   112,   112,   229,   151,    92,
     112,   112,   215,    96,   215,   215,   237,   215,   237,   215,
     215,   104,   226,   215,   107,   108,   215,   215,   232,   215,
     173,   112,   215,   126,   204,   178,   126,   234,   237,   182,
     234,   234,   126,   215,   187,   188,   237,     0,     1,   215,
     193,     4,   237,   136,   197,   237,   237,   227,   237,   237,
     237,   237,   134,    16,   237,   208,    19,   210,   211,   152,
     213,    24,   155,   156,   157,    74,   237,     1,    31,   237,
     234,   224,   234,     1,   237,   234,   237,   126,   234,   232,
     234,    44,   237,   165,   112,   237,    49,    50,   237,    17,
      18,   173,   237,   237,    28,    29,   215,    25,   237,   237,
     182,    35,   237,   237,   126,    68,   237,   237,   215,    72,
     215,   204,   126,   215,   215,   112,   112,   237,   126,    82,
     126,    51,   126,    53,    54,   134,   208,   126,   210,   211,
      64,    65,    66,   126,   227,   228,   126,   126,   126,   102,
     103,    69,   224,   126,    78,    79,    80,   126,   126,   234,
     232,    85,    86,   234,   117,   215,   165,   234,    86,    87,
      88,    89,    90,   236,   173,   234,    94,   237,   126,   237,
      98,   134,    51,   182,    53,    54,   104,   234,   237,   237,
     234,   237,   237,   146,   147,   113,   114,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   124,   234,   234,   208,
     234,   210,   211,   234,   234,   112,   112,   170,   237,   112,
     112,   112,   112,   112,    51,   224,   126,   145,   112,   112,
     183,   112,   234,   232,   215,   238,   237,   190,   126,   126,
     126,   126,   195,   234,   126,   198,   166,   167,   168,   126,
     112,   171,   172,   126,   174,   175,   126,   177,   126,   179,
     126,   126,   182,   126,   184,   185,   186,   234,   234,   126,
     126,   234,   192,   191,   234,   234,   196,   234,   234,   234,
     200,   201,   202,   234,   234,   234,   126,   207,   234,   234,
     234,   234,   212,   234,   234,   234,   234,   166,   167,   168,
     234,   234,   171,   172,   234,   174,   175,   234,   177,   234,
     179,   231,   234,   182,   215,   184,   185,   186,   234,   234,
     234,   234,   234,   192,   234,   234,   234,   196,   234,   234,
     234,   200,   201,   202,   237,   234,   234,   126,   207,   166,
     167,   168,   112,   212,   171,   172,   126,   174,   175,   126,
     177,   126,   179,   126,   234,   182,   234,   184,   185,   186,
     234,   126,   231,   234,   126,   192,   126,   234,   112,   196,
     234,   126,   126,   200,   201,   202,   234,   237,   126,   234,
     207,   234,   234,   234,   234,   212,   234,   234,   234,   234,
     234,   234,   234,   234,   215,   126,   126,   126,   237,   215,
     237,   126,   126,   234,   231,   126,   126,   126,   234,   234,
     234,   234,   234,   126,   234,   234,   234,   234,   126,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   126,   234,   234,
     237,   126,   126,   234,   234,   126,   126,   234,   234,   237,
     234,   234,   234,   234,   112,   234,   234,   126,   234,   132,
     234,   132,   234,   234,   134,   234,   234,   234,   234,   134,
     234,   234,   132,   234,    77,   234,   234,   234,   234,  1058,
     503,   234,   234,   234,   234,   234,  1290,   234,   234,   234,
     518,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,  1288,   222,   587,   234,   234,   234,  1327,
     340,   234,   234,  1267,  1278,   490,  1276,   234,   234,   234,
     234,   534,   234,   234,   234,   234,   600,   234,   234,   234,
     234,   234,  1160,  1299,   234,   237,   237,   234,   234,   234,
     234,   234,   234,  1292,   467,   374,  1272,   112,   239,   239,
     166,   239,   239,   239,   237,   234,   234,   234,   234,   223,
     393,   480,   573,    94,  1130,   403,  1128,    -1,   240,    -1,
     269,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   241,     0,     1,     4,    16,    19,    24,    31,    44,
      49,    50,    68,    72,    82,   102,   103,   117,   134,   146,
     147,   170,   183,   190,   195,   198,   242,   247,   252,   272,
     278,   284,   292,   306,   326,   350,   364,   379,   386,   390,
     400,   409,   430,   436,   442,   446,   452,   510,   524,   234,
     235,   236,   236,   327,   410,   437,   236,   447,   236,   365,
     431,   351,   236,   279,   307,   380,   236,   236,   401,   236,
     285,   236,   391,     1,    32,    40,   104,   273,   274,   275,
     276,   277,     1,    28,    29,    35,    64,    65,    66,    78,
      79,    80,    85,    86,   511,   512,   513,   514,   515,   516,
     517,   518,   519,   520,   521,   522,   523,   236,   236,   236,
       1,    67,   443,   444,   445,   236,     1,     6,     7,     9,
      10,    14,    20,    21,    22,    26,    27,    34,    37,    38,
      39,    41,    45,    62,    63,    73,    76,    77,    84,    91,
      93,    95,    97,    99,   100,   110,   115,   116,   118,   119,
     120,   123,   148,   158,   159,   160,   161,   162,   163,   164,
     216,   217,   218,   220,   221,   229,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   503,   507,   508,   509,   236,   236,   236,
       1,   101,   122,   248,   249,   250,   251,   236,   236,   236,
       1,    36,    46,    47,    48,    51,    52,    56,    57,    58,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,     1,    30,    32,    60,    70,    92,    96,   104,   107,
     108,   136,   152,   155,   156,   157,   204,   227,   228,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   236,     1,
     225,   293,   294,   295,   296,   297,   236,     1,   104,   387,
     388,   389,   236,   234,   237,   237,   237,   235,   274,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     235,   512,     1,    17,    18,    25,    69,    86,    87,    88,
      89,    90,    94,    98,   104,   113,   114,   124,   145,   191,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,     1,
       3,     5,    19,    42,    59,    61,    69,    81,   104,   125,
     144,   153,   204,   227,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   420,   421,   425,   426,   427,   428,   429,
       1,    67,   128,   438,   439,   440,   441,   237,   235,   444,
       1,   104,   128,   448,   449,   450,   451,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   504,   500,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   235,   454,     1,    19,
      42,    69,   121,   129,   130,   149,   226,   366,   367,   368,
     369,   370,   371,   372,   376,   377,   378,     1,   128,   226,
     432,   433,   434,   435,     1,    59,    67,    69,   125,   352,
     356,   357,   358,   362,   363,   234,   237,   237,   235,   249,
       1,    83,   176,   280,   281,   282,   283,     1,    19,    42,
      69,   104,   121,   153,   154,   206,   226,   230,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   322,
       1,    44,    83,   128,   381,   382,   383,   384,   385,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   235,   526,
     234,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   235,   254,
       1,   104,   223,   402,   403,   404,   405,   234,   237,   235,
     294,   176,     1,   104,   169,   189,   205,   286,   287,   288,
     289,   290,   291,   237,   235,   388,     1,   104,   223,   226,
     392,   393,   394,   395,   396,   126,   126,   126,   234,   112,
     112,   244,   215,   112,   244,   244,   112,   244,   244,   112,
     112,   234,   234,   237,   237,   237,   347,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     235,   329,   234,   237,   237,   237,   237,   237,   237,   422,
     237,   237,   237,   237,   237,   237,   237,   235,   412,   237,
     237,   235,   439,   126,   234,   237,   237,   235,   449,   215,
     244,   112,   244,   244,   126,   126,   126,   215,   112,   215,
     112,   112,   112,   215,   215,   215,   215,   244,   112,   112,
     112,   112,   244,   112,   112,   112,   112,   215,   237,   237,
     215,   244,   244,   215,   215,   215,   215,   219,   215,   219,
     215,   215,   215,   215,   112,   244,   215,   244,   244,   215,
     234,   234,   237,   237,   373,   237,   237,   237,   237,   237,
     235,   367,   237,   237,   235,   433,   234,   237,   237,   353,
     237,   235,   357,   126,   126,   234,   234,   237,   237,   235,
     281,   234,   237,   237,   323,   237,   237,   237,   237,   319,
     237,   237,   235,   309,   234,   237,   237,   237,   235,   382,
     215,   215,   244,   126,   215,   126,   215,   215,   215,   234,
     112,   126,   215,   126,   112,   112,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   234,   234,   237,
     406,   235,   403,   215,   234,   236,   234,   237,   237,   237,
     237,   235,   287,   126,   234,   234,   237,   397,   237,   235,
     393,   234,   234,   234,   234,   137,   138,   139,   140,   141,
     142,   143,   243,   244,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   112,   112,   244,   237,   112,   112,
     112,   244,   112,   112,   244,   126,   112,   112,   244,   112,
     246,   246,   234,   126,   180,   181,   126,   215,   126,   126,
     237,   126,   126,   112,   126,   126,   126,   126,   234,   126,
     126,   234,   234,   126,   126,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,    51,   166,   167,   168,   171,
     172,   174,   175,   177,   179,   182,   184,   185,   186,   192,
     196,   200,   201,   202,   207,   212,   231,   505,   506,    51,
      53,    54,   166,   167,   168,   171,   172,   174,   175,   177,
     179,   182,   184,   185,   186,   192,   196,   200,   201,   202,
     207,   212,   231,   501,   502,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   126,   215,   237,   126,   112,
     126,   126,   126,   234,   126,   126,   234,   126,   126,   237,
     112,   360,   361,   234,   234,   234,   126,   126,   234,   126,
     215,   237,   126,   126,   126,   215,   237,   126,   126,   234,
     126,   126,   126,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   234,   234,
     126,   237,   234,   234,     1,   104,   199,   223,   298,   299,
     300,   301,   302,   126,   126,   126,   126,   234,   234,   126,
     237,   126,   234,   243,   243,   243,   243,   243,   243,   243,
     234,   234,   234,    55,   127,   348,   349,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,    11,    12,
      13,   245,   246,   234,   234,   234,   234,   234,   234,   234,
     234,   234,     8,   203,   423,   424,   234,   234,   234,   234,
     234,   234,   234,   234,   234,   234,   234,   234,   238,   234,
     238,   234,   234,    15,    43,    75,   105,   106,   111,   135,
     150,   214,   233,   374,   375,   234,   234,   234,   234,   234,
     234,   234,   234,   234,    51,   194,   203,   354,   355,   222,
     238,   359,   234,   234,   234,   234,     4,    23,    24,    33,
      71,    72,    74,   101,   109,   131,   133,   134,   151,   173,
     178,   182,   187,   188,   193,   197,   208,   210,   211,   213,
     224,   232,   324,   325,   234,   234,   234,   234,    51,    53,
      54,   166,   167,   168,   171,   172,   174,   175,   177,   179,
     182,   184,   185,   186,   192,   196,   200,   201,   202,   207,
     212,   231,   320,   321,   234,   234,   234,   234,   234,   234,
      74,   134,   165,   173,   182,   208,   210,   211,   224,   232,
     407,   408,   234,   237,   237,   303,   235,   299,   234,   234,
     234,   234,   234,    74,   134,   165,   173,   182,   208,   210,
     211,   224,   232,   398,   399,   234,   234,   238,   245,   245,
     245,   234,   238,   506,   502,   234,   238,   234,   238,   112,
     361,   234,   239,   239,   239,   239,   239,   234,   238,   234,
     238,   234,   238,   126,   209,   246,   237,   234,   234,   238,
     349,   424,   375,   355,   132,   134,   132,   134,   132,   325,
     321,   408,   234,   234,   234,    72,    74,   117,   134,   172,
     173,   226,   232,   304,   305,   399,   234,   238,   305
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   240,   241,   241,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   242,   242,   242,   242,   243,   243,
     244,   244,   244,   244,   244,   244,   244,   244,   245,   245,
     246,   246,   246,   246,   247,   248,   248,   249,   249,   249,
     250,   251,   252,   253,   253,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   273,   274,   274,   274,   274,   275,   276,   277,
     279,   278,   280,   280,   281,   281,   281,   282,   283,   285,
     284,   286,   286,   287,   287,   287,   287,   287,   288,   289,
     290,   291,   292,   293,   293,   294,   294,   294,   295,   297,
     296,   298,   298,   299,   299,   299,   299,   300,   301,   301,
     303,   302,   304,   304,   305,   305,   305,   305,   305,   305,
     305,   305,   307,   306,   308,   308,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   319,   318,   320,   320,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   323,   322,   324,   324,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   327,   326,   328,   328,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   347,   346,   348,   348,   349,   349,
     351,   350,   353,   352,   354,   354,   355,   355,   355,   356,
     356,   357,   357,   357,   357,   357,   359,   358,   360,   360,
     361,   361,   362,   363,   365,   364,   366,   366,   367,   367,
     367,   367,   367,   367,   367,   367,   367,   368,   369,   370,
     371,   373,   372,   374,   374,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   376,   377,   378,   380,   379,
     381,   381,   382,   382,   382,   382,   383,   384,   385,   386,
     387,   387,   388,   388,   389,   391,   390,   392,   392,   393,
     393,   393,   393,   394,   395,   397,   396,   398,   398,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   401,
     400,   402,   402,   403,   403,   403,   404,   406,   405,   407,
     407,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     408,   410,   409,   411,   411,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   420,   422,
     421,   423,   423,   424,   424,   425,   426,   427,   428,   429,
     431,   430,   432,   432,   433,   433,   433,   434,   435,   437,
     436,   438,   438,   439,   439,   439,   440,   441,   442,   443,
     443,   444,   444,   445,   447,   446,   448,   448,   449,   449,
     449,   450,   451,   452,   453,   453,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   454,   454,   454,   454,
     454,   454,   454,   454,   454,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   485,   486,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   500,   499,   501,   501,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     502,   502,   502,   502,   502,   502,   502,   502,   502,   502,
     504,   503,   505,   505,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   506,   506,   506,   506,
     506,   506,   506,   506,   506,   506,   507,   508,   509,   510,
     511,   511,   512,   512,   512,   512,   512,   512,   512,   512,
     512,   512,   512,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   525,   525,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   527,   528,
     529,   530,   531,   532,   533,   534,   535
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
       3,     3,     1,     1,     1,     1,     0,     6,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       0,     6,     0,     5,     3,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     2,     0,     5,     3,     1,
       1,     3,     4,     4,     0,     6,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       4,     0,     5,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     2,     4,     4,     4,     5,
       2,     1,     1,     1,     4,     0,     6,     2,     1,     1,
       1,     1,     2,     4,     4,     0,     5,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       6,     2,     1,     1,     1,     2,     4,     0,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     0,
       5,     3,     1,     1,     1,     4,     4,     4,     4,     4,
       0,     6,     2,     1,     1,     1,     1,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     5,     2,
       1,     1,     1,     4,     0,     6,     2,     1,     1,     1,
       1,     4,     4,     5,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     5,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     5,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     4,     4,     4,     4,     4,     4
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
#line 421 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2879 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 422 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 423 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2891 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 424 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2897 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 425 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 426 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2909 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 427 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2915 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 428 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2921 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 429 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2927 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 432 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2933 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 433 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 434 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2945 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 435 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2951 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 436 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2957 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 449 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 2966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 455 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 2975 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 488 "conf_parser.y" /* yacc.c:1646  */
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
#line 3018 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 528 "conf_parser.y" /* yacc.c:1646  */
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
#line 3079 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 586 "conf_parser.y" /* yacc.c:1646  */
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
#line 3111 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 615 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3122 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 623 "conf_parser.y" /* yacc.c:1646  */
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
#line 3139 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 637 "conf_parser.y" /* yacc.c:1646  */
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
#line 3170 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 665 "conf_parser.y" /* yacc.c:1646  */
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
#line 3188 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 680 "conf_parser.y" /* yacc.c:1646  */
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
#line 3206 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 695 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3219 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 705 "conf_parser.y" /* yacc.c:1646  */
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
#line 3236 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 719 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3248 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 728 "conf_parser.y" /* yacc.c:1646  */
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
#line 3279 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 756 "conf_parser.y" /* yacc.c:1646  */
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
#line 3310 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 784 "conf_parser.y" /* yacc.c:1646  */
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
#line 3338 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 809 "conf_parser.y" /* yacc.c:1646  */
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
#line 3363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 831 "conf_parser.y" /* yacc.c:1646  */
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
#line 3388 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 853 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3397 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 871 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3409 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 880 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3421 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 889 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3433 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 902 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3442 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 906 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3459 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 923 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3468 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 929 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3477 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 939 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3486 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 943 "conf_parser.y" /* yacc.c:1646  */
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
#line 3504 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 961 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3513 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 967 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3522 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 973 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3531 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 979 "conf_parser.y" /* yacc.c:1646  */
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
#line 3552 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1007 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3561 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1013 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3570 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1017 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3583 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1033 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1041 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3602 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1044 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3610 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1049 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3619 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1056 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3628 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1060 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3637 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1064 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3646 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1068 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3655 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1072 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3664 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1076 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3673 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1080 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3682 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1084 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3691 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1094 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3703 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1101 "conf_parser.y" /* yacc.c:1646  */
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
#line 3756 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1164 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3765 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1170 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3774 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1176 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3783 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1182 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3792 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1188 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3806 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1199 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3815 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1205 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3829 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1216 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3838 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1222 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3847 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1229 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
#line 3856 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1233 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
#line 3865 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1237 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3874 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1241 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
#line 3883 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1245 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
#line 3892 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1249 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3901 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1253 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3910 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1257 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3919 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1261 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
#line 3928 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1265 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
#line 3937 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1269 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
#line 3946 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1273 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
#line 3955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1277 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3964 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1281 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
#line 3973 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1285 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3982 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1289 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3991 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1293 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 4000 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1297 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 4009 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1301 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4018 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1305 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1309 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4036 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1313 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4045 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1317 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4054 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1321 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4063 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1327 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4072 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1334 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4081 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1338 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4090 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1342 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4099 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1346 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1350 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4117 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1354 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4126 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1358 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4135 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1362 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4144 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1366 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4153 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1370 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4162 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4171 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1378 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4180 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1382 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4189 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1386 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4198 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1390 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4207 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1394 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4216 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1398 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4225 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1402 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4234 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1406 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4243 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1410 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4252 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1414 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4261 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1418 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4270 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1422 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4279 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1426 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4288 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1430 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4297 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1434 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4306 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1438 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4315 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1442 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4324 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1446 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4333 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1456 "conf_parser.y" /* yacc.c:1646  */
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
#line 4350 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1468 "conf_parser.y" /* yacc.c:1646  */
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
#line 4398 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1532 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4407 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1538 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4416 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1544 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4425 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1550 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4434 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1556 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4443 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1562 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4452 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1568 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4461 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1574 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4470 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1580 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4479 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1586 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4488 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1592 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4498 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1599 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4507 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1605 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1611 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4525 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1617 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4537 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1626 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4549 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1635 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4558 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1642 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4567 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1646 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1656 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1662 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4593 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1668 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4602 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1672 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4611 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1676 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1684 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4626 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1689 "conf_parser.y" /* yacc.c:1646  */
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
#line 4644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1702 "conf_parser.y" /* yacc.c:1646  */
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
#line 4664 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1719 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4673 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1725 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4682 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1735 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4691 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1739 "conf_parser.y" /* yacc.c:1646  */
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
#line 4732 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1788 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4741 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1794 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4750 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1800 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4759 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1806 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4773 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1817 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4782 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1824 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4791 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1828 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4800 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1832 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4809 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1836 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4818 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1840 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4827 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1844 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4836 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1848 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4845 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1852 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4854 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1856 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4863 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1860 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4872 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1866 "conf_parser.y" /* yacc.c:1646  */
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
#line 4889 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1880 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 4901 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1889 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 4913 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1902 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 4925 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1909 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 4936 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1920 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4945 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1926 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1932 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4963 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1947 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 4978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1963 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 4994 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1974 "conf_parser.y" /* yacc.c:1646  */
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
#line 5011 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1991 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5020 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1997 "conf_parser.y" /* yacc.c:1646  */
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
#line 5042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2016 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2023 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5060 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2027 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5069 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2031 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5078 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2035 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5087 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2039 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5096 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2043 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5105 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2047 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2051 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2055 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5132 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2059 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5141 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2069 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5155 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2078 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5170 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2093 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5179 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2099 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5188 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5197 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2110 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5206 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2114 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5215 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2118 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5224 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2122 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5233 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2126 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5242 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2130 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5251 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2134 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5260 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2138 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5269 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2142 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5278 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2152 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5292 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2161 "conf_parser.y" /* yacc.c:1646  */
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
#line 5358 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2241 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5367 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2247 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5376 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2253 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5385 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2259 "conf_parser.y" /* yacc.c:1646  */
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
#line 5401 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2272 "conf_parser.y" /* yacc.c:1646  */
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
#line 5417 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2285 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5426 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2291 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5435 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2297 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5444 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2301 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5453 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 2307 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5461 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2313 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5470 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2317 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5479 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2323 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5493 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2334 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5502 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2340 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5511 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2346 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5520 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2352 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5534 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2367 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5543 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2371 "conf_parser.y" /* yacc.c:1646  */
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
#line 5568 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2396 "conf_parser.y" /* yacc.c:1646  */
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
#line 5591 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2416 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5600 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2426 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5609 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2430 "conf_parser.y" /* yacc.c:1646  */
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
#line 5635 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2456 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5644 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2462 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5653 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2477 "conf_parser.y" /* yacc.c:1646  */
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
#line 5670 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2494 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2498 "conf_parser.y" /* yacc.c:1646  */
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
#line 5701 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2520 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5710 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2526 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5719 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2591 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5727 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2596 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5735 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2601 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5743 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2606 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key1);
    ConfigGeneral.cloak_key1 = xstrdup(yylval.string);
  }
}
#line 5755 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2615 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key2);
    ConfigGeneral.cloak_key2 = xstrdup(yylval.string);
  }
}
#line 5767 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2624 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigGeneral.cloak_key3);
    ConfigGeneral.cloak_key3 = xstrdup(yylval.string);
  }
}
#line 5779 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2633 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5788 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2639 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5796 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2644 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5804 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2649 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.enable_cloak_system = yylval.number;
}
#line 5813 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2655 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5821 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2660 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5829 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2665 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5837 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2670 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5845 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2675 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5853 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2680 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5861 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2685 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2690 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5877 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2695 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 5885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2700 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 5893 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2705 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 5901 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2710 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 5909 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2715 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 5918 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2721 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 5926 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2726 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 5934 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2731 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 5942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2736 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 5950 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2741 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 5958 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2746 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 5966 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2751 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 5974 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2756 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 5982 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2759 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 5990 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2764 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 5998 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2767 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 6006 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2772 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 6014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2777 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 6022 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2782 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 6030 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2787 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 6038 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2792 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 6046 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 565:
#line 2797 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 6054 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 566:
#line 2802 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6062 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2807 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6070 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2812 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6078 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2817 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6086 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2822 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6094 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2827 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6102 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2832 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6110 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2838 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BOTS;
}
#line 6118 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2841 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CCONN;
}
#line 6126 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2844 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6134 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2847 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEBUG;
}
#line 6142 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2850 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FULL;
}
#line 6150 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2853 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6158 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2856 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6166 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2859 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6174 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2862 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SKILL;
}
#line 6182 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2865 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NCHANGE;
}
#line 6190 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2868 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REJ;
}
#line 6198 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2871 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_UNAUTH;
}
#line 6206 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2874 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6214 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2877 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_EXTERNAL;
}
#line 6222 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2880 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6230 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2883 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2886 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6246 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 593:
#line 2889 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6254 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2892 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6262 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2895 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6270 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2898 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6278 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2901 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6286 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6294 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2907 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6302 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2912 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6310 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2918 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_BOTS;
}
#line 6318 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2921 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CCONN;
}
#line 6326 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2924 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6334 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2927 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEBUG;
}
#line 6342 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2930 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FULL;
}
#line 6350 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2933 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SKILL;
}
#line 6358 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2936 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6366 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2939 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_NCHANGE;
}
#line 6374 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2942 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REJ;
}
#line 6382 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2945 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_UNAUTH;
}
#line 6390 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2948 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6398 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2951 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_EXTERNAL;
}
#line 6406 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2954 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6414 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2957 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6422 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2960 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6430 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2963 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6438 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2966 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6446 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 621:
#line 2969 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6454 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 622:
#line 2972 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6462 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 623:
#line 2975 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6470 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 624:
#line 2978 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6478 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 625:
#line 2981 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6486 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 626:
#line 2986 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6494 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 627:
#line 2991 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6502 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 628:
#line 2996 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3021 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6518 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3026 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6526 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3031 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6534 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 647:
#line 3036 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6542 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 648:
#line 3041 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6550 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 649:
#line 3046 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6558 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 650:
#line 3051 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6566 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 651:
#line 3056 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6574 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 652:
#line 3061 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6582 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 653:
#line 3066 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6590 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 654:
#line 3071 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6598 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3094 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6607 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 669:
#line 3100 "conf_parser.y" /* yacc.c:1646  */
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
#line 6626 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 670:
#line 3116 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6638 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 671:
#line 3125 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6647 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 672:
#line 3131 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6656 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 673:
#line 3137 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6665 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 674:
#line 3143 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6677 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 675:
#line 3152 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6686 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 676:
#line 3158 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6695 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6699 "conf_parser.c" /* yacc.c:1646  */
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
