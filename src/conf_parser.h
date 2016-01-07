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
