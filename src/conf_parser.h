/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

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
#line 154 "conf_parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 549 "conf_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */
