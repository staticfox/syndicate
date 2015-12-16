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
#line 153 "conf_parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 525 "conf_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */
