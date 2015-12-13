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
    CLOSE = 275,
    CONNECT = 276,
    CONNECTFREQ = 277,
    CYCLE_ON_HOST_CHANGE = 278,
    DEFAULT_FLOODCOUNT = 279,
    DEFAULT_JOIN_FLOOD_COUNT = 280,
    DEFAULT_JOIN_FLOOD_TIME = 281,
    DEFAULT_MAX_CLIENTS = 282,
    DENY = 283,
    DESCRIPTION = 284,
    DIE = 285,
    DISABLE_AUTH = 286,
    DISABLE_FAKE_CHANNELS = 287,
    DISABLE_REMOTE_COMMANDS = 288,
    DLINE_MIN_CIDR = 289,
    DLINE_MIN_CIDR6 = 290,
    DOTS_IN_IDENT = 291,
    EMAIL = 292,
    ENCRYPTED = 293,
    EXCEED_LIMIT = 294,
    EXEMPT = 295,
    FAILED_OPER_NOTICE = 296,
    FLATTEN_LINKS = 297,
    FLATTEN_LINKS_DELAY = 298,
    FLATTEN_LINKS_FILE = 299,
    GECOS = 300,
    GENERAL = 301,
    HIDDEN = 302,
    HIDDEN_NAME = 303,
    HIDE_CHANS = 304,
    HIDE_IDLE = 305,
    HIDE_IDLE_FROM_OPERS = 306,
    HIDE_SERVER_IPS = 307,
    HIDE_SERVERS = 308,
    HIDE_SERVICES = 309,
    HOST = 310,
    HUB = 311,
    HUB_MASK = 312,
    IGNORE_BOGUS_TS = 313,
    INVISIBLE_ON_CONNECT = 314,
    INVITE_CLIENT_COUNT = 315,
    INVITE_CLIENT_TIME = 316,
    INVITE_DELAY_CHANNEL = 317,
    IP = 318,
    IRCD_AUTH = 319,
    IRCD_FLAGS = 320,
    IRCD_SID = 321,
    JOIN = 322,
    KILL = 323,
    KILL_CHASE_TIME_LIMIT = 324,
    KLINE = 325,
    KLINE_EXEMPT = 326,
    KLINE_MIN_CIDR = 327,
    KLINE_MIN_CIDR6 = 328,
    KNOCK_CLIENT_COUNT = 329,
    KNOCK_CLIENT_TIME = 330,
    KNOCK_DELAY_CHANNEL = 331,
    LEAF_MASK = 332,
    LISTEN = 333,
    MASK = 334,
    MAX_ACCEPT = 335,
    MAX_BANS = 336,
    MAX_CHANNELS = 337,
    MAX_GLOBAL = 338,
    MAX_IDENT = 339,
    MAX_IDLE = 340,
    MAX_LOCAL = 341,
    MAX_NICK_CHANGES = 342,
    MAX_NICK_LENGTH = 343,
    MAX_NICK_TIME = 344,
    MAX_NUMBER = 345,
    MAX_TARGETS = 346,
    MAX_TOPIC_LENGTH = 347,
    MAX_WATCH = 348,
    MIN_IDLE = 349,
    MIN_NONWILDCARD = 350,
    MIN_NONWILDCARD_SIMPLE = 351,
    MODULE = 352,
    MODULES = 353,
    MOTD = 354,
    NAME = 355,
    NEED_IDENT = 356,
    NEED_PASSWORD = 357,
    NETWORK_DESC = 358,
    NETWORK_NAME = 359,
    NICK = 360,
    NO_OPER_FLOOD = 361,
    NO_TILDE = 362,
    NUMBER = 363,
    NUMBER_PER_CIDR = 364,
    NUMBER_PER_IP = 365,
    OPER_ONLY_UMODES = 366,
    OPER_UMODES = 367,
    OPERATOR = 368,
    OPERS_BYPASS_CALLERID = 369,
    PACE_WAIT = 370,
    PACE_WAIT_SIMPLE = 371,
    PASSWORD = 372,
    PATH = 373,
    PING_COOKIE = 374,
    PING_TIME = 375,
    PORT = 376,
    QSTRING = 377,
    RANDOM_IDLE = 378,
    REASON = 379,
    REDIRPORT = 380,
    REDIRSERV = 381,
    REHASH = 382,
    REMOTE = 383,
    REMOTEBAN = 384,
    RESV = 385,
    RESV_EXEMPT = 386,
    RSA_PRIVATE_KEY_FILE = 387,
    SECONDS = 388,
    MINUTES = 389,
    HOURS = 390,
    DAYS = 391,
    WEEKS = 392,
    MONTHS = 393,
    YEARS = 394,
    SEND_PASSWORD = 395,
    SENDQ = 396,
    SERVERHIDE = 397,
    SERVERINFO = 398,
    SHORT_MOTD = 399,
    SPOOF = 400,
    SPOOF_NOTICE = 401,
    SQUIT = 402,
    SSL_CERTIFICATE_FILE = 403,
    SSL_CERTIFICATE_FINGERPRINT = 404,
    SSL_CONNECTION_REQUIRED = 405,
    SSL_DH_ELLIPTIC_CURVE = 406,
    SSL_DH_PARAM_FILE = 407,
    SSL_MESSAGE_DIGEST_ALGORITHM = 408,
    STATS_E_DISABLED = 409,
    STATS_I_OPER_ONLY = 410,
    STATS_K_OPER_ONLY = 411,
    STATS_M_OPER_ONLY = 412,
    STATS_O_OPER_ONLY = 413,
    STATS_P_OPER_ONLY = 414,
    STATS_U_OPER_ONLY = 415,
    T_ALL = 416,
    T_BOTS = 417,
    T_CALLERID = 418,
    T_CCONN = 419,
    T_COMMAND = 420,
    T_CLUSTER = 421,
    T_DEAF = 422,
    T_DEBUG = 423,
    T_DLINE = 424,
    T_EXTERNAL = 425,
    T_FARCONNECT = 426,
    T_FILE = 427,
    T_FULL = 428,
    T_GLOBOPS = 429,
    T_INVISIBLE = 430,
    T_IPV4 = 431,
    T_IPV6 = 432,
    T_LOCOPS = 433,
    T_LOG = 434,
    T_NCHANGE = 435,
    T_NONONREG = 436,
    T_OPERWALL = 437,
    T_OPERWALLS = 438,
    T_OPME = 439,
    T_PREPEND = 440,
    T_PSEUDO = 441,
    T_RECVQ = 442,
    T_REJ = 443,
    T_RESTART = 444,
    T_SERVER = 445,
    T_SERVICE = 446,
    T_SERVNOTICE = 447,
    T_SET = 448,
    T_SHARED = 449,
    T_SIZE = 450,
    T_SKILL = 451,
    T_SOFTCALLERID = 452,
    T_SPY = 453,
    T_SSL = 454,
    T_SSL_CIPHER_LIST = 455,
    T_TARGET = 456,
    T_UMODES = 457,
    T_UNAUTH = 458,
    T_UNDLINE = 459,
    T_UNLIMITED = 460,
    T_UNRESV = 461,
    T_UNXLINE = 462,
    T_WALLOP = 463,
    T_WALLOPS = 464,
    T_WEBIRC = 465,
    TBOOL = 466,
    THROTTLE_COUNT = 467,
    THROTTLE_TIME = 468,
    TKLINE_EXPIRE_NOTICES = 469,
    TMASKED = 470,
    TS_MAX_DELTA = 471,
    TS_WARN_DELTA = 472,
    TWODOTS = 473,
    TYPE = 474,
    UNKLINE = 475,
    USE_LOGGING = 476,
    USER = 477,
    VHOST = 478,
    VHOST6 = 479,
    WARN_NO_CONNECT_BLOCK = 480,
    WHOIS = 481,
    XLINE = 482,
    XLINE_EXEMPT = 483
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
#define CLOSE 275
#define CONNECT 276
#define CONNECTFREQ 277
#define CYCLE_ON_HOST_CHANGE 278
#define DEFAULT_FLOODCOUNT 279
#define DEFAULT_JOIN_FLOOD_COUNT 280
#define DEFAULT_JOIN_FLOOD_TIME 281
#define DEFAULT_MAX_CLIENTS 282
#define DENY 283
#define DESCRIPTION 284
#define DIE 285
#define DISABLE_AUTH 286
#define DISABLE_FAKE_CHANNELS 287
#define DISABLE_REMOTE_COMMANDS 288
#define DLINE_MIN_CIDR 289
#define DLINE_MIN_CIDR6 290
#define DOTS_IN_IDENT 291
#define EMAIL 292
#define ENCRYPTED 293
#define EXCEED_LIMIT 294
#define EXEMPT 295
#define FAILED_OPER_NOTICE 296
#define FLATTEN_LINKS 297
#define FLATTEN_LINKS_DELAY 298
#define FLATTEN_LINKS_FILE 299
#define GECOS 300
#define GENERAL 301
#define HIDDEN 302
#define HIDDEN_NAME 303
#define HIDE_CHANS 304
#define HIDE_IDLE 305
#define HIDE_IDLE_FROM_OPERS 306
#define HIDE_SERVER_IPS 307
#define HIDE_SERVERS 308
#define HIDE_SERVICES 309
#define HOST 310
#define HUB 311
#define HUB_MASK 312
#define IGNORE_BOGUS_TS 313
#define INVISIBLE_ON_CONNECT 314
#define INVITE_CLIENT_COUNT 315
#define INVITE_CLIENT_TIME 316
#define INVITE_DELAY_CHANNEL 317
#define IP 318
#define IRCD_AUTH 319
#define IRCD_FLAGS 320
#define IRCD_SID 321
#define JOIN 322
#define KILL 323
#define KILL_CHASE_TIME_LIMIT 324
#define KLINE 325
#define KLINE_EXEMPT 326
#define KLINE_MIN_CIDR 327
#define KLINE_MIN_CIDR6 328
#define KNOCK_CLIENT_COUNT 329
#define KNOCK_CLIENT_TIME 330
#define KNOCK_DELAY_CHANNEL 331
#define LEAF_MASK 332
#define LISTEN 333
#define MASK 334
#define MAX_ACCEPT 335
#define MAX_BANS 336
#define MAX_CHANNELS 337
#define MAX_GLOBAL 338
#define MAX_IDENT 339
#define MAX_IDLE 340
#define MAX_LOCAL 341
#define MAX_NICK_CHANGES 342
#define MAX_NICK_LENGTH 343
#define MAX_NICK_TIME 344
#define MAX_NUMBER 345
#define MAX_TARGETS 346
#define MAX_TOPIC_LENGTH 347
#define MAX_WATCH 348
#define MIN_IDLE 349
#define MIN_NONWILDCARD 350
#define MIN_NONWILDCARD_SIMPLE 351
#define MODULE 352
#define MODULES 353
#define MOTD 354
#define NAME 355
#define NEED_IDENT 356
#define NEED_PASSWORD 357
#define NETWORK_DESC 358
#define NETWORK_NAME 359
#define NICK 360
#define NO_OPER_FLOOD 361
#define NO_TILDE 362
#define NUMBER 363
#define NUMBER_PER_CIDR 364
#define NUMBER_PER_IP 365
#define OPER_ONLY_UMODES 366
#define OPER_UMODES 367
#define OPERATOR 368
#define OPERS_BYPASS_CALLERID 369
#define PACE_WAIT 370
#define PACE_WAIT_SIMPLE 371
#define PASSWORD 372
#define PATH 373
#define PING_COOKIE 374
#define PING_TIME 375
#define PORT 376
#define QSTRING 377
#define RANDOM_IDLE 378
#define REASON 379
#define REDIRPORT 380
#define REDIRSERV 381
#define REHASH 382
#define REMOTE 383
#define REMOTEBAN 384
#define RESV 385
#define RESV_EXEMPT 386
#define RSA_PRIVATE_KEY_FILE 387
#define SECONDS 388
#define MINUTES 389
#define HOURS 390
#define DAYS 391
#define WEEKS 392
#define MONTHS 393
#define YEARS 394
#define SEND_PASSWORD 395
#define SENDQ 396
#define SERVERHIDE 397
#define SERVERINFO 398
#define SHORT_MOTD 399
#define SPOOF 400
#define SPOOF_NOTICE 401
#define SQUIT 402
#define SSL_CERTIFICATE_FILE 403
#define SSL_CERTIFICATE_FINGERPRINT 404
#define SSL_CONNECTION_REQUIRED 405
#define SSL_DH_ELLIPTIC_CURVE 406
#define SSL_DH_PARAM_FILE 407
#define SSL_MESSAGE_DIGEST_ALGORITHM 408
#define STATS_E_DISABLED 409
#define STATS_I_OPER_ONLY 410
#define STATS_K_OPER_ONLY 411
#define STATS_M_OPER_ONLY 412
#define STATS_O_OPER_ONLY 413
#define STATS_P_OPER_ONLY 414
#define STATS_U_OPER_ONLY 415
#define T_ALL 416
#define T_BOTS 417
#define T_CALLERID 418
#define T_CCONN 419
#define T_COMMAND 420
#define T_CLUSTER 421
#define T_DEAF 422
#define T_DEBUG 423
#define T_DLINE 424
#define T_EXTERNAL 425
#define T_FARCONNECT 426
#define T_FILE 427
#define T_FULL 428
#define T_GLOBOPS 429
#define T_INVISIBLE 430
#define T_IPV4 431
#define T_IPV6 432
#define T_LOCOPS 433
#define T_LOG 434
#define T_NCHANGE 435
#define T_NONONREG 436
#define T_OPERWALL 437
#define T_OPERWALLS 438
#define T_OPME 439
#define T_PREPEND 440
#define T_PSEUDO 441
#define T_RECVQ 442
#define T_REJ 443
#define T_RESTART 444
#define T_SERVER 445
#define T_SERVICE 446
#define T_SERVNOTICE 447
#define T_SET 448
#define T_SHARED 449
#define T_SIZE 450
#define T_SKILL 451
#define T_SOFTCALLERID 452
#define T_SPY 453
#define T_SSL 454
#define T_SSL_CIPHER_LIST 455
#define T_TARGET 456
#define T_UMODES 457
#define T_UNAUTH 458
#define T_UNDLINE 459
#define T_UNLIMITED 460
#define T_UNRESV 461
#define T_UNXLINE 462
#define T_WALLOP 463
#define T_WALLOPS 464
#define T_WEBIRC 465
#define TBOOL 466
#define THROTTLE_COUNT 467
#define THROTTLE_TIME 468
#define TKLINE_EXPIRE_NOTICES 469
#define TMASKED 470
#define TS_MAX_DELTA 471
#define TS_WARN_DELTA 472
#define TWODOTS 473
#define TYPE 474
#define UNKLINE 475
#define USE_LOGGING 476
#define USER 477
#define VHOST 478
#define VHOST6 479
#define WARN_NO_CONNECT_BLOCK 480
#define WHOIS 481
#define XLINE 482
#define XLINE_EXEMPT 483

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 692 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 707 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  235
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  292
/* YYNRULES -- Number of rules.  */
#define YYNRULES  665
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1306

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   483

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
       2,     2,     2,     2,   233,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   234,   229,
       2,   232,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   231,     2,   230,     2,     2,     2,     2,
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
     225,   226,   227,   228
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   385,   385,   386,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   416,   416,
     417,   418,   419,   420,   421,   422,   423,   424,   427,   427,
     428,   429,   430,   431,   438,   440,   440,   441,   441,   441,
     443,   449,   459,   461,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   482,   522,   580,   609,   617,   631,   659,
     674,   689,   699,   713,   722,   750,   778,   803,   825,   847,
     857,   859,   859,   860,   861,   862,   863,   865,   874,   883,
     897,   896,   914,   914,   915,   915,   915,   917,   923,   934,
     933,   952,   952,   953,   953,   953,   953,   953,   955,   961,
     967,   973,   995,   996,   996,   998,   998,   999,  1001,  1008,
    1008,  1021,  1022,  1024,  1024,  1025,  1025,  1027,  1035,  1038,
    1044,  1043,  1049,  1049,  1050,  1054,  1058,  1062,  1066,  1070,
    1074,  1078,  1089,  1088,  1145,  1145,  1146,  1147,  1148,  1149,
    1150,  1151,  1152,  1153,  1154,  1155,  1156,  1158,  1164,  1170,
    1176,  1182,  1193,  1199,  1210,  1217,  1216,  1222,  1222,  1223,
    1227,  1231,  1235,  1239,  1243,  1247,  1251,  1255,  1259,  1263,
    1267,  1271,  1275,  1279,  1283,  1287,  1291,  1295,  1299,  1303,
    1307,  1311,  1318,  1317,  1323,  1323,  1324,  1328,  1332,  1336,
    1340,  1344,  1348,  1352,  1356,  1360,  1364,  1368,  1372,  1376,
    1380,  1384,  1388,  1392,  1396,  1400,  1404,  1408,  1412,  1416,
    1420,  1424,  1428,  1432,  1436,  1447,  1446,  1503,  1503,  1504,
    1505,  1506,  1507,  1508,  1509,  1510,  1511,  1512,  1513,  1514,
    1515,  1516,  1516,  1517,  1518,  1519,  1520,  1522,  1528,  1534,
    1540,  1546,  1552,  1558,  1564,  1570,  1576,  1582,  1589,  1595,
    1601,  1607,  1616,  1626,  1625,  1631,  1631,  1632,  1636,  1647,
    1646,  1653,  1652,  1657,  1657,  1658,  1662,  1666,  1672,  1672,
    1673,  1673,  1673,  1673,  1673,  1675,  1675,  1677,  1677,  1679,
    1692,  1709,  1715,  1726,  1725,  1767,  1767,  1768,  1769,  1770,
    1771,  1772,  1773,  1774,  1775,  1776,  1778,  1784,  1790,  1796,
    1808,  1807,  1813,  1813,  1814,  1818,  1822,  1826,  1830,  1834,
    1838,  1842,  1846,  1850,  1856,  1870,  1879,  1893,  1892,  1907,
    1907,  1908,  1908,  1908,  1908,  1910,  1916,  1922,  1932,  1934,
    1934,  1935,  1935,  1937,  1954,  1953,  1978,  1978,  1979,  1979,
    1979,  1979,  1981,  1987,  2007,  2006,  2012,  2012,  2013,  2017,
    2021,  2025,  2029,  2033,  2037,  2041,  2045,  2049,  2060,  2059,
    2080,  2080,  2081,  2081,  2081,  2083,  2090,  2089,  2095,  2095,
    2096,  2100,  2104,  2108,  2112,  2116,  2120,  2124,  2128,  2132,
    2143,  2142,  2214,  2214,  2215,  2216,  2217,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,  2231,
    2237,  2243,  2249,  2262,  2275,  2281,  2287,  2291,  2298,  2297,
    2302,  2302,  2303,  2307,  2313,  2324,  2330,  2336,  2342,  2358,
    2357,  2383,  2383,  2384,  2384,  2384,  2386,  2406,  2417,  2416,
    2443,  2443,  2444,  2444,  2444,  2446,  2452,  2462,  2464,  2464,
    2465,  2465,  2467,  2485,  2484,  2507,  2507,  2508,  2508,  2508,
    2510,  2516,  2526,  2528,  2528,  2529,  2530,  2531,  2532,  2533,
    2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,  2542,  2543,
    2544,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,
    2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,
    2574,  2577,  2582,  2587,  2592,  2598,  2603,  2608,  2613,  2618,
    2623,  2628,  2633,  2638,  2643,  2648,  2653,  2658,  2663,  2668,
    2674,  2679,  2684,  2689,  2694,  2699,  2704,  2709,  2712,  2717,
    2720,  2725,  2730,  2735,  2740,  2745,  2750,  2755,  2760,  2765,
    2770,  2775,  2780,  2786,  2785,  2790,  2790,  2791,  2794,  2797,
    2800,  2803,  2806,  2809,  2812,  2815,  2818,  2821,  2824,  2827,
    2830,  2833,  2836,  2839,  2842,  2845,  2848,  2851,  2854,  2857,
    2863,  2862,  2867,  2867,  2868,  2871,  2874,  2877,  2880,  2883,
    2886,  2889,  2892,  2895,  2898,  2901,  2904,  2907,  2910,  2913,
    2916,  2919,  2922,  2925,  2928,  2933,  2938,  2943,  2952,  2954,
    2954,  2955,  2956,  2957,  2958,  2959,  2960,  2961,  2962,  2963,
    2964,  2965,  2966,  2968,  2973,  2978,  2983,  2988,  2993,  2998,
    3003,  3008,  3013,  3018,  3027,  3029,  3029,  3030,  3031,  3032,
    3033,  3034,  3035,  3036,  3037,  3038,  3039,  3041,  3047,  3063,
    3072,  3078,  3084,  3090,  3099,  3105
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
  "CLOSE", "CONNECT", "CONNECTFREQ", "CYCLE_ON_HOST_CHANGE",
  "DEFAULT_FLOODCOUNT", "DEFAULT_JOIN_FLOOD_COUNT",
  "DEFAULT_JOIN_FLOOD_TIME", "DEFAULT_MAX_CLIENTS", "DENY", "DESCRIPTION",
  "DIE", "DISABLE_AUTH", "DISABLE_FAKE_CHANNELS",
  "DISABLE_REMOTE_COMMANDS", "DLINE_MIN_CIDR", "DLINE_MIN_CIDR6",
  "DOTS_IN_IDENT", "EMAIL", "ENCRYPTED", "EXCEED_LIMIT", "EXEMPT",
  "FAILED_OPER_NOTICE", "FLATTEN_LINKS", "FLATTEN_LINKS_DELAY",
  "FLATTEN_LINKS_FILE", "GECOS", "GENERAL", "HIDDEN", "HIDDEN_NAME",
  "HIDE_CHANS", "HIDE_IDLE", "HIDE_IDLE_FROM_OPERS", "HIDE_SERVER_IPS",
  "HIDE_SERVERS", "HIDE_SERVICES", "HOST", "HUB", "HUB_MASK",
  "IGNORE_BOGUS_TS", "INVISIBLE_ON_CONNECT", "INVITE_CLIENT_COUNT",
  "INVITE_CLIENT_TIME", "INVITE_DELAY_CHANNEL", "IP", "IRCD_AUTH",
  "IRCD_FLAGS", "IRCD_SID", "JOIN", "KILL", "KILL_CHASE_TIME_LIMIT",
  "KLINE", "KLINE_EXEMPT", "KLINE_MIN_CIDR", "KLINE_MIN_CIDR6",
  "KNOCK_CLIENT_COUNT", "KNOCK_CLIENT_TIME", "KNOCK_DELAY_CHANNEL",
  "LEAF_MASK", "LISTEN", "MASK", "MAX_ACCEPT", "MAX_BANS", "MAX_CHANNELS",
  "MAX_GLOBAL", "MAX_IDENT", "MAX_IDLE", "MAX_LOCAL", "MAX_NICK_CHANGES",
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
  "WHOIS", "XLINE", "XLINE_EXEMPT", "';'", "'}'", "'{'", "'='", "','",
  "':'", "$accept", "conf", "conf_item", "timespec_", "timespec",
  "sizespec_", "sizespec", "modules_entry", "modules_items",
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
  "general_away_time", "general_max_watch", "general_cycle_on_host_change",
  "general_dline_min_cidr", "general_dline_min_cidr6",
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,    59,
     125,   123,    61,    44,    58
};
# endif

#define YYPACT_NINF -704

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-704)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -704,   621,  -704,  -215,  -207,  -201,  -704,  -704,  -704,  -199,
    -704,  -193,  -704,  -704,  -704,  -191,  -704,  -704,  -704,  -170,
    -167,  -704,  -165,  -704,  -144,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,   179,   662,  -142,  -136,  -115,    44,  -107,   422,   -88,
     -79,   -76,    69,   -70,   -69,   -64,   629,   420,   -40,   131,
     -36,    22,   -31,   -27,   -13,   -12,    -6,    64,  -704,  -704,
    -704,  -704,  -704,    10,    32,    39,    45,    50,    74,    75,
      80,   105,   114,   117,   266,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,   683,   591,    97,
    -704,   119,     9,  -704,  -704,    83,  -704,   134,   136,   137,
     139,   144,   147,   149,   151,   153,   157,   158,   160,   161,
     162,   163,   165,   174,   178,   181,   182,   188,   192,   193,
     198,   201,  -704,  -704,   202,   206,   207,   208,   209,   218,
     219,   220,   222,   223,   227,   228,   229,   232,   233,   234,
     236,   239,    19,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,   353,
      35,   323,    -2,   241,   242,    26,  -704,  -704,  -704,    18,
     267,   298,  -704,   243,   245,   250,   251,   252,   253,   256,
     260,   265,    15,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,    43,   268,   269,   271,   272,   273,   278,
     282,   289,   290,   293,   294,   295,   297,   299,   300,   303,
     307,    17,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
      11,    66,   308,    93,  -704,  -704,  -704,   129,   197,  -704,
     310,    51,  -704,  -704,    40,  -704,   235,   238,   315,   100,
    -704,   391,   435,   319,   447,   435,   435,   449,   435,   435,
     450,   451,   135,  -704,   331,   329,   330,   332,  -704,   333,
     335,   338,   342,   352,   354,   355,   356,   357,   358,   361,
     365,   366,   128,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,   334,   367,   368,   369,   370,   371,   372,  -704,   373,
     374,   375,   376,   377,   379,   380,   196,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,   382,   385,    33,  -704,  -704,  -704,   463,
     389,  -704,  -704,   387,   392,    48,  -704,  -704,  -704,   412,
     435,   518,   435,   435,   416,   520,   421,   523,   533,   537,
     439,   440,   441,   435,   545,   546,   549,   550,   435,   551,
     557,   566,   570,   469,   454,   464,   487,   435,   435,   491,
     492,   493,  -204,  -176,   496,   497,   498,   499,   589,   435,
     500,   435,   435,   503,   501,  -704,   504,   484,   489,  -704,
     494,   495,   507,   509,   510,   205,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,   513,   514,    30,  -704,
    -704,  -704,   506,   515,   517,  -704,   521,  -704,    16,  -704,
    -704,  -704,  -704,  -704,   603,   606,   525,  -704,   526,   524,
     529,   103,  -704,  -704,  -704,   541,   530,   539,  -704,   540,
     542,   543,   544,  -704,   547,   548,   185,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,   552,   553,
     554,   556,    79,  -704,  -704,  -704,  -704,   567,   571,   435,
     607,   573,   610,   578,   579,   583,   568,  -704,  -704,   642,
     630,   584,   636,   688,   690,   679,   682,   684,   686,   687,
     689,   691,   694,   695,   696,   697,   576,  -704,   581,   588,
    -704,   125,  -704,  -704,  -704,  -704,   611,   592,  -704,   594,
     597,   595,   596,   601,   602,    89,  -704,  -704,  -704,  -704,
    -704,   701,   600,  -704,   608,   612,  -704,   613,    36,  -704,
    -704,  -704,  -704,   618,   622,   623,  -704,   624,   411,   625,
     626,   628,   632,   634,   638,   639,   640,   650,   653,  -704,
    -704,   734,   750,   435,   627,   776,   778,   779,   435,   781,
     786,   435,   718,   787,   788,   435,   789,   789,   670,  -704,
    -704,   782,  -155,   783,   692,   790,   795,   677,   799,   802,
     792,   804,   806,   807,   809,   708,  -704,   819,   820,   714,
    -704,   716,  -704,   824,   825,   722,  -704,   724,   725,   727,
     728,   729,   733,   735,   736,   738,   739,   740,   741,   742,
     743,   744,   746,   747,   748,   749,   751,   753,   755,   756,
     757,   758,   752,   668,   759,   760,   761,   762,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,   774,
     775,   777,   784,   785,  -704,  -704,   839,   700,   731,   857,
     873,   883,   885,   886,   791,  -704,   888,   893,   793,  -704,
    -704,   894,   895,   794,   910,   798,  -704,   800,   801,  -704,
    -704,   897,   899,   808,  -704,  -704,   901,   813,   796,   909,
     911,   912,   827,   803,   914,   917,   811,  -704,  -704,   919,
     920,   921,   815,  -704,   816,   817,   818,   821,   822,   823,
     826,   828,   829,  -704,   830,   831,   832,   833,   834,   835,
     836,   837,   838,   840,   841,   842,   843,   844,   845,   846,
     847,  -704,  -704,   926,   848,   849,  -704,   850,  -704,    85,
    -704,   927,   931,   932,   934,   852,  -704,   853,  -704,  -704,
     946,   851,   955,   855,  -704,  -704,  -704,  -704,  -704,   435,
     435,   435,   435,   435,   435,   435,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,   856,   858,
     859,   -38,   860,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   870,    63,   871,   872,  -704,   874,   875,   876,
     877,   878,   879,   880,    -5,   881,   882,   884,   887,   889,
     890,   891,  -704,   892,   896,  -704,  -704,   898,   900,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -182,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,   -45,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,   902,   903,   341,   904,   905,   906,   907,
     908,  -704,   913,   915,  -704,   916,   918,   -43,   922,   923,
    -704,  -704,  -704,  -704,   924,   925,  -704,   928,   929,   486,
     930,   933,   935,   936,   710,   937,   938,  -704,   939,   940,
     941,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,   942,   732,
    -704,  -704,   943,   854,   944,  -704,    81,  -704,  -704,  -704,
    -704,   945,   948,   949,   950,  -704,  -704,   951,   805,   952,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,   -37,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,   789,   789,   789,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,   -24,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,   752,  -704,   668,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,    54,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,    55,  -704,   994,   910,   953,
    -704,  -704,  -704,  -704,  -704,  -704,   954,  -704,   956,   957,
    -704,  -704,   958,  -704,  -704,  -704,   959,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
      60,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,    87,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,   110,  -704,  -704,
     990,   -52,   962,   960,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
     130,  -704,  -704,  -704,   -38,  -704,  -704,  -704,  -704,    -5,
    -704,  -704,  -704,   341,  -704,   -43,  -704,  -704,  -704,   986,
     985,   989,   992,   995,  -704,   486,  -704,   710,  -704,   732,
     966,   967,   968,   240,  -704,  -704,   805,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
     132,  -704,  -704,  -704,   240,  -704
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,     0,   235,   400,   448,     0,
     463,     0,   303,   439,   279,     0,   100,   152,   337,     0,
       0,   378,     0,   109,     0,   354,     3,    23,    11,     4,
      24,    25,     5,     6,     8,     9,    10,    13,    14,    15,
      16,    17,    18,    19,    20,    22,    21,     7,    12,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
      95,    94,   632,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   620,   631,   622,   623,   624,
     625,   626,   627,   628,   621,   629,   630,     0,     0,     0,
     461,     0,     0,   459,   460,     0,   520,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   590,   563,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   474,   475,   476,   518,   519,   513,   514,
     515,   516,   512,   486,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   487,   488,   517,   492,   493,   494,   495,
     491,   490,   496,   503,   504,   497,   498,   499,   489,   501,
     510,   511,   508,   509,   502,   500,   506,   507,   505,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,     0,
       0,     0,   656,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   646,   647,   648,   649,   650,   651,   652,
     654,   653,   655,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    69,    66,    64,    70,    71,    65,    55,
      68,    58,    59,    60,    56,    67,    61,    62,    63,    57,
       0,     0,     0,     0,   124,   125,   126,     0,     0,   352,
       0,     0,   350,   351,     0,    96,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   619,     0,     0,     0,     0,   273,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   238,   239,   242,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   240,   241,   243,   253,   254,
     255,     0,     0,     0,     0,     0,     0,     0,   428,     0,
       0,     0,     0,     0,     0,     0,     0,   403,   404,   405,
     406,   407,   408,   409,   411,   410,   413,   417,   414,   415,
     416,   412,   454,     0,     0,     0,   451,   452,   453,     0,
       0,   458,   469,     0,     0,     0,   466,   467,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   473,     0,     0,     0,   320,
       0,     0,     0,     0,     0,     0,   306,   307,   308,   309,
     314,   310,   311,   312,   313,   445,     0,     0,     0,   442,
     443,   444,     0,     0,     0,   281,     0,   291,     0,   289,
     290,   292,   293,    49,     0,     0,     0,    45,     0,     0,
       0,     0,   103,   104,   105,     0,     0,     0,   202,     0,
       0,     0,     0,   175,     0,     0,     0,   155,   156,   157,
     158,   159,   162,   163,   164,   161,   160,   165,     0,     0,
       0,     0,     0,   340,   341,   342,   343,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   645,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     386,     0,   381,   382,   383,   127,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   115,   114,
     116,     0,     0,   349,     0,     0,   364,     0,     0,   357,
     358,   359,   360,     0,     0,     0,    90,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   618,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     418,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   402,     0,     0,     0,
     450,     0,   457,     0,     0,     0,   465,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   472,   315,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   305,     0,     0,     0,   441,
     294,     0,     0,     0,     0,     0,   288,     0,     0,    44,
     106,     0,     0,     0,   102,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,   344,     0,
       0,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   644,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,   384,     0,     0,     0,   380,     0,   122,     0,
     117,     0,     0,     0,     0,     0,   111,     0,   348,   361,
       0,     0,     0,     0,   356,    99,    98,    97,   642,    28,
      28,    28,    28,    28,    28,    28,    30,    29,   643,   633,
     634,   635,   636,   637,   638,   639,   641,   640,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,     0,     0,   449,   462,     0,     0,   464,
     533,   537,   521,   522,   552,   524,   617,   560,   525,   526,
     557,   532,   531,   540,   530,   527,   528,   536,   535,   534,
     558,   523,   615,   616,   556,   600,   594,   610,   595,   596,
     597,   605,   613,   598,   607,   611,   601,   612,   614,   602,
     606,   599,   609,   604,   603,   608,     0,   593,   572,   573,
     574,   567,   585,   568,   569,   570,   580,   588,   571,   582,
     586,   576,   587,   589,   577,   581,   575,   584,   579,   578,
     583,     0,   566,   553,   551,   554,   559,   555,   542,   549,
     550,   547,   548,   543,   544,   545,   546,   561,   562,   529,
     539,   538,   541,     0,     0,     0,     0,     0,     0,     0,
       0,   304,     0,     0,   440,     0,     0,     0,   299,   295,
     298,   280,    50,    51,     0,     0,   101,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   153,     0,     0,
       0,   338,   660,   657,   658,   659,   664,   663,   665,   661,
     662,    86,    81,    89,    80,    87,    88,    79,    83,    82,
      74,    73,    78,    75,    77,    76,    84,    85,     0,     0,
     379,   128,     0,     0,     0,   140,     0,   132,   133,   135,
     134,     0,     0,     0,     0,   110,   353,     0,     0,     0,
     355,    31,    32,    33,    34,    35,    36,    37,   268,   269,
     260,   278,   277,     0,   276,   261,   263,   265,   272,   264,
     262,   271,   257,   270,   259,   258,    38,    38,    38,    40,
      39,   266,   267,   423,   426,   427,   437,   434,   420,   435,
     432,   433,     0,   431,   436,   419,   425,   422,   424,   438,
     421,   455,   456,   470,   471,   591,     0,   564,     0,   318,
     319,   329,   325,   326,   328,   333,   330,   331,   324,   332,
     327,     0,   323,   317,   336,   335,   334,   316,   447,   446,
     302,   301,   286,   287,   285,     0,   284,     0,     0,     0,
     107,   108,   174,   171,   221,   233,   209,   218,     0,   207,
     212,   227,     0,   220,   225,   231,   211,   214,   222,   224,
     234,   228,   219,   226,   215,   232,   217,   223,   213,   216,
       0,   205,   167,   169,   172,   173,   184,   185,   186,   179,
     197,   180,   181,   182,   192,   200,   183,   194,   198,   188,
     199,   201,   189,   193,   187,   196,   191,   190,   195,     0,
     178,   168,   170,   347,   345,   346,   385,   390,   396,   399,
     392,   398,   393,   397,   395,   391,   394,     0,   389,   136,
       0,     0,     0,     0,   131,   119,   118,   120,   121,   362,
     368,   374,   377,   370,   376,   371,   375,   373,   369,   372,
       0,   367,   363,   274,     0,    41,    42,    43,   429,     0,
     592,   565,   321,     0,   282,     0,   300,   297,   296,     0,
       0,     0,     0,     0,   203,     0,   176,     0,   387,     0,
       0,     0,     0,     0,   130,   365,     0,   275,   430,   322,
     283,   208,   230,   206,   229,   210,   204,   177,   388,   137,
     139,   138,   150,   149,   145,   147,   151,   148,   144,   146,
       0,   143,   366,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -704,  -704,  -704,  -410,  -300,  -703,  -626,  -704,  -704,   969,
    -704,  -704,  -704,  -704,   947,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  1047,  -704,  -704,  -704,  -704,  -704,
    -704,   635,  -704,  -704,  -704,  -704,  -704,   555,  -704,  -704,
    -704,  -704,  -704,  -704,   961,  -704,  -704,  -704,  -704,    92,
    -704,  -704,  -704,  -704,  -704,  -166,  -704,  -704,  -704,   633,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -126,  -704,  -704,  -704,  -122,  -704,  -704,  -704,   814,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,   -96,
    -704,  -704,  -704,  -704,  -704,  -106,  -704,   672,  -704,  -704,
    -704,    13,  -704,  -704,  -704,  -704,  -704,   705,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -101,  -704,  -704,  -704,  -704,
    -704,  -704,   641,  -704,  -704,  -704,  -704,  -704,   963,  -704,
    -704,  -704,  -704,   585,  -704,  -704,  -704,  -704,  -704,  -121,
    -704,  -704,  -704,   614,  -704,  -704,  -704,  -704,  -108,  -704,
    -704,  -704,   964,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,   -66,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,   717,  -704,  -704,  -704,  -704,  -704,   965,
    -704,  -704,  -704,  -704,  1074,  -704,  -704,  -704,  -704,   810,
    -704,  -704,  -704,  -704,  1025,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,    90,  -704,
    -704,  -704,    94,  -704,  -704,  -704,  -704,  -704,  1105,  -704,
    -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704,   970,  -704,  -704,  -704,  -704,  -704,  -704,  -704,
    -704,  -704
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   816,   817,  1079,  1080,    27,   215,   216,
     217,   218,    28,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,    29,    77,    78,    79,    80,    81,    30,    63,
     491,   492,   493,   494,    31,    70,   575,   576,   577,   578,
     579,   580,    32,   283,   284,   285,   286,   287,  1036,  1037,
    1038,  1039,  1040,  1222,  1300,  1301,    33,    64,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   743,
    1199,  1200,   517,   738,  1170,  1171,    34,    53,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   614,  1063,  1064,
      35,    61,   477,   723,  1135,  1136,   478,   479,   480,  1139,
     979,   980,   481,   482,    36,    59,   455,   456,   457,   458,
     459,   460,   461,   708,  1121,  1122,   462,   463,   464,    37,
      65,   522,   523,   524,   525,   526,    38,   291,   292,   293,
      39,    72,   588,   589,   590,   591,   592,   801,  1240,  1241,
      40,    68,   561,   562,   563,   564,   784,  1217,  1218,    41,
      54,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   637,  1092,  1093,   377,   378,   379,   380,   381,
      42,    60,   468,   469,   470,   471,    43,    55,   385,   386,
     387,   388,    44,   112,   113,   114,    45,    57,   395,   396,
     397,   398,    46,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   425,   941,   942,   205,
     424,   916,   917,   206,   207,   208,    47,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      48,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     844,   845,   599,  1090,  1132,   602,   603,   690,   605,   606,
     110,   691,   558,  1061,    49,    50,   222,   472,   243,   488,
     116,   848,   849,   289,    51,   117,   118,   212,   119,   120,
      52,   465,    56,   121,   382,   692,   465,   584,    58,   693,
      62,   584,   122,   123,   244,   110,   245,  1105,   223,   392,
     124,  1106,   289,   125,   126,   127,   843,   224,   225,   226,
     128,    66,   227,   228,    67,    73,    69,   229,   230,   231,
     212,   473,   111,   246,  1076,  1077,  1078,   129,   130,   474,
     518,   475,  1032,   247,   392,  1062,  1032,    71,   131,   107,
     570,   132,   133,    74,   281,   108,   383,   489,   382,   134,
     658,    75,   660,   661,   488,   248,   135,   111,   136,   249,
     137,   559,   138,   671,   139,   140,   109,   250,   676,   519,
     251,   252,   290,   213,   115,   141,   558,   685,   686,   314,
     142,   143,   281,   144,   145,   146,   585,   476,   147,   699,
     585,   701,   702,   209,   214,   315,   316,  1133,   393,   253,
     317,   290,   210,  1271,   466,   211,  1134,   384,   520,   466,
     383,   219,   220,   148,    76,   254,   213,   221,   255,   256,
     257,   843,   394,   149,   150,   151,   152,   153,   154,   155,
      73,  1033,   489,   393,  1107,  1033,   495,   214,  1108,   571,
     490,   280,  1243,   318,  1091,   288,  1244,   351,   570,   352,
     294,   353,   295,   521,   496,  1248,   446,   394,    74,  1249,
     319,   320,   321,   322,   323,   354,    75,   258,   324,   296,
     297,   384,   325,   497,   447,   559,   298,   483,   326,   756,
     560,   156,   157,   158,   355,   159,   160,   327,   328,   390,
     259,   260,   301,   448,   161,   536,   725,   556,   329,   444,
     498,   356,   467,   357,   572,   586,   486,   467,   587,   586,
     718,   358,   587,   649,   302,  -129,   803,    82,   495,   330,
     449,   303,   538,   359,   573,   490,  1034,   304,   655,    76,
    1034,   582,   305,  1252,  1254,   499,   496,  1253,  1255,  1264,
     574,    83,    84,  1265,   299,   565,   360,   571,    85,   518,
    1035,   569,   500,  -129,  1035,   497,   306,   307,  1292,   752,
    1293,  1223,   308,   830,   282,   331,  1266,   361,   835,   795,
    1267,   838,   450,   567,   472,   842,    86,    87,    88,   596,
     451,   452,   498,   733,   501,   502,   362,   309,   519,  1268,
      89,    90,    91,  1269,   560,   363,   310,    92,    93,   311,
     453,   389,   282,  1294,   446,   785,  1111,   593,   628,  1275,
     594,  1303,   572,  1276,   609,  1304,   399,   499,   400,   401,
    1295,   402,   447,  1245,  1246,  1247,   403,   520,   473,   404,
    1112,   405,   573,   406,   500,   407,   474,   503,   475,   408,
     409,   448,   410,   411,   412,   413,   364,   414,   574,  1051,
    1052,  1053,  1054,  1055,  1056,  1057,   415,   504,  1296,  1297,
     416,   505,  1113,   417,   418,   746,   501,   502,   449,   365,
     419,   243,   521,   116,   420,   421,   645,   454,   117,   118,
     422,   119,   120,   423,   426,   714,   121,   595,   427,   428,
     429,   430,  1114,  1115,   476,   122,   123,   244,  1116,   245,
     431,   432,   433,   124,   434,   435,   125,   126,   127,   436,
     437,   438,  1298,   128,   439,   440,   441,  1299,   442,   503,
     450,   443,  1117,   484,   485,   527,   246,   528,   451,   452,
     129,   130,   529,   530,   531,   532,   247,  1118,   533,   504,
    1144,   131,   534,   505,   132,   133,   312,   535,   453,   597,
     539,   540,   134,   541,   542,   543,  1145,  1146,   248,   135,
     544,   136,   249,   137,   545,   138,  1147,   139,   140,   598,
     250,   546,   547,   251,   252,   548,   549,   550,   141,   551,
     600,   552,   553,   142,   143,   554,   144,   145,   146,   555,
     566,   147,   581,   598,   809,   810,   811,   812,   813,   814,
     815,  1119,   253,  1148,  1149,   601,  1150,   604,   607,   608,
     610,   611,   612,   630,   613,   615,   148,   616,   254,  1120,
     617,   255,   256,   257,   618,   454,   149,   150,   151,   152,
     153,   154,   155,  1151,   619,   651,   620,   621,   622,   623,
     624,  1152,   351,   625,   352,  1272,   353,   626,   627,   631,
     632,   633,   634,   635,   636,   638,   639,   640,   641,   642,
     354,   643,   644,  1153,   647,  1154,  1155,   648,   652,   653,
     258,     2,     3,   657,   654,     4,   659,   662,   663,   355,
     222,   665,   664,  1156,   156,   157,   158,     5,   159,   160,
       6,   666,     7,   259,   260,   667,   356,   161,   357,     8,
     668,   669,   670,   672,   673,  1157,   358,   674,   675,   677,
    1158,     9,   223,    82,  1159,   678,    10,    11,   359,  1160,
    1161,   224,   225,   226,   679,  1162,   227,   228,   680,  1163,
     681,   229,   230,   231,   314,    12,   682,    83,    84,    13,
    1164,   360,  1165,  1166,    85,  1167,   683,   698,   684,    14,
     315,   316,   687,   688,   689,   317,  1168,   694,   695,   696,
     697,   700,   361,  1169,   703,   918,   706,   919,   920,    15,
      16,   707,    86,    87,    88,   727,   709,   710,   728,   757,
     704,   362,   759,   705,    17,   720,    89,    90,    91,   711,
     363,   712,   713,    92,    93,   716,   717,   721,   318,   722,
     764,    18,   765,   724,   729,   730,   731,  1176,   767,  1177,
    1178,   732,   736,    19,    20,   319,   320,   321,   322,   323,
     735,   737,   739,   324,   740,   741,   742,   325,   754,   744,
     745,   748,   755,   326,   758,   749,   750,    21,   751,   760,
     761,   364,   327,   328,   762,   766,   768,   763,   769,   895,
      22,   770,  1207,   329,   771,   781,   772,    23,   773,   774,
     782,   775,    24,   776,   365,    25,   777,   778,   779,   780,
     783,   788,   787,   797,   330,   789,   790,   791,   792,   798,
     921,   922,   923,   793,   794,   924,   925,   799,   926,   927,
     839,   928,   828,   929,   800,   802,   930,   805,   931,   932,
     933,   806,   807,   808,   818,   819,   934,   820,   829,   831,
     935,   821,  1208,   822,   936,   937,   938,   823,   824,   825,
     331,   939,  1179,  1180,  1181,  1230,   940,  1182,  1183,   826,
    1184,  1185,   827,  1186,   832,  1187,   833,   834,  1188,   836,
    1189,  1190,  1191,  1209,   837,   840,   841,   843,  1192,   846,
     857,  1210,  1193,   851,   847,   850,  1194,  1195,  1196,   854,
    1211,   964,   852,  1197,   896,   897,   898,   853,  1198,   899,
     900,   855,   901,   902,   856,   903,   858,   904,   859,   860,
     905,   861,   906,   907,   908,  1231,  1212,   862,  1213,  1214,
     909,   863,   864,   865,   910,   866,   867,   868,   911,   912,
     913,   869,  1215,   870,   871,   914,   872,   873,   874,  1216,
     915,   963,   875,   965,   876,   877,  1232,   878,   879,   880,
     881,   882,   883,   884,  1233,   885,   886,   887,   888,   966,
     889,   967,   890,  1234,   891,   892,   893,   894,   943,   944,
     945,   946,   947,   948,   949,   950,   951,   952,   953,   954,
     955,   956,   957,   958,   959,   968,   960,   969,   970,  1235,
     972,  1236,  1237,   961,   962,   973,   975,   976,   978,   984,
     971,   985,   974,   987,   988,  1238,   977,   981,   989,   982,
     983,   990,  1239,   991,   992,   994,   995,   986,   993,   996,
     997,   998,   999,  1000,  1001,  1002,  1003,  1004,  1028,  1041,
    1005,  1006,  1007,  1042,  1043,  1008,  1044,  1009,  1010,  1011,
    1012,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1047,  1020,
    1021,  1022,  1023,  1024,  1025,  1026,  1027,  1049,  1030,  1031,
    1029,  1045,  1046,  1048,  1050,  1058,  1220,  1059,  1060,  1065,
    1066,  1067,  1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,
    1081,  1082,  1256,  1083,  1084,  1085,  1086,  1087,  1088,  1089,
    1094,  1095,  1270,  1096,  1281,  1282,  1097,  1283,  1098,  1099,
    1100,  1101,  1284,  1285,   300,  1102,   734,  1103,  1224,  1104,
     796,  1109,  1110,  1123,  1124,  1125,  1126,  1127,  1305,   747,
    1137,  1287,  1128,  1286,  1129,  1130,   629,  1131,  1277,  1280,
     726,  1257,  1279,  1140,  1141,  1302,  1138,  1142,  1143,  1172,
     715,  1288,  1173,   753,  1174,  1175,  1201,  1202,  1203,  1204,
    1205,  1206,  1219,   804,  1225,   786,  1221,  1226,  1227,  1228,
    1229,  1242,  1258,  1278,   487,   719,   391,   445,  1259,  1274,
    1260,  1261,  1262,  1263,  1273,  1289,  1290,  1291,  1251,   313,
    1250,     0,   537,     0,     0,   656,     0,     0,   557,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   583,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     646,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     650
};

static const yytype_int16 yycheck[] =
{
     626,   627,   302,     8,    47,   305,   306,   211,   308,   309,
       1,   215,     1,    51,   229,   230,     1,     1,     1,     1,
       1,   176,   177,     1,   231,     6,     7,     1,     9,    10,
     231,     1,   231,    14,     1,   211,     1,     1,   231,   215,
     231,     1,    23,    24,    27,     1,    29,   229,    33,     1,
      31,   233,     1,    34,    35,    36,   108,    42,    43,    44,
      41,   231,    47,    48,   231,     1,   231,    52,    53,    54,
       1,    55,    63,    56,    11,    12,    13,    58,    59,    63,
       1,    65,     1,    66,     1,   123,     1,   231,    69,   231,
       1,    72,    73,    29,     1,   231,    63,    79,     1,    80,
     400,    37,   402,   403,     1,    88,    87,    63,    89,    92,
      91,   100,    93,   413,    95,    96,   231,   100,   418,    40,
     103,   104,   100,    97,   231,   106,     1,   427,   428,     1,
     111,   112,     1,   114,   115,   116,   100,   121,   119,   439,
     100,   441,   442,   231,   118,    17,    18,   190,   100,   132,
      22,   100,   231,   205,   124,   231,   199,   124,    79,   124,
      63,   231,   231,   144,   100,   148,    97,   231,   151,   152,
     153,   108,   124,   154,   155,   156,   157,   158,   159,   160,
       1,   100,    79,   100,   229,   100,     1,   118,   233,   100,
     172,   231,   229,    65,   199,   231,   233,     1,     1,     3,
     231,     5,   229,   124,    19,   229,     1,   124,    29,   233,
      82,    83,    84,    85,    86,    19,    37,   200,    90,   232,
     232,   124,    94,    38,    19,   100,   232,   229,   100,   529,
     219,   212,   213,   214,    38,   216,   217,   109,   110,   230,
     223,   224,   232,    38,   225,   230,   230,   230,   120,   230,
      65,    55,   222,    57,   165,   219,   230,   222,   222,   219,
     230,    65,   222,   230,   232,   172,   230,     1,     1,   141,
      65,   232,   229,    77,   185,   172,   195,   232,   230,   100,
     195,   230,   232,   229,   229,   100,    19,   233,   233,   229,
     201,    25,    26,   233,   230,   229,   100,   100,    32,     1,
     219,   172,   117,   172,   219,    38,   232,   232,    68,   230,
      70,   230,   232,   613,   221,   187,   229,   121,   618,   230,
     233,   621,   117,   230,     1,   625,    60,    61,    62,   229,
     125,   126,    65,   230,   149,   150,   140,   232,    40,   229,
      74,    75,    76,   233,   219,   149,   232,    81,    82,   232,
     145,   232,   221,   113,     1,   230,    15,   122,   230,   229,
     122,   229,   165,   233,   229,   233,   232,   100,   232,   232,
     130,   232,    19,  1076,  1077,  1078,   232,    79,    55,   232,
      39,   232,   185,   232,   117,   232,    63,   202,    65,   232,
     232,    38,   232,   232,   232,   232,   200,   232,   201,   809,
     810,   811,   812,   813,   814,   815,   232,   222,   168,   169,
     232,   226,    71,   232,   232,   230,   149,   150,    65,   223,
     232,     1,   124,     1,   232,   232,   230,   222,     6,     7,
     232,     9,    10,   232,   232,   230,    14,   122,   232,   232,
     232,   232,   101,   102,   121,    23,    24,    27,   107,    29,
     232,   232,   232,    31,   232,   232,    34,    35,    36,   232,
     232,   232,   222,    41,   232,   232,   232,   227,   232,   202,
     117,   232,   131,   232,   232,   232,    56,   232,   125,   126,
      58,    59,   232,   232,   232,   232,    66,   146,   232,   222,
       4,    69,   232,   226,    72,    73,   230,   232,   145,   108,
     232,   232,    80,   232,   232,   232,    20,    21,    88,    87,
     232,    89,    92,    91,   232,    93,    30,    95,    96,   108,
     100,   232,   232,   103,   104,   232,   232,   232,   106,   232,
     211,   232,   232,   111,   112,   232,   114,   115,   116,   232,
     232,   119,   232,   108,   133,   134,   135,   136,   137,   138,
     139,   210,   132,    67,    68,   108,    70,   108,   108,   108,
     229,   232,   232,   229,   232,   232,   144,   232,   148,   228,
     232,   151,   152,   153,   232,   222,   154,   155,   156,   157,
     158,   159,   160,    97,   232,   122,   232,   232,   232,   232,
     232,   105,     1,   232,     3,  1221,     5,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
      19,   232,   232,   127,   232,   129,   130,   232,   229,   232,
     200,     0,     1,   211,   232,     4,   108,   211,   108,    38,
       1,   108,   211,   147,   212,   213,   214,    16,   216,   217,
      19,   108,    21,   223,   224,   108,    55,   225,    57,    28,
     211,   211,   211,   108,   108,   169,    65,   108,   108,   108,
     174,    40,    33,     1,   178,   108,    45,    46,    77,   183,
     184,    42,    43,    44,   108,   189,    47,    48,   108,   193,
     211,    52,    53,    54,     1,    64,   232,    25,    26,    68,
     204,   100,   206,   207,    32,   209,   232,   108,   211,    78,
      17,    18,   211,   211,   211,    22,   220,   211,   211,   211,
     211,   211,   121,   227,   211,    47,   232,    49,    50,    98,
      99,   232,    60,    61,    62,   122,   232,   232,   122,   122,
     229,   140,   122,   229,   113,   229,    74,    75,    76,   232,
     149,   232,   232,    81,    82,   232,   232,   232,    65,   232,
     108,   130,   122,   232,   229,   229,   232,    47,   122,    49,
      50,   232,   232,   142,   143,    82,    83,    84,    85,    86,
     229,   232,   232,    90,   232,   232,   232,    94,   211,   232,
     232,   229,   211,   100,   211,   232,   232,   166,   232,   211,
     211,   200,   109,   110,   211,   211,   108,   229,   108,    47,
     179,   122,    70,   120,   122,   229,   122,   186,   122,   122,
     229,   122,   191,   122,   223,   194,   122,   122,   122,   122,
     232,   229,   211,   122,   141,   231,   229,   232,   232,   229,
     162,   163,   164,   232,   232,   167,   168,   229,   170,   171,
     122,   173,   108,   175,   232,   232,   178,   229,   180,   181,
     182,   229,   229,   229,   229,   229,   188,   229,   108,   232,
     192,   229,   130,   229,   196,   197,   198,   229,   229,   229,
     187,   203,   162,   163,   164,    70,   208,   167,   168,   229,
     170,   171,   229,   173,   108,   175,   108,   108,   178,   108,
     180,   181,   182,   161,   108,   108,   108,   108,   188,   229,
     108,   169,   192,   211,   122,   122,   196,   197,   198,   232,
     178,   211,   122,   203,   162,   163,   164,   122,   208,   167,
     168,   122,   170,   171,   122,   173,   122,   175,   122,   122,
     178,   122,   180,   181,   182,   130,   204,   229,   206,   207,
     188,   122,   122,   229,   192,   229,   122,   122,   196,   197,
     198,   229,   220,   229,   229,   203,   229,   229,   229,   227,
     208,   122,   229,   232,   229,   229,   161,   229,   229,   229,
     229,   229,   229,   229,   169,   229,   229,   229,   229,   122,
     229,   108,   229,   178,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   122,   229,   122,   122,   204,
     122,   206,   207,   229,   229,   122,   122,   122,   108,   122,
     229,   122,   229,   122,   211,   220,   232,   229,   232,   229,
     229,   122,   227,   122,   122,   232,   122,   229,   211,   122,
     229,   122,   122,   122,   229,   229,   229,   229,   122,   122,
     229,   229,   229,   122,   122,   229,   122,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   122,   229,
     229,   229,   229,   229,   229,   229,   229,   122,   229,   229,
     232,   229,   229,   232,   229,   229,   232,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   108,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   122,   229,   128,   130,   229,   128,   229,   229,
     229,   229,   130,   128,    77,   229,   491,   229,  1036,   229,
     575,   229,   229,   229,   229,   229,   229,   229,  1304,   506,
     218,  1267,   229,  1265,   229,   229,   332,   229,  1244,  1255,
     478,  1138,  1253,   229,   229,  1276,   233,   229,   229,   229,
     455,  1269,   229,   522,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   588,   229,   561,   232,   229,   229,   229,
     229,   229,   229,  1249,   215,   468,   112,   162,   234,   229,
     234,   234,   234,   234,   232,   229,   229,   229,  1108,    94,
    1106,    -1,   232,    -1,    -1,   395,    -1,    -1,   261,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   283,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   291,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     366,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     385
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   236,     0,     1,     4,    16,    19,    21,    28,    40,
      45,    46,    64,    68,    78,    98,    99,   113,   130,   142,
     143,   166,   179,   186,   191,   194,   237,   242,   247,   267,
     273,   279,   287,   301,   321,   345,   359,   374,   381,   385,
     395,   404,   425,   431,   437,   441,   447,   501,   515,   229,
     230,   231,   231,   322,   405,   432,   231,   442,   231,   360,
     426,   346,   231,   274,   302,   375,   231,   231,   396,   231,
     280,   231,   386,     1,    29,    37,   100,   268,   269,   270,
     271,   272,     1,    25,    26,    32,    60,    61,    62,    74,
      75,    76,    81,    82,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   231,   231,   231,
       1,    63,   438,   439,   440,   231,     1,     6,     7,     9,
      10,    14,    23,    24,    31,    34,    35,    36,    41,    58,
      59,    69,    72,    73,    80,    87,    89,    91,    93,    95,
      96,   106,   111,   112,   114,   115,   116,   119,   144,   154,
     155,   156,   157,   158,   159,   160,   212,   213,   214,   216,
     217,   225,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   494,   498,   499,   500,   231,
     231,   231,     1,    97,   118,   243,   244,   245,   246,   231,
     231,   231,     1,    33,    42,    43,    44,    47,    48,    52,
      53,    54,   516,   517,   518,   519,   520,   521,   522,   523,
     524,   525,   526,     1,    27,    29,    56,    66,    88,    92,
     100,   103,   104,   132,   148,   151,   152,   153,   200,   223,
     224,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     231,     1,   221,   288,   289,   290,   291,   292,   231,     1,
     100,   382,   383,   384,   231,   229,   232,   232,   232,   230,
     269,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   230,   503,     1,    17,    18,    22,    65,    82,
      83,    84,    85,    86,    90,    94,   100,   109,   110,   120,
     141,   187,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,     1,     3,     5,    19,    38,    55,    57,    65,    77,
     100,   121,   140,   149,   200,   223,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   420,   421,   422,
     423,   424,     1,    63,   124,   433,   434,   435,   436,   232,
     230,   439,     1,   100,   124,   443,   444,   445,   446,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   495,   491,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   230,   449,     1,    19,    38,    65,
     117,   125,   126,   145,   222,   361,   362,   363,   364,   365,
     366,   367,   371,   372,   373,     1,   124,   222,   427,   428,
     429,   430,     1,    55,    63,    65,   121,   347,   351,   352,
     353,   357,   358,   229,   232,   232,   230,   244,     1,    79,
     172,   275,   276,   277,   278,     1,    19,    38,    65,   100,
     117,   149,   150,   202,   222,   226,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   317,     1,    40,
      79,   124,   376,   377,   378,   379,   380,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   230,   517,   229,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   230,   249,     1,   100,
     219,   397,   398,   399,   400,   229,   232,   230,   289,   172,
       1,   100,   165,   185,   201,   281,   282,   283,   284,   285,
     286,   232,   230,   383,     1,   100,   219,   222,   387,   388,
     389,   390,   391,   122,   122,   122,   229,   108,   108,   239,
     211,   108,   239,   239,   108,   239,   239,   108,   108,   229,
     229,   232,   232,   232,   342,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   230,   324,
     229,   232,   232,   232,   232,   232,   232,   417,   232,   232,
     232,   232,   232,   232,   232,   230,   407,   232,   232,   230,
     434,   122,   229,   232,   232,   230,   444,   211,   239,   108,
     239,   239,   211,   108,   211,   108,   108,   108,   211,   211,
     211,   239,   108,   108,   108,   108,   239,   108,   108,   108,
     108,   211,   232,   232,   211,   239,   239,   211,   211,   211,
     211,   215,   211,   215,   211,   211,   211,   211,   108,   239,
     211,   239,   239,   211,   229,   229,   232,   232,   368,   232,
     232,   232,   232,   232,   230,   362,   232,   232,   230,   428,
     229,   232,   232,   348,   232,   230,   352,   122,   122,   229,
     229,   232,   232,   230,   276,   229,   232,   232,   318,   232,
     232,   232,   232,   314,   232,   232,   230,   304,   229,   232,
     232,   232,   230,   377,   211,   211,   239,   122,   211,   122,
     211,   211,   211,   229,   108,   122,   211,   122,   108,   108,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   229,   229,   232,   401,   230,   398,   211,   229,   231,
     229,   232,   232,   232,   232,   230,   282,   122,   229,   229,
     232,   392,   232,   230,   388,   229,   229,   229,   229,   133,
     134,   135,   136,   137,   138,   139,   238,   239,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   108,   108,
     239,   232,   108,   108,   108,   239,   108,   108,   239,   122,
     108,   108,   239,   108,   241,   241,   229,   122,   176,   177,
     122,   211,   122,   122,   232,   122,   122,   108,   122,   122,
     122,   122,   229,   122,   122,   229,   229,   122,   122,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,    47,   162,   163,   164,   167,
     168,   170,   171,   173,   175,   178,   180,   181,   182,   188,
     192,   196,   197,   198,   203,   208,   496,   497,    47,    49,
      50,   162,   163,   164,   167,   168,   170,   171,   173,   175,
     178,   180,   181,   182,   188,   192,   196,   197,   198,   203,
     208,   492,   493,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   122,   211,   232,   122,   108,   122,   122,
     122,   229,   122,   122,   229,   122,   122,   232,   108,   355,
     356,   229,   229,   229,   122,   122,   229,   122,   211,   232,
     122,   122,   122,   211,   232,   122,   122,   229,   122,   122,
     122,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   122,   232,
     229,   229,     1,   100,   195,   219,   293,   294,   295,   296,
     297,   122,   122,   122,   122,   229,   229,   122,   232,   122,
     229,   238,   238,   238,   238,   238,   238,   238,   229,   229,
     229,    51,   123,   343,   344,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,    11,    12,    13,   240,
     241,   229,   229,   229,   229,   229,   229,   229,   229,   229,
       8,   199,   418,   419,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   229,   233,   229,   233,   229,
     229,    15,    39,    71,   101,   102,   107,   131,   146,   210,
     228,   369,   370,   229,   229,   229,   229,   229,   229,   229,
     229,   229,    47,   190,   199,   349,   350,   218,   233,   354,
     229,   229,   229,   229,     4,    20,    21,    30,    67,    68,
      70,    97,   105,   127,   129,   130,   147,   169,   174,   178,
     183,   184,   189,   193,   204,   206,   207,   209,   220,   227,
     319,   320,   229,   229,   229,   229,    47,    49,    50,   162,
     163,   164,   167,   168,   170,   171,   173,   175,   178,   180,
     181,   182,   188,   192,   196,   197,   198,   203,   208,   315,
     316,   229,   229,   229,   229,   229,   229,    70,   130,   161,
     169,   178,   204,   206,   207,   220,   227,   402,   403,   229,
     232,   232,   298,   230,   294,   229,   229,   229,   229,   229,
      70,   130,   161,   169,   178,   204,   206,   207,   220,   227,
     393,   394,   229,   229,   233,   240,   240,   240,   229,   233,
     497,   493,   229,   233,   229,   233,   108,   356,   229,   234,
     234,   234,   234,   234,   229,   233,   229,   233,   229,   233,
     122,   205,   241,   232,   229,   229,   233,   344,   419,   370,
     350,   128,   130,   128,   130,   128,   320,   316,   403,   229,
     229,   229,    68,    70,   113,   130,   168,   169,   222,   227,
     299,   300,   394,   229,   233,   300
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   235,   236,   236,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   238,   238,
     239,   239,   239,   239,   239,   239,   239,   239,   240,   240,
     241,   241,   241,   241,   242,   243,   243,   244,   244,   244,
     245,   246,   247,   248,   248,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   268,   269,   269,   269,   269,   270,   271,   272,
     274,   273,   275,   275,   276,   276,   276,   277,   278,   280,
     279,   281,   281,   282,   282,   282,   282,   282,   283,   284,
     285,   286,   287,   288,   288,   289,   289,   289,   290,   292,
     291,   293,   293,   294,   294,   294,   294,   295,   296,   296,
     298,   297,   299,   299,   300,   300,   300,   300,   300,   300,
     300,   300,   302,   301,   303,   303,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   314,   313,   315,   315,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   318,   317,   319,   319,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   322,   321,   323,   323,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   342,   341,   343,   343,   344,   344,   346,
     345,   348,   347,   349,   349,   350,   350,   350,   351,   351,
     352,   352,   352,   352,   352,   354,   353,   355,   355,   356,
     356,   357,   358,   360,   359,   361,   361,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   363,   364,   365,   366,
     368,   367,   369,   369,   370,   370,   370,   370,   370,   370,
     370,   370,   370,   370,   371,   372,   373,   375,   374,   376,
     376,   377,   377,   377,   377,   378,   379,   380,   381,   382,
     382,   383,   383,   384,   386,   385,   387,   387,   388,   388,
     388,   388,   389,   390,   392,   391,   393,   393,   394,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   396,   395,
     397,   397,   398,   398,   398,   399,   401,   400,   402,   402,
     403,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     405,   404,   406,   406,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   415,   417,   416,
     418,   418,   419,   419,   420,   421,   422,   423,   424,   426,
     425,   427,   427,   428,   428,   428,   429,   430,   432,   431,
     433,   433,   434,   434,   434,   435,   436,   437,   438,   438,
     439,   439,   440,   442,   441,   443,   443,   444,   444,   444,
     445,   446,   447,   448,   448,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   449,   449,   449,   449,   449,   449,   449,   449,   449,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   476,   477,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   491,   490,   492,   492,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     493,   493,   493,   493,   493,   493,   493,   493,   493,   493,
     495,   494,   496,   496,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   497,   497,   497,   497,   497,
     497,   497,   497,   497,   497,   498,   499,   500,   501,   502,
     502,   503,   503,   503,   503,   503,   503,   503,   503,   503,
     503,   503,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   516,   517,   517,   517,
     517,   517,   517,   517,   517,   517,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526
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
       1,     1,     0,     5,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     1,     1,     1,     0,     6,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     1,     1,     0,
       6,     0,     5,     3,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     2,     0,     5,     3,     1,     1,
       3,     4,     4,     0,     6,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     4,     4,     4,     4,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     0,     6,     2,
       1,     1,     1,     1,     2,     4,     4,     4,     5,     2,
       1,     1,     1,     4,     0,     6,     2,     1,     1,     1,
       1,     2,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       2,     1,     1,     1,     2,     4,     0,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     6,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     0,     5,
       3,     1,     1,     1,     4,     4,     4,     4,     4,     0,
       6,     2,     1,     1,     1,     1,     4,     4,     0,     6,
       2,     1,     1,     1,     1,     4,     4,     5,     2,     1,
       1,     1,     4,     0,     6,     2,     1,     1,     1,     1,
       4,     4,     5,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     0,     5,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 416 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2873 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 417 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2879 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 418 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2885 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 419 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2891 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 420 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2897 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 421 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 422 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2909 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 423 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2915 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 424 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2921 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 427 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2927 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 428 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2933 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 429 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 430 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2945 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 431 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2951 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 444 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 2960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 450 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 2969 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 483 "conf_parser.y" /* yacc.c:1646  */
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
#line 3012 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 523 "conf_parser.y" /* yacc.c:1646  */
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
#line 3073 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 581 "conf_parser.y" /* yacc.c:1646  */
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
#line 3105 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 610 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3116 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 618 "conf_parser.y" /* yacc.c:1646  */
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
#line 3133 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 632 "conf_parser.y" /* yacc.c:1646  */
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
#line 3164 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 660 "conf_parser.y" /* yacc.c:1646  */
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
#line 3182 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 675 "conf_parser.y" /* yacc.c:1646  */
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
#line 3200 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 690 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3213 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 700 "conf_parser.y" /* yacc.c:1646  */
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
#line 3230 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 714 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3242 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 723 "conf_parser.y" /* yacc.c:1646  */
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
#line 3273 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 751 "conf_parser.y" /* yacc.c:1646  */
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
#line 3304 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 779 "conf_parser.y" /* yacc.c:1646  */
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
#line 3332 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 804 "conf_parser.y" /* yacc.c:1646  */
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
#line 3357 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 826 "conf_parser.y" /* yacc.c:1646  */
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
#line 3382 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 848 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3391 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 866 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3403 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 875 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3415 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 884 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 897 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3436 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 901 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3453 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 918 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3462 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 924 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3471 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 934 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3480 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 938 "conf_parser.y" /* yacc.c:1646  */
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
#line 3498 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 956 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3507 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 962 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3516 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 968 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3525 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 974 "conf_parser.y" /* yacc.c:1646  */
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
#line 3546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1002 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3555 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1008 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3564 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1012 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3577 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1028 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3588 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1036 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1039 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3604 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1044 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3613 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1051 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3622 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1055 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3631 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1059 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3640 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1063 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3649 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1067 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3658 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1071 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1075 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3676 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1079 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3685 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1089 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3697 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1096 "conf_parser.y" /* yacc.c:1646  */
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
#line 3750 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1159 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3759 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1165 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3768 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1171 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3777 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1177 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3786 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1183 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3800 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1194 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3809 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1200 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3823 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1211 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3832 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1217 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3841 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1224 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
#line 3850 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1228 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
#line 3859 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1232 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3868 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1236 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
#line 3877 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1240 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
#line 3886 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1244 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3895 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1248 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3904 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1252 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3913 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1256 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
#line 3922 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1260 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
#line 3931 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1264 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
#line 3940 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1268 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
#line 3949 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1272 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3958 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1276 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
#line 3967 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1280 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3976 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1284 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3985 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1288 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3994 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1292 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 4003 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1296 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 4012 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1300 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4021 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1304 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4030 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1308 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4039 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1312 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4048 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1318 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4057 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1325 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4066 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1329 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4075 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1333 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4084 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1337 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4093 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1341 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4102 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1345 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4111 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1349 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4120 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1353 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4129 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1357 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4138 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1361 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4147 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1365 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4156 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1369 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4165 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1373 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4174 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1377 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4183 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1381 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4192 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1385 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4201 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1389 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4210 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1393 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4219 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1397 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4228 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1401 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4237 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1405 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4246 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1409 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4255 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1413 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4264 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1417 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4273 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1421 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4282 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1425 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4291 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1429 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4300 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1433 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4309 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1437 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4318 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1447 "conf_parser.y" /* yacc.c:1646  */
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
#line 4335 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1459 "conf_parser.y" /* yacc.c:1646  */
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
#line 4383 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 257:
#line 1523 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4392 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1529 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4401 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1535 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4410 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1541 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4419 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1547 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4428 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1553 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4437 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1559 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4446 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1565 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4455 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1571 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4464 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1577 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4473 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1583 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4483 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1590 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4492 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1596 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4501 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1602 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4510 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1608 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4522 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1617 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4534 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1626 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4543 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 277:
#line 1633 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4552 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1637 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4561 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1647 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4570 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 281:
#line 1653 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4578 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 285:
#line 1659 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4587 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1663 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4596 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1667 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4605 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 295:
#line 1675 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4611 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 299:
#line 1680 "conf_parser.y" /* yacc.c:1646  */
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
#line 4629 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1693 "conf_parser.y" /* yacc.c:1646  */
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
#line 4649 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1710 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4658 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1716 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4667 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1726 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4676 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1730 "conf_parser.y" /* yacc.c:1646  */
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
#line 4717 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 316:
#line 1779 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4726 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1785 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4735 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1791 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4744 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1797 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4758 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1808 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4767 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 324:
#line 1815 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4776 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1819 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4785 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1823 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4794 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1827 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4803 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1831 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4812 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1835 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4821 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1839 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4830 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1843 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4839 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1847 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4848 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1851 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4857 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1857 "conf_parser.y" /* yacc.c:1646  */
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
#line 4874 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1871 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 4886 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1880 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 4898 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1893 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 4910 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1900 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 4921 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 345:
#line 1911 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1917 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1923 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4948 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 353:
#line 1938 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 4963 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1954 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 4979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1965 "conf_parser.y" /* yacc.c:1646  */
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
#line 4996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 362:
#line 1982 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1988 "conf_parser.y" /* yacc.c:1646  */
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
#line 5027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 2007 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5036 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 368:
#line 2014 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5045 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2018 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5054 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2022 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5063 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2026 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5072 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2030 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5081 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2034 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5090 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2038 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5099 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2042 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5108 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2046 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5117 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2050 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5126 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2060 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5140 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2069 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5155 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 385:
#line 2084 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5164 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2090 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5173 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 390:
#line 2097 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5182 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2101 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5191 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2105 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5200 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2109 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5209 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2113 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5218 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2117 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5227 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2121 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5236 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2125 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5245 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2129 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5254 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2133 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5263 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2143 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5277 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2152 "conf_parser.y" /* yacc.c:1646  */
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
#line 5343 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 419:
#line 2232 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5352 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2238 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5361 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2244 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5370 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2250 "conf_parser.y" /* yacc.c:1646  */
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
#line 5386 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2263 "conf_parser.y" /* yacc.c:1646  */
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
#line 5402 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2276 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5411 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2282 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2288 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5429 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2292 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5438 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2298 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5446 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 432:
#line 2304 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5455 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2308 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5464 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2314 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5478 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2325 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5487 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2331 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5496 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2337 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5505 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2343 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5519 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2358 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5528 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2362 "conf_parser.y" /* yacc.c:1646  */
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
#line 5553 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 446:
#line 2387 "conf_parser.y" /* yacc.c:1646  */
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
#line 5576 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2407 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5585 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2417 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5594 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2421 "conf_parser.y" /* yacc.c:1646  */
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
#line 5620 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 455:
#line 2447 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5629 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2453 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5638 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 462:
#line 2468 "conf_parser.y" /* yacc.c:1646  */
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
#line 5655 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2485 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5664 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2489 "conf_parser.y" /* yacc.c:1646  */
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
#line 5686 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 470:
#line 2511 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5695 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2517 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5704 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 521:
#line 2578 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5712 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 2583 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5720 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 2588 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5728 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 2593 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5737 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 2599 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5745 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2604 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5753 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2609 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5761 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2614 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5769 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2619 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5777 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2624 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5785 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2629 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5793 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2634 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5801 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2639 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5809 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2644 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5817 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2649 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 5825 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2654 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 5833 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2659 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 5841 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2664 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 5849 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2669 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 5858 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2675 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 5866 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2680 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 5874 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2685 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 5882 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2690 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 5890 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2695 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 5898 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2700 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 5906 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2705 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 5914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2710 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 5922 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2713 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 5930 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2718 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 5938 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2721 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 5946 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2726 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 5954 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2731 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 5962 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2736 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 5970 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2741 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 5978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2746 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 5986 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2751 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 5994 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2756 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 6002 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2761 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6010 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2766 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6018 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2771 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6026 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2776 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6034 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2781 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6042 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2786 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6050 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 567:
#line 2792 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BOTS;
}
#line 6058 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2795 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CCONN;
}
#line 6066 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2798 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6074 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2801 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEBUG;
}
#line 6082 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2804 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FULL;
}
#line 6090 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2807 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6098 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2810 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6106 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2813 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6114 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2816 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SKILL;
}
#line 6122 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2819 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NCHANGE;
}
#line 6130 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2822 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REJ;
}
#line 6138 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2825 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_UNAUTH;
}
#line 6146 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2828 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6154 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2831 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_EXTERNAL;
}
#line 6162 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2834 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6170 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2837 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6178 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2840 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6186 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2843 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6194 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2846 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2849 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6210 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2852 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6218 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2855 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6226 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2858 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6234 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2863 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6242 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 594:
#line 2869 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_BOTS;
}
#line 6250 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 595:
#line 2872 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CCONN;
}
#line 6258 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2875 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6266 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2878 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEBUG;
}
#line 6274 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2881 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FULL;
}
#line 6282 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2884 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SKILL;
}
#line 6290 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2887 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6298 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2890 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_NCHANGE;
}
#line 6306 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2893 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REJ;
}
#line 6314 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2896 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_UNAUTH;
}
#line 6322 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2899 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6330 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2902 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_EXTERNAL;
}
#line 6338 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2905 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6346 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2908 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6354 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2911 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6362 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2914 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6370 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2917 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6378 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2920 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6386 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2923 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6394 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2926 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6402 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2929 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6410 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2934 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6418 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2939 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6426 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2944 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6434 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 633:
#line 2969 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6442 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 634:
#line 2974 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6450 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 635:
#line 2979 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6458 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2984 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2989 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6474 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2994 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6482 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2999 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6490 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3004 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6498 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 3009 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6506 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3014 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6514 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3019 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6522 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 657:
#line 3042 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6531 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 658:
#line 3048 "conf_parser.y" /* yacc.c:1646  */
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
#line 6550 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 659:
#line 3064 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6562 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3073 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6571 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3079 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3085 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6589 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3091 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6601 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3100 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6610 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6619 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6623 "conf_parser.c" /* yacc.c:1646  */
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
