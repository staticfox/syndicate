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
    BLOCKCTCPS = 323,
    IP = 324,
    IRCD_AUTH = 325,
    IRCD_FLAGS = 326,
    IRCD_SID = 327,
    JOIN = 328,
    KILL = 329,
    KILL_CHASE_TIME_LIMIT = 330,
    KLINE = 331,
    KLINE_EXEMPT = 332,
    KLINE_MIN_CIDR = 333,
    KLINE_MIN_CIDR6 = 334,
    KLINE_REASON = 335,
    KNOCK_CLIENT_COUNT = 336,
    KNOCK_CLIENT_TIME = 337,
    KNOCK_DELAY_CHANNEL = 338,
    LEAF_MASK = 339,
    LISTEN = 340,
    MAP_SPLIT_TIMEOUT = 341,
    MASK = 342,
    MAX_ACCEPT = 343,
    MAX_BANS = 344,
    MAX_CHANNELS = 345,
    MAX_GLOBAL = 346,
    MAX_IDENT = 347,
    MAX_IDLE = 348,
    MAX_LOCAL = 349,
    MAX_NICK_CHANGES = 350,
    MAX_NICK_LENGTH = 351,
    MAX_NICK_TIME = 352,
    MAX_NUMBER = 353,
    MAX_SPLIT_HISTORY = 354,
    MAX_TARGETS = 355,
    MAX_TOPIC_LENGTH = 356,
    MAX_WATCH = 357,
    MIN_IDLE = 358,
    MIN_NONWILDCARD = 359,
    MIN_NONWILDCARD_SIMPLE = 360,
    MODULE = 361,
    MODULES = 362,
    MOTD = 363,
    NAME = 364,
    NEED_IDENT = 365,
    NEED_PASSWORD = 366,
    NETADMIN = 367,
    NETWORK_DESC = 368,
    NETWORK_NAME = 369,
    NICK = 370,
    NO_OPER_FLOOD = 371,
    NO_TILDE = 372,
    NUMBER = 373,
    NUMBER_PER_CIDR = 374,
    NUMBER_PER_IP = 375,
    OPER_ONLY_UMODES = 376,
    OPER_UMODES = 377,
    OPERATOR = 378,
    OPERS_BYPASS_CALLERID = 379,
    PACE_WAIT = 380,
    PACE_WAIT_SIMPLE = 381,
    PASSWORD = 382,
    PATH = 383,
    PING_COOKIE = 384,
    PING_TIME = 385,
    PORT = 386,
    QSTRING = 387,
    RANDOM_IDLE = 388,
    REASON = 389,
    REDIRPORT = 390,
    REDIRSERV = 391,
    REHASH = 392,
    REMOTE = 393,
    REMOTEBAN = 394,
    RESV = 395,
    RESV_EXEMPT = 396,
    RSA_PRIVATE_KEY_FILE = 397,
    S_BOTS = 398,
    S_CCONN = 399,
    S_DLINESPAM = 400,
    S_EXTERNAL = 401,
    S_FULL = 402,
    S_KLINESPAM = 403,
    S_NCHANGE = 404,
    S_REJ = 405,
    S_SERVREJ = 406,
    S_SKILL = 407,
    S_SNOGENERAL = 408,
    S_UNAUTH = 409,
    S_XLINESPAM = 410,
    SECONDS = 411,
    MINUTES = 412,
    HOURS = 413,
    DAYS = 414,
    WEEKS = 415,
    MONTHS = 416,
    YEARS = 417,
    SEND_PASSWORD = 418,
    SENDQ = 419,
    SERVERHIDE = 420,
    SERVERINFO = 421,
    SHORT_MOTD = 422,
    SNOMODES = 423,
    SPOOF = 424,
    SPOOF_NOTICE = 425,
    SQUIT = 426,
    SSL_CERTIFICATE_FILE = 427,
    SSL_CERTIFICATE_FINGERPRINT = 428,
    SSL_CONNECTION_REQUIRED = 429,
    SSL_DH_ELLIPTIC_CURVE = 430,
    SSL_DH_PARAM_FILE = 431,
    SSL_MESSAGE_DIGEST_ALGORITHM = 432,
    STATS_E_DISABLED = 433,
    STATS_I_OPER_ONLY = 434,
    STATS_K_OPER_ONLY = 435,
    STATS_M_OPER_ONLY = 436,
    STATS_O_OPER_ONLY = 437,
    STATS_P_OPER_ONLY = 438,
    STATS_U_OPER_ONLY = 439,
    T_ALL = 440,
    T_CALLERID = 441,
    T_COMMAND = 442,
    T_CLUSTER = 443,
    T_DEAF = 444,
    S_DEBUG = 445,
    T_DLINE = 446,
    T_FARCONNECT = 447,
    T_FILE = 448,
    T_GLOBOPS = 449,
    T_INVISIBLE = 450,
    T_IPV4 = 451,
    T_IPV6 = 452,
    T_LOCOPS = 453,
    T_LOG = 454,
    T_NONONREG = 455,
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
#define BLOCKCTCPS 323
#define IP 324
#define IRCD_AUTH 325
#define IRCD_FLAGS 326
#define IRCD_SID 327
#define JOIN 328
#define KILL 329
#define KILL_CHASE_TIME_LIMIT 330
#define KLINE 331
#define KLINE_EXEMPT 332
#define KLINE_MIN_CIDR 333
#define KLINE_MIN_CIDR6 334
#define KLINE_REASON 335
#define KNOCK_CLIENT_COUNT 336
#define KNOCK_CLIENT_TIME 337
#define KNOCK_DELAY_CHANNEL 338
#define LEAF_MASK 339
#define LISTEN 340
#define MAP_SPLIT_TIMEOUT 341
#define MASK 342
#define MAX_ACCEPT 343
#define MAX_BANS 344
#define MAX_CHANNELS 345
#define MAX_GLOBAL 346
#define MAX_IDENT 347
#define MAX_IDLE 348
#define MAX_LOCAL 349
#define MAX_NICK_CHANGES 350
#define MAX_NICK_LENGTH 351
#define MAX_NICK_TIME 352
#define MAX_NUMBER 353
#define MAX_SPLIT_HISTORY 354
#define MAX_TARGETS 355
#define MAX_TOPIC_LENGTH 356
#define MAX_WATCH 357
#define MIN_IDLE 358
#define MIN_NONWILDCARD 359
#define MIN_NONWILDCARD_SIMPLE 360
#define MODULE 361
#define MODULES 362
#define MOTD 363
#define NAME 364
#define NEED_IDENT 365
#define NEED_PASSWORD 366
#define NETADMIN 367
#define NETWORK_DESC 368
#define NETWORK_NAME 369
#define NICK 370
#define NO_OPER_FLOOD 371
#define NO_TILDE 372
#define NUMBER 373
#define NUMBER_PER_CIDR 374
#define NUMBER_PER_IP 375
#define OPER_ONLY_UMODES 376
#define OPER_UMODES 377
#define OPERATOR 378
#define OPERS_BYPASS_CALLERID 379
#define PACE_WAIT 380
#define PACE_WAIT_SIMPLE 381
#define PASSWORD 382
#define PATH 383
#define PING_COOKIE 384
#define PING_TIME 385
#define PORT 386
#define QSTRING 387
#define RANDOM_IDLE 388
#define REASON 389
#define REDIRPORT 390
#define REDIRSERV 391
#define REHASH 392
#define REMOTE 393
#define REMOTEBAN 394
#define RESV 395
#define RESV_EXEMPT 396
#define RSA_PRIVATE_KEY_FILE 397
#define S_BOTS 398
#define S_CCONN 399
#define S_DLINESPAM 400
#define S_EXTERNAL 401
#define S_FULL 402
#define S_KLINESPAM 403
#define S_NCHANGE 404
#define S_REJ 405
#define S_SERVREJ 406
#define S_SKILL 407
#define S_SNOGENERAL 408
#define S_UNAUTH 409
#define S_XLINESPAM 410
#define SECONDS 411
#define MINUTES 412
#define HOURS 413
#define DAYS 414
#define WEEKS 415
#define MONTHS 416
#define YEARS 417
#define SEND_PASSWORD 418
#define SENDQ 419
#define SERVERHIDE 420
#define SERVERINFO 421
#define SHORT_MOTD 422
#define SNOMODES 423
#define SPOOF 424
#define SPOOF_NOTICE 425
#define SQUIT 426
#define SSL_CERTIFICATE_FILE 427
#define SSL_CERTIFICATE_FINGERPRINT 428
#define SSL_CONNECTION_REQUIRED 429
#define SSL_DH_ELLIPTIC_CURVE 430
#define SSL_DH_PARAM_FILE 431
#define SSL_MESSAGE_DIGEST_ALGORITHM 432
#define STATS_E_DISABLED 433
#define STATS_I_OPER_ONLY 434
#define STATS_K_OPER_ONLY 435
#define STATS_M_OPER_ONLY 436
#define STATS_O_OPER_ONLY 437
#define STATS_P_OPER_ONLY 438
#define STATS_U_OPER_ONLY 439
#define T_ALL 440
#define T_CALLERID 441
#define T_COMMAND 442
#define T_CLUSTER 443
#define T_DEAF 444
#define S_DEBUG 445
#define T_DLINE 446
#define T_FARCONNECT 447
#define T_FILE 448
#define T_GLOBOPS 449
#define T_INVISIBLE 450
#define T_IPV4 451
#define T_IPV6 452
#define T_LOCOPS 453
#define T_LOG 454
#define T_NONONREG 455
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
#line 154 "conf_parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 547 "conf_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */
