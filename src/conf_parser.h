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
#line 154 "conf_parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 545 "conf_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */
