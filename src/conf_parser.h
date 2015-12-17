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
#line 153 "conf_parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 527 "conf_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */
