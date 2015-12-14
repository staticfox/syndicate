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
    WHOIS_NOTIFY = 482,
    XLINE = 483,
    XLINE_EXEMPT = 484
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
#define WHOIS_NOTIFY 482
#define XLINE 483
#define XLINE_EXEMPT 484

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:355  */

  int number;
  char *string;

#line 694 "conf_parser.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 709 "conf_parser.c" /* yacc.c:358  */

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
#define YYLAST   1260

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  236
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  292
/* YYNRULES -- Number of rules.  */
#define YYNRULES  668
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1309

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   484

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
       2,     2,     2,     2,   234,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   235,   230,
       2,   233,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   232,     2,   231,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   386,   386,   387,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   417,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   428,   428,
     429,   430,   431,   432,   439,   441,   441,   442,   442,   442,
     444,   450,   460,   462,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   483,   523,   581,   610,   618,   632,   660,
     675,   690,   700,   714,   723,   751,   779,   804,   826,   848,
     858,   860,   860,   861,   862,   863,   864,   866,   875,   884,
     898,   897,   915,   915,   916,   916,   916,   918,   924,   935,
     934,   953,   953,   954,   954,   954,   954,   954,   956,   962,
     968,   974,   996,   997,   997,   999,   999,  1000,  1002,  1009,
    1009,  1022,  1023,  1025,  1025,  1026,  1026,  1028,  1036,  1039,
    1045,  1044,  1050,  1050,  1051,  1055,  1059,  1063,  1067,  1071,
    1075,  1079,  1090,  1089,  1146,  1146,  1147,  1148,  1149,  1150,
    1151,  1152,  1153,  1154,  1155,  1156,  1157,  1159,  1165,  1171,
    1177,  1183,  1194,  1200,  1211,  1218,  1217,  1223,  1223,  1224,
    1228,  1232,  1236,  1240,  1244,  1248,  1252,  1256,  1260,  1264,
    1268,  1272,  1276,  1280,  1284,  1288,  1292,  1296,  1300,  1304,
    1308,  1312,  1316,  1323,  1322,  1328,  1328,  1329,  1333,  1337,
    1341,  1345,  1349,  1353,  1357,  1361,  1365,  1369,  1373,  1377,
    1381,  1385,  1389,  1393,  1397,  1401,  1405,  1409,  1413,  1417,
    1421,  1425,  1429,  1433,  1437,  1441,  1452,  1451,  1508,  1508,
    1509,  1510,  1511,  1512,  1513,  1514,  1515,  1516,  1517,  1518,
    1519,  1520,  1521,  1521,  1522,  1523,  1524,  1525,  1527,  1533,
    1539,  1545,  1551,  1557,  1563,  1569,  1575,  1581,  1587,  1594,
    1600,  1606,  1612,  1621,  1631,  1630,  1636,  1636,  1637,  1641,
    1652,  1651,  1658,  1657,  1662,  1662,  1663,  1667,  1671,  1677,
    1677,  1678,  1678,  1678,  1678,  1678,  1680,  1680,  1682,  1682,
    1684,  1697,  1714,  1720,  1731,  1730,  1772,  1772,  1773,  1774,
    1775,  1776,  1777,  1778,  1779,  1780,  1781,  1783,  1789,  1795,
    1801,  1813,  1812,  1818,  1818,  1819,  1823,  1827,  1831,  1835,
    1839,  1843,  1847,  1851,  1855,  1861,  1875,  1884,  1898,  1897,
    1912,  1912,  1913,  1913,  1913,  1913,  1915,  1921,  1927,  1937,
    1939,  1939,  1940,  1940,  1942,  1959,  1958,  1983,  1983,  1984,
    1984,  1984,  1984,  1986,  1992,  2012,  2011,  2017,  2017,  2018,
    2022,  2026,  2030,  2034,  2038,  2042,  2046,  2050,  2054,  2065,
    2064,  2085,  2085,  2086,  2086,  2086,  2088,  2095,  2094,  2100,
    2100,  2101,  2105,  2109,  2113,  2117,  2121,  2125,  2129,  2133,
    2137,  2148,  2147,  2219,  2219,  2220,  2221,  2222,  2223,  2224,
    2225,  2226,  2227,  2228,  2229,  2230,  2231,  2232,  2233,  2234,
    2236,  2242,  2248,  2254,  2267,  2280,  2286,  2292,  2296,  2303,
    2302,  2307,  2307,  2308,  2312,  2318,  2329,  2335,  2341,  2347,
    2363,  2362,  2388,  2388,  2389,  2389,  2389,  2391,  2411,  2422,
    2421,  2448,  2448,  2449,  2449,  2449,  2451,  2457,  2467,  2469,
    2469,  2470,  2470,  2472,  2490,  2489,  2512,  2512,  2513,  2513,
    2513,  2515,  2521,  2531,  2533,  2533,  2534,  2535,  2536,  2537,
    2538,  2539,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2547,
    2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,
    2558,  2559,  2560,  2561,  2562,  2563,  2564,  2565,  2566,  2567,
    2568,  2569,  2570,  2571,  2572,  2573,  2574,  2575,  2576,  2577,
    2578,  2579,  2582,  2587,  2592,  2597,  2603,  2608,  2613,  2618,
    2623,  2628,  2633,  2638,  2643,  2648,  2653,  2658,  2663,  2668,
    2673,  2679,  2684,  2689,  2694,  2699,  2704,  2709,  2714,  2717,
    2722,  2725,  2730,  2735,  2740,  2745,  2750,  2755,  2760,  2765,
    2770,  2775,  2780,  2785,  2791,  2790,  2795,  2795,  2796,  2799,
    2802,  2805,  2808,  2811,  2814,  2817,  2820,  2823,  2826,  2829,
    2832,  2835,  2838,  2841,  2844,  2847,  2850,  2853,  2856,  2859,
    2862,  2865,  2871,  2870,  2875,  2875,  2876,  2879,  2882,  2885,
    2888,  2891,  2894,  2897,  2900,  2903,  2906,  2909,  2912,  2915,
    2918,  2921,  2924,  2927,  2930,  2933,  2936,  2939,  2944,  2949,
    2954,  2963,  2965,  2965,  2966,  2967,  2968,  2969,  2970,  2971,
    2972,  2973,  2974,  2975,  2976,  2977,  2979,  2984,  2989,  2994,
    2999,  3004,  3009,  3014,  3019,  3024,  3029,  3038,  3040,  3040,
    3041,  3042,  3043,  3044,  3045,  3046,  3047,  3048,  3049,  3050,
    3052,  3058,  3074,  3083,  3089,  3095,  3101,  3110,  3116
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
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
      59,   125,   123,    61,    44,    58
};
# endif

#define YYPACT_NINF -853

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-853)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -853,   641,  -853,  -196,  -221,  -216,  -853,  -853,  -853,  -211,
    -853,  -205,  -853,  -853,  -853,  -200,  -853,  -853,  -853,  -195,
    -169,  -853,  -168,  -853,  -158,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,   303,   705,  -153,  -145,  -108,   153,   -92,   383,   -76,
     -60,   -49,    35,   -48,   -41,   -36,   660,   546,   -26,    37,
     -21,   100,   -19,   -71,   -13,    39,    50,    11,  -853,  -853,
    -853,  -853,  -853,    61,    65,    79,    90,    94,   105,   108,
     118,   128,   139,   140,   254,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,   426,   552,    13,
    -853,   144,     6,  -853,  -853,    97,  -853,   146,   149,   152,
     154,   155,   158,   162,   163,   166,   167,   168,   169,   172,
     177,   178,   180,   182,   183,   187,   189,   190,   192,   193,
     195,   196,  -853,  -853,   199,   200,   212,   213,   214,   216,
     217,   220,   221,   224,   225,   226,   228,   229,   231,   232,
     233,   242,    19,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,   356,
      12,   287,    26,   247,   251,    74,  -853,  -853,  -853,   159,
     281,    40,  -853,   253,   255,   257,   259,   260,   263,   267,
     272,   280,    14,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,    32,   285,   286,   288,   289,   290,   291,
     292,   312,   315,   317,   318,   321,   323,   325,   326,   327,
     328,    17,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
     125,    43,   329,    38,  -853,  -853,  -853,    98,    29,  -853,
     330,    93,  -853,  -853,   115,  -853,   129,   175,   211,    77,
    -853,   201,   240,   148,   268,   240,   240,   278,   240,   240,
     363,   379,   334,  -853,   335,   336,   337,   339,  -853,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   358,   359,
     360,   368,   181,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,   338,   373,   377,   378,   381,   382,   385,  -853,   386,
     387,   389,   390,   391,   393,   394,   147,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,   395,   399,    21,  -853,  -853,  -853,   467,
     403,  -853,  -853,   404,   406,    23,  -853,  -853,  -853,   432,
     240,   536,   240,   240,   437,   539,   444,   551,   555,   560,
     459,   461,   463,   240,   568,   569,   571,   576,   240,   577,
     580,   581,   582,   480,   478,   482,   485,   240,   240,   489,
     505,   506,  -166,  -129,   507,   509,   510,   512,   618,   240,
     516,   240,   240,   517,   499,  -853,   502,   500,   501,  -853,
     503,   508,   511,   514,   515,   238,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,   518,   520,    95,  -853,
    -853,  -853,   513,   522,   523,  -853,   524,  -853,    30,  -853,
    -853,  -853,  -853,  -853,   613,   616,   519,  -853,   528,   526,
     527,    18,  -853,  -853,  -853,   531,   529,   530,  -853,   535,
     540,   543,   544,  -853,   545,   549,   143,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,   542,   556,
     557,   558,    64,  -853,  -853,  -853,  -853,   534,   574,   240,
     620,   583,   628,   587,   588,   594,   562,  -853,  -853,   680,
     688,   601,   694,   709,   710,   697,   700,   701,   702,   704,
     706,   711,   712,   718,   722,   725,   619,  -853,   621,   625,
    -853,    58,  -853,  -853,  -853,  -853,   643,   622,  -853,   627,
     631,   632,   635,   637,   642,    22,  -853,  -853,  -853,  -853,
    -853,   742,   636,  -853,   644,   649,  -853,   653,    80,  -853,
    -853,  -853,  -853,   646,   647,   659,  -853,   661,   301,   664,
     666,   673,   674,   676,   677,   681,   682,   686,   689,  -853,
    -853,   810,   813,   240,   690,   814,   816,   818,   240,   819,
     820,   240,   807,   822,   823,   240,   824,   824,   703,  -853,
    -853,   812,  -125,   815,   724,   825,   826,   707,   827,   828,
     833,   829,   831,   832,   834,   727,  -853,   836,   839,   733,
    -853,   734,  -853,   840,   843,   736,  -853,   738,   740,   741,
     743,   744,   745,   746,   747,   748,   749,   750,   751,   752,
     753,   754,   755,   756,   757,   758,   759,   760,   761,   762,
     763,   764,   717,   633,   765,   766,   767,   768,   769,   770,
     771,   772,   773,   774,   775,   776,   777,   778,   779,   780,
     781,   782,   783,   784,  -853,  -853,   847,   731,   785,   850,
     907,   894,   895,   897,   790,  -853,   899,   900,   793,  -853,
    -853,   902,   903,   794,   918,   798,  -853,   799,   800,  -853,
    -853,   909,   910,   803,  -853,  -853,   912,   830,   802,   914,
     915,   916,   835,   806,   920,   921,   817,  -853,  -853,   922,
     923,   926,   821,  -853,   837,   838,   841,   842,   844,   845,
     846,   848,   849,  -853,   851,   852,   853,   854,   855,   856,
     857,   858,   859,   860,   861,   862,   863,   864,   865,   866,
     867,  -853,  -853,   927,   868,   869,  -853,   870,  -853,   185,
    -853,   928,   930,   931,   932,   872,  -853,   873,  -853,  -853,
     933,   871,   934,   875,  -853,  -853,  -853,  -853,  -853,   240,
     240,   240,   240,   240,   240,   240,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,   876,   877,
     878,   -34,   879,   880,   881,   882,   883,   884,   885,   886,
     887,   888,   889,    59,   890,   891,  -853,   892,   893,   896,
     898,   901,   904,   905,    -4,   906,   908,   911,   913,   917,
     919,   924,  -853,   925,   929,  -853,  -853,   935,   936,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,   -73,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,   -29,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,   937,   938,   564,   939,   940,
     941,   942,   943,  -853,   944,   945,  -853,   946,   947,   -44,
     737,   948,  -853,  -853,  -853,  -853,   949,   950,  -853,   951,
     953,   447,   954,   955,   956,   957,   675,   958,   959,  -853,
     960,   961,   962,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
     963,   732,  -853,  -853,   964,   965,   966,  -853,    89,  -853,
    -853,  -853,  -853,   967,   970,   971,   972,  -853,  -853,   973,
     739,   974,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,   -12,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,   824,   824,
     824,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,    44,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,   717,  -853,
     633,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,    76,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,   109,  -853,   952,
     918,   975,  -853,  -853,  -853,  -853,  -853,  -853,   805,  -853,
     976,   977,  -853,  -853,   978,  -853,  -853,  -853,   979,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,   119,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,   124,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
     126,  -853,  -853,  1002,   -98,   982,   980,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,   132,  -853,  -853,  -853,   -34,  -853,  -853,
    -853,  -853,    -4,  -853,  -853,  -853,   564,  -853,   -44,  -853,
    -853,  -853,   997,   968,   999,  1000,  1001,  -853,   447,  -853,
     675,  -853,   732,   986,   987,   988,   436,  -853,  -853,   739,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,   137,  -853,  -853,  -853,   436,  -853
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
      95,    94,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   623,   634,   625,   626,   627,
     628,   629,   630,   631,   624,   632,   633,     0,     0,     0,
     462,     0,     0,   460,   461,     0,   521,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   592,   564,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   475,   476,   477,   519,   520,   514,   515,
     516,   517,   513,   487,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   488,   489,   518,   493,   494,   495,   496,
     492,   491,   497,   504,   505,   498,   499,   500,   490,   502,
     511,   512,   509,   510,   503,   501,   507,   508,   506,     0,
       0,     0,     0,     0,     0,     0,    46,    47,    48,     0,
       0,     0,   659,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   649,   650,   651,   652,   653,   654,   655,
     657,   656,   658,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    69,    66,    64,    70,    71,    65,    55,
      68,    58,    59,    60,    56,    67,    61,    62,    63,    57,
       0,     0,     0,     0,   124,   125,   126,     0,     0,   353,
       0,     0,   351,   352,     0,    96,     0,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   622,     0,     0,     0,     0,   274,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,   240,   243,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   241,   242,   244,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,   429,     0,
       0,     0,     0,     0,     0,     0,     0,   404,   405,   406,
     407,   408,   409,   410,   412,   411,   414,   418,   415,   416,
     417,   413,   455,     0,     0,     0,   452,   453,   454,     0,
       0,   459,   470,     0,     0,     0,   467,   468,   469,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   474,     0,     0,     0,   321,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   310,
     315,   311,   312,   313,   314,   446,     0,     0,     0,   443,
     444,   445,     0,     0,     0,   282,     0,   292,     0,   290,
     291,   293,   294,    49,     0,     0,     0,    45,     0,     0,
       0,     0,   103,   104,   105,     0,     0,     0,   203,     0,
       0,     0,     0,   175,     0,     0,     0,   155,   156,   157,
     158,   159,   162,   163,   164,   161,   160,   165,     0,     0,
       0,     0,     0,   341,   342,   343,   344,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   648,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    53,     0,     0,
     387,     0,   382,   383,   384,   127,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,   112,   113,   115,   114,
     116,     0,     0,   350,     0,     0,   365,     0,     0,   358,
     359,   360,   361,     0,     0,     0,    90,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   621,
     257,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   238,
     419,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   403,     0,     0,     0,
     451,     0,   458,     0,     0,     0,   466,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   473,   316,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,     0,     0,     0,   442,
     295,     0,     0,     0,     0,     0,   289,     0,     0,    44,
     106,     0,     0,     0,   102,   166,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   154,   345,     0,
       0,     0,     0,   340,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   647,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,   385,     0,     0,     0,   381,     0,   122,     0,
     117,     0,     0,     0,     0,     0,   111,     0,   349,   362,
       0,     0,     0,     0,   357,    99,    98,    97,   645,    28,
      28,    28,    28,    28,    28,    28,    30,    29,   646,   636,
     637,   638,   639,   640,   641,   642,   644,   643,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,   237,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   402,     0,     0,   450,   463,     0,     0,   465,
     534,   538,   522,   523,   553,   525,   620,   561,   526,   527,
     558,   533,   532,   541,   531,   528,   529,   537,   536,   535,
     559,   524,   618,   619,   557,   602,   596,   612,   597,   598,
     599,   607,   615,   600,   609,   613,   603,   614,   616,   604,
     608,   601,   611,   606,   605,   610,   617,     0,   595,   573,
     574,   575,   568,   586,   569,   570,   571,   581,   589,   572,
     583,   587,   577,   588,   590,   578,   582,   576,   585,   580,
     579,   584,   591,     0,   567,   554,   552,   555,   560,   556,
     543,   550,   551,   548,   549,   544,   545,   546,   547,   562,
     563,   530,   540,   539,   542,     0,     0,     0,     0,     0,
       0,     0,     0,   305,     0,     0,   441,     0,     0,     0,
     300,   296,   299,   281,    50,    51,     0,     0,   101,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     0,   339,   663,   660,   661,   662,   667,   666,
     668,   664,   665,    86,    81,    89,    80,    87,    88,    79,
      83,    82,    74,    73,    78,    75,    77,    76,    84,    85,
       0,     0,   380,   128,     0,     0,     0,   140,     0,   132,
     133,   135,   134,     0,     0,     0,     0,   110,   354,     0,
       0,     0,   356,    31,    32,    33,    34,    35,    36,    37,
     269,   270,   261,   279,   278,     0,   277,   262,   264,   266,
     273,   265,   263,   272,   258,   271,   260,   259,    38,    38,
      38,    40,    39,   267,   268,   424,   427,   428,   438,   435,
     421,   436,   433,   434,     0,   432,   437,   420,   426,   423,
     425,   439,   422,   456,   457,   471,   472,   593,     0,   565,
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
      43,   430,     0,   594,   566,   322,     0,   283,     0,   301,
     298,   297,     0,     0,     0,     0,     0,   204,     0,   176,
       0,   388,     0,     0,     0,     0,     0,   130,   366,     0,
     276,   431,   323,   284,   209,   231,   207,   230,   211,   205,
     177,   389,   137,   139,   138,   150,   149,   145,   147,   151,
     148,   144,   146,     0,   143,   367,   141,     0,   142
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -853,  -853,  -853,  -281,  -300,  -852,  -626,  -853,  -853,   981,
    -853,  -853,  -853,  -853,   796,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,   984,  -853,  -853,  -853,  -853,  -853,
    -853,   567,  -853,  -853,  -853,  -853,  -853,   484,  -853,  -853,
    -853,  -853,  -853,  -853,   786,  -853,  -853,  -853,  -853,    24,
    -853,  -853,  -853,  -853,  -853,  -244,  -853,  -853,  -853,   559,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -206,  -853,  -853,  -853,  -202,  -853,  -853,  -853,   801,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -177,
    -853,  -853,  -853,  -853,  -853,  -185,  -853,   599,  -853,  -853,
    -853,    -8,  -853,  -853,  -853,  -853,  -853,   684,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -176,  -853,  -853,  -853,  -853,
    -853,  -853,   615,  -853,  -853,  -853,  -853,  -853,   969,  -853,
    -853,  -853,  -853,   554,  -853,  -853,  -853,  -853,  -853,  -139,
    -853,  -853,  -853,   584,  -853,  -853,  -853,  -853,  -128,  -853,
    -853,  -853,   787,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -106,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,   683,  -853,  -853,  -853,  -853,  -853,   874,
    -853,  -853,  -853,  -853,  1036,  -853,  -853,  -853,  -853,   811,
    -853,  -853,  -853,  -853,   990,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,    46,  -853,
    -853,  -853,    42,  -853,  -853,  -853,  -853,  -853,  1063,  -853,
    -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853,   989,  -853,  -853,  -853,  -853,  -853,  -853,  -853,
    -853,  -853
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    26,   816,   817,  1081,  1082,    27,   215,   216,
     217,   218,    28,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,   277,
     278,   279,    29,    77,    78,    79,    80,    81,    30,    63,
     491,   492,   493,   494,    31,    70,   575,   576,   577,   578,
     579,   580,    32,   283,   284,   285,   286,   287,  1038,  1039,
    1040,  1041,  1042,  1225,  1303,  1304,    33,    64,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   743,
    1202,  1203,   517,   738,  1172,  1173,    34,    53,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   614,  1065,  1066,
      35,    61,   477,   723,  1137,  1138,   478,   479,   480,  1141,
     981,   982,   481,   482,    36,    59,   455,   456,   457,   458,
     459,   460,   461,   708,  1123,  1124,   462,   463,   464,    37,
      65,   522,   523,   524,   525,   526,    38,   291,   292,   293,
      39,    72,   588,   589,   590,   591,   592,   801,  1243,  1244,
      40,    68,   561,   562,   563,   564,   784,  1220,  1221,    41,
      54,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   637,  1094,  1095,   377,   378,   379,   380,   381,
      42,    60,   468,   469,   470,   471,    43,    55,   385,   386,
     387,   388,    44,   112,   113,   114,    45,    57,   395,   396,
     397,   398,    46,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   425,   943,   944,   205,
     424,   917,   918,   206,   207,   208,    47,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      48,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     844,   845,   599,  1134,  1092,   602,   603,   110,   605,   606,
     843,    51,    73,   465,   382,   222,    52,  1063,   243,   488,
     116,    56,   382,   570,   392,   117,   118,    58,   119,   120,
     570,   472,    62,   121,    49,    50,   212,    66,   281,   281,
      74,   518,   122,   123,   244,   690,   245,   223,    75,   691,
     124,   848,   849,   125,   126,   127,   224,   225,   226,   558,
     128,   227,   228,    67,    69,   518,   229,   230,   231,   111,
    1078,  1079,  1080,   246,    71,   212,   383,   129,   130,   107,
     519,   584,   692,   247,   383,   473,   693,   108,   131,  1064,
    1034,   132,   133,   474,   289,   475,   465,   489,   392,   134,
     658,   289,   660,   661,   519,   248,   135,  1274,   136,   249,
     137,    76,   138,   671,   139,   140,   584,   250,   676,   520,
     251,   252,   571,   393,   109,   141,   558,   685,   686,   571,
     142,   143,   213,   144,   145,   146,   466,   384,   147,   699,
     115,   701,   702,   520,   495,   384,  1135,   394,   351,   253,
     352,   476,   353,   214,   110,  1136,   209,  1107,   559,   295,
     488,  1108,   496,   148,   521,   254,   354,   843,   255,   256,
     257,   213,   210,   149,   150,   151,   152,   153,   154,   155,
     585,   497,   314,   211,   219,   355,  1034,   572,   521,  1035,
     490,   220,   214,   290,   572,  1093,   221,   393,   315,   316,
     290,  1109,   356,   317,   357,  1110,   280,   573,   498,  -129,
    -129,   288,   358,   294,   573,   585,   111,   258,  1246,   466,
     296,   394,  1247,   574,   359,   559,  1248,  1249,  1250,   756,
     574,   156,   157,   158,   467,   159,   160,   390,   489,   446,
     259,   260,   299,   499,   161,   536,   318,   360,   556,   733,
     444,   593,   649,   795,   655,    82,   483,   447,   282,   282,
     500,   725,   538,   319,   320,   321,   322,   323,   361,   567,
     569,   324,   297,   565,  1251,   325,   448,   560,  1252,    83,
      84,   326,   495,   298,  1036,  1035,    85,   362,   472,   785,
     327,   328,   501,   502,   301,   752,   363,   594,   302,   586,
     496,   329,   587,   449,    73,   486,  1255,   596,  1037,   597,
    1256,   803,   303,   830,    86,    87,    88,   467,   835,   497,
    1226,   838,   330,   304,   582,   842,   718,   305,    89,    90,
      91,   490,    74,   595,   586,    92,    93,   587,   306,  1257,
      75,   307,   473,  1258,   560,   503,   498,   364,   598,  1267,
     474,   308,   475,  1268,  1269,   450,  1271,   446,  1270,   600,
    1272,   309,  1278,   451,   452,   504,  1279,  1306,   331,   505,
     365,  1307,   310,   311,   746,   447,   601,   389,   645,   399,
    1036,   499,   400,   453,   116,   401,   604,   402,   403,   117,
     118,   404,   119,   120,   448,   405,   406,   121,   500,   407,
     408,   409,   410,    76,  1037,   411,   122,   123,   476,   598,
     412,   413,   628,   414,   124,   415,   416,   125,   126,   127,
     417,   449,   418,   419,   128,   420,   421,   314,   422,   423,
     501,   502,   426,   427,   809,   810,   811,   812,   813,   814,
     815,   129,   130,   315,   316,   428,   429,   430,   317,   431,
     432,  1146,   131,   433,   434,   132,   133,   435,   436,   437,
     454,   438,   439,   134,   440,   441,   442,  1147,  1148,   714,
     135,   607,   136,   450,   137,   443,   138,  1149,   139,   140,
     484,   451,   452,   503,   485,   312,   527,   608,   528,   141,
     529,   318,   530,   531,   142,   143,   532,   144,   145,   146,
     533,   453,   147,   504,  1295,   534,  1296,   505,   319,   320,
     321,   322,   323,   535,  1150,  1151,   324,  1152,   539,   540,
     325,   541,   542,   543,   544,   545,   326,   148,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,   327,   328,   149,   150,   151,
     152,   153,   154,   155,  1153,   546,   329,   243,   547,  1297,
     548,   549,  1154,   351,   550,   352,   551,   353,   552,   553,
     554,   555,   566,   581,   609,   610,  1298,   330,   630,   611,
     612,   354,   613,   244,  1155,   245,  1156,  1157,   454,  1113,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   651,
     355,   624,   625,   626,  1158,   156,   157,   158,  1275,   159,
     160,   627,   246,  1114,  1299,  1300,   631,   356,   161,   357,
     632,   633,   247,   331,   634,   635,  1159,   358,   636,   638,
     639,  1160,   640,   641,   642,  1161,   643,   644,   647,   359,
    1162,  1163,   648,   652,   248,  1115,  1164,   653,   249,   654,
    1165,     2,     3,   657,   659,     4,   250,   663,   662,   251,
     252,  1166,   360,  1167,  1168,   664,  1169,     5,  1301,   665,
       6,   222,     7,   666,  1302,  1116,  1117,  1170,   667,     8,
     668,  1118,   669,   361,   670,  1171,   672,   673,   253,   674,
     919,     9,   920,   921,   675,   677,    10,    11,   678,   679,
     680,   681,   362,   223,   254,  1119,   684,   255,   256,   257,
     687,   363,   224,   225,   226,    12,    82,   227,   228,    13,
    1120,   682,   229,   230,   231,   683,   688,   689,   694,    14,
     695,   696,  1178,   697,  1179,  1180,   698,   700,   703,   704,
      83,    84,   705,   706,   707,   727,   709,    85,   728,    15,
      16,   710,   757,   720,   711,   754,   258,   712,   713,   729,
     759,   716,   364,   717,    17,   721,   722,   724,   730,   731,
     732,   735,   736,   737,   895,    86,    87,    88,   739,   259,
     260,    18,   748,   740,  1121,   365,   741,   742,   744,    89,
      90,    91,   745,    19,    20,   755,    92,    93,   764,   749,
     750,   751,   763,  1122,   758,   922,   923,   924,   760,   761,
     925,   926,  1210,   927,   928,   762,   929,    21,   930,  1233,
     765,   931,   766,   932,   933,   934,   767,   768,   769,   770,
      22,   935,   771,   772,   773,   936,   774,    23,   775,   937,
     938,   939,    24,   776,   777,    25,   940,  1181,  1182,  1183,
     778,   941,  1184,  1185,   779,  1186,  1187,   780,  1188,   781,
    1189,   782,   788,  1190,   787,  1191,  1192,  1193,   783,   789,
     942,   790,  1211,  1194,   797,   791,   798,  1195,   792,  1234,
     793,  1196,  1197,  1198,   799,   794,   805,   806,  1199,   896,
     897,   898,   800,  1200,   899,   900,   802,   901,   902,   807,
     903,   808,   904,  1212,   818,   905,   819,   906,   907,   908,
    1235,  1213,  1201,   820,   821,   909,   822,   823,  1236,   910,
    1214,   824,   825,   911,   912,   913,   826,  1237,   828,   827,
     914,   829,   832,   831,   833,   915,   834,   836,   837,   839,
     840,   841,   843,   846,   847,   851,  1215,   850,  1216,  1217,
     854,   857,   966,  1238,   916,  1239,  1240,   852,   853,   855,
     856,   858,  1218,   859,   860,  1139,   861,   862,   863,  1241,
    1219,   864,   867,   865,   866,   868,   869,  1242,   870,   965,
     871,   872,   968,   873,   874,   875,   876,   877,   878,   879,
     880,   881,   882,   883,   884,   885,   886,   887,   888,   889,
     890,   891,   892,   893,   894,   945,   946,   947,   948,   949,
     950,   951,   952,   953,   954,   955,   956,   957,   958,   959,
     960,   961,   962,   963,   964,   969,   970,   971,   967,   972,
     973,   974,   975,   976,   977,   978,   980,   979,   983,   984,
     985,   986,   987,   988,   989,   991,   992,   993,   994,   996,
    1262,   990,   997,   998,  1000,  1001,   995,   999,  1002,  1030,
    1043,  1003,  1044,  1045,  1046,  1049,  1051,   557,   734,   796,
    1259,   300,  1227,  1308,  1290,   747,  1289,  1004,  1005,   568,
    1280,  1006,  1007,  1283,  1008,  1009,  1010,   726,  1011,  1012,
    1282,  1013,  1014,  1015,  1016,  1017,  1018,  1019,  1020,  1021,
    1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1285,  1032,
    1033,  1031,  1047,  1048,  1050,  1052,  1060,  1061,  1062,  1067,
    1068,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,  1077,
    1083,  1084,  1085,  1086,  1273,  1284,  1087,  1286,  1088,  1288,
    1287,  1089,  1260,   629,  1090,  1091,  1096,   753,  1097,   715,
    1305,  1098,   804,  1099,  1291,   786,  1281,  1100,   391,  1101,
    1253,   719,   445,   646,  1102,  1103,  1254,   313,     0,  1104,
       0,     0,     0,     0,     0,  1105,  1106,  1111,  1112,  1125,
    1126,  1127,  1128,  1129,  1130,  1131,  1132,  1133,     0,  1142,
    1143,  1144,  1140,  1145,  1174,  1175,  1176,  1177,  1204,  1205,
    1206,  1207,  1208,  1209,  1222,     0,   487,  1228,  1223,  1224,
    1229,  1230,  1231,  1232,  1245,  1261,   656,     0,     0,     0,
    1277,  1263,  1264,  1265,  1266,  1276,  1292,  1293,  1294,     0,
       0,   537,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   650,
     583
};

