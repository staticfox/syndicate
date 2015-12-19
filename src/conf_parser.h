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
    KLINE_REASON = 333,
    KNOCK_CLIENT_COUNT = 334,
    KNOCK_CLIENT_TIME = 335,
    KNOCK_DELAY_CHANNEL = 336,
    LEAF_MASK = 337,
    LISTEN = 338,
    MASK = 339,
    MAX_ACCEPT = 340,
    MAX_BANS = 341,
    MAX_CHANNELS = 342,
    MAX_GLOBAL = 343,
    MAX_IDENT = 344,
    MAX_IDLE = 345,
    MAX_LOCAL = 346,
    MAX_NICK_CHANGES = 347,
    MAX_NICK_LENGTH = 348,
    MAX_NICK_TIME = 349,
    MAX_NUMBER = 350,
    MAX_TARGETS = 351,
    MAX_TOPIC_LENGTH = 352,
    MAX_WATCH = 353,
    MIN_IDLE = 354,
    MIN_NONWILDCARD = 355,
    MIN_NONWILDCARD_SIMPLE = 356,
    MODULE = 357,
    MODULES = 358,
    MOTD = 359,
    NAME = 360,
    NEED_IDENT = 361,
    NEED_PASSWORD = 362,
    NETADMIN = 363,
    NETWORK_DESC = 364,
    NETWORK_NAME = 365,
    NICK = 366,
    NO_OPER_FLOOD = 367,
    NO_TILDE = 368,
    NUMBER = 369,
    NUMBER_PER_CIDR = 370,
    NUMBER_PER_IP = 371,
    OPER_ONLY_UMODES = 372,
    OPER_UMODES = 373,
    OPERATOR = 374,
    OPERS_BYPASS_CALLERID = 375,
    PACE_WAIT = 376,
    PACE_WAIT_SIMPLE = 377,
    PASSWORD = 378,
    PATH = 379,
    PING_COOKIE = 380,
    PING_TIME = 381,
    PORT = 382,
    QSTRING = 383,
    RANDOM_IDLE = 384,
    REASON = 385,
    REDIRPORT = 386,
    REDIRSERV = 387,
    REHASH = 388,
    REMOTE = 389,
    REMOTEBAN = 390,
    RESV = 391,
    RESV_EXEMPT = 392,
    RSA_PRIVATE_KEY_FILE = 393,
    SECONDS = 394,
    MINUTES = 395,
    HOURS = 396,
    DAYS = 397,
    WEEKS = 398,
    MONTHS = 399,
    YEARS = 400,
    SEND_PASSWORD = 401,
    SENDQ = 402,
    SERVERHIDE = 403,
    SERVERINFO = 404,
    SHORT_MOTD = 405,
    SPOOF = 406,
    SPOOF_NOTICE = 407,
    SQUIT = 408,
    SSL_CERTIFICATE_FILE = 409,
    SSL_CERTIFICATE_FINGERPRINT = 410,
    SSL_CONNECTION_REQUIRED = 411,
    SSL_DH_ELLIPTIC_CURVE = 412,
    SSL_DH_PARAM_FILE = 413,
    SSL_MESSAGE_DIGEST_ALGORITHM = 414,
    STATS_E_DISABLED = 415,
    STATS_I_OPER_ONLY = 416,
    STATS_K_OPER_ONLY = 417,
    STATS_M_OPER_ONLY = 418,
    STATS_O_OPER_ONLY = 419,
    STATS_P_OPER_ONLY = 420,
    STATS_U_OPER_ONLY = 421,
    T_ALL = 422,
    T_BOTS = 423,
    T_CALLERID = 424,
    T_CCONN = 425,
    T_COMMAND = 426,
    T_CLUSTER = 427,
    T_DEAF = 428,
    T_DEBUG = 429,
    T_DLINE = 430,
    T_EXTERNAL = 431,
    T_FARCONNECT = 432,
    T_FILE = 433,
    T_FULL = 434,
    T_GLOBOPS = 435,
    T_INVISIBLE = 436,
    T_IPV4 = 437,
    T_IPV6 = 438,
    T_LOCOPS = 439,
    T_LOG = 440,
    T_NCHANGE = 441,
    T_NONONREG = 442,
    T_OPERWALL = 443,
    T_OPERWALLS = 444,
    T_OPME = 445,
    T_PREPEND = 446,
    T_PSEUDO = 447,
    T_RECVQ = 448,
    T_REJ = 449,
    T_RESTART = 450,
    T_SERVER = 451,
    T_SERVICE = 452,
    T_SERVNOTICE = 453,
    T_SET = 454,
    T_SHARED = 455,
    T_SIZE = 456,
    T_SKILL = 457,
    T_SOFTCALLERID = 458,
    T_SPY = 459,
    T_SSL = 460,
    T_SSL_CIPHER_LIST = 461,
    T_TARGET = 462,
    T_UMODES = 463,
    T_UNAUTH = 464,
    T_UNDLINE = 465,
    T_UNLIMITED = 466,
    T_UNRESV = 467,
    T_UNXLINE = 468,
    T_WALLOP = 469,
    T_WALLOPS = 470,
    T_WEBIRC = 471,
    TBOOL = 472,
    THROTTLE_COUNT = 473,
    THROTTLE_TIME = 474,
    TKLINE_EXPIRE_NOTICES = 475,
    TMASKED = 476,
    TS_MAX_DELTA = 477,
    TS_WARN_DELTA = 478,
    TWODOTS = 479,
    TYPE = 480,
    UNKLINE = 481,
    USE_LOGGING = 482,
    USER = 483,
    VHOST = 484,
    VHOST6 = 485,
    WARN_NO_CONNECT_BLOCK = 486,
    WHOIS = 487,
    WHOIS_NOTIFY = 488,
    XLINE = 489,
    XLINE_EXEMPT = 490
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
#define KLINE_REASON 333
#define KNOCK_CLIENT_COUNT 334
#define KNOCK_CLIENT_TIME 335
#define KNOCK_DELAY_CHANNEL 336
#define LEAF_MASK 337
#define LISTEN 338
#define MASK 339
#define MAX_ACCEPT 340
#define MAX_BANS 341
#define MAX_CHANNELS 342
#define MAX_GLOBAL 343
#define MAX_IDENT 344
#define MAX_IDLE 345
#define MAX_LOCAL 346
#define MAX_NICK_CHANGES 347
#define MAX_NICK_LENGTH 348
#define MAX_NICK_TIME 349
#define MAX_NUMBER 350
#define MAX_TARGETS 351
#define MAX_TOPIC_LENGTH 352
#define MAX_WATCH 353
#define MIN_IDLE 354
#define MIN_NONWILDCARD 355
#define MIN_NONWILDCARD_SIMPLE 356
#define MODULE 357
#define MODULES 358
#define MOTD 359
#define NAME 360
#define NEED_IDENT 361
#define NEED_PASSWORD 362
#define NETADMIN 363
#define NETWORK_DESC 364
#define NETWORK_NAME 365
#define NICK 366
#define NO_OPER_FLOOD 367
#define NO_TILDE 368
#define NUMBER 369
#define NUMBER_PER_CIDR 370
#define NUMBER_PER_IP 371
#define OPER_ONLY_UMODES 372
#define OPER_UMODES 373
#define OPERATOR 374
#define OPERS_BYPASS_CALLERID 375
#define PACE_WAIT 376
#define PACE_WAIT_SIMPLE 377
#define PASSWORD 378
#define PATH 379
#define PING_COOKIE 380
#define PING_TIME 381
#define PORT 382
#define QSTRING 383
#define RANDOM_IDLE 384
#define REASON 385
#define REDIRPORT 386
#define REDIRSERV 387
#define REHASH 388
#define REMOTE 389
#define REMOTEBAN 390
#define RESV 391
#define RESV_EXEMPT 392
#define RSA_PRIVATE_KEY_FILE 393
#define SECONDS 394
#define MINUTES 395
#define HOURS 396
#define DAYS 397
#define WEEKS 398
#define MONTHS 399
#define YEARS 400
#define SEND_PASSWORD 401
#define SENDQ 402
#define SERVERHIDE 403
#define SERVERINFO 404
#define SHORT_MOTD 405
#define SPOOF 406
#define SPOOF_NOTICE 407
#define SQUIT 408
#define SSL_CERTIFICATE_FILE 409
#define SSL_CERTIFICATE_FINGERPRINT 410
#define SSL_CONNECTION_REQUIRED 411
#define SSL_DH_ELLIPTIC_CURVE 412
#define SSL_DH_PARAM_FILE 413
#define SSL_MESSAGE_DIGEST_ALGORITHM 414
#define STATS_E_DISABLED 415
#define STATS_I_OPER_ONLY 416
#define STATS_K_OPER_ONLY 417
#define STATS_M_OPER_ONLY 418
#define STATS_O_OPER_ONLY 419
#define STATS_P_OPER_ONLY 420
#define STATS_U_OPER_ONLY 421
#define T_ALL 422
#define T_BOTS 423
#define T_CALLERID 424
#define T_CCONN 425
#define T_COMMAND 426
#define T_CLUSTER 427
#define T_DEAF 428
#define T_DEBUG 429
#define T_DLINE 430
#define T_EXTERNAL 431
#define T_FARCONNECT 432
#define T_FILE 433
#define T_FULL 434
#define T_GLOBOPS 435
#define T_INVISIBLE 436
#define T_IPV4 437
#define T_IPV6 438
#define T_LOCOPS 439
#define T_LOG 440
#define T_NCHANGE 441
#define T_NONONREG 442
#define T_OPERWALL 443
#define T_OPERWALLS 444
#define T_OPME 445
#define T_PREPEND 446
#define T_PSEUDO 447
#define T_RECVQ 448
#define T_REJ 449
#define T_RESTART 450
#define T_SERVER 451
#define T_SERVICE 452
#define T_SERVNOTICE 453
#define T_SET 454
#define T_SHARED 455
#define T_SIZE 456
#define T_SKILL 457
#define T_SOFTCALLERID 458
#define T_SPY 459
#define T_SSL 460
#define T_SSL_CIPHER_LIST 461
#define T_TARGET 462
#define T_UMODES 463
#define T_UNAUTH 464
#define T_UNDLINE 465
#define T_UNLIMITED 466
#define T_UNRESV 467
#define T_UNXLINE 468
#define T_WALLOP 469
#define T_WALLOPS 470
#define T_WEBIRC 471
#define TBOOL 472
#define THROTTLE_COUNT 473
#define THROTTLE_TIME 474
#define TKLINE_EXPIRE_NOTICES 475
#define TMASKED 476
#define TS_MAX_DELTA 477
#define TS_WARN_DELTA 478
#define TWODOTS 479
#define TYPE 480
#define UNKLINE 481
#define USE_LOGGING 482
#define USER 483
#define VHOST 484
#define VHOST6 485
#define WARN_NO_CONNECT_BLOCK 486
#define WHOIS 487
#define WHOIS_NOTIFY 488
#define XLINE 489
#define XLINE_EXEMPT 490

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 153 "conf_parser.y" /* yacc.c:1909  */

  int number;
  char *string;

#line 529 "conf_parser.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CONF_PARSER_H_INCLUDED  */