static const yytype_int16 yycheck[] =
{
     626,   627,   302,    47,     8,   305,   306,     1,   308,   309,
     108,   232,     1,     1,     1,     1,   232,    51,     1,     1,
       1,   232,     1,     1,     1,     6,     7,   232,     9,    10,
       1,     1,   232,    14,   230,   231,     1,   232,     1,     1,
      29,     1,    23,    24,    27,   211,    29,    33,    37,   215,
      31,   176,   177,    34,    35,    36,    42,    43,    44,     1,
      41,    47,    48,   232,   232,     1,    52,    53,    54,    63,
      11,    12,    13,    56,   232,     1,    63,    58,    59,   232,
      40,     1,   211,    66,    63,    55,   215,   232,    69,   123,
       1,    72,    73,    63,     1,    65,     1,    79,     1,    80,
     400,     1,   402,   403,    40,    88,    87,   205,    89,    92,
      91,   100,    93,   413,    95,    96,     1,   100,   418,    79,
     103,   104,   100,   100,   232,   106,     1,   427,   428,   100,
     111,   112,    97,   114,   115,   116,   124,   124,   119,   439,
     232,   441,   442,    79,     1,   124,   190,   124,     1,   132,
       3,   121,     5,   118,     1,   199,   232,   230,   100,   230,
       1,   234,    19,   144,   124,   148,    19,   108,   151,   152,
     153,    97,   232,   154,   155,   156,   157,   158,   159,   160,
     100,    38,     1,   232,   232,    38,     1,   165,   124,   100,
     172,   232,   118,   100,   165,   199,   232,   100,    17,    18,
     100,   230,    55,    22,    57,   234,   232,   185,    65,   172,
     172,   232,    65,   232,   185,   100,    63,   200,   230,   124,
     233,   124,   234,   201,    77,   100,  1078,  1079,  1080,   529,
     201,   212,   213,   214,   222,   216,   217,   231,    79,     1,
     223,   224,   231,   100,   225,   231,    65,   100,   231,   231,
     231,   122,   231,   231,   231,     1,   230,    19,   221,   221,
     117,   231,   230,    82,    83,    84,    85,    86,   121,   231,
     172,    90,   233,   230,   230,    94,    38,   219,   234,    25,
      26,   100,     1,   233,   195,   100,    32,   140,     1,   231,
     109,   110,   149,   150,   233,   231,   149,   122,   233,   219,
      19,   120,   222,    65,     1,   231,   230,   230,   219,   108,
     234,   231,   233,   613,    60,    61,    62,   222,   618,    38,
     231,   621,   141,   233,   231,   625,   231,   233,    74,    75,
      76,   172,    29,   122,   219,    81,    82,   222,   233,   230,
      37,   233,    55,   234,   219,   202,    65,   200,   108,   230,
      63,   233,    65,   234,   230,   117,   230,     1,   234,   211,
     234,   233,   230,   125,   126,   222,   234,   230,   187,   226,
     223,   234,   233,   233,   231,    19,   108,   233,   231,   233,
     195,   100,   233,   145,     1,   233,   108,   233,   233,     6,
       7,   233,     9,    10,    38,   233,   233,    14,   117,   233,
     233,   233,   233,   100,   219,   233,    23,    24,   121,   108,
     233,   233,   231,   233,    31,   233,   233,    34,    35,    36,
     233,    65,   233,   233,    41,   233,   233,     1,   233,   233,
     149,   150,   233,   233,   133,   134,   135,   136,   137,   138,
     139,    58,    59,    17,    18,   233,   233,   233,    22,   233,
     233,     4,    69,   233,   233,    72,    73,   233,   233,   233,
     222,   233,   233,    80,   233,   233,   233,    20,    21,   231,
      87,   108,    89,   117,    91,   233,    93,    30,    95,    96,
     233,   125,   126,   202,   233,   231,   233,   108,   233,   106,
     233,    65,   233,   233,   111,   112,   233,   114,   115,   116,
     233,   145,   119,   222,    68,   233,    70,   226,    82,    83,
      84,    85,    86,   233,    67,    68,    90,    70,   233,   233,
      94,   233,   233,   233,   233,   233,   100,   144,   809,   810,
     811,   812,   813,   814,   815,   109,   110,   154,   155,   156,
     157,   158,   159,   160,    97,   233,   120,     1,   233,   113,
     233,   233,   105,     1,   233,     3,   233,     5,   233,   233,
     233,   233,   233,   233,   230,   230,   130,   141,   230,   233,
     233,    19,   233,    27,   127,    29,   129,   130,   222,    15,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   122,
      38,   233,   233,   233,   147,   212,   213,   214,  1224,   216,
     217,   233,    56,    39,   168,   169,   233,    55,   225,    57,
     233,   233,    66,   187,   233,   233,   169,    65,   233,   233,
     233,   174,   233,   233,   233,   178,   233,   233,   233,    77,
     183,   184,   233,   230,    88,    71,   189,   233,    92,   233,
     193,     0,     1,   211,   108,     4,   100,   108,   211,   103,
     104,   204,   100,   206,   207,   211,   209,    16,   222,   108,
      19,     1,    21,   108,   228,   101,   102,   220,   108,    28,
     211,   107,   211,   121,   211,   228,   108,   108,   132,   108,
      47,    40,    49,    50,   108,   108,    45,    46,   108,   108,
     108,   211,   140,    33,   148,   131,   211,   151,   152,   153,
     211,   149,    42,    43,    44,    64,     1,    47,    48,    68,
     146,   233,    52,    53,    54,   233,   211,   211,   211,    78,
     211,   211,    47,   211,    49,    50,   108,   211,   211,   230,
      25,    26,   230,   233,   233,   122,   233,    32,   122,    98,
      99,   233,   122,   230,   233,   211,   200,   233,   233,   230,
     122,   233,   200,   233,   113,   233,   233,   233,   230,   233,
     233,   230,   233,   233,    47,    60,    61,    62,   233,   223,
     224,   130,   230,   233,   210,   223,   233,   233,   233,    74,
      75,    76,   233,   142,   143,   211,    81,    82,   108,   233,
     233,   233,   230,   229,   211,   162,   163,   164,   211,   211,
     167,   168,    70,   170,   171,   211,   173,   166,   175,    70,
     122,   178,   211,   180,   181,   182,   122,   108,   108,   122,
     179,   188,   122,   122,   122,   192,   122,   186,   122,   196,
     197,   198,   191,   122,   122,   194,   203,   162,   163,   164,
     122,   208,   167,   168,   122,   170,   171,   122,   173,   230,
     175,   230,   230,   178,   211,   180,   181,   182,   233,   232,
     227,   230,   130,   188,   122,   233,   230,   192,   233,   130,
     233,   196,   197,   198,   230,   233,   230,   230,   203,   162,
     163,   164,   233,   208,   167,   168,   233,   170,   171,   230,
     173,   230,   175,   161,   230,   178,   230,   180,   181,   182,
     161,   169,   227,   230,   230,   188,   230,   230,   169,   192,
     178,   230,   230,   196,   197,   198,   230,   178,   108,   230,
     203,   108,   108,   233,   108,   208,   108,   108,   108,   122,
     108,   108,   108,   230,   122,   211,   204,   122,   206,   207,
     233,   108,   211,   204,   227,   206,   207,   122,   122,   122,
     122,   122,   220,   122,   122,   218,   122,   230,   122,   220,
     228,   122,   122,   230,   230,   122,   230,   228,   230,   122,
     230,   230,   122,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   108,   122,   122,   233,   122,
     230,   122,   122,   230,   122,   122,   108,   233,   230,   230,
     230,   122,   122,   230,   122,   233,   122,   122,   122,   233,
     235,   211,   122,   122,   122,   122,   211,   230,   122,   122,
     122,   230,   122,   122,   122,   122,   122,   261,   491,   575,
     108,    77,  1038,  1307,  1270,   506,  1268,   230,   230,   283,
    1247,   230,   230,  1258,   230,   230,   230,   478,   230,   230,
    1256,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   130,   230,
     230,   233,   230,   230,   233,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   122,   128,   230,   128,   230,   128,
     130,   230,  1140,   332,   230,   230,   230,   522,   230,   455,
    1279,   230,   588,   230,  1272,   561,  1252,   230,   112,   230,
    1108,   468,   162,   366,   230,   230,  1110,    94,    -1,   230,
      -1,    -1,    -1,    -1,    -1,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,    -1,   230,
     230,   230,   234,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,    -1,   215,   230,   233,   233,
     230,   230,   230,   230,   230,   230,   395,    -1,    -1,    -1,
     230,   235,   235,   235,   235,   233,   230,   230,   230,    -1,
      -1,   232,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   385,
     291
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   237,     0,     1,     4,    16,    19,    21,    28,    40,
      45,    46,    64,    68,    78,    98,    99,   113,   130,   142,
     143,   166,   179,   186,   191,   194,   238,   243,   248,   268,
     274,   280,   288,   302,   322,   346,   360,   375,   382,   386,
     396,   405,   426,   432,   438,   442,   448,   502,   516,   230,
     231,   232,   232,   323,   406,   433,   232,   443,   232,   361,
     427,   347,   232,   275,   303,   376,   232,   232,   397,   232,
     281,   232,   387,     1,    29,    37,   100,   269,   270,   271,
     272,   273,     1,    25,    26,    32,    60,    61,    62,    74,
      75,    76,    81,    82,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   232,   232,   232,
       1,    63,   439,   440,   441,   232,     1,     6,     7,     9,
      10,    14,    23,    24,    31,    34,    35,    36,    41,    58,
      59,    69,    72,    73,    80,    87,    89,    91,    93,    95,
      96,   106,   111,   112,   114,   115,   116,   119,   144,   154,
     155,   156,   157,   158,   159,   160,   212,   213,   214,   216,
     217,   225,   449,   450,   451,   452,   453,   454,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   495,   499,   500,   501,   232,
     232,   232,     1,    97,   118,   244,   245,   246,   247,   232,
     232,   232,     1,    33,    42,    43,    44,    47,    48,    52,
      53,    54,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,     1,    27,    29,    56,    66,    88,    92,
     100,   103,   104,   132,   148,   151,   152,   153,   200,   223,
     224,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     232,     1,   221,   289,   290,   291,   292,   293,   232,     1,
     100,   383,   384,   385,   232,   230,   233,   233,   233,   231,
     270,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   231,   504,     1,    17,    18,    22,    65,    82,
      83,    84,    85,    86,    90,    94,   100,   109,   110,   120,
     141,   187,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,     1,     3,     5,    19,    38,    55,    57,    65,    77,
     100,   121,   140,   149,   200,   223,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   421,   422,   423,
     424,   425,     1,    63,   124,   434,   435,   436,   437,   233,
     231,   440,     1,   100,   124,   444,   445,   446,   447,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   496,   492,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   231,   450,     1,    19,    38,    65,
     117,   125,   126,   145,   222,   362,   363,   364,   365,   366,
     367,   368,   372,   373,   374,     1,   124,   222,   428,   429,
     430,   431,     1,    55,    63,    65,   121,   348,   352,   353,
     354,   358,   359,   230,   233,   233,   231,   245,     1,    79,
     172,   276,   277,   278,   279,     1,    19,    38,    65,   100,
     117,   149,   150,   202,   222,   226,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   318,     1,    40,
      79,   124,   377,   378,   379,   380,   381,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   231,   518,   230,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   231,   250,     1,   100,
     219,   398,   399,   400,   401,   230,   233,   231,   290,   172,
       1,   100,   165,   185,   201,   282,   283,   284,   285,   286,
     287,   233,   231,   384,     1,   100,   219,   222,   388,   389,
     390,   391,   392,   122,   122,   122,   230,   108,   108,   240,
     211,   108,   240,   240,   108,   240,   240,   108,   108,   230,
     230,   233,   233,   233,   343,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   231,   325,
     230,   233,   233,   233,   233,   233,   233,   418,   233,   233,
     233,   233,   233,   233,   233,   231,   408,   233,   233,   231,
     435,   122,   230,   233,   233,   231,   445,   211,   240,   108,
     240,   240,   211,   108,   211,   108,   108,   108,   211,   211,
     211,   240,   108,   108,   108,   108,   240,   108,   108,   108,
     108,   211,   233,   233,   211,   240,   240,   211,   211,   211,
     211,   215,   211,   215,   211,   211,   211,   211,   108,   240,
     211,   240,   240,   211,   230,   230,   233,   233,   369,   233,
     233,   233,   233,   233,   231,   363,   233,   233,   231,   429,
     230,   233,   233,   349,   233,   231,   353,   122,   122,   230,
     230,   233,   233,   231,   277,   230,   233,   233,   319,   233,
     233,   233,   233,   315,   233,   233,   231,   305,   230,   233,
     233,   233,   231,   378,   211,   211,   240,   122,   211,   122,
     211,   211,   211,   230,   108,   122,   211,   122,   108,   108,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   230,   230,   233,   402,   231,   399,   211,   230,   232,
     230,   233,   233,   233,   233,   231,   283,   122,   230,   230,
     233,   393,   233,   231,   389,   230,   230,   230,   230,   133,
     134,   135,   136,   137,   138,   139,   239,   240,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   108,   108,
     240,   233,   108,   108,   108,   240,   108,   108,   240,   122,
     108,   108,   240,   108,   242,   242,   230,   122,   176,   177,
     122,   211,   122,   122,   233,   122,   122,   108,   122,   122,
     122,   122,   230,   122,   122,   230,   230,   122,   122,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,    47,   162,   163,   164,   167,
     168,   170,   171,   173,   175,   178,   180,   181,   182,   188,
     192,   196,   197,   198,   203,   208,   227,   497,   498,    47,
      49,    50,   162,   163,   164,   167,   168,   170,   171,   173,
     175,   178,   180,   181,   182,   188,   192,   196,   197,   198,
     203,   208,   227,   493,   494,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   122,   211,   233,   122,   108,
     122,   122,   122,   230,   122,   122,   230,   122,   122,   233,
     108,   356,   357,   230,   230,   230,   122,   122,   230,   122,
     211,   233,   122,   122,   122,   211,   233,   122,   122,   230,
     122,   122,   122,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   230,
     122,   233,   230,   230,     1,   100,   195,   219,   294,   295,
     296,   297,   298,   122,   122,   122,   122,   230,   230,   122,
     233,   122,   230,   239,   239,   239,   239,   239,   239,   239,
     230,   230,   230,    51,   123,   344,   345,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,    11,    12,
      13,   241,   242,   230,   230,   230,   230,   230,   230,   230,
     230,   230,     8,   199,   419,   420,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   234,   230,
     234,   230,   230,    15,    39,    71,   101,   102,   107,   131,
     146,   210,   229,   370,   371,   230,   230,   230,   230,   230,
     230,   230,   230,   230,    47,   190,   199,   350,   351,   218,
     234,   355,   230,   230,   230,   230,     4,    20,    21,    30,
      67,    68,    70,    97,   105,   127,   129,   130,   147,   169,
     174,   178,   183,   184,   189,   193,   204,   206,   207,   209,
     220,   228,   320,   321,   230,   230,   230,   230,    47,    49,
      50,   162,   163,   164,   167,   168,   170,   171,   173,   175,
     178,   180,   181,   182,   188,   192,   196,   197,   198,   203,
     208,   227,   316,   317,   230,   230,   230,   230,   230,   230,
      70,   130,   161,   169,   178,   204,   206,   207,   220,   228,
     403,   404,   230,   233,   233,   299,   231,   295,   230,   230,
     230,   230,   230,    70,   130,   161,   169,   178,   204,   206,
     207,   220,   228,   394,   395,   230,   230,   234,   241,   241,
     241,   230,   234,   498,   494,   230,   234,   230,   234,   108,
     357,   230,   235,   235,   235,   235,   235,   230,   234,   230,
     234,   230,   234,   122,   205,   242,   233,   230,   230,   234,
     345,   420,   371,   351,   128,   130,   128,   130,   128,   321,
     317,   404,   230,   230,   230,    68,    70,   113,   130,   168,
     169,   222,   228,   300,   301,   395,   230,   234,   301
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   236,   237,   237,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   239,   239,
     240,   240,   240,   240,   240,   240,   240,   240,   241,   241,
     242,   242,   242,   242,   243,   244,   244,   245,   245,   245,
     246,   247,   248,   249,   249,   250,   250,   250,   250,   250,
     250,   250,   250,   250,   250,   250,   250,   250,   250,   250,
     250,   250,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   269,   270,   270,   270,   270,   271,   272,   273,
     275,   274,   276,   276,   277,   277,   277,   278,   279,   281,
     280,   282,   282,   283,   283,   283,   283,   283,   284,   285,
     286,   287,   288,   289,   289,   290,   290,   290,   291,   293,
     292,   294,   294,   295,   295,   295,   295,   296,   297,   297,
     299,   298,   300,   300,   301,   301,   301,   301,   301,   301,
     301,   301,   303,   302,   304,   304,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   315,   314,   316,   316,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,   317,   317,   319,   318,   320,   320,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   323,   322,   324,   324,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   343,   342,   344,   344,   345,   345,
     347,   346,   349,   348,   350,   350,   351,   351,   351,   352,
     352,   353,   353,   353,   353,   353,   355,   354,   356,   356,
     357,   357,   358,   359,   361,   360,   362,   362,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   364,   365,   366,
     367,   369,   368,   370,   370,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   372,   373,   374,   376,   375,
     377,   377,   378,   378,   378,   378,   379,   380,   381,   382,
     383,   383,   384,   384,   385,   387,   386,   388,   388,   389,
     389,   389,   389,   390,   391,   393,   392,   394,   394,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   397,
     396,   398,   398,   399,   399,   399,   400,   402,   401,   403,
     403,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   406,   405,   407,   407,   408,   408,   408,   408,   408,
     408,   408,   408,   408,   408,   408,   408,   408,   408,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   416,   418,
     417,   419,   419,   420,   420,   421,   422,   423,   424,   425,
     427,   426,   428,   428,   429,   429,   429,   430,   431,   433,
     432,   434,   434,   435,   435,   435,   436,   437,   438,   439,
     439,   440,   440,   441,   443,   442,   444,   444,   445,   445,
     445,   446,   447,   448,   449,   449,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   450,   450,   450,   450,   450,   450,   450,   450,
     450,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   477,
     478,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   492,   491,   493,   493,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494,   494,   496,   495,   497,   497,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   498,   498,
     498,   498,   498,   498,   498,   498,   498,   498,   499,   500,
     501,   502,   503,   503,   504,   504,   504,   504,   504,   504,
     504,   504,   504,   504,   504,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   517,
     518,   518,   518,   518,   518,   518,   518,   518,   518,   518,
     519,   520,   521,   522,   523,   524,   525,   526,   527
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
       1,     1,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     0,     5,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     5,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       4,     5,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     5,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     4,     4,     4,     4,     4,     4
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
#line 417 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2857 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 30:
#line 418 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2863 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 31:
#line 419 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2869 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 32:
#line 420 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 + (yyvsp[0].number); }
#line 2875 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 33:
#line 421 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 + (yyvsp[0].number); }
#line 2881 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 34:
#line 422 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 + (yyvsp[0].number); }
#line 2887 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 35:
#line 423 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 + (yyvsp[0].number); }
#line 2893 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 36:
#line 424 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 7 * 4 + (yyvsp[0].number); }
#line 2899 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 37:
#line 425 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 60 * 60 * 24 * 365 + (yyvsp[0].number); }
#line 2905 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 38:
#line 428 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = 0; }
#line 2911 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 40:
#line 429 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-1].number) + (yyvsp[0].number); }
#line 2917 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 41:
#line 430 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); }
#line 2923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 42:
#line 431 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 + (yyvsp[0].number); }
#line 2929 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 43:
#line 432 "conf_parser.y" /* yacc.c:1646  */
    { (yyval.number) = (yyvsp[-2].number) * 1024 * 1024 + (yyvsp[0].number); }
#line 2935 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 50:
#line 445 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    add_conf_module(libio_basename(yylval.string));
}
#line 2944 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 51:
#line 451 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    mod_add_path(yylval.string);
}
#line 2953 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 73:
#line 484 "conf_parser.y" /* yacc.c:1646  */
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
#line 2996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 74:
#line 524 "conf_parser.y" /* yacc.c:1646  */
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
#line 3057 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 75:
#line 582 "conf_parser.y" /* yacc.c:1646  */
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
#line 3089 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 76:
#line 611 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    SSL_CTX_set_cipher_list(ConfigServerInfo.server_ctx, yylval.string);
#endif
}
#line 3100 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 77:
#line 619 "conf_parser.y" /* yacc.c:1646  */
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
#line 3117 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 78:
#line 633 "conf_parser.y" /* yacc.c:1646  */
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
#line 3148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 79:
#line 661 "conf_parser.y" /* yacc.c:1646  */
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
#line 3166 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 80:
#line 676 "conf_parser.y" /* yacc.c:1646  */
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
#line 3184 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 81:
#line 691 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerInfo.description);
    ConfigServerInfo.description = xstrdup(yylval.string);
    strlcpy(me.info, ConfigServerInfo.description, sizeof(me.info));
  }
}
#line 3197 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 82:
#line 701 "conf_parser.y" /* yacc.c:1646  */
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
#line 3214 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 83:
#line 715 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigServerInfo.network_desc);
  ConfigServerInfo.network_desc = xstrdup(yylval.string);
}
#line 3226 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 84:
#line 724 "conf_parser.y" /* yacc.c:1646  */
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
#line 3257 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 85:
#line 752 "conf_parser.y" /* yacc.c:1646  */
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
#line 3288 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 86:
#line 780 "conf_parser.y" /* yacc.c:1646  */
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
#line 3316 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 87:
#line 805 "conf_parser.y" /* yacc.c:1646  */
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
#line 3341 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 88:
#line 827 "conf_parser.y" /* yacc.c:1646  */
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
#line 3366 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 89:
#line 849 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerInfo.hub = yylval.number;
}
#line 3375 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 97:
#line 867 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.name);
  ConfigAdminInfo.name = xstrdup(yylval.string);
}
#line 3387 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 98:
#line 876 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.email);
  ConfigAdminInfo.email = xstrdup(yylval.string);
}
#line 3399 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 99:
#line 885 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  MyFree(ConfigAdminInfo.description);
  ConfigAdminInfo.description = xstrdup(yylval.string);
}
#line 3411 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 100:
#line 898 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3420 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 101:
#line 902 "conf_parser.y" /* yacc.c:1646  */
    {
  dlink_node *node = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  if (!block_state.file.buf[0])
    break;

  DLINK_FOREACH(node, block_state.mask.list.head)
    motd_add(node->data, block_state.file.buf);
}
#line 3437 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 107:
#line 919 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3446 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 108:
#line 925 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3455 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 109:
#line 935 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3464 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 110:
#line 939 "conf_parser.y" /* yacc.c:1646  */
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
#line 3482 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 118:
#line 957 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.command.buf, yylval.string, sizeof(block_state.command.buf));
}
#line 3491 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 119:
#line 963 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3500 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 120:
#line 969 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.prepend.buf, yylval.string, sizeof(block_state.prepend.buf));
}
#line 3509 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 121:
#line 975 "conf_parser.y" /* yacc.c:1646  */
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
#line 3530 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1003 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigLog.use_logging = yylval.number;
}
#line 3539 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1009 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 3548 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1013 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (block_state.type.value && block_state.file.buf[0])
    log_set_file(block_state.type.value, block_state.size.value,
                 block_state.file.buf);
}
#line 3561 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1029 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.file.buf, yylval.string, sizeof(block_state.file.buf));
}
#line 3572 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1037 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = (yyvsp[-1].number);
}
#line 3580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1040 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.size.value = 0;
}
#line 3588 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1045 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = 0;
}
#line 3597 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1052 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_USER;
}
#line 3606 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1056 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_OPER;
}
#line 3615 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1060 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_XLINE;
}
#line 3624 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1064 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_RESV;
}
#line 3633 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1068 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DLINE;
}
#line 3642 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1072 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KLINE;
}
#line 3651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1076 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_KILL;
}
#line 3660 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1080 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.type.value = LOG_TYPE_DEBUG;
}
#line 3669 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1090 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
}
#line 3681 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1097 "conf_parser.y" /* yacc.c:1646  */
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
#line 3734 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1160 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 3743 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1166 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 3752 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1172 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 3761 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1178 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.whois.buf, yylval.string, sizeof(block_state.whois.buf));
}
#line 3770 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1184 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
  else
    block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
}
#line 3784 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1195 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 3793 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1201 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (yylval.number)
    block_state.flags.value |= CONF_FLAGS_SSL;
  else
    block_state.flags.value &= ~CONF_FLAGS_SSL;
}
#line 3807 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1212 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 3816 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1218 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value = 0;
}
#line 3825 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1225 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_BOTS;
}
#line 3834 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1229 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CCONN;
}
#line 3843 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1233 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEAF;
}
#line 3852 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1237 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_DEBUG;
}
#line 3861 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1241 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FULL;
}
#line 3870 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1245 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDDEN;
}
#line 3879 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1249 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDECHANS;
}
#line 3888 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1253 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_HIDEIDLE;
}
#line 3897 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1257 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SKILL;
}
#line 3906 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1261 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_NCHANGE;
}
#line 3915 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1265 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REJ;
}
#line 3924 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1269 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_UNAUTH;
}
#line 3933 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1273 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SPY;
}
#line 3942 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1277 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_EXTERNAL;
}
#line 3951 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1281 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SERVNOTICE;
}
#line 3960 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1285 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_INVISIBLE;
}
#line 3969 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1289 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WALLOP;
}
#line 3978 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1293 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_SOFTCALLERID;
}
#line 3987 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1297 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_CALLERID;
}
#line 3996 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1301 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_LOCOPS;
}
#line 4005 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1305 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_REGONLY;
}
#line 4014 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1309 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_FARCONNECT;
}
#line 4023 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1313 "conf_parser.y" /* yacc.c:1646  */
    {
 if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_OPERWALL;
}
#line 4032 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1317 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.modes.value |= UMODE_WHOIS;
}
#line 4041 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1323 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = 0;
}
#line 4050 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1330 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL_REMOTE;
}
#line 4059 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1334 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KILL;
}
#line 4068 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1338 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT_REMOTE;
}
#line 4077 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1342 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CONNECT;
}
#line 4086 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1346 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT_REMOTE;
}
#line 4095 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1350 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SQUIT;
}
#line 4104 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1354 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_KLINE;
}
#line 4113 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1358 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNKLINE;
}
#line 4122 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1362 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DLINE;
}
#line 4131 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1366 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNDLINE;
}
#line 4140 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1370 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_XLINE;
}
#line 4149 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1374 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNXLINE;
}
#line 4158 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1378 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_DIE;
}
#line 4167 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1382 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESTART;
}
#line 4176 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1386 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REHASH;
}
#line 4185 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1390 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_ADMIN;
}
#line 4194 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1394 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_GLOBOPS;
}
#line 4203 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1398 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_WALLOPS;
}
#line 4212 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1402 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_LOCOPS;
}
#line 4221 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1406 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_REMOTEBAN;
}
#line 4230 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1410 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_SET;
}
#line 4239 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1414 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_MODULE;
}
#line 4248 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1418 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPME;
}
#line 4257 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1422 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_NICK_RESV;
}
#line 4266 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1426 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_JOIN_RESV;
}
#line 4275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 232:
#line 1430 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_RESV;
}
#line 4284 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 233:
#line 1434 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_UNRESV;
}
#line 4293 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 234:
#line 1438 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_CLOSE;
}
#line 4302 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 235:
#line 1442 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value |= OPER_FLAG_OPERWALLS;
}
#line 4311 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 236:
#line 1452 "conf_parser.y" /* yacc.c:1646  */
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
#line 4328 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 237:
#line 1464 "conf_parser.y" /* yacc.c:1646  */
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
#line 4376 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 258:
#line 1528 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4385 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 259:
#line 1534 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.ping_freq.value = (yyvsp[-1].number);
}
#line 4394 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 260:
#line 1540 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_perip.value = (yyvsp[-1].number);
}
#line 4403 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 261:
#line 1546 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.con_freq.value = (yyvsp[-1].number);
}
#line 4412 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 262:
#line 1552 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_channels.value = (yyvsp[-1].number);
}
#line 4421 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 263:
#line 1558 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_total.value = (yyvsp[-1].number);
}
#line 4430 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 264:
#line 1564 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_global.value = (yyvsp[-1].number);
}
#line 4439 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 265:
#line 1570 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_local.value = (yyvsp[-1].number);
}
#line 4448 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 266:
#line 1576 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_ident.value = (yyvsp[-1].number);
}
#line 4457 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 267:
#line 1582 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.max_sendq.value = (yyvsp[-1].number);
}
#line 4466 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 268:
#line 1588 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    if ((yyvsp[-1].number) >= CLIENT_FLOOD_MIN && (yyvsp[-1].number) <= CLIENT_FLOOD_MAX)
      block_state.max_recvq.value = (yyvsp[-1].number);
}
#line 4476 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 269:
#line 1595 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv4.value = (yyvsp[-1].number) > 32 ? 32 : (yyvsp[-1].number);
}
#line 4485 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 270:
#line 1601 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.cidr_bitlen_ipv6.value = (yyvsp[-1].number) > 128 ? 128 : (yyvsp[-1].number);
}
#line 4494 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 271:
#line 1607 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.number_per_cidr.value = (yyvsp[-1].number);
}
#line 4503 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 272:
#line 1613 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.min_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4515 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 273:
#line 1622 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 1)
    break;

  block_state.max_idle.value = (yyvsp[-1].number);
  block_state.flags.value |= CLASS_FLAGS_FAKE_IDLE;
}
#line 4527 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 274:
#line 1631 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value &= CLASS_FLAGS_FAKE_IDLE;
}
#line 4536 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 278:
#line 1638 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_RANDOM_IDLE;
}
#line 4545 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 279:
#line 1642 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 1)
    block_state.flags.value |= CLASS_FLAGS_HIDE_IDLE_FROM_OPERS;
}
#line 4554 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 280:
#line 1652 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4563 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 282:
#line 1658 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value = 0;
}
#line 4571 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 286:
#line 1664 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_SSL;
}
#line 4580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 287:
#line 1668 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= LISTENER_HIDDEN;
}
#line 4589 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 288:
#line 1672 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
   block_state.flags.value |= LISTENER_SERVER;
}
#line 4598 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 296:
#line 1680 "conf_parser.y" /* yacc.c:1646  */
    { block_state.flags.value = 0; }
#line 4604 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 300:
#line 1685 "conf_parser.y" /* yacc.c:1646  */
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
#line 4622 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 301:
#line 1698 "conf_parser.y" /* yacc.c:1646  */
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
#line 4642 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 302:
#line 1715 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4651 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 303:
#line 1721 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 4660 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 304:
#line 1731 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 4669 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 305:
#line 1735 "conf_parser.y" /* yacc.c:1646  */
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
#line 4710 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 317:
#line 1784 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4719 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 318:
#line 1790 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4728 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 319:
#line 1796 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 4737 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 320:
#line 1802 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 4751 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 321:
#line 1813 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value &= (CONF_FLAGS_ENCRYPTED | CONF_FLAGS_SPOOF_IP);
}
#line 4760 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 325:
#line 1820 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SPOOF_NOTICE;
}
#line 4769 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 326:
#line 1824 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NOLIMIT;
}
#line 4778 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 327:
#line 1828 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTKLINE;
}
#line 4787 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 328:
#line 1832 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTXLINE;
}
#line 4796 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 329:
#line 1836 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_IDENTD;
}
#line 4805 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 330:
#line 1840 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_CAN_FLOOD;
}
#line 4814 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 331:
#line 1844 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NO_TILDE;
}
#line 4823 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 332:
#line 1848 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_EXEMPTRESV;
}
#line 4832 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 333:
#line 1852 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_WEBIRC;
}
#line 4841 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 334:
#line 1856 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_NEED_PASSWORD;
}
#line 4850 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 335:
#line 1862 "conf_parser.y" /* yacc.c:1646  */
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
#line 4867 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 336:
#line 1876 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
  block_state.flags.value |= CONF_FLAGS_REDIR;
}
#line 4879 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 337:
#line 1885 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  block_state.flags.value |= CONF_FLAGS_REDIR;
  block_state.port.value = (yyvsp[-1].number);
}
#line 4891 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 338:
#line 1898 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  strlcpy(block_state.rpass.buf, CONF_NOREASON, sizeof(block_state.rpass.buf));
}
#line 4903 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 339:
#line 1905 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  create_resv(block_state.name.buf, block_state.rpass.buf, &block_state.mask.list);
}
#line 4914 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 346:
#line 1916 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 347:
#line 1922 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 4932 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 348:
#line 1928 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.mask.list);
}
#line 4941 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 354:
#line 1943 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  if (valid_servname(yylval.string))
  {
    struct MaskItem *conf = conf_make(CONF_SERVICE);
    conf->name = xstrdup(yylval.string);
  }
}
#line 4956 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 355:
#line 1959 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  strlcpy(block_state.user.buf, "*", sizeof(block_state.user.buf));
  strlcpy(block_state.host.buf, "*", sizeof(block_state.host.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 4972 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 356:
#line 1970 "conf_parser.y" /* yacc.c:1646  */
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
#line 4989 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 363:
#line 1987 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 4998 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 364:
#line 1993 "conf_parser.y" /* yacc.c:1646  */
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
#line 5020 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 365:
#line 2012 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5029 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 369:
#line 2019 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5038 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 370:
#line 2023 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5047 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 371:
#line 2027 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5056 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 372:
#line 2031 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5065 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 373:
#line 2035 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5074 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 374:
#line 2039 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5083 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 375:
#line 2043 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5092 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 376:
#line 2047 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5101 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 377:
#line 2051 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5110 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 378:
#line 2055 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5119 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 379:
#line 2065 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();

  strlcpy(block_state.name.buf, "*", sizeof(block_state.name.buf));
  block_state.flags.value = SHARED_ALL;
}
#line 5133 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 380:
#line 2074 "conf_parser.y" /* yacc.c:1646  */
    {
  struct MaskItem *conf = NULL;

  if (conf_parser_ctx.pass != 2)
    break;

  conf = conf_make(CONF_CLUSTER);
  conf->flags = block_state.flags.value;
  conf->name = xstrdup(block_state.name.buf);
}
#line 5148 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 386:
#line 2089 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5157 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 387:
#line 2095 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = 0;
}
#line 5166 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 391:
#line 2102 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_KLINE;
}
#line 5175 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 392:
#line 2106 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNKLINE;
}
#line 5184 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 393:
#line 2110 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_DLINE;
}
#line 5193 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 394:
#line 2114 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNDLINE;
}
#line 5202 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 395:
#line 2118 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_XLINE;
}
#line 5211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 396:
#line 2122 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNXLINE;
}
#line 5220 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 397:
#line 2126 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_RESV;
}
#line 5229 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 398:
#line 2130 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_UNRESV;
}
#line 5238 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 399:
#line 2134 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= SHARED_LOCOPS;
}
#line 5247 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 400:
#line 2138 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value = SHARED_ALL;
}
#line 5256 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 401:
#line 2148 "conf_parser.y" /* yacc.c:1646  */
    {

  if (conf_parser_ctx.pass != 2)
    break;

  reset_block_state();
  block_state.aftype.value = AF_INET;
  block_state.port.value = PORTNUM;
}
#line 5270 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 402:
#line 2157 "conf_parser.y" /* yacc.c:1646  */
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
#line 5336 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 420:
#line 2237 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5345 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 421:
#line 2243 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.host.buf, yylval.string, sizeof(block_state.host.buf));
}
#line 5354 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 422:
#line 2249 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.bind.buf, yylval.string, sizeof(block_state.bind.buf));
}
#line 5363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 423:
#line 2255 "conf_parser.y" /* yacc.c:1646  */
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
#line 5379 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 424:
#line 2268 "conf_parser.y" /* yacc.c:1646  */
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
#line 5395 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 425:
#line 2281 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.cert.buf, yylval.string, sizeof(block_state.cert.buf));
}
#line 5404 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 426:
#line 2287 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.port.value = (yyvsp[-1].number);
}
#line 5413 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 427:
#line 2293 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET;
}
#line 5422 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 428:
#line 2297 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.aftype.value = AF_INET6;
}
#line 5431 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 429:
#line 2303 "conf_parser.y" /* yacc.c:1646  */
    {
  block_state.flags.value &= CONF_FLAGS_ENCRYPTED;
}
#line 5439 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 433:
#line 2309 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_ALLOW_AUTO_CONN;
}
#line 5448 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 434:
#line 2313 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    block_state.flags.value |= CONF_FLAGS_SSL;
}
#line 5457 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 435:
#line 2319 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    if (yylval.number)
      block_state.flags.value |= CONF_FLAGS_ENCRYPTED;
    else
      block_state.flags.value &= ~CONF_FLAGS_ENCRYPTED;
  }
}
#line 5471 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 436:
#line 2330 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.hub.list);
}
#line 5480 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 437:
#line 2336 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    dlinkAdd(xstrdup(yylval.string), make_dlink_node(), &block_state.leaf.list);
}
#line 5489 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 438:
#line 2342 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.class.buf, yylval.string, sizeof(block_state.class.buf));
}
#line 5498 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 439:
#line 2348 "conf_parser.y" /* yacc.c:1646  */
    {
#ifdef HAVE_LIBCRYPTO
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.ciph.buf, yylval.string, sizeof(block_state.ciph.buf));
#else
  if (conf_parser_ctx.pass == 2)
    conf_error_report("Ignoring connect::ciphers -- no OpenSSL support");
#endif
}
#line 5512 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 440:
#line 2363 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5521 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 441:
#line 2367 "conf_parser.y" /* yacc.c:1646  */
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
#line 5546 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 447:
#line 2392 "conf_parser.y" /* yacc.c:1646  */
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
#line 5569 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 448:
#line 2412 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5578 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 449:
#line 2422 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5587 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 450:
#line 2426 "conf_parser.y" /* yacc.c:1646  */
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
#line 5613 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 456:
#line 2452 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.addr.buf, yylval.string, sizeof(block_state.addr.buf));
}
#line 5622 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 457:
#line 2458 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5631 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 463:
#line 2473 "conf_parser.y" /* yacc.c:1646  */
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
#line 5648 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 464:
#line 2490 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    reset_block_state();
}
#line 5657 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 465:
#line 2494 "conf_parser.y" /* yacc.c:1646  */
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
#line 5679 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 471:
#line 2516 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.name.buf, yylval.string, sizeof(block_state.name.buf));
}
#line 5688 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 472:
#line 2522 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    strlcpy(block_state.rpass.buf, yylval.string, sizeof(block_state.rpass.buf));
}
#line 5697 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 522:
#line 2583 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_count = (yyvsp[-1].number);
}
#line 5705 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 523:
#line 2588 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.away_time = (yyvsp[-1].number);
}
#line 5713 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 524:
#line 2593 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_watch = (yyvsp[-1].number);
}
#line 5721 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 525:
#line 2598 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.cycle_on_host_change = yylval.number;
}
#line 5730 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 526:
#line 2604 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr = (yyvsp[-1].number);
}
#line 5738 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 527:
#line 2609 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dline_min_cidr6 = (yyvsp[-1].number);
}
#line 5746 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 528:
#line 2614 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr = (yyvsp[-1].number);
}
#line 5754 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 529:
#line 2619 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kline_min_cidr6 = (yyvsp[-1].number);
}
#line 5762 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 530:
#line 2624 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.tkline_expire_notices = yylval.number;
}
#line 5770 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 531:
#line 2629 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.kill_chase_time_limit = (yyvsp[-1].number);
}
#line 5778 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 532:
#line 2634 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ignore_bogus_ts = yylval.number;
}
#line 5786 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 533:
#line 2639 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.failed_oper_notice = yylval.number;
}
#line 5794 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 534:
#line 2644 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_nick_flood = yylval.number;
}
#line 5802 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 535:
#line 2649 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_time = (yyvsp[-1].number);
}
#line 5810 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 536:
#line 2654 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_nick_changes = (yyvsp[-1].number);
}
#line 5818 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 537:
#line 2659 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_accept = (yyvsp[-1].number);
}
#line 5826 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 538:
#line 2664 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.anti_spam_exit_message_time = (yyvsp[-1].number);
}
#line 5834 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 539:
#line 2669 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ts_warn_delta = (yyvsp[-1].number);
}
#line 5842 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 540:
#line 2674 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigGeneral.ts_max_delta = (yyvsp[-1].number);
}
#line 5851 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 541:
#line 2680 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.invisible_on_connect = yylval.number;
}
#line 5859 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 542:
#line 2685 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.warn_no_connect_block = yylval.number;
}
#line 5867 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 543:
#line 2690 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_e_disabled = yylval.number;
}
#line 5875 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 544:
#line 2695 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_m_oper_only = yylval.number;
}
#line 5883 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 545:
#line 2700 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_o_oper_only = yylval.number;
}
#line 5891 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 546:
#line 2705 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_P_oper_only = yylval.number;
}
#line 5899 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 547:
#line 2710 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_u_oper_only = yylval.number;
}
#line 5907 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 548:
#line 2715 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 2 * yylval.number;
}
#line 5915 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 549:
#line 2718 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_k_oper_only = 1;
}
#line 5923 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 550:
#line 2723 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 2 * yylval.number;
}
#line 5931 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 551:
#line 2726 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.stats_i_oper_only = 1;
}
#line 5939 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 552:
#line 2731 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait = (yyvsp[-1].number);
}
#line 5947 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 553:
#line 2736 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.caller_id_wait = (yyvsp[-1].number);
}
#line 5955 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 554:
#line 2741 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.opers_bypass_callerid = yylval.number;
}
#line 5963 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 555:
#line 2746 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.pace_wait_simple = (yyvsp[-1].number);
}
#line 5971 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 556:
#line 2751 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.short_motd = yylval.number;
}
#line 5979 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 557:
#line 2756 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.no_oper_flood = yylval.number;
}
#line 5987 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 558:
#line 2761 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.dots_in_ident = (yyvsp[-1].number);
}
#line 5995 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 559:
#line 2766 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.max_targets = (yyvsp[-1].number);
}
#line 6003 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 560:
#line 2771 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.ping_cookie = yylval.number;
}
#line 6011 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 561:
#line 2776 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.disable_auth = yylval.number;
}
#line 6019 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 562:
#line 2781 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_count = (yyvsp[-1].number);
}
#line 6027 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 563:
#line 2786 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.throttle_time = (yyvsp[-1].number);
}
#line 6035 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 564:
#line 2791 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes = 0;
}
#line 6043 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 568:
#line 2797 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_BOTS;
}
#line 6051 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 569:
#line 2800 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CCONN;
}
#line 6059 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 570:
#line 2803 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEAF;
}
#line 6067 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 571:
#line 2806 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_DEBUG;
}
#line 6075 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 572:
#line 2809 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FULL;
}
#line 6083 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 573:
#line 2812 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDDEN;
}
#line 6091 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 574:
#line 2815 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDECHANS;
}
#line 6099 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 575:
#line 2818 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_HIDEIDLE;
}
#line 6107 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 576:
#line 2821 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SKILL;
}
#line 6115 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 577:
#line 2824 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_NCHANGE;
}
#line 6123 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 578:
#line 2827 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REJ;
}
#line 6131 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 579:
#line 2830 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_UNAUTH;
}
#line 6139 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 580:
#line 2833 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SPY;
}
#line 6147 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 581:
#line 2836 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_EXTERNAL;
}
#line 6155 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 582:
#line 2839 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SERVNOTICE;
}
#line 6163 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 583:
#line 2842 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_INVISIBLE;
}
#line 6171 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 584:
#line 2845 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WALLOP;
}
#line 6179 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 585:
#line 2848 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_SOFTCALLERID;
}
#line 6187 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 586:
#line 2851 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_CALLERID;
}
#line 6195 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 587:
#line 2854 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_LOCOPS;
}
#line 6203 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 588:
#line 2857 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_REGONLY;
}
#line 6211 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 589:
#line 2860 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_FARCONNECT;
}
#line 6219 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 590:
#line 2863 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_OPERWALL;
}
#line 6227 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 591:
#line 2866 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_umodes |= UMODE_WHOIS;
}
#line 6235 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 592:
#line 2871 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes = 0;
}
#line 6243 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 596:
#line 2877 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_BOTS;
}
#line 6251 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 597:
#line 2880 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CCONN;
}
#line 6259 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 598:
#line 2883 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEAF;
}
#line 6267 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 599:
#line 2886 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_DEBUG;
}
#line 6275 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 600:
#line 2889 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FULL;
}
#line 6283 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 601:
#line 2892 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SKILL;
}
#line 6291 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 602:
#line 2895 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_HIDDEN;
}
#line 6299 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 603:
#line 2898 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_NCHANGE;
}
#line 6307 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 604:
#line 2901 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REJ;
}
#line 6315 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 605:
#line 2904 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_UNAUTH;
}
#line 6323 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 606:
#line 2907 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SPY;
}
#line 6331 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 607:
#line 2910 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_EXTERNAL;
}
#line 6339 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 608:
#line 2913 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SERVNOTICE;
}
#line 6347 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 609:
#line 2916 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_INVISIBLE;
}
#line 6355 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 610:
#line 2919 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WALLOP;
}
#line 6363 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 611:
#line 2922 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_SOFTCALLERID;
}
#line 6371 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 612:
#line 2925 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_CALLERID;
}
#line 6379 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 613:
#line 2928 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_LOCOPS;
}
#line 6387 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 614:
#line 2931 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_REGONLY;
}
#line 6395 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 615:
#line 2934 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_FARCONNECT;
}
#line 6403 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 616:
#line 2937 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_OPERWALL;
}
#line 6411 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 617:
#line 2940 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.oper_only_umodes |= UMODE_WHOIS;
}
#line 6419 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 618:
#line 2945 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard = (yyvsp[-1].number);
}
#line 6427 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 619:
#line 2950 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.min_nonwildcard_simple = (yyvsp[-1].number);
}
#line 6435 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 620:
#line 2955 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigGeneral.default_floodcount = (yyvsp[-1].number);
}
#line 6443 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 636:
#line 2980 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.disable_fake_channels = yylval.number;
}
#line 6451 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 637:
#line 2985 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_count = (yyvsp[-1].number);
}
#line 6459 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 638:
#line 2990 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_client_time = (yyvsp[-1].number);
}
#line 6467 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 639:
#line 2995 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.invite_delay_channel = (yyvsp[-1].number);
}
#line 6475 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 640:
#line 3000 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_count = (yyvsp[-1].number);
}
#line 6483 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 641:
#line 3005 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_client_time = (yyvsp[-1].number);
}
#line 6491 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 642:
#line 3010 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.knock_delay_channel = (yyvsp[-1].number);
}
#line 6499 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 643:
#line 3015 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_channels = (yyvsp[-1].number);
}
#line 6507 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 644:
#line 3020 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.max_bans = (yyvsp[-1].number);
}
#line 6515 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 645:
#line 3025 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_count = yylval.number;
}
#line 6523 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 646:
#line 3030 "conf_parser.y" /* yacc.c:1646  */
    {
  ConfigChannel.default_join_flood_time = (yyvsp[-1].number);
}
#line 6531 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 660:
#line 3053 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.flatten_links = yylval.number;
}
#line 6540 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 661:
#line 3059 "conf_parser.y" /* yacc.c:1646  */
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
#line 6559 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 662:
#line 3075 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.flatten_links_file);
    ConfigServerHide.flatten_links_file = xstrdup(yylval.string);
  }
}
#line 6571 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 663:
#line 3084 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.disable_remote_commands = yylval.number;
}
#line 6580 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 664:
#line 3090 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_servers = yylval.number;
}
#line 6589 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 665:
#line 3096 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_services = yylval.number;
}
#line 6598 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 666:
#line 3102 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
  {
    MyFree(ConfigServerHide.hidden_name);
    ConfigServerHide.hidden_name = xstrdup(yylval.string);
  }
}
#line 6610 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 667:
#line 3111 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hidden = yylval.number;
}
#line 6619 "conf_parser.c" /* yacc.c:1646  */
    break;

  case 668:
#line 3117 "conf_parser.y" /* yacc.c:1646  */
    {
  if (conf_parser_ctx.pass == 2)
    ConfigServerHide.hide_server_ips = yylval.number;
}
#line 6628 "conf_parser.c" /* yacc.c:1646  */
    break;


#line 6632 "conf_parser.c" /* yacc.c:1646  */
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
