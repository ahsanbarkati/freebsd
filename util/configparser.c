/* A Bison parser, made by GNU Bison 3.0.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 38 "util/configparser.y" /* yacc.c:339  */

#include "config.h"

#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "util/configyyrename.h"
#include "util/config_file.h"
#include "util/net_help.h"

int ub_c_lex(void);
void ub_c_error(const char *message);

static void validate_respip_action(const char* action);

/* these need to be global, otherwise they cannot be used inside yacc */
extern struct config_parser_state* cfg_parser;

#if 0
#define OUTYY(s)  printf s /* used ONLY when debugging */
#else
#define OUTYY(s)
#endif


#line 95 "util/configparser.c" /* yacc.c:339  */

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
   by #include "configparser.h".  */
#ifndef YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
# define YY_YY_UTIL_CONFIGPARSER_H_INCLUDED
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
    SPACE = 258,
    LETTER = 259,
    NEWLINE = 260,
    COMMENT = 261,
    COLON = 262,
    ANY = 263,
    ZONESTR = 264,
    STRING_ARG = 265,
    VAR_SERVER = 266,
    VAR_VERBOSITY = 267,
    VAR_NUM_THREADS = 268,
    VAR_PORT = 269,
    VAR_OUTGOING_RANGE = 270,
    VAR_INTERFACE = 271,
    VAR_DO_IP4 = 272,
    VAR_DO_IP6 = 273,
    VAR_PREFER_IP6 = 274,
    VAR_DO_UDP = 275,
    VAR_DO_TCP = 276,
    VAR_TCP_MSS = 277,
    VAR_OUTGOING_TCP_MSS = 278,
    VAR_TCP_IDLE_TIMEOUT = 279,
    VAR_EDNS_TCP_KEEPALIVE = 280,
    VAR_EDNS_TCP_KEEPALIVE_TIMEOUT = 281,
    VAR_CHROOT = 282,
    VAR_USERNAME = 283,
    VAR_DIRECTORY = 284,
    VAR_LOGFILE = 285,
    VAR_PIDFILE = 286,
    VAR_MSG_CACHE_SIZE = 287,
    VAR_MSG_CACHE_SLABS = 288,
    VAR_NUM_QUERIES_PER_THREAD = 289,
    VAR_RRSET_CACHE_SIZE = 290,
    VAR_RRSET_CACHE_SLABS = 291,
    VAR_OUTGOING_NUM_TCP = 292,
    VAR_INFRA_HOST_TTL = 293,
    VAR_INFRA_LAME_TTL = 294,
    VAR_INFRA_CACHE_SLABS = 295,
    VAR_INFRA_CACHE_NUMHOSTS = 296,
    VAR_INFRA_CACHE_LAME_SIZE = 297,
    VAR_NAME = 298,
    VAR_STUB_ZONE = 299,
    VAR_STUB_HOST = 300,
    VAR_STUB_ADDR = 301,
    VAR_TARGET_FETCH_POLICY = 302,
    VAR_HARDEN_SHORT_BUFSIZE = 303,
    VAR_HARDEN_LARGE_QUERIES = 304,
    VAR_FORWARD_ZONE = 305,
    VAR_FORWARD_HOST = 306,
    VAR_FORWARD_ADDR = 307,
    VAR_DO_NOT_QUERY_ADDRESS = 308,
    VAR_HIDE_IDENTITY = 309,
    VAR_HIDE_VERSION = 310,
    VAR_IDENTITY = 311,
    VAR_VERSION = 312,
    VAR_HARDEN_GLUE = 313,
    VAR_MODULE_CONF = 314,
    VAR_TRUST_ANCHOR_FILE = 315,
    VAR_TRUST_ANCHOR = 316,
    VAR_VAL_OVERRIDE_DATE = 317,
    VAR_BOGUS_TTL = 318,
    VAR_VAL_CLEAN_ADDITIONAL = 319,
    VAR_VAL_PERMISSIVE_MODE = 320,
    VAR_INCOMING_NUM_TCP = 321,
    VAR_MSG_BUFFER_SIZE = 322,
    VAR_KEY_CACHE_SIZE = 323,
    VAR_KEY_CACHE_SLABS = 324,
    VAR_TRUSTED_KEYS_FILE = 325,
    VAR_VAL_NSEC3_KEYSIZE_ITERATIONS = 326,
    VAR_USE_SYSLOG = 327,
    VAR_OUTGOING_INTERFACE = 328,
    VAR_ROOT_HINTS = 329,
    VAR_DO_NOT_QUERY_LOCALHOST = 330,
    VAR_CACHE_MAX_TTL = 331,
    VAR_HARDEN_DNSSEC_STRIPPED = 332,
    VAR_ACCESS_CONTROL = 333,
    VAR_LOCAL_ZONE = 334,
    VAR_LOCAL_DATA = 335,
    VAR_INTERFACE_AUTOMATIC = 336,
    VAR_STATISTICS_INTERVAL = 337,
    VAR_DO_DAEMONIZE = 338,
    VAR_USE_CAPS_FOR_ID = 339,
    VAR_STATISTICS_CUMULATIVE = 340,
    VAR_OUTGOING_PORT_PERMIT = 341,
    VAR_OUTGOING_PORT_AVOID = 342,
    VAR_DLV_ANCHOR_FILE = 343,
    VAR_DLV_ANCHOR = 344,
    VAR_NEG_CACHE_SIZE = 345,
    VAR_HARDEN_REFERRAL_PATH = 346,
    VAR_PRIVATE_ADDRESS = 347,
    VAR_PRIVATE_DOMAIN = 348,
    VAR_REMOTE_CONTROL = 349,
    VAR_CONTROL_ENABLE = 350,
    VAR_CONTROL_INTERFACE = 351,
    VAR_CONTROL_PORT = 352,
    VAR_SERVER_KEY_FILE = 353,
    VAR_SERVER_CERT_FILE = 354,
    VAR_CONTROL_KEY_FILE = 355,
    VAR_CONTROL_CERT_FILE = 356,
    VAR_CONTROL_USE_CERT = 357,
    VAR_EXTENDED_STATISTICS = 358,
    VAR_LOCAL_DATA_PTR = 359,
    VAR_JOSTLE_TIMEOUT = 360,
    VAR_STUB_PRIME = 361,
    VAR_UNWANTED_REPLY_THRESHOLD = 362,
    VAR_LOG_TIME_ASCII = 363,
    VAR_DOMAIN_INSECURE = 364,
    VAR_PYTHON = 365,
    VAR_PYTHON_SCRIPT = 366,
    VAR_VAL_SIG_SKEW_MIN = 367,
    VAR_VAL_SIG_SKEW_MAX = 368,
    VAR_CACHE_MIN_TTL = 369,
    VAR_VAL_LOG_LEVEL = 370,
    VAR_AUTO_TRUST_ANCHOR_FILE = 371,
    VAR_KEEP_MISSING = 372,
    VAR_ADD_HOLDDOWN = 373,
    VAR_DEL_HOLDDOWN = 374,
    VAR_SO_RCVBUF = 375,
    VAR_EDNS_BUFFER_SIZE = 376,
    VAR_PREFETCH = 377,
    VAR_PREFETCH_KEY = 378,
    VAR_SO_SNDBUF = 379,
    VAR_SO_REUSEPORT = 380,
    VAR_HARDEN_BELOW_NXDOMAIN = 381,
    VAR_IGNORE_CD_FLAG = 382,
    VAR_LOG_QUERIES = 383,
    VAR_LOG_REPLIES = 384,
    VAR_LOG_LOCAL_ACTIONS = 385,
    VAR_TCP_UPSTREAM = 386,
    VAR_SSL_UPSTREAM = 387,
    VAR_SSL_SERVICE_KEY = 388,
    VAR_SSL_SERVICE_PEM = 389,
    VAR_SSL_PORT = 390,
    VAR_FORWARD_FIRST = 391,
    VAR_STUB_SSL_UPSTREAM = 392,
    VAR_FORWARD_SSL_UPSTREAM = 393,
    VAR_TLS_CERT_BUNDLE = 394,
    VAR_STUB_FIRST = 395,
    VAR_MINIMAL_RESPONSES = 396,
    VAR_RRSET_ROUNDROBIN = 397,
    VAR_MAX_UDP_SIZE = 398,
    VAR_DELAY_CLOSE = 399,
    VAR_UNBLOCK_LAN_ZONES = 400,
    VAR_INSECURE_LAN_ZONES = 401,
    VAR_INFRA_CACHE_MIN_RTT = 402,
    VAR_DNS64_PREFIX = 403,
    VAR_DNS64_SYNTHALL = 404,
    VAR_DNS64_IGNORE_AAAA = 405,
    VAR_DNSTAP = 406,
    VAR_DNSTAP_ENABLE = 407,
    VAR_DNSTAP_SOCKET_PATH = 408,
    VAR_DNSTAP_SEND_IDENTITY = 409,
    VAR_DNSTAP_SEND_VERSION = 410,
    VAR_DNSTAP_IDENTITY = 411,
    VAR_DNSTAP_VERSION = 412,
    VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES = 413,
    VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES = 414,
    VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES = 415,
    VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES = 416,
    VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES = 417,
    VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES = 418,
    VAR_RESPONSE_IP_TAG = 419,
    VAR_RESPONSE_IP = 420,
    VAR_RESPONSE_IP_DATA = 421,
    VAR_HARDEN_ALGO_DOWNGRADE = 422,
    VAR_IP_TRANSPARENT = 423,
    VAR_DISABLE_DNSSEC_LAME_CHECK = 424,
    VAR_IP_RATELIMIT = 425,
    VAR_IP_RATELIMIT_SLABS = 426,
    VAR_IP_RATELIMIT_SIZE = 427,
    VAR_RATELIMIT = 428,
    VAR_RATELIMIT_SLABS = 429,
    VAR_RATELIMIT_SIZE = 430,
    VAR_RATELIMIT_FOR_DOMAIN = 431,
    VAR_RATELIMIT_BELOW_DOMAIN = 432,
    VAR_IP_RATELIMIT_FACTOR = 433,
    VAR_RATELIMIT_FACTOR = 434,
    VAR_SEND_CLIENT_SUBNET = 435,
    VAR_CLIENT_SUBNET_ZONE = 436,
    VAR_CLIENT_SUBNET_ALWAYS_FORWARD = 437,
    VAR_CLIENT_SUBNET_OPCODE = 438,
    VAR_MAX_CLIENT_SUBNET_IPV4 = 439,
    VAR_MAX_CLIENT_SUBNET_IPV6 = 440,
    VAR_MIN_CLIENT_SUBNET_IPV4 = 441,
    VAR_MIN_CLIENT_SUBNET_IPV6 = 442,
    VAR_MAX_ECS_TREE_SIZE_IPV4 = 443,
    VAR_MAX_ECS_TREE_SIZE_IPV6 = 444,
    VAR_CAPS_WHITELIST = 445,
    VAR_CACHE_MAX_NEGATIVE_TTL = 446,
    VAR_PERMIT_SMALL_HOLDDOWN = 447,
    VAR_QNAME_MINIMISATION = 448,
    VAR_QNAME_MINIMISATION_STRICT = 449,
    VAR_IP_FREEBIND = 450,
    VAR_DEFINE_TAG = 451,
    VAR_LOCAL_ZONE_TAG = 452,
    VAR_ACCESS_CONTROL_TAG = 453,
    VAR_LOCAL_ZONE_OVERRIDE = 454,
    VAR_ACCESS_CONTROL_TAG_ACTION = 455,
    VAR_ACCESS_CONTROL_TAG_DATA = 456,
    VAR_VIEW = 457,
    VAR_ACCESS_CONTROL_VIEW = 458,
    VAR_VIEW_FIRST = 459,
    VAR_SERVE_EXPIRED = 460,
    VAR_SERVE_EXPIRED_TTL = 461,
    VAR_SERVE_EXPIRED_TTL_RESET = 462,
    VAR_FAKE_DSA = 463,
    VAR_FAKE_SHA1 = 464,
    VAR_LOG_IDENTITY = 465,
    VAR_HIDE_TRUSTANCHOR = 466,
    VAR_TRUST_ANCHOR_SIGNALING = 467,
    VAR_AGGRESSIVE_NSEC = 468,
    VAR_USE_SYSTEMD = 469,
    VAR_SHM_ENABLE = 470,
    VAR_SHM_KEY = 471,
    VAR_ROOT_KEY_SENTINEL = 472,
    VAR_DNSCRYPT = 473,
    VAR_DNSCRYPT_ENABLE = 474,
    VAR_DNSCRYPT_PORT = 475,
    VAR_DNSCRYPT_PROVIDER = 476,
    VAR_DNSCRYPT_SECRET_KEY = 477,
    VAR_DNSCRYPT_PROVIDER_CERT = 478,
    VAR_DNSCRYPT_PROVIDER_CERT_ROTATED = 479,
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE = 480,
    VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS = 481,
    VAR_DNSCRYPT_NONCE_CACHE_SIZE = 482,
    VAR_DNSCRYPT_NONCE_CACHE_SLABS = 483,
    VAR_IPSECMOD_ENABLED = 484,
    VAR_IPSECMOD_HOOK = 485,
    VAR_IPSECMOD_IGNORE_BOGUS = 486,
    VAR_IPSECMOD_MAX_TTL = 487,
    VAR_IPSECMOD_WHITELIST = 488,
    VAR_IPSECMOD_STRICT = 489,
    VAR_CACHEDB = 490,
    VAR_CACHEDB_BACKEND = 491,
    VAR_CACHEDB_SECRETSEED = 492,
    VAR_CACHEDB_REDISHOST = 493,
    VAR_CACHEDB_REDISPORT = 494,
    VAR_CACHEDB_REDISTIMEOUT = 495,
    VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM = 496,
    VAR_FOR_UPSTREAM = 497,
    VAR_AUTH_ZONE = 498,
    VAR_ZONEFILE = 499,
    VAR_MASTER = 500,
    VAR_URL = 501,
    VAR_FOR_DOWNSTREAM = 502,
    VAR_FALLBACK_ENABLED = 503,
    VAR_TLS_ADDITIONAL_PORT = 504,
    VAR_LOW_RTT = 505,
    VAR_LOW_RTT_PERMIL = 506,
    VAR_FAST_SERVER_PERMIL = 507,
    VAR_FAST_SERVER_NUM = 508,
    VAR_ALLOW_NOTIFY = 509,
    VAR_TLS_WIN_CERT = 510,
    VAR_TCP_CONNECTION_LIMIT = 511,
    VAR_FORWARD_NO_CACHE = 512,
    VAR_STUB_NO_CACHE = 513,
    VAR_LOG_SERVFAIL = 514,
    VAR_DENY_ANY = 515,
    VAR_UNKNOWN_SERVER_TIME_LIMIT = 516,
    VAR_LOG_TAG_QUERYREPLY = 517,
    VAR_STREAM_WAIT_SIZE = 518,
    VAR_TLS_CIPHERS = 519,
    VAR_TLS_CIPHERSUITES = 520,
    VAR_TLS_SESSION_TICKET_KEYS = 521
  };
#endif
/* Tokens.  */
#define SPACE 258
#define LETTER 259
#define NEWLINE 260
#define COMMENT 261
#define COLON 262
#define ANY 263
#define ZONESTR 264
#define STRING_ARG 265
#define VAR_SERVER 266
#define VAR_VERBOSITY 267
#define VAR_NUM_THREADS 268
#define VAR_PORT 269
#define VAR_OUTGOING_RANGE 270
#define VAR_INTERFACE 271
#define VAR_DO_IP4 272
#define VAR_DO_IP6 273
#define VAR_PREFER_IP6 274
#define VAR_DO_UDP 275
#define VAR_DO_TCP 276
#define VAR_TCP_MSS 277
#define VAR_OUTGOING_TCP_MSS 278
#define VAR_TCP_IDLE_TIMEOUT 279
#define VAR_EDNS_TCP_KEEPALIVE 280
#define VAR_EDNS_TCP_KEEPALIVE_TIMEOUT 281
#define VAR_CHROOT 282
#define VAR_USERNAME 283
#define VAR_DIRECTORY 284
#define VAR_LOGFILE 285
#define VAR_PIDFILE 286
#define VAR_MSG_CACHE_SIZE 287
#define VAR_MSG_CACHE_SLABS 288
#define VAR_NUM_QUERIES_PER_THREAD 289
#define VAR_RRSET_CACHE_SIZE 290
#define VAR_RRSET_CACHE_SLABS 291
#define VAR_OUTGOING_NUM_TCP 292
#define VAR_INFRA_HOST_TTL 293
#define VAR_INFRA_LAME_TTL 294
#define VAR_INFRA_CACHE_SLABS 295
#define VAR_INFRA_CACHE_NUMHOSTS 296
#define VAR_INFRA_CACHE_LAME_SIZE 297
#define VAR_NAME 298
#define VAR_STUB_ZONE 299
#define VAR_STUB_HOST 300
#define VAR_STUB_ADDR 301
#define VAR_TARGET_FETCH_POLICY 302
#define VAR_HARDEN_SHORT_BUFSIZE 303
#define VAR_HARDEN_LARGE_QUERIES 304
#define VAR_FORWARD_ZONE 305
#define VAR_FORWARD_HOST 306
#define VAR_FORWARD_ADDR 307
#define VAR_DO_NOT_QUERY_ADDRESS 308
#define VAR_HIDE_IDENTITY 309
#define VAR_HIDE_VERSION 310
#define VAR_IDENTITY 311
#define VAR_VERSION 312
#define VAR_HARDEN_GLUE 313
#define VAR_MODULE_CONF 314
#define VAR_TRUST_ANCHOR_FILE 315
#define VAR_TRUST_ANCHOR 316
#define VAR_VAL_OVERRIDE_DATE 317
#define VAR_BOGUS_TTL 318
#define VAR_VAL_CLEAN_ADDITIONAL 319
#define VAR_VAL_PERMISSIVE_MODE 320
#define VAR_INCOMING_NUM_TCP 321
#define VAR_MSG_BUFFER_SIZE 322
#define VAR_KEY_CACHE_SIZE 323
#define VAR_KEY_CACHE_SLABS 324
#define VAR_TRUSTED_KEYS_FILE 325
#define VAR_VAL_NSEC3_KEYSIZE_ITERATIONS 326
#define VAR_USE_SYSLOG 327
#define VAR_OUTGOING_INTERFACE 328
#define VAR_ROOT_HINTS 329
#define VAR_DO_NOT_QUERY_LOCALHOST 330
#define VAR_CACHE_MAX_TTL 331
#define VAR_HARDEN_DNSSEC_STRIPPED 332
#define VAR_ACCESS_CONTROL 333
#define VAR_LOCAL_ZONE 334
#define VAR_LOCAL_DATA 335
#define VAR_INTERFACE_AUTOMATIC 336
#define VAR_STATISTICS_INTERVAL 337
#define VAR_DO_DAEMONIZE 338
#define VAR_USE_CAPS_FOR_ID 339
#define VAR_STATISTICS_CUMULATIVE 340
#define VAR_OUTGOING_PORT_PERMIT 341
#define VAR_OUTGOING_PORT_AVOID 342
#define VAR_DLV_ANCHOR_FILE 343
#define VAR_DLV_ANCHOR 344
#define VAR_NEG_CACHE_SIZE 345
#define VAR_HARDEN_REFERRAL_PATH 346
#define VAR_PRIVATE_ADDRESS 347
#define VAR_PRIVATE_DOMAIN 348
#define VAR_REMOTE_CONTROL 349
#define VAR_CONTROL_ENABLE 350
#define VAR_CONTROL_INTERFACE 351
#define VAR_CONTROL_PORT 352
#define VAR_SERVER_KEY_FILE 353
#define VAR_SERVER_CERT_FILE 354
#define VAR_CONTROL_KEY_FILE 355
#define VAR_CONTROL_CERT_FILE 356
#define VAR_CONTROL_USE_CERT 357
#define VAR_EXTENDED_STATISTICS 358
#define VAR_LOCAL_DATA_PTR 359
#define VAR_JOSTLE_TIMEOUT 360
#define VAR_STUB_PRIME 361
#define VAR_UNWANTED_REPLY_THRESHOLD 362
#define VAR_LOG_TIME_ASCII 363
#define VAR_DOMAIN_INSECURE 364
#define VAR_PYTHON 365
#define VAR_PYTHON_SCRIPT 366
#define VAR_VAL_SIG_SKEW_MIN 367
#define VAR_VAL_SIG_SKEW_MAX 368
#define VAR_CACHE_MIN_TTL 369
#define VAR_VAL_LOG_LEVEL 370
#define VAR_AUTO_TRUST_ANCHOR_FILE 371
#define VAR_KEEP_MISSING 372
#define VAR_ADD_HOLDDOWN 373
#define VAR_DEL_HOLDDOWN 374
#define VAR_SO_RCVBUF 375
#define VAR_EDNS_BUFFER_SIZE 376
#define VAR_PREFETCH 377
#define VAR_PREFETCH_KEY 378
#define VAR_SO_SNDBUF 379
#define VAR_SO_REUSEPORT 380
#define VAR_HARDEN_BELOW_NXDOMAIN 381
#define VAR_IGNORE_CD_FLAG 382
#define VAR_LOG_QUERIES 383
#define VAR_LOG_REPLIES 384
#define VAR_LOG_LOCAL_ACTIONS 385
#define VAR_TCP_UPSTREAM 386
#define VAR_SSL_UPSTREAM 387
#define VAR_SSL_SERVICE_KEY 388
#define VAR_SSL_SERVICE_PEM 389
#define VAR_SSL_PORT 390
#define VAR_FORWARD_FIRST 391
#define VAR_STUB_SSL_UPSTREAM 392
#define VAR_FORWARD_SSL_UPSTREAM 393
#define VAR_TLS_CERT_BUNDLE 394
#define VAR_STUB_FIRST 395
#define VAR_MINIMAL_RESPONSES 396
#define VAR_RRSET_ROUNDROBIN 397
#define VAR_MAX_UDP_SIZE 398
#define VAR_DELAY_CLOSE 399
#define VAR_UNBLOCK_LAN_ZONES 400
#define VAR_INSECURE_LAN_ZONES 401
#define VAR_INFRA_CACHE_MIN_RTT 402
#define VAR_DNS64_PREFIX 403
#define VAR_DNS64_SYNTHALL 404
#define VAR_DNS64_IGNORE_AAAA 405
#define VAR_DNSTAP 406
#define VAR_DNSTAP_ENABLE 407
#define VAR_DNSTAP_SOCKET_PATH 408
#define VAR_DNSTAP_SEND_IDENTITY 409
#define VAR_DNSTAP_SEND_VERSION 410
#define VAR_DNSTAP_IDENTITY 411
#define VAR_DNSTAP_VERSION 412
#define VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES 413
#define VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES 414
#define VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES 415
#define VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES 416
#define VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES 417
#define VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES 418
#define VAR_RESPONSE_IP_TAG 419
#define VAR_RESPONSE_IP 420
#define VAR_RESPONSE_IP_DATA 421
#define VAR_HARDEN_ALGO_DOWNGRADE 422
#define VAR_IP_TRANSPARENT 423
#define VAR_DISABLE_DNSSEC_LAME_CHECK 424
#define VAR_IP_RATELIMIT 425
#define VAR_IP_RATELIMIT_SLABS 426
#define VAR_IP_RATELIMIT_SIZE 427
#define VAR_RATELIMIT 428
#define VAR_RATELIMIT_SLABS 429
#define VAR_RATELIMIT_SIZE 430
#define VAR_RATELIMIT_FOR_DOMAIN 431
#define VAR_RATELIMIT_BELOW_DOMAIN 432
#define VAR_IP_RATELIMIT_FACTOR 433
#define VAR_RATELIMIT_FACTOR 434
#define VAR_SEND_CLIENT_SUBNET 435
#define VAR_CLIENT_SUBNET_ZONE 436
#define VAR_CLIENT_SUBNET_ALWAYS_FORWARD 437
#define VAR_CLIENT_SUBNET_OPCODE 438
#define VAR_MAX_CLIENT_SUBNET_IPV4 439
#define VAR_MAX_CLIENT_SUBNET_IPV6 440
#define VAR_MIN_CLIENT_SUBNET_IPV4 441
#define VAR_MIN_CLIENT_SUBNET_IPV6 442
#define VAR_MAX_ECS_TREE_SIZE_IPV4 443
#define VAR_MAX_ECS_TREE_SIZE_IPV6 444
#define VAR_CAPS_WHITELIST 445
#define VAR_CACHE_MAX_NEGATIVE_TTL 446
#define VAR_PERMIT_SMALL_HOLDDOWN 447
#define VAR_QNAME_MINIMISATION 448
#define VAR_QNAME_MINIMISATION_STRICT 449
#define VAR_IP_FREEBIND 450
#define VAR_DEFINE_TAG 451
#define VAR_LOCAL_ZONE_TAG 452
#define VAR_ACCESS_CONTROL_TAG 453
#define VAR_LOCAL_ZONE_OVERRIDE 454
#define VAR_ACCESS_CONTROL_TAG_ACTION 455
#define VAR_ACCESS_CONTROL_TAG_DATA 456
#define VAR_VIEW 457
#define VAR_ACCESS_CONTROL_VIEW 458
#define VAR_VIEW_FIRST 459
#define VAR_SERVE_EXPIRED 460
#define VAR_SERVE_EXPIRED_TTL 461
#define VAR_SERVE_EXPIRED_TTL_RESET 462
#define VAR_FAKE_DSA 463
#define VAR_FAKE_SHA1 464
#define VAR_LOG_IDENTITY 465
#define VAR_HIDE_TRUSTANCHOR 466
#define VAR_TRUST_ANCHOR_SIGNALING 467
#define VAR_AGGRESSIVE_NSEC 468
#define VAR_USE_SYSTEMD 469
#define VAR_SHM_ENABLE 470
#define VAR_SHM_KEY 471
#define VAR_ROOT_KEY_SENTINEL 472
#define VAR_DNSCRYPT 473
#define VAR_DNSCRYPT_ENABLE 474
#define VAR_DNSCRYPT_PORT 475
#define VAR_DNSCRYPT_PROVIDER 476
#define VAR_DNSCRYPT_SECRET_KEY 477
#define VAR_DNSCRYPT_PROVIDER_CERT 478
#define VAR_DNSCRYPT_PROVIDER_CERT_ROTATED 479
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE 480
#define VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS 481
#define VAR_DNSCRYPT_NONCE_CACHE_SIZE 482
#define VAR_DNSCRYPT_NONCE_CACHE_SLABS 483
#define VAR_IPSECMOD_ENABLED 484
#define VAR_IPSECMOD_HOOK 485
#define VAR_IPSECMOD_IGNORE_BOGUS 486
#define VAR_IPSECMOD_MAX_TTL 487
#define VAR_IPSECMOD_WHITELIST 488
#define VAR_IPSECMOD_STRICT 489
#define VAR_CACHEDB 490
#define VAR_CACHEDB_BACKEND 491
#define VAR_CACHEDB_SECRETSEED 492
#define VAR_CACHEDB_REDISHOST 493
#define VAR_CACHEDB_REDISPORT 494
#define VAR_CACHEDB_REDISTIMEOUT 495
#define VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM 496
#define VAR_FOR_UPSTREAM 497
#define VAR_AUTH_ZONE 498
#define VAR_ZONEFILE 499
#define VAR_MASTER 500
#define VAR_URL 501
#define VAR_FOR_DOWNSTREAM 502
#define VAR_FALLBACK_ENABLED 503
#define VAR_TLS_ADDITIONAL_PORT 504
#define VAR_LOW_RTT 505
#define VAR_LOW_RTT_PERMIL 506
#define VAR_FAST_SERVER_PERMIL 507
#define VAR_FAST_SERVER_NUM 508
#define VAR_ALLOW_NOTIFY 509
#define VAR_TLS_WIN_CERT 510
#define VAR_TCP_CONNECTION_LIMIT 511
#define VAR_FORWARD_NO_CACHE 512
#define VAR_STUB_NO_CACHE 513
#define VAR_LOG_SERVFAIL 514
#define VAR_DENY_ANY 515
#define VAR_UNKNOWN_SERVER_TIME_LIMIT 516
#define VAR_LOG_TAG_QUERYREPLY 517
#define VAR_STREAM_WAIT_SIZE 518
#define VAR_TLS_CIPHERS 519
#define VAR_TLS_CIPHERSUITES 520
#define VAR_TLS_SESSION_TICKET_KEYS 521

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 66 "util/configparser.y" /* yacc.c:355  */

	char*	str;

#line 671 "util/configparser.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_UTIL_CONFIGPARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 688 "util/configparser.c" /* yacc.c:358  */

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
#define YYLAST   536

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  267
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  286
/* YYNRULES -- Number of rules.  */
#define YYNRULES  549
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  823

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   521

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   172,   172,   172,   173,   173,   174,   174,   175,   175,
     175,   176,   176,   177,   181,   186,   187,   188,   188,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   192,   193,
     193,   194,   194,   194,   195,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   203,   203,   204,   204,   204,   205,   205,   205,   206,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   211,   212,   212,   213,   213,   214,   214,   214,
     215,   215,   216,   216,   217,   217,   218,   218,   218,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   224,
     224,   224,   225,   225,   226,   226,   226,   227,   227,   227,
     228,   228,   228,   229,   229,   229,   229,   230,   231,   231,
     231,   232,   232,   232,   233,   233,   234,   234,   235,   235,
     235,   236,   236,   237,   237,   237,   238,   238,   239,   239,
     240,   241,   241,   242,   242,   243,   243,   244,   245,   245,
     246,   246,   247,   247,   248,   248,   249,   249,   250,   250,
     250,   251,   251,   252,   252,   253,   253,   254,   254,   255,
     255,   256,   256,   256,   257,   257,   257,   258,   258,   258,
     259,   259,   260,   261,   261,   262,   262,   263,   263,   264,
     264,   265,   265,   265,   266,   266,   266,   267,   267,   267,
     268,   268,   269,   269,   270,   270,   272,   284,   285,   286,
     286,   286,   286,   286,   287,   287,   289,   301,   302,   303,
     303,   303,   303,   304,   304,   306,   320,   321,   322,   322,
     322,   322,   323,   323,   323,   325,   341,   342,   343,   343,
     343,   343,   344,   344,   344,   345,   347,   356,   365,   376,
     385,   394,   403,   414,   423,   434,   447,   462,   473,   490,
     507,   524,   541,   556,   571,   584,   599,   608,   617,   626,
     635,   644,   653,   662,   671,   680,   689,   698,   707,   716,
     729,   738,   751,   760,   769,   778,   785,   792,   801,   808,
     817,   825,   832,   839,   847,   856,   865,   879,   888,   897,
     906,   915,   924,   933,   940,   947,   973,   981,   988,   995,
    1002,  1009,  1017,  1025,  1033,  1040,  1051,  1062,  1069,  1078,
    1087,  1096,  1103,  1110,  1118,  1126,  1136,  1146,  1156,  1164,
    1177,  1188,  1196,  1209,  1218,  1227,  1236,  1246,  1256,  1264,
    1277,  1286,  1294,  1303,  1311,  1324,  1333,  1340,  1350,  1360,
    1370,  1380,  1390,  1400,  1410,  1420,  1427,  1434,  1441,  1450,
    1459,  1468,  1477,  1484,  1494,  1514,  1521,  1539,  1552,  1565,
    1574,  1583,  1592,  1601,  1611,  1621,  1632,  1641,  1650,  1659,
    1668,  1681,  1694,  1703,  1710,  1719,  1728,  1737,  1746,  1754,
    1767,  1775,  1808,  1815,  1830,  1840,  1850,  1857,  1864,  1871,
    1880,  1888,  1902,  1923,  1944,  1956,  1968,  1980,  1989,  2010,
    2020,  2029,  2037,  2045,  2058,  2071,  2086,  2101,  2110,  2119,
    2125,  2134,  2143,  2153,  2163,  2176,  2189,  2201,  2215,  2227,
    2241,  2251,  2258,  2265,  2274,  2283,  2293,  2303,  2313,  2320,
    2327,  2336,  2345,  2355,  2365,  2372,  2379,  2386,  2394,  2404,
    2414,  2424,  2434,  2466,  2476,  2484,  2492,  2507,  2516,  2521,
    2522,  2523,  2523,  2523,  2524,  2524,  2524,  2525,  2525,  2527,
    2537,  2546,  2553,  2560,  2567,  2574,  2581,  2588,  2593,  2594,
    2595,  2595,  2596,  2596,  2597,  2597,  2598,  2599,  2600,  2601,
    2602,  2603,  2605,  2614,  2621,  2630,  2639,  2646,  2653,  2663,
    2673,  2683,  2693,  2703,  2713,  2718,  2719,  2720,  2722,  2728,
    2738,  2745,  2754,  2762,  2767,  2768,  2770,  2770,  2770,  2771,
    2771,  2772,  2773,  2774,  2775,  2776,  2778,  2788,  2797,  2804,
    2813,  2820,  2829,  2837,  2850,  2858,  2871,  2876,  2877,  2878,
    2878,  2879,  2879,  2879,  2881,  2896,  2911,  2923,  2938,  2951
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SPACE", "LETTER", "NEWLINE", "COMMENT",
  "COLON", "ANY", "ZONESTR", "STRING_ARG", "VAR_SERVER", "VAR_VERBOSITY",
  "VAR_NUM_THREADS", "VAR_PORT", "VAR_OUTGOING_RANGE", "VAR_INTERFACE",
  "VAR_DO_IP4", "VAR_DO_IP6", "VAR_PREFER_IP6", "VAR_DO_UDP", "VAR_DO_TCP",
  "VAR_TCP_MSS", "VAR_OUTGOING_TCP_MSS", "VAR_TCP_IDLE_TIMEOUT",
  "VAR_EDNS_TCP_KEEPALIVE", "VAR_EDNS_TCP_KEEPALIVE_TIMEOUT", "VAR_CHROOT",
  "VAR_USERNAME", "VAR_DIRECTORY", "VAR_LOGFILE", "VAR_PIDFILE",
  "VAR_MSG_CACHE_SIZE", "VAR_MSG_CACHE_SLABS",
  "VAR_NUM_QUERIES_PER_THREAD", "VAR_RRSET_CACHE_SIZE",
  "VAR_RRSET_CACHE_SLABS", "VAR_OUTGOING_NUM_TCP", "VAR_INFRA_HOST_TTL",
  "VAR_INFRA_LAME_TTL", "VAR_INFRA_CACHE_SLABS",
  "VAR_INFRA_CACHE_NUMHOSTS", "VAR_INFRA_CACHE_LAME_SIZE", "VAR_NAME",
  "VAR_STUB_ZONE", "VAR_STUB_HOST", "VAR_STUB_ADDR",
  "VAR_TARGET_FETCH_POLICY", "VAR_HARDEN_SHORT_BUFSIZE",
  "VAR_HARDEN_LARGE_QUERIES", "VAR_FORWARD_ZONE", "VAR_FORWARD_HOST",
  "VAR_FORWARD_ADDR", "VAR_DO_NOT_QUERY_ADDRESS", "VAR_HIDE_IDENTITY",
  "VAR_HIDE_VERSION", "VAR_IDENTITY", "VAR_VERSION", "VAR_HARDEN_GLUE",
  "VAR_MODULE_CONF", "VAR_TRUST_ANCHOR_FILE", "VAR_TRUST_ANCHOR",
  "VAR_VAL_OVERRIDE_DATE", "VAR_BOGUS_TTL", "VAR_VAL_CLEAN_ADDITIONAL",
  "VAR_VAL_PERMISSIVE_MODE", "VAR_INCOMING_NUM_TCP", "VAR_MSG_BUFFER_SIZE",
  "VAR_KEY_CACHE_SIZE", "VAR_KEY_CACHE_SLABS", "VAR_TRUSTED_KEYS_FILE",
  "VAR_VAL_NSEC3_KEYSIZE_ITERATIONS", "VAR_USE_SYSLOG",
  "VAR_OUTGOING_INTERFACE", "VAR_ROOT_HINTS", "VAR_DO_NOT_QUERY_LOCALHOST",
  "VAR_CACHE_MAX_TTL", "VAR_HARDEN_DNSSEC_STRIPPED", "VAR_ACCESS_CONTROL",
  "VAR_LOCAL_ZONE", "VAR_LOCAL_DATA", "VAR_INTERFACE_AUTOMATIC",
  "VAR_STATISTICS_INTERVAL", "VAR_DO_DAEMONIZE", "VAR_USE_CAPS_FOR_ID",
  "VAR_STATISTICS_CUMULATIVE", "VAR_OUTGOING_PORT_PERMIT",
  "VAR_OUTGOING_PORT_AVOID", "VAR_DLV_ANCHOR_FILE", "VAR_DLV_ANCHOR",
  "VAR_NEG_CACHE_SIZE", "VAR_HARDEN_REFERRAL_PATH", "VAR_PRIVATE_ADDRESS",
  "VAR_PRIVATE_DOMAIN", "VAR_REMOTE_CONTROL", "VAR_CONTROL_ENABLE",
  "VAR_CONTROL_INTERFACE", "VAR_CONTROL_PORT", "VAR_SERVER_KEY_FILE",
  "VAR_SERVER_CERT_FILE", "VAR_CONTROL_KEY_FILE", "VAR_CONTROL_CERT_FILE",
  "VAR_CONTROL_USE_CERT", "VAR_EXTENDED_STATISTICS", "VAR_LOCAL_DATA_PTR",
  "VAR_JOSTLE_TIMEOUT", "VAR_STUB_PRIME", "VAR_UNWANTED_REPLY_THRESHOLD",
  "VAR_LOG_TIME_ASCII", "VAR_DOMAIN_INSECURE", "VAR_PYTHON",
  "VAR_PYTHON_SCRIPT", "VAR_VAL_SIG_SKEW_MIN", "VAR_VAL_SIG_SKEW_MAX",
  "VAR_CACHE_MIN_TTL", "VAR_VAL_LOG_LEVEL", "VAR_AUTO_TRUST_ANCHOR_FILE",
  "VAR_KEEP_MISSING", "VAR_ADD_HOLDDOWN", "VAR_DEL_HOLDDOWN",
  "VAR_SO_RCVBUF", "VAR_EDNS_BUFFER_SIZE", "VAR_PREFETCH",
  "VAR_PREFETCH_KEY", "VAR_SO_SNDBUF", "VAR_SO_REUSEPORT",
  "VAR_HARDEN_BELOW_NXDOMAIN", "VAR_IGNORE_CD_FLAG", "VAR_LOG_QUERIES",
  "VAR_LOG_REPLIES", "VAR_LOG_LOCAL_ACTIONS", "VAR_TCP_UPSTREAM",
  "VAR_SSL_UPSTREAM", "VAR_SSL_SERVICE_KEY", "VAR_SSL_SERVICE_PEM",
  "VAR_SSL_PORT", "VAR_FORWARD_FIRST", "VAR_STUB_SSL_UPSTREAM",
  "VAR_FORWARD_SSL_UPSTREAM", "VAR_TLS_CERT_BUNDLE", "VAR_STUB_FIRST",
  "VAR_MINIMAL_RESPONSES", "VAR_RRSET_ROUNDROBIN", "VAR_MAX_UDP_SIZE",
  "VAR_DELAY_CLOSE", "VAR_UNBLOCK_LAN_ZONES", "VAR_INSECURE_LAN_ZONES",
  "VAR_INFRA_CACHE_MIN_RTT", "VAR_DNS64_PREFIX", "VAR_DNS64_SYNTHALL",
  "VAR_DNS64_IGNORE_AAAA", "VAR_DNSTAP", "VAR_DNSTAP_ENABLE",
  "VAR_DNSTAP_SOCKET_PATH", "VAR_DNSTAP_SEND_IDENTITY",
  "VAR_DNSTAP_SEND_VERSION", "VAR_DNSTAP_IDENTITY", "VAR_DNSTAP_VERSION",
  "VAR_DNSTAP_LOG_RESOLVER_QUERY_MESSAGES",
  "VAR_DNSTAP_LOG_RESOLVER_RESPONSE_MESSAGES",
  "VAR_DNSTAP_LOG_CLIENT_QUERY_MESSAGES",
  "VAR_DNSTAP_LOG_CLIENT_RESPONSE_MESSAGES",
  "VAR_DNSTAP_LOG_FORWARDER_QUERY_MESSAGES",
  "VAR_DNSTAP_LOG_FORWARDER_RESPONSE_MESSAGES", "VAR_RESPONSE_IP_TAG",
  "VAR_RESPONSE_IP", "VAR_RESPONSE_IP_DATA", "VAR_HARDEN_ALGO_DOWNGRADE",
  "VAR_IP_TRANSPARENT", "VAR_DISABLE_DNSSEC_LAME_CHECK",
  "VAR_IP_RATELIMIT", "VAR_IP_RATELIMIT_SLABS", "VAR_IP_RATELIMIT_SIZE",
  "VAR_RATELIMIT", "VAR_RATELIMIT_SLABS", "VAR_RATELIMIT_SIZE",
  "VAR_RATELIMIT_FOR_DOMAIN", "VAR_RATELIMIT_BELOW_DOMAIN",
  "VAR_IP_RATELIMIT_FACTOR", "VAR_RATELIMIT_FACTOR",
  "VAR_SEND_CLIENT_SUBNET", "VAR_CLIENT_SUBNET_ZONE",
  "VAR_CLIENT_SUBNET_ALWAYS_FORWARD", "VAR_CLIENT_SUBNET_OPCODE",
  "VAR_MAX_CLIENT_SUBNET_IPV4", "VAR_MAX_CLIENT_SUBNET_IPV6",
  "VAR_MIN_CLIENT_SUBNET_IPV4", "VAR_MIN_CLIENT_SUBNET_IPV6",
  "VAR_MAX_ECS_TREE_SIZE_IPV4", "VAR_MAX_ECS_TREE_SIZE_IPV6",
  "VAR_CAPS_WHITELIST", "VAR_CACHE_MAX_NEGATIVE_TTL",
  "VAR_PERMIT_SMALL_HOLDDOWN", "VAR_QNAME_MINIMISATION",
  "VAR_QNAME_MINIMISATION_STRICT", "VAR_IP_FREEBIND", "VAR_DEFINE_TAG",
  "VAR_LOCAL_ZONE_TAG", "VAR_ACCESS_CONTROL_TAG",
  "VAR_LOCAL_ZONE_OVERRIDE", "VAR_ACCESS_CONTROL_TAG_ACTION",
  "VAR_ACCESS_CONTROL_TAG_DATA", "VAR_VIEW", "VAR_ACCESS_CONTROL_VIEW",
  "VAR_VIEW_FIRST", "VAR_SERVE_EXPIRED", "VAR_SERVE_EXPIRED_TTL",
  "VAR_SERVE_EXPIRED_TTL_RESET", "VAR_FAKE_DSA", "VAR_FAKE_SHA1",
  "VAR_LOG_IDENTITY", "VAR_HIDE_TRUSTANCHOR", "VAR_TRUST_ANCHOR_SIGNALING",
  "VAR_AGGRESSIVE_NSEC", "VAR_USE_SYSTEMD", "VAR_SHM_ENABLE",
  "VAR_SHM_KEY", "VAR_ROOT_KEY_SENTINEL", "VAR_DNSCRYPT",
  "VAR_DNSCRYPT_ENABLE", "VAR_DNSCRYPT_PORT", "VAR_DNSCRYPT_PROVIDER",
  "VAR_DNSCRYPT_SECRET_KEY", "VAR_DNSCRYPT_PROVIDER_CERT",
  "VAR_DNSCRYPT_PROVIDER_CERT_ROTATED",
  "VAR_DNSCRYPT_SHARED_SECRET_CACHE_SIZE",
  "VAR_DNSCRYPT_SHARED_SECRET_CACHE_SLABS",
  "VAR_DNSCRYPT_NONCE_CACHE_SIZE", "VAR_DNSCRYPT_NONCE_CACHE_SLABS",
  "VAR_IPSECMOD_ENABLED", "VAR_IPSECMOD_HOOK", "VAR_IPSECMOD_IGNORE_BOGUS",
  "VAR_IPSECMOD_MAX_TTL", "VAR_IPSECMOD_WHITELIST", "VAR_IPSECMOD_STRICT",
  "VAR_CACHEDB", "VAR_CACHEDB_BACKEND", "VAR_CACHEDB_SECRETSEED",
  "VAR_CACHEDB_REDISHOST", "VAR_CACHEDB_REDISPORT",
  "VAR_CACHEDB_REDISTIMEOUT", "VAR_UDP_UPSTREAM_WITHOUT_DOWNSTREAM",
  "VAR_FOR_UPSTREAM", "VAR_AUTH_ZONE", "VAR_ZONEFILE", "VAR_MASTER",
  "VAR_URL", "VAR_FOR_DOWNSTREAM", "VAR_FALLBACK_ENABLED",
  "VAR_TLS_ADDITIONAL_PORT", "VAR_LOW_RTT", "VAR_LOW_RTT_PERMIL",
  "VAR_FAST_SERVER_PERMIL", "VAR_FAST_SERVER_NUM", "VAR_ALLOW_NOTIFY",
  "VAR_TLS_WIN_CERT", "VAR_TCP_CONNECTION_LIMIT", "VAR_FORWARD_NO_CACHE",
  "VAR_STUB_NO_CACHE", "VAR_LOG_SERVFAIL", "VAR_DENY_ANY",
  "VAR_UNKNOWN_SERVER_TIME_LIMIT", "VAR_LOG_TAG_QUERYREPLY",
  "VAR_STREAM_WAIT_SIZE", "VAR_TLS_CIPHERS", "VAR_TLS_CIPHERSUITES",
  "VAR_TLS_SESSION_TICKET_KEYS", "$accept", "toplevelvars", "toplevelvar",
  "serverstart", "contents_server", "content_server", "stubstart",
  "contents_stub", "content_stub", "forwardstart", "contents_forward",
  "content_forward", "viewstart", "contents_view", "content_view",
  "authstart", "contents_auth", "content_auth", "server_num_threads",
  "server_verbosity", "server_statistics_interval",
  "server_statistics_cumulative", "server_extended_statistics",
  "server_shm_enable", "server_shm_key", "server_port",
  "server_send_client_subnet", "server_client_subnet_zone",
  "server_client_subnet_always_forward", "server_client_subnet_opcode",
  "server_max_client_subnet_ipv4", "server_max_client_subnet_ipv6",
  "server_min_client_subnet_ipv4", "server_min_client_subnet_ipv6",
  "server_max_ecs_tree_size_ipv4", "server_max_ecs_tree_size_ipv6",
  "server_interface", "server_outgoing_interface", "server_outgoing_range",
  "server_outgoing_port_permit", "server_outgoing_port_avoid",
  "server_outgoing_num_tcp", "server_incoming_num_tcp",
  "server_interface_automatic", "server_do_ip4", "server_do_ip6",
  "server_do_udp", "server_do_tcp", "server_prefer_ip6", "server_tcp_mss",
  "server_outgoing_tcp_mss", "server_tcp_idle_timeout",
  "server_tcp_keepalive", "server_tcp_keepalive_timeout",
  "server_tcp_upstream", "server_udp_upstream_without_downstream",
  "server_ssl_upstream", "server_ssl_service_key",
  "server_ssl_service_pem", "server_ssl_port", "server_tls_cert_bundle",
  "server_tls_win_cert", "server_tls_additional_port",
  "server_tls_ciphers", "server_tls_ciphersuites",
  "server_tls_session_ticket_keys", "server_use_systemd",
  "server_do_daemonize", "server_use_syslog", "server_log_time_ascii",
  "server_log_queries", "server_log_replies", "server_log_tag_queryreply",
  "server_log_servfail", "server_log_local_actions", "server_chroot",
  "server_username", "server_directory", "server_logfile",
  "server_pidfile", "server_root_hints", "server_dlv_anchor_file",
  "server_dlv_anchor", "server_auto_trust_anchor_file",
  "server_trust_anchor_file", "server_trusted_keys_file",
  "server_trust_anchor", "server_trust_anchor_signaling",
  "server_root_key_sentinel", "server_domain_insecure",
  "server_hide_identity", "server_hide_version", "server_hide_trustanchor",
  "server_identity", "server_version", "server_so_rcvbuf",
  "server_so_sndbuf", "server_so_reuseport", "server_ip_transparent",
  "server_ip_freebind", "server_stream_wait_size",
  "server_edns_buffer_size", "server_msg_buffer_size",
  "server_msg_cache_size", "server_msg_cache_slabs",
  "server_num_queries_per_thread", "server_jostle_timeout",
  "server_delay_close", "server_unblock_lan_zones",
  "server_insecure_lan_zones", "server_rrset_cache_size",
  "server_rrset_cache_slabs", "server_infra_host_ttl",
  "server_infra_lame_ttl", "server_infra_cache_numhosts",
  "server_infra_cache_lame_size", "server_infra_cache_slabs",
  "server_infra_cache_min_rtt", "server_target_fetch_policy",
  "server_harden_short_bufsize", "server_harden_large_queries",
  "server_harden_glue", "server_harden_dnssec_stripped",
  "server_harden_below_nxdomain", "server_harden_referral_path",
  "server_harden_algo_downgrade", "server_use_caps_for_id",
  "server_caps_whitelist", "server_private_address",
  "server_private_domain", "server_prefetch", "server_prefetch_key",
  "server_deny_any", "server_unwanted_reply_threshold",
  "server_do_not_query_address", "server_do_not_query_localhost",
  "server_access_control", "server_module_conf",
  "server_val_override_date", "server_val_sig_skew_min",
  "server_val_sig_skew_max", "server_cache_max_ttl",
  "server_cache_max_negative_ttl", "server_cache_min_ttl",
  "server_bogus_ttl", "server_val_clean_additional",
  "server_val_permissive_mode", "server_aggressive_nsec",
  "server_ignore_cd_flag", "server_serve_expired",
  "server_serve_expired_ttl", "server_serve_expired_ttl_reset",
  "server_fake_dsa", "server_fake_sha1", "server_val_log_level",
  "server_val_nsec3_keysize_iterations", "server_add_holddown",
  "server_del_holddown", "server_keep_missing",
  "server_permit_small_holddown", "server_key_cache_size",
  "server_key_cache_slabs", "server_neg_cache_size", "server_local_zone",
  "server_local_data", "server_local_data_ptr", "server_minimal_responses",
  "server_rrset_roundrobin", "server_unknown_server_time_limit",
  "server_max_udp_size", "server_dns64_prefix", "server_dns64_synthall",
  "server_dns64_ignore_aaaa", "server_define_tag", "server_local_zone_tag",
  "server_access_control_tag", "server_access_control_tag_action",
  "server_access_control_tag_data", "server_local_zone_override",
  "server_access_control_view", "server_response_ip_tag",
  "server_ip_ratelimit", "server_ratelimit", "server_ip_ratelimit_size",
  "server_ratelimit_size", "server_ip_ratelimit_slabs",
  "server_ratelimit_slabs", "server_ratelimit_for_domain",
  "server_ratelimit_below_domain", "server_ip_ratelimit_factor",
  "server_ratelimit_factor", "server_low_rtt", "server_fast_server_num",
  "server_fast_server_permil", "server_qname_minimisation",
  "server_qname_minimisation_strict", "server_ipsecmod_enabled",
  "server_ipsecmod_ignore_bogus", "server_ipsecmod_hook",
  "server_ipsecmod_max_ttl", "server_ipsecmod_whitelist",
  "server_ipsecmod_strict", "stub_name", "stub_host", "stub_addr",
  "stub_first", "stub_no_cache", "stub_ssl_upstream", "stub_prime",
  "forward_name", "forward_host", "forward_addr", "forward_first",
  "forward_no_cache", "forward_ssl_upstream", "auth_name", "auth_zonefile",
  "auth_master", "auth_url", "auth_allow_notify", "auth_for_downstream",
  "auth_for_upstream", "auth_fallback_enabled", "view_name",
  "view_local_zone", "view_response_ip", "view_response_ip_data",
  "view_local_data", "view_local_data_ptr", "view_first", "rcstart",
  "contents_rc", "content_rc", "rc_control_enable", "rc_control_port",
  "rc_control_interface", "rc_control_use_cert", "rc_server_key_file",
  "rc_server_cert_file", "rc_control_key_file", "rc_control_cert_file",
  "dtstart", "contents_dt", "content_dt", "dt_dnstap_enable",
  "dt_dnstap_socket_path", "dt_dnstap_send_identity",
  "dt_dnstap_send_version", "dt_dnstap_identity", "dt_dnstap_version",
  "dt_dnstap_log_resolver_query_messages",
  "dt_dnstap_log_resolver_response_messages",
  "dt_dnstap_log_client_query_messages",
  "dt_dnstap_log_client_response_messages",
  "dt_dnstap_log_forwarder_query_messages",
  "dt_dnstap_log_forwarder_response_messages", "pythonstart",
  "contents_py", "content_py", "py_script",
  "server_disable_dnssec_lame_check", "server_log_identity",
  "server_response_ip", "server_response_ip_data", "dnscstart",
  "contents_dnsc", "content_dnsc", "dnsc_dnscrypt_enable",
  "dnsc_dnscrypt_port", "dnsc_dnscrypt_provider",
  "dnsc_dnscrypt_provider_cert", "dnsc_dnscrypt_provider_cert_rotated",
  "dnsc_dnscrypt_secret_key", "dnsc_dnscrypt_shared_secret_cache_size",
  "dnsc_dnscrypt_shared_secret_cache_slabs",
  "dnsc_dnscrypt_nonce_cache_size", "dnsc_dnscrypt_nonce_cache_slabs",
  "cachedbstart", "contents_cachedb", "content_cachedb",
  "cachedb_backend_name", "cachedb_secret_seed", "redis_server_host",
  "redis_server_port", "redis_timeout", "server_tcp_connection_limit", YY_NULLPTR
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
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521
};
# endif

#define YYPACT_NINF -154

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-154)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -154,   212,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,   -12,   102,    98,   166,    39,   213,
     142,   -80,    52,  -153,    22,    23,    24,    28,    29,    30,
      78,    79,    80,    84,    88,    89,   114,   115,   116,   118,
     129,   130,   132,   133,   134,   136,   141,   180,   182,   196,
     197,   200,   201,   203,   204,   205,   206,   214,   215,   216,
     217,   218,   220,   221,   222,   223,   225,   245,   247,   248,
     249,   250,   251,   253,   254,   255,   256,   257,   258,   259,
     272,   278,   279,   280,   281,   282,   297,   306,   307,   308,
     309,   310,   311,   313,   314,   315,   316,   317,   318,   319,
     320,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   346,   347,   348,   349,   351,   352,   354,
     355,   356,   357,   358,   359,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,   419,   421,   422,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   438,
     439,   440,   441,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   442,   443,   444,   446,   447,   448,   449,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   450,   451,
     452,   453,   454,   455,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,   456,   457,   458,   459,   460,   461,   462,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,   463,   464,   465,   466,
     467,   468,   469,   470,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   471,   472,   473,   474,   475,   476,   477,
     478,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,   491,  -154,  -154,   492,   493,
     494,   495,   496,   497,   498,   499,   500,   501,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   502,
     503,   504,   505,   506,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   507,
     508,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,   509,   510,   511,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   512,   513,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,   514,
     515,   516,   517,   518,   519,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
     520,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,   521,  -154,  -154,   522,   523,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,   524,   525,   526,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,    14,   206,   216,   458,   504,   477,   225,
     513,   536,   235,     3,    16,   208,   218,   227,   237,   460,
     479,   506,   515,   538,     4,     5,     6,    10,    13,     8,
       9,     7,    11,    12,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    17,    18,    80,    83,    92,   177,
     178,    19,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,    31,    71,    20,    84,    85,    42,    64,    79,
      21,    22,    24,    25,    23,    26,    27,    28,    29,    30,
     115,   189,   116,   118,   119,   120,   191,   196,   192,   203,
     204,   205,   173,    81,    70,    96,   113,   114,   201,   198,
     117,    32,    33,    34,    35,    36,    72,    86,    87,   102,
      58,    68,    59,   181,   182,    97,    52,    53,   180,    54,
      55,   106,   110,   124,   133,   158,   202,   107,    65,    37,
      38,    39,    94,   125,   126,   127,    40,    41,    43,    44,
      46,    47,    45,   131,    48,    49,    50,    56,    75,   111,
      89,   132,    82,   154,    90,    91,   108,   109,   199,    95,
      51,    73,    76,    57,    60,    98,    99,    74,   155,   100,
      61,    62,    63,   190,   112,   168,   169,   170,   171,   179,
     101,    69,   103,   104,   105,   156,    66,    67,    88,    77,
      78,    93,   121,   122,   200,   123,   128,   129,   130,   159,
     160,   162,   164,   165,   163,   166,   174,   134,   135,   138,
     139,   136,   137,   140,   141,   143,   142,   193,   195,   194,
     157,   167,   183,   185,   184,   186,   187,   188,   161,   172,
     175,   176,   197,     0,     0,     0,     0,     0,     0,     0,
     207,   209,   210,   211,   213,   214,   215,   212,     0,     0,
       0,     0,     0,     0,   217,   219,   220,   221,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,   226,   228,
     229,   232,   233,   230,   234,   231,     0,     0,     0,     0,
       0,     0,     0,     0,   236,   238,   239,   240,   241,   245,
     242,   243,   244,     0,     0,     0,     0,     0,     0,     0,
       0,   459,   461,   463,   462,   468,   464,   465,   466,   467,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   478,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,     0,   505,   507,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   514,   516,
     517,   518,   520,   521,   519,   522,   523,   524,   525,     0,
       0,     0,     0,     0,   537,   539,   540,   541,   542,   543,
     247,   246,   253,   266,   264,   272,   273,   276,   274,   275,
     277,   278,   279,   280,   281,   303,   304,   305,   306,   307,
     331,   332,   333,   338,   339,   269,   340,   341,   344,   342,
     343,   346,   347,   348,   362,   318,   319,   321,   322,   349,
     365,   312,   314,   366,   372,   373,   374,   270,   330,   388,
     389,   313,   383,   296,   265,   308,   363,   369,   350,     0,
       0,   392,   271,   248,   295,   354,   249,   267,   268,   309,
     310,   390,   352,   356,   357,   250,   393,   334,   361,   297,
     317,   367,   368,   371,   382,   311,   386,   384,   385,   323,
     329,   358,   359,   324,   325,   351,   376,   298,   299,   302,
     282,   284,   285,   286,   287,   288,   394,   395,   397,   335,
     336,   337,   345,   398,   399,   400,     0,     0,     0,   353,
     326,   509,   409,   413,   411,   410,   414,   412,     0,     0,
     417,   418,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   355,   370,   387,   422,   423,   327,   401,     0,
       0,     0,     0,     0,     0,   377,   378,   379,   380,   381,
     510,   320,   315,   375,   294,   251,   252,   316,   424,   426,
     425,   427,   428,   429,   283,   290,   419,   421,   420,   289,
       0,   301,   360,   396,   300,   328,   291,   292,   293,   430,
     431,   432,   436,   435,   433,   434,   437,   438,   439,   440,
     442,   441,   451,     0,   455,   456,     0,     0,   457,   443,
     449,   444,   445,   446,   448,   450,   447,   469,   471,   470,
     473,   474,   475,   476,   472,   492,   493,   494,   495,   496,
     497,   498,   499,   500,   501,   502,   503,   508,   526,   527,
     528,   531,   529,   530,   532,   533,   534,   535,   544,   545,
     546,   547,   548,   364,   391,   408,   511,   512,   415,   416,
     402,   403,     0,     0,     0,   407,   549,   452,   453,   454,
     406,   404,   405
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,  -154,
    -154,  -154,  -154,  -154,  -154,  -154
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,    14,    24,   223,    15,    25,   420,    16,
      26,   434,    17,    27,   448,    18,    28,   464,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   421,   422,   423,   424,   425,   426,   427,   435,
     436,   437,   438,   439,   440,   465,   466,   467,   468,   469,
     470,   471,   472,   449,   450,   451,   452,   453,   454,   455,
      19,    29,   481,   482,   483,   484,   485,   486,   487,   488,
     489,    20,    30,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,    21,    31,   516,   517,
     408,   409,   410,   411,    22,    32,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,    23,    33,   544,
     545,   546,   547,   548,   549,   412
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   515,   550,   551,   552,    65,    66,    67,   553,   554,
     555,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   456,   539,   540,   541,   542,   543,   556,   557,
     558,   109,   110,   111,   559,   112,   113,   114,   560,   561,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   562,   563,   564,   139,   565,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   566,
     567,   428,   568,   569,   570,   413,   571,   414,   415,   429,
     430,   572,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     573,   188,   574,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   575,   576,   416,   441,
     577,   578,     2,   579,   580,   581,   582,   202,   203,   204,
     205,   206,   207,     3,   583,   584,   585,   586,   587,   208,
     588,   589,   590,   591,   431,   592,   432,   209,   210,   417,
     211,   212,   418,   213,   214,   442,   443,   215,   216,   217,
     218,   219,   220,   221,   222,   593,     4,   594,   595,   596,
     597,   598,     5,   599,   600,   601,   602,   603,   604,   605,
     444,   518,   519,   520,   521,   522,   523,   524,   525,   526,
     527,   457,   606,   458,   459,   460,   461,   462,   607,   608,
     609,   610,   611,   463,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,     6,   612,   473,   474,
     475,   476,   477,   478,   479,   480,   613,   614,   615,   616,
     617,   618,     7,   619,   620,   621,   622,   623,   624,   625,
     626,   445,   446,   627,   628,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   433,   649,   650,   651,   652,
     419,   653,   654,     8,   655,   656,   657,   658,   659,   660,
     447,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   683,   684,   685,   686,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,     9,   704,   705,   706,   707,   708,
     709,   710,   711,   712,   713,   714,   715,   716,   717,   718,
      10,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,    11,   735,   736,
     737,   738,   739,   740,   741,    12,   742,   743,   744,   745,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     756,   757,   758,   759,   760,   761,   762,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,   773,   774,   775,
     776,   777,   778,   779,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     796,   797,   798,   799,   800,   801,   802,   803,   804,   805,
     806,   807,   808,   809,   810,   811,   812,   813,   814,   815,
     816,   817,   818,   819,   820,   821,   822
};

static const yytype_uint16 yycheck[] =
{
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   111,    10,    10,    10,    47,    48,    49,    10,    10,
      10,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    43,   236,   237,   238,   239,   240,    10,    10,
      10,   103,   104,   105,    10,   107,   108,   109,    10,    10,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    10,    10,    10,   139,    10,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,    10,
      10,    43,    10,    10,    10,    43,    10,    45,    46,    51,
      52,    10,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
      10,   203,    10,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,    10,    10,   106,    43,
      10,    10,     0,    10,    10,    10,    10,   229,   230,   231,
     232,   233,   234,    11,    10,    10,    10,    10,    10,   241,
      10,    10,    10,    10,   136,    10,   138,   249,   250,   137,
     252,   253,   140,   255,   256,    79,    80,   259,   260,   261,
     262,   263,   264,   265,   266,    10,    44,    10,    10,    10,
      10,    10,    50,    10,    10,    10,    10,    10,    10,    10,
     104,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   242,    10,   244,   245,   246,   247,   248,    10,    10,
      10,    10,    10,   254,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,    94,    10,    95,    96,
      97,    98,    99,   100,   101,   102,    10,    10,    10,    10,
      10,    10,   110,    10,    10,    10,    10,    10,    10,    10,
      10,   165,   166,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,   257,    10,    10,    10,    10,
     258,    10,    10,   151,    10,    10,    10,    10,    10,    10,
     204,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,   202,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
     218,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,   235,    10,    10,
      10,    10,    10,    10,    10,   243,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   268,     0,    11,    44,    50,    94,   110,   151,   202,
     218,   235,   243,   269,   270,   273,   276,   279,   282,   497,
     508,   523,   531,   544,   271,   274,   277,   280,   283,   498,
     509,   524,   532,   545,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    47,    48,    49,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   103,
     104,   105,   107,   108,   109,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   139,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   203,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   229,   230,   231,   232,   233,   234,   241,   249,
     250,   252,   253,   255,   256,   259,   260,   261,   262,   263,
     264,   265,   266,   272,   285,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
     451,   452,   453,   454,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   527,   528,
     529,   530,   552,    43,    45,    46,   106,   137,   140,   258,
     275,   469,   470,   471,   472,   473,   474,   475,    43,    51,
      52,   136,   138,   257,   278,   476,   477,   478,   479,   480,
     481,    43,    79,    80,   104,   165,   166,   204,   281,   490,
     491,   492,   493,   494,   495,   496,    43,   242,   244,   245,
     246,   247,   248,   254,   284,   482,   483,   484,   485,   486,
     487,   488,   489,    95,    96,    97,    98,    99,   100,   101,
     102,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   510,   511,   512,   513,   514,   515,   516,   517,
     518,   519,   520,   521,   522,   111,   525,   526,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   236,
     237,   238,   239,   240,   546,   547,   548,   549,   550,   551,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10,    10,    10,    10,    10,    10,    10,    10,
      10,    10,    10
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   267,   268,   268,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   270,   271,   271,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   272,   272,   273,   274,   274,   275,
     275,   275,   275,   275,   275,   275,   276,   277,   277,   278,
     278,   278,   278,   278,   278,   279,   280,   280,   281,   281,
     281,   281,   281,   281,   281,   282,   283,   283,   284,   284,
     284,   284,   284,   284,   284,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     419,   420,   421,   422,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     498,   499,   499,   499,   499,   499,   499,   499,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   509,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519,   520,   521,   522,   523,   524,   524,   525,   526,   527,
     528,   529,   530,   531,   532,   532,   533,   533,   533,   533,
     533,   533,   533,   533,   533,   533,   534,   535,   536,   537,
     538,   539,   540,   541,   542,   543,   544,   545,   545,   546,
     546,   546,   546,   546,   547,   548,   549,   550,   551,   552
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
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
       2,     2,     2,     2,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     4,     4,     4,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     2,     2,     2,     1,     2,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     2,     0,     1,     2,     2,
       2,     3,     3,     1,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     0,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     3
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
    default: /* Avoid compiler warnings. */
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
        case 14:
#line 182 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("\nP(server:)\n")); 
	}
#line 2592 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 206:
#line 273 "util/configparser.y" /* yacc.c:1648  */
    {
		struct config_stub* s;
		OUTYY(("\nP(stub_zone:)\n")); 
		s = (struct config_stub*)calloc(1, sizeof(struct config_stub));
		if(s) {
			s->next = cfg_parser->cfg->stubs;
			cfg_parser->cfg->stubs = s;
		} else 
			yyerror("out of memory");
	}
#line 2607 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 216:
#line 290 "util/configparser.y" /* yacc.c:1648  */
    {
		struct config_stub* s;
		OUTYY(("\nP(forward_zone:)\n")); 
		s = (struct config_stub*)calloc(1, sizeof(struct config_stub));
		if(s) {
			s->next = cfg_parser->cfg->forwards;
			cfg_parser->cfg->forwards = s;
		} else 
			yyerror("out of memory");
	}
#line 2622 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 225:
#line 307 "util/configparser.y" /* yacc.c:1648  */
    {
		struct config_view* s;
		OUTYY(("\nP(view:)\n")); 
		s = (struct config_view*)calloc(1, sizeof(struct config_view));
		if(s) {
			s->next = cfg_parser->cfg->views;
			if(s->next && !s->next->name)
				yyerror("view without name");
			cfg_parser->cfg->views = s;
		} else 
			yyerror("out of memory");
	}
#line 2639 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 235:
#line 326 "util/configparser.y" /* yacc.c:1648  */
    {
		struct config_auth* s;
		OUTYY(("\nP(auth_zone:)\n")); 
		s = (struct config_auth*)calloc(1, sizeof(struct config_auth));
		if(s) {
			s->next = cfg_parser->cfg->auths;
			cfg_parser->cfg->auths = s;
			/* defaults for auth zone */
			s->for_downstream = 1;
			s->for_upstream = 1;
			s->fallback_enabled = 0;
		} else 
			yyerror("out of memory");
	}
#line 2658 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 246:
#line 348 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_num_threads:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->num_threads = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 2670 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 247:
#line 357 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_verbosity:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->verbosity = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 2682 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 248:
#line 366 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_statistics_interval:%s)\n", (yyvsp[0].str))); 
		if(strcmp((yyvsp[0].str), "") == 0 || strcmp((yyvsp[0].str), "0") == 0)
			cfg_parser->cfg->stat_interval = 0;
		else if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else cfg_parser->cfg->stat_interval = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 2696 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 249:
#line 377 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_statistics_cumulative:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->stat_cumulative = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 2708 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 250:
#line 386 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_extended_statistics:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->stat_extended = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 2720 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 251:
#line 395 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_shm_enable:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->shm_enable = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 2732 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 252:
#line 404 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_shm_key:%s)\n", (yyvsp[0].str))); 
		if(strcmp((yyvsp[0].str), "") == 0 || strcmp((yyvsp[0].str), "0") == 0)
			cfg_parser->cfg->shm_key = 0;
		else if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else cfg_parser->cfg->shm_key = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 2746 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 253:
#line 415 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_port:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("port number expected");
		else cfg_parser->cfg->port = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 2758 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 254:
#line 424 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(server_send_client_subnet:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->client_subnet, (yyvsp[0].str)))
			fatal_exit("out of memory adding client-subnet");
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
	}
#line 2772 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 255:
#line 435 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(server_client_subnet_zone:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->client_subnet_zone,
			(yyvsp[0].str)))
			fatal_exit("out of memory adding client-subnet-zone");
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
	}
#line 2787 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 256:
#line 448 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(server_client_subnet_always_forward:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else
			cfg_parser->cfg->client_subnet_always_forward =
				(strcmp((yyvsp[0].str), "yes")==0);
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2805 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 257:
#line 463 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(client_subnet_opcode:%s)\n", (yyvsp[0].str)));
		OUTYY(("P(Deprecated option, ignoring)\n"));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2819 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 258:
#line 474 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(max_client_subnet_ipv4:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("IPv4 subnet length expected");
		else if (atoi((yyvsp[0].str)) > 32)
			cfg_parser->cfg->max_client_subnet_ipv4 = 32;
		else if (atoi((yyvsp[0].str)) < 0)
			cfg_parser->cfg->max_client_subnet_ipv4 = 0;
		else cfg_parser->cfg->max_client_subnet_ipv4 = (uint8_t)atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2839 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 259:
#line 491 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(max_client_subnet_ipv6:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("Ipv6 subnet length expected");
		else if (atoi((yyvsp[0].str)) > 128)
			cfg_parser->cfg->max_client_subnet_ipv6 = 128;
		else if (atoi((yyvsp[0].str)) < 0)
			cfg_parser->cfg->max_client_subnet_ipv6 = 0;
		else cfg_parser->cfg->max_client_subnet_ipv6 = (uint8_t)atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2859 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 260:
#line 508 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(min_client_subnet_ipv4:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("IPv4 subnet length expected");
		else if (atoi((yyvsp[0].str)) > 32)
			cfg_parser->cfg->min_client_subnet_ipv4 = 32;
		else if (atoi((yyvsp[0].str)) < 0)
			cfg_parser->cfg->min_client_subnet_ipv4 = 0;
		else cfg_parser->cfg->min_client_subnet_ipv4 = (uint8_t)atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2879 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 261:
#line 525 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(min_client_subnet_ipv6:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("Ipv6 subnet length expected");
		else if (atoi((yyvsp[0].str)) > 128)
			cfg_parser->cfg->min_client_subnet_ipv6 = 128;
		else if (atoi((yyvsp[0].str)) < 0)
			cfg_parser->cfg->min_client_subnet_ipv6 = 0;
		else cfg_parser->cfg->min_client_subnet_ipv6 = (uint8_t)atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2899 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 262:
#line 542 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(max_ecs_tree_size_ipv4:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("IPv4 ECS tree size expected");
		else if (atoi((yyvsp[0].str)) < 0)
			cfg_parser->cfg->max_ecs_tree_size_ipv4 = 0;
		else cfg_parser->cfg->max_ecs_tree_size_ipv4 = (uint32_t)atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2917 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 263:
#line 557 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef CLIENT_SUBNET
		OUTYY(("P(max_ecs_tree_size_ipv6:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("IPv6 ECS tree size expected");
		else if (atoi((yyvsp[0].str)) < 0)
			cfg_parser->cfg->max_ecs_tree_size_ipv6 = 0;
		else cfg_parser->cfg->max_ecs_tree_size_ipv6 = (uint32_t)atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without edns subnet option, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 2935 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 264:
#line 572 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_interface:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->num_ifs == 0)
			cfg_parser->cfg->ifs = calloc(1, sizeof(char*));
		else 	cfg_parser->cfg->ifs = realloc(cfg_parser->cfg->ifs,
				(cfg_parser->cfg->num_ifs+1)*sizeof(char*));
		if(!cfg_parser->cfg->ifs)
			yyerror("out of memory");
		else
			cfg_parser->cfg->ifs[cfg_parser->cfg->num_ifs++] = (yyvsp[0].str);
	}
#line 2951 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 265:
#line 585 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_outgoing_interface:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->num_out_ifs == 0)
			cfg_parser->cfg->out_ifs = calloc(1, sizeof(char*));
		else 	cfg_parser->cfg->out_ifs = realloc(
			cfg_parser->cfg->out_ifs, 
			(cfg_parser->cfg->num_out_ifs+1)*sizeof(char*));
		if(!cfg_parser->cfg->out_ifs)
			yyerror("out of memory");
		else
			cfg_parser->cfg->out_ifs[
				cfg_parser->cfg->num_out_ifs++] = (yyvsp[0].str);
	}
#line 2969 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 266:
#line 600 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_outgoing_range:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else cfg_parser->cfg->outgoing_num_ports = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 2981 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 267:
#line 609 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_outgoing_port_permit:%s)\n", (yyvsp[0].str)));
		if(!cfg_mark_ports((yyvsp[0].str), 1, 
			cfg_parser->cfg->outgoing_avail_ports, 65536))
			yyerror("port number or range (\"low-high\") expected");
		free((yyvsp[0].str));
	}
#line 2993 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 268:
#line 618 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_outgoing_port_avoid:%s)\n", (yyvsp[0].str)));
		if(!cfg_mark_ports((yyvsp[0].str), 0, 
			cfg_parser->cfg->outgoing_avail_ports, 65536))
			yyerror("port number or range (\"low-high\") expected");
		free((yyvsp[0].str));
	}
#line 3005 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 269:
#line 627 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_outgoing_num_tcp:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->outgoing_num_tcp = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3017 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 270:
#line 636 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_incoming_num_tcp:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->incoming_num_tcp = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3029 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 271:
#line 645 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_interface_automatic:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->if_automatic = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3041 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 272:
#line 654 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_ip4:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->do_ip4 = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3053 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 273:
#line 663 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_ip6:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->do_ip6 = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3065 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 274:
#line 672 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_udp:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->do_udp = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3077 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 275:
#line 681 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_tcp:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->do_tcp = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3089 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 276:
#line 690 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_prefer_ip6:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->prefer_ip6 = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3101 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 277:
#line 699 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tcp_mss:%s)\n", (yyvsp[0].str)));
                if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
                        yyerror("number expected");
                else cfg_parser->cfg->tcp_mss = atoi((yyvsp[0].str));
                free((yyvsp[0].str));
	}
#line 3113 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 278:
#line 708 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_outgoing_tcp_mss:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->outgoing_tcp_mss = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3125 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 279:
#line 717 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tcp_idle_timeout:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else if (atoi((yyvsp[0].str)) > 120000)
			cfg_parser->cfg->tcp_idle_timeout = 120000;
		else if (atoi((yyvsp[0].str)) < 1)
			cfg_parser->cfg->tcp_idle_timeout = 1;
		else cfg_parser->cfg->tcp_idle_timeout = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3141 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 280:
#line 730 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tcp_keepalive:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->do_tcp_keepalive = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3153 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 281:
#line 739 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tcp_keepalive_timeout:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else if (atoi((yyvsp[0].str)) > 6553500)
			cfg_parser->cfg->tcp_keepalive_timeout = 6553500;
		else if (atoi((yyvsp[0].str)) < 1)
			cfg_parser->cfg->tcp_keepalive_timeout = 0;
		else cfg_parser->cfg->tcp_keepalive_timeout = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3169 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 282:
#line 752 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tcp_upstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->tcp_upstream = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3181 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 283:
#line 761 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_udp_upstream_without_downstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->udp_upstream_without_downstream = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3193 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 284:
#line 770 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ssl_upstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->ssl_upstream = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3205 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 285:
#line 779 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ssl_service_key:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->ssl_service_key);
		cfg_parser->cfg->ssl_service_key = (yyvsp[0].str);
	}
#line 3215 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 286:
#line 786 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ssl_service_pem:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->ssl_service_pem);
		cfg_parser->cfg->ssl_service_pem = (yyvsp[0].str);
	}
#line 3225 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 287:
#line 793 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ssl_port:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("port number expected");
		else cfg_parser->cfg->ssl_port = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3237 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 288:
#line 802 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tls_cert_bundle:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->tls_cert_bundle);
		cfg_parser->cfg->tls_cert_bundle = (yyvsp[0].str);
	}
#line 3247 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 289:
#line 809 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tls_win_cert:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->tls_win_cert = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3259 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 290:
#line 818 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tls_additional_port:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->tls_additional_port,
			(yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3270 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 291:
#line 826 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tls_ciphers:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->tls_ciphers);
		cfg_parser->cfg->tls_ciphers = (yyvsp[0].str);
	}
#line 3280 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 292:
#line 833 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tls_ciphersuites:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->tls_ciphersuites);
		cfg_parser->cfg->tls_ciphersuites = (yyvsp[0].str);
	}
#line 3290 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 293:
#line 840 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tls_session_ticket_keys:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_append(&cfg_parser->cfg->tls_session_ticket_keys,
			(yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3301 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 294:
#line 848 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_use_systemd:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->use_systemd = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3313 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 295:
#line 857 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_daemonize:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->do_daemonize = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3325 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 296:
#line 866 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_use_syslog:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->use_syslog = (strcmp((yyvsp[0].str), "yes")==0);
#if !defined(HAVE_SYSLOG_H) && !defined(UB_ON_WINDOWS)
		if(strcmp((yyvsp[0].str), "yes") == 0)
			yyerror("no syslog services are available. "
				"(reconfigure and compile to add)");
#endif
		free((yyvsp[0].str));
	}
#line 3342 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 297:
#line 880 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_log_time_ascii:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->log_time_ascii = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3354 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 298:
#line 889 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_log_queries:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->log_queries = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3366 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 299:
#line 898 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(server_log_replies:%s)\n", (yyvsp[0].str)));
  	if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
  		yyerror("expected yes or no.");
  	else cfg_parser->cfg->log_replies = (strcmp((yyvsp[0].str), "yes")==0);
  	free((yyvsp[0].str));
  }
#line 3378 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 300:
#line 907 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(server_log_tag_queryreply:%s)\n", (yyvsp[0].str)));
  	if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
  		yyerror("expected yes or no.");
  	else cfg_parser->cfg->log_tag_queryreply = (strcmp((yyvsp[0].str), "yes")==0);
  	free((yyvsp[0].str));
  }
#line 3390 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 301:
#line 916 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_log_servfail:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->log_servfail = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3402 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 302:
#line 925 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(server_log_local_actions:%s)\n", (yyvsp[0].str)));
  	if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
  		yyerror("expected yes or no.");
  	else cfg_parser->cfg->log_local_actions = (strcmp((yyvsp[0].str), "yes")==0);
  	free((yyvsp[0].str));
  }
#line 3414 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 303:
#line 934 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_chroot:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->chrootdir);
		cfg_parser->cfg->chrootdir = (yyvsp[0].str);
	}
#line 3424 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 304:
#line 941 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_username:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->username);
		cfg_parser->cfg->username = (yyvsp[0].str);
	}
#line 3434 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 305:
#line 948 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_directory:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->directory);
		cfg_parser->cfg->directory = (yyvsp[0].str);
		/* change there right away for includes relative to this */
		if((yyvsp[0].str)[0]) {
			char* d;
#ifdef UB_ON_WINDOWS
			w_config_adjust_directory(cfg_parser->cfg);
#endif
			d = cfg_parser->cfg->directory;
			/* adjust directory if we have already chroot,
			 * like, we reread after sighup */
			if(cfg_parser->chroot && cfg_parser->chroot[0] &&
				strncmp(d, cfg_parser->chroot, strlen(
				cfg_parser->chroot)) == 0)
				d += strlen(cfg_parser->chroot);
			if(d[0]) {
			    if(chdir(d))
				log_err("cannot chdir to directory: %s (%s)",
					d, strerror(errno));
			}
		}
	}
#line 3463 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 306:
#line 974 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_logfile:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->logfile);
		cfg_parser->cfg->logfile = (yyvsp[0].str);
		cfg_parser->cfg->use_syslog = 0;
	}
#line 3474 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 307:
#line 982 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_pidfile:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->pidfile);
		cfg_parser->cfg->pidfile = (yyvsp[0].str);
	}
#line 3484 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 308:
#line 989 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_root_hints:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->root_hints, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3494 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 309:
#line 996 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_dlv_anchor_file:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->dlv_anchor_file);
		cfg_parser->cfg->dlv_anchor_file = (yyvsp[0].str);
	}
#line 3504 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 310:
#line 1003 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_dlv_anchor:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->dlv_anchor_list, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3514 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 311:
#line 1010 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_auto_trust_anchor_file:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->
			auto_trust_anchor_file_list, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3525 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 312:
#line 1018 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_trust_anchor_file:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->
			trust_anchor_file_list, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3536 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 313:
#line 1026 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_trusted_keys_file:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->
			trusted_keys_file_list, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3547 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 314:
#line 1034 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_trust_anchor:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->trust_anchor_list, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3557 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 315:
#line 1041 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_trust_anchor_signaling:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else
			cfg_parser->cfg->trust_anchor_signaling =
				(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3571 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 316:
#line 1052 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_root_key_sentinel:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else
			cfg_parser->cfg->root_key_sentinel =
				(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3585 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 317:
#line 1063 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_domain_insecure:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->domain_insecure, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 3595 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 318:
#line 1070 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_hide_identity:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->hide_identity = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3607 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 319:
#line 1079 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_hide_version:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->hide_version = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3619 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 320:
#line 1088 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_hide_trustanchor:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->hide_trustanchor = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3631 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 321:
#line 1097 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_identity:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->identity);
		cfg_parser->cfg->identity = (yyvsp[0].str);
	}
#line 3641 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 322:
#line 1104 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_version:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->version);
		cfg_parser->cfg->version = (yyvsp[0].str);
	}
#line 3651 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 323:
#line 1111 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_so_rcvbuf:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->so_rcvbuf))
			yyerror("buffer size expected");
		free((yyvsp[0].str));
	}
#line 3662 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 324:
#line 1119 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_so_sndbuf:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->so_sndbuf))
			yyerror("buffer size expected");
		free((yyvsp[0].str));
	}
#line 3673 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 325:
#line 1127 "util/configparser.y" /* yacc.c:1648  */
    {
        OUTYY(("P(server_so_reuseport:%s)\n", (yyvsp[0].str)));
        if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
            yyerror("expected yes or no.");
        else cfg_parser->cfg->so_reuseport =
            (strcmp((yyvsp[0].str), "yes")==0);
        free((yyvsp[0].str));
    }
#line 3686 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 326:
#line 1137 "util/configparser.y" /* yacc.c:1648  */
    {
        OUTYY(("P(server_ip_transparent:%s)\n", (yyvsp[0].str)));
        if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
            yyerror("expected yes or no.");
        else cfg_parser->cfg->ip_transparent =
            (strcmp((yyvsp[0].str), "yes")==0);
        free((yyvsp[0].str));
    }
#line 3699 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 327:
#line 1147 "util/configparser.y" /* yacc.c:1648  */
    {
        OUTYY(("P(server_ip_freebind:%s)\n", (yyvsp[0].str)));
        if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
            yyerror("expected yes or no.");
        else cfg_parser->cfg->ip_freebind =
            (strcmp((yyvsp[0].str), "yes")==0);
        free((yyvsp[0].str));
    }
#line 3712 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 328:
#line 1157 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_stream_wait_size:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->stream_wait_size))
			yyerror("memory size expected");
		free((yyvsp[0].str));
	}
#line 3723 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 329:
#line 1165 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_edns_buffer_size:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else if (atoi((yyvsp[0].str)) < 12)
			yyerror("edns buffer size too small");
		else if (atoi((yyvsp[0].str)) > 65535)
			cfg_parser->cfg->edns_buffer_size = 65535;
		else cfg_parser->cfg->edns_buffer_size = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3739 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 330:
#line 1178 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_msg_buffer_size:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else if (atoi((yyvsp[0].str)) < 4096)
			yyerror("message buffer size too small (use 4096)");
		else cfg_parser->cfg->msg_buffer_size = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3753 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 331:
#line 1189 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_msg_cache_size:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->msg_cache_size))
			yyerror("memory size expected");
		free((yyvsp[0].str));
	}
#line 3764 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 332:
#line 1197 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_msg_cache_slabs:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else {
			cfg_parser->cfg->msg_cache_slabs = atoi((yyvsp[0].str));
			if(!is_pow2(cfg_parser->cfg->msg_cache_slabs))
				yyerror("must be a power of 2");
		}
		free((yyvsp[0].str));
	}
#line 3780 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 333:
#line 1210 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_num_queries_per_thread:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else cfg_parser->cfg->num_queries_per_thread = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3792 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 334:
#line 1219 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_jostle_timeout:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->jostle_time = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3804 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 335:
#line 1228 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_delay_close:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->delay_close = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3816 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 336:
#line 1237 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_unblock_lan_zones:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->unblock_lan_zones = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3829 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 337:
#line 1247 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_insecure_lan_zones:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->insecure_lan_zones = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3842 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 338:
#line 1257 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_rrset_cache_size:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->rrset_cache_size))
			yyerror("memory size expected");
		free((yyvsp[0].str));
	}
#line 3853 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 339:
#line 1265 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_rrset_cache_slabs:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else {
			cfg_parser->cfg->rrset_cache_slabs = atoi((yyvsp[0].str));
			if(!is_pow2(cfg_parser->cfg->rrset_cache_slabs))
				yyerror("must be a power of 2");
		}
		free((yyvsp[0].str));
	}
#line 3869 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 340:
#line 1278 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_infra_host_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->host_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3881 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 341:
#line 1287 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_infra_lame_ttl:%s)\n", (yyvsp[0].str)));
		verbose(VERB_DETAIL, "ignored infra-lame-ttl: %s (option "
			"removed, use infra-host-ttl)", (yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3892 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 342:
#line 1295 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_infra_cache_numhosts:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else cfg_parser->cfg->infra_cache_numhosts = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3904 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 343:
#line 1304 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_infra_cache_lame_size:%s)\n", (yyvsp[0].str)));
		verbose(VERB_DETAIL, "ignored infra-cache-lame-size: %s "
			"(option removed, use infra-cache-numhosts)", (yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3915 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 344:
#line 1312 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_infra_cache_slabs:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else {
			cfg_parser->cfg->infra_cache_slabs = atoi((yyvsp[0].str));
			if(!is_pow2(cfg_parser->cfg->infra_cache_slabs))
				yyerror("must be a power of 2");
		}
		free((yyvsp[0].str));
	}
#line 3931 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 345:
#line 1325 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_infra_cache_min_rtt:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->infra_cache_min_rtt = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 3943 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 346:
#line 1334 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_target_fetch_policy:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->target_fetch_policy);
		cfg_parser->cfg->target_fetch_policy = (yyvsp[0].str);
	}
#line 3953 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 347:
#line 1341 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_short_bufsize:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_short_bufsize = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3966 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 348:
#line 1351 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_large_queries:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_large_queries = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3979 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 349:
#line 1361 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_glue:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_glue = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 3992 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 350:
#line 1371 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_dnssec_stripped:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_dnssec_stripped = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4005 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 351:
#line 1381 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_below_nxdomain:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_below_nxdomain = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4018 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 352:
#line 1391 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_referral_path:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_referral_path = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4031 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 353:
#line 1401 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_harden_algo_downgrade:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->harden_algo_downgrade = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4044 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 354:
#line 1411 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_use_caps_for_id:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->use_caps_bits_for_id = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4057 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 355:
#line 1421 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_caps_whitelist:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->caps_whitelist, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 4067 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 356:
#line 1428 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_private_address:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->private_address, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 4077 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 357:
#line 1435 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_private_domain:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->private_domain, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 4087 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 358:
#line 1442 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_prefetch:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->prefetch = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4099 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 359:
#line 1451 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_prefetch_key:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->prefetch_key = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4111 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 360:
#line 1460 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_deny_any:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->deny_any = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4123 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 361:
#line 1469 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_unwanted_reply_threshold:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->unwanted_threshold = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4135 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 362:
#line 1478 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_not_query_address:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->donotqueryaddrs, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 4145 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 363:
#line 1485 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_do_not_query_localhost:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->donotquery_localhost = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4158 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 364:
#line 1495 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_access_control:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "deny")!=0 && strcmp((yyvsp[0].str), "refuse")!=0 &&
			strcmp((yyvsp[0].str), "deny_non_local")!=0 &&
			strcmp((yyvsp[0].str), "refuse_non_local")!=0 &&
			strcmp((yyvsp[0].str), "allow_setrd")!=0 && 
			strcmp((yyvsp[0].str), "allow")!=0 && 
			strcmp((yyvsp[0].str), "allow_snoop")!=0) {
			yyerror("expected deny, refuse, deny_non_local, "
				"refuse_non_local, allow, allow_setrd or "
				"allow_snoop in access control action");
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		} else {
			if(!cfg_str2list_insert(&cfg_parser->cfg->acls, (yyvsp[-1].str), (yyvsp[0].str)))
				fatal_exit("out of memory adding acl");
		}
	}
#line 4181 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 365:
#line 1515 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_module_conf:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->module_conf);
		cfg_parser->cfg->module_conf = (yyvsp[0].str);
	}
#line 4191 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 366:
#line 1522 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_override_date:%s)\n", (yyvsp[0].str)));
		if(*(yyvsp[0].str) == '\0' || strcmp((yyvsp[0].str), "0") == 0) {
			cfg_parser->cfg->val_date_override = 0;
		} else if(strlen((yyvsp[0].str)) == 14) {
			cfg_parser->cfg->val_date_override = 
				cfg_convert_timeval((yyvsp[0].str));
			if(!cfg_parser->cfg->val_date_override)
				yyerror("bad date/time specification");
		} else {
			if(atoi((yyvsp[0].str)) == 0)
				yyerror("number expected");
			cfg_parser->cfg->val_date_override = atoi((yyvsp[0].str));
		}
		free((yyvsp[0].str));
	}
#line 4212 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 367:
#line 1540 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_sig_skew_min:%s)\n", (yyvsp[0].str)));
		if(*(yyvsp[0].str) == '\0' || strcmp((yyvsp[0].str), "0") == 0) {
			cfg_parser->cfg->val_sig_skew_min = 0;
		} else {
			cfg_parser->cfg->val_sig_skew_min = atoi((yyvsp[0].str));
			if(!cfg_parser->cfg->val_sig_skew_min)
				yyerror("number expected");
		}
		free((yyvsp[0].str));
	}
#line 4228 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 368:
#line 1553 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_sig_skew_max:%s)\n", (yyvsp[0].str)));
		if(*(yyvsp[0].str) == '\0' || strcmp((yyvsp[0].str), "0") == 0) {
			cfg_parser->cfg->val_sig_skew_max = 0;
		} else {
			cfg_parser->cfg->val_sig_skew_max = atoi((yyvsp[0].str));
			if(!cfg_parser->cfg->val_sig_skew_max)
				yyerror("number expected");
		}
		free((yyvsp[0].str));
	}
#line 4244 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 369:
#line 1566 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_cache_max_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->max_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4256 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 370:
#line 1575 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_cache_max_negative_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->max_negative_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4268 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 371:
#line 1584 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_cache_min_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->min_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4280 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 372:
#line 1593 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_bogus_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->bogus_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4292 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 373:
#line 1602 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_clean_additional:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->val_clean_additional = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4305 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 374:
#line 1612 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_permissive_mode:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->val_permissive_mode = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4318 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 375:
#line 1622 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_aggressive_nsec:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else
			cfg_parser->cfg->aggressive_nsec =
				(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4332 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 376:
#line 1633 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ignore_cd_flag:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->ignore_cd = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4344 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 377:
#line 1642 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_serve_expired:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->serve_expired = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4356 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 378:
#line 1651 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_serve_expired_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->serve_expired_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4368 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 379:
#line 1660 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_serve_expired_ttl_reset:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->serve_expired_ttl_reset = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4380 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 380:
#line 1669 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_fake_dsa:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
#ifdef HAVE_SSL
		else fake_dsa = (strcmp((yyvsp[0].str), "yes")==0);
		if(fake_dsa)
			log_warn("test option fake_dsa is enabled");
#endif
		free((yyvsp[0].str));
	}
#line 4396 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 381:
#line 1682 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_fake_sha1:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
#ifdef HAVE_SSL
		else fake_sha1 = (strcmp((yyvsp[0].str), "yes")==0);
		if(fake_sha1)
			log_warn("test option fake_sha1 is enabled");
#endif
		free((yyvsp[0].str));
	}
#line 4412 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 382:
#line 1695 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_log_level:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->val_log_level = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4424 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 383:
#line 1704 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_val_nsec3_keysize_iterations:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->val_nsec3_key_iterations);
		cfg_parser->cfg->val_nsec3_key_iterations = (yyvsp[0].str);
	}
#line 4434 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 384:
#line 1711 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_add_holddown:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->add_holddown = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4446 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 385:
#line 1720 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_del_holddown:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->del_holddown = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4458 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 386:
#line 1729 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_keep_missing:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->keep_missing = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4470 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 387:
#line 1738 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_permit_small_holddown:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->permit_small_holddown =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4483 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 388:
#line 1747 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_key_cache_size:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->key_cache_size))
			yyerror("memory size expected");
		free((yyvsp[0].str));
	}
#line 4494 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 389:
#line 1755 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_key_cache_slabs:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else {
			cfg_parser->cfg->key_cache_slabs = atoi((yyvsp[0].str));
			if(!is_pow2(cfg_parser->cfg->key_cache_slabs))
				yyerror("must be a power of 2");
		}
		free((yyvsp[0].str));
	}
#line 4510 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 390:
#line 1768 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_neg_cache_size:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->neg_cache_size))
			yyerror("memory size expected");
		free((yyvsp[0].str));
	}
#line 4521 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 391:
#line 1776 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_local_zone:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "static")!=0 && strcmp((yyvsp[0].str), "deny")!=0 &&
		   strcmp((yyvsp[0].str), "refuse")!=0 && strcmp((yyvsp[0].str), "redirect")!=0 &&
		   strcmp((yyvsp[0].str), "transparent")!=0 && strcmp((yyvsp[0].str), "nodefault")!=0
		   && strcmp((yyvsp[0].str), "typetransparent")!=0
		   && strcmp((yyvsp[0].str), "always_transparent")!=0
		   && strcmp((yyvsp[0].str), "always_refuse")!=0
		   && strcmp((yyvsp[0].str), "always_nxdomain")!=0
		   && strcmp((yyvsp[0].str), "noview")!=0
		   && strcmp((yyvsp[0].str), "inform")!=0 && strcmp((yyvsp[0].str), "inform_deny")!=0
		   && strcmp((yyvsp[0].str), "inform_redirect") != 0) {
			yyerror("local-zone type: expected static, deny, "
				"refuse, redirect, transparent, "
				"typetransparent, inform, inform_deny, "
				"inform_redirect, always_transparent, "
				"always_refuse, always_nxdomain, noview "
				"or nodefault");
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		} else if(strcmp((yyvsp[0].str), "nodefault")==0) {
			if(!cfg_strlist_insert(&cfg_parser->cfg->
				local_zones_nodefault, (yyvsp[-1].str)))
				fatal_exit("out of memory adding local-zone");
			free((yyvsp[0].str));
		} else {
			if(!cfg_str2list_insert(&cfg_parser->cfg->local_zones, 
				(yyvsp[-1].str), (yyvsp[0].str)))
				fatal_exit("out of memory adding local-zone");
		}
	}
#line 4557 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 392:
#line 1809 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_local_data:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->local_data, (yyvsp[0].str)))
			fatal_exit("out of memory adding local-data");
	}
#line 4567 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 393:
#line 1816 "util/configparser.y" /* yacc.c:1648  */
    {
		char* ptr;
		OUTYY(("P(server_local_data_ptr:%s)\n", (yyvsp[0].str)));
		ptr = cfg_ptr_reverse((yyvsp[0].str));
		free((yyvsp[0].str));
		if(ptr) {
			if(!cfg_strlist_insert(&cfg_parser->cfg->
				local_data, ptr))
				fatal_exit("out of memory adding local-data");
		} else {
			yyerror("local-data-ptr could not be reversed");
		}
	}
#line 4585 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 394:
#line 1831 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_minimal_responses:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->minimal_responses =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4598 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 395:
#line 1841 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_rrset_roundrobin:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->rrset_roundrobin =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4611 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 396:
#line 1851 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_unknown_server_time_limit:%s)\n", (yyvsp[0].str)));
		cfg_parser->cfg->unknown_server_time_limit = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4621 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 397:
#line 1858 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_max_udp_size:%s)\n", (yyvsp[0].str)));
		cfg_parser->cfg->max_udp_size = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4631 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 398:
#line 1865 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dns64_prefix:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->dns64_prefix);
		cfg_parser->cfg->dns64_prefix = (yyvsp[0].str);
	}
#line 4641 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 399:
#line 1872 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_dns64_synthall:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dns64_synthall = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4653 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 400:
#line 1881 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dns64_ignore_aaaa:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->dns64_ignore_aaaa,
			(yyvsp[0].str)))
			fatal_exit("out of memory adding dns64-ignore-aaaa");
	}
#line 4664 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 401:
#line 1889 "util/configparser.y" /* yacc.c:1648  */
    {
		char* p, *s = (yyvsp[0].str);
		OUTYY(("P(server_define_tag:%s)\n", (yyvsp[0].str)));
		while((p=strsep(&s, " \t\n")) != NULL) {
			if(*p) {
				if(!config_add_tag(cfg_parser->cfg, p))
					yyerror("could not define-tag, "
						"out of memory");
			}
		}
		free((yyvsp[0].str));
	}
#line 4681 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 402:
#line 1903 "util/configparser.y" /* yacc.c:1648  */
    {
		size_t len = 0;
		uint8_t* bitlist = config_parse_taglist(cfg_parser->cfg, (yyvsp[0].str),
			&len);
		free((yyvsp[0].str));
		OUTYY(("P(server_local_zone_tag:%s)\n", (yyvsp[-1].str)));
		if(!bitlist) {
			yyerror("could not parse tags, (define-tag them first)");
			free((yyvsp[-1].str));
		}
		if(bitlist) {
			if(!cfg_strbytelist_insert(
				&cfg_parser->cfg->local_zone_tags,
				(yyvsp[-1].str), bitlist, len)) {
				yyerror("out of memory");
				free((yyvsp[-1].str));
			}
		}
	}
#line 4705 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 403:
#line 1924 "util/configparser.y" /* yacc.c:1648  */
    {
		size_t len = 0;
		uint8_t* bitlist = config_parse_taglist(cfg_parser->cfg, (yyvsp[0].str),
			&len);
		free((yyvsp[0].str));
		OUTYY(("P(server_access_control_tag:%s)\n", (yyvsp[-1].str)));
		if(!bitlist) {
			yyerror("could not parse tags, (define-tag them first)");
			free((yyvsp[-1].str));
		}
		if(bitlist) {
			if(!cfg_strbytelist_insert(
				&cfg_parser->cfg->acl_tags,
				(yyvsp[-1].str), bitlist, len)) {
				yyerror("out of memory");
				free((yyvsp[-1].str));
			}
		}
	}
#line 4729 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 404:
#line 1945 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_access_control_tag_action:%s %s %s)\n", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)));
		if(!cfg_str3list_insert(&cfg_parser->cfg->acl_tag_actions,
			(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str))) {
			yyerror("out of memory");
			free((yyvsp[-2].str));
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		}
	}
#line 4744 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 405:
#line 1957 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_access_control_tag_data:%s %s %s)\n", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)));
		if(!cfg_str3list_insert(&cfg_parser->cfg->acl_tag_datas,
			(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str))) {
			yyerror("out of memory");
			free((yyvsp[-2].str));
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		}
	}
#line 4759 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 406:
#line 1969 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_local_zone_override:%s %s %s)\n", (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str)));
		if(!cfg_str3list_insert(&cfg_parser->cfg->local_zone_overrides,
			(yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[0].str))) {
			yyerror("out of memory");
			free((yyvsp[-2].str));
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		}
	}
#line 4774 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 407:
#line 1981 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_access_control_view:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if(!cfg_str2list_insert(&cfg_parser->cfg->acl_view,
			(yyvsp[-1].str), (yyvsp[0].str))) {
			yyerror("out of memory");
		}
	}
#line 4786 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 408:
#line 1990 "util/configparser.y" /* yacc.c:1648  */
    {
		size_t len = 0;
		uint8_t* bitlist = config_parse_taglist(cfg_parser->cfg, (yyvsp[0].str),
			&len);
		free((yyvsp[0].str));
		OUTYY(("P(response_ip_tag:%s)\n", (yyvsp[-1].str)));
		if(!bitlist) {
			yyerror("could not parse tags, (define-tag them first)");
			free((yyvsp[-1].str));
		}
		if(bitlist) {
			if(!cfg_strbytelist_insert(
				&cfg_parser->cfg->respip_tags,
				(yyvsp[-1].str), bitlist, len)) {
				yyerror("out of memory");
				free((yyvsp[-1].str));
			}
		}
	}
#line 4810 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 409:
#line 2011 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_ip_ratelimit:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->ip_ratelimit = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4822 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 410:
#line 2021 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_ratelimit:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->ratelimit = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4834 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 411:
#line 2030 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(server_ip_ratelimit_size:%s)\n", (yyvsp[0].str)));
  	if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->ip_ratelimit_size))
  		yyerror("memory size expected");
  	free((yyvsp[0].str));
  }
#line 4845 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 412:
#line 2038 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ratelimit_size:%s)\n", (yyvsp[0].str)));
		if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->ratelimit_size))
			yyerror("memory size expected");
		free((yyvsp[0].str));
	}
#line 4856 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 413:
#line 2046 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(server_ip_ratelimit_slabs:%s)\n", (yyvsp[0].str)));
  	if(atoi((yyvsp[0].str)) == 0)
  		yyerror("number expected");
  	else {
  		cfg_parser->cfg->ip_ratelimit_slabs = atoi((yyvsp[0].str));
  		if(!is_pow2(cfg_parser->cfg->ip_ratelimit_slabs))
  			yyerror("must be a power of 2");
  	}
  	free((yyvsp[0].str));
  }
#line 4872 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 414:
#line 2059 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ratelimit_slabs:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("number expected");
		else {
			cfg_parser->cfg->ratelimit_slabs = atoi((yyvsp[0].str));
			if(!is_pow2(cfg_parser->cfg->ratelimit_slabs))
				yyerror("must be a power of 2");
		}
		free((yyvsp[0].str));
	}
#line 4888 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 415:
#line 2072 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ratelimit_for_domain:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0) {
			yyerror("number expected");
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		} else {
			if(!cfg_str2list_insert(&cfg_parser->cfg->
				ratelimit_for_domain, (yyvsp[-1].str), (yyvsp[0].str)))
				fatal_exit("out of memory adding "
					"ratelimit-for-domain");
		}
	}
#line 4906 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 416:
#line 2087 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_ratelimit_below_domain:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0) {
			yyerror("number expected");
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		} else {
			if(!cfg_str2list_insert(&cfg_parser->cfg->
				ratelimit_below_domain, (yyvsp[-1].str), (yyvsp[0].str)))
				fatal_exit("out of memory adding "
					"ratelimit-below-domain");
		}
	}
#line 4924 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 417:
#line 2102 "util/configparser.y" /* yacc.c:1648  */
    { 
  	OUTYY(("P(server_ip_ratelimit_factor:%s)\n", (yyvsp[0].str))); 
  	if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
  		yyerror("number expected");
  	else cfg_parser->cfg->ip_ratelimit_factor = atoi((yyvsp[0].str));
  	free((yyvsp[0].str));
	}
#line 4936 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 418:
#line 2111 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_ratelimit_factor:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->ratelimit_factor = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4948 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 419:
#line 2120 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(low-rtt option is deprecated, use fast-server-num instead)\n"));
		free((yyvsp[0].str));
	}
#line 4957 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 420:
#line 2126 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_fast_server_num:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) <= 0)
			yyerror("number expected");
		else cfg_parser->cfg->fast_server_num = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4969 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 421:
#line 2135 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("P(server_fast_server_permil:%s)\n", (yyvsp[0].str))); 
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->fast_server_permil = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 4981 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 422:
#line 2144 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_qname_minimisation:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->qname_minimisation = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 4994 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 423:
#line 2154 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_qname_minimisation_strict:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->qname_minimisation_strict = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5007 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 424:
#line 2164 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_IPSECMOD
		OUTYY(("P(server_ipsecmod_enabled:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->ipsecmod_enabled = (strcmp((yyvsp[0].str), "yes")==0);
	#else
		OUTYY(("P(Compiled without IPsec module, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 5023 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 425:
#line 2177 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_IPSECMOD
		OUTYY(("P(server_ipsecmod_ignore_bogus:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->ipsecmod_ignore_bogus = (strcmp((yyvsp[0].str), "yes")==0);
	#else
		OUTYY(("P(Compiled without IPsec module, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 5039 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 426:
#line 2190 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_IPSECMOD
		OUTYY(("P(server_ipsecmod_hook:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->ipsecmod_hook);
		cfg_parser->cfg->ipsecmod_hook = (yyvsp[0].str);
	#else
		OUTYY(("P(Compiled without IPsec module, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5054 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 427:
#line 2202 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_IPSECMOD
		OUTYY(("P(server_ipsecmod_max_ttl:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0 && strcmp((yyvsp[0].str), "0") != 0)
			yyerror("number expected");
		else cfg_parser->cfg->ipsecmod_max_ttl = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without IPsec module, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5071 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 428:
#line 2216 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_IPSECMOD
		OUTYY(("P(server_ipsecmod_whitelist:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->ipsecmod_whitelist, (yyvsp[0].str)))
			yyerror("out of memory");
	#else
		OUTYY(("P(Compiled without IPsec module, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5086 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 429:
#line 2228 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_IPSECMOD
		OUTYY(("P(server_ipsecmod_strict:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->ipsecmod_strict = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without IPsec module, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5103 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 430:
#line 2242 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(name:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->stubs->name)
			yyerror("stub name override, there must be one name "
				"for one stub-zone");
		free(cfg_parser->cfg->stubs->name);
		cfg_parser->cfg->stubs->name = (yyvsp[0].str);
	}
#line 5116 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 431:
#line 2252 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(stub-host:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->stubs->hosts, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5126 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 432:
#line 2259 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(stub-addr:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->stubs->addrs, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5136 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 433:
#line 2266 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(stub-first:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->stubs->isfirst=(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5148 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 434:
#line 2275 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(stub-no-cache:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->stubs->no_cache=(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5160 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 435:
#line 2284 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(stub-ssl-upstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->stubs->ssl_upstream = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5173 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 436:
#line 2294 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(stub-prime:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->stubs->isprime = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5186 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 437:
#line 2304 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(name:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->forwards->name)
			yyerror("forward name override, there must be one "
				"name for one forward-zone");
		free(cfg_parser->cfg->forwards->name);
		cfg_parser->cfg->forwards->name = (yyvsp[0].str);
	}
#line 5199 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 438:
#line 2314 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(forward-host:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->forwards->hosts, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5209 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 439:
#line 2321 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(forward-addr:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->forwards->addrs, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5219 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 440:
#line 2328 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(forward-first:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->forwards->isfirst=(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5231 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 441:
#line 2337 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(forward-no-cache:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->forwards->no_cache=(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5243 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 442:
#line 2346 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(forward-ssl-upstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->forwards->ssl_upstream = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5256 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 443:
#line 2356 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(name:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->auths->name)
			yyerror("auth name override, there must be one name "
				"for one auth-zone");
		free(cfg_parser->cfg->auths->name);
		cfg_parser->cfg->auths->name = (yyvsp[0].str);
	}
#line 5269 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 444:
#line 2366 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(zonefile:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->auths->zonefile);
		cfg_parser->cfg->auths->zonefile = (yyvsp[0].str);
	}
#line 5279 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 445:
#line 2373 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(master:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->auths->masters, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5289 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 446:
#line 2380 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(url:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->auths->urls, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5299 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 447:
#line 2387 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(allow-notify:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->auths->allow_notify,
			(yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5310 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 448:
#line 2395 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(for-downstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->auths->for_downstream =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5323 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 449:
#line 2405 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(for-upstream:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->auths->for_upstream =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5336 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 450:
#line 2415 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(fallback-enabled:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->auths->fallback_enabled =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5349 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 451:
#line 2425 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(name:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->views->name)
			yyerror("view name override, there must be one "
				"name for one view");
		free(cfg_parser->cfg->views->name);
		cfg_parser->cfg->views->name = (yyvsp[0].str);
	}
#line 5362 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 452:
#line 2435 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(view_local_zone:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "static")!=0 && strcmp((yyvsp[0].str), "deny")!=0 &&
		   strcmp((yyvsp[0].str), "refuse")!=0 && strcmp((yyvsp[0].str), "redirect")!=0 &&
		   strcmp((yyvsp[0].str), "transparent")!=0 && strcmp((yyvsp[0].str), "nodefault")!=0
		   && strcmp((yyvsp[0].str), "typetransparent")!=0
		   && strcmp((yyvsp[0].str), "always_transparent")!=0
		   && strcmp((yyvsp[0].str), "always_refuse")!=0
		   && strcmp((yyvsp[0].str), "always_nxdomain")!=0
		   && strcmp((yyvsp[0].str), "noview")!=0
		   && strcmp((yyvsp[0].str), "inform")!=0 && strcmp((yyvsp[0].str), "inform_deny")!=0) {
			yyerror("local-zone type: expected static, deny, "
				"refuse, redirect, transparent, "
				"typetransparent, inform, inform_deny, "
				"always_transparent, always_refuse, "
				"always_nxdomain, noview or nodefault");
			free((yyvsp[-1].str));
			free((yyvsp[0].str));
		} else if(strcmp((yyvsp[0].str), "nodefault")==0) {
			if(!cfg_strlist_insert(&cfg_parser->cfg->views->
				local_zones_nodefault, (yyvsp[-1].str)))
				fatal_exit("out of memory adding local-zone");
			free((yyvsp[0].str));
		} else {
			if(!cfg_str2list_insert(
				&cfg_parser->cfg->views->local_zones, 
				(yyvsp[-1].str), (yyvsp[0].str)))
				fatal_exit("out of memory adding local-zone");
		}
	}
#line 5397 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 453:
#line 2467 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(view_response_ip:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		validate_respip_action((yyvsp[0].str));
		if(!cfg_str2list_insert(
			&cfg_parser->cfg->views->respip_actions, (yyvsp[-1].str), (yyvsp[0].str)))
			fatal_exit("out of memory adding per-view "
				"response-ip action");
	}
#line 5410 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 454:
#line 2477 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(view_response_ip_data:%s)\n", (yyvsp[-1].str)));
		if(!cfg_str2list_insert(
			&cfg_parser->cfg->views->respip_data, (yyvsp[-1].str), (yyvsp[0].str)))
			fatal_exit("out of memory adding response-ip-data");
	}
#line 5421 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 455:
#line 2485 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(view_local_data:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->views->local_data, (yyvsp[0].str))) {
			fatal_exit("out of memory adding local-data");
		}
	}
#line 5432 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 456:
#line 2493 "util/configparser.y" /* yacc.c:1648  */
    {
		char* ptr;
		OUTYY(("P(view_local_data_ptr:%s)\n", (yyvsp[0].str)));
		ptr = cfg_ptr_reverse((yyvsp[0].str));
		free((yyvsp[0].str));
		if(ptr) {
			if(!cfg_strlist_insert(&cfg_parser->cfg->views->
				local_data, ptr))
				fatal_exit("out of memory adding local-data");
		} else {
			yyerror("local-data-ptr could not be reversed");
		}
	}
#line 5450 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 457:
#line 2508 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(view-first:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->views->isfirst=(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5462 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 458:
#line 2517 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("\nP(remote-control:)\n")); 
	}
#line 5470 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 469:
#line 2528 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(control_enable:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->remote_control_enable = 
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5483 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 470:
#line 2538 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(control_port:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("control port number expected");
		else cfg_parser->cfg->control_port = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 5495 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 471:
#line 2547 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(control_interface:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_append(&cfg_parser->cfg->control_ifs, (yyvsp[0].str)))
			yyerror("out of memory");
	}
#line 5505 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 472:
#line 2554 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(control_use_cert:%s)\n", (yyvsp[0].str)));
		cfg_parser->cfg->control_use_cert = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5515 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 473:
#line 2561 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(rc_server_key_file:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->server_key_file);
		cfg_parser->cfg->server_key_file = (yyvsp[0].str);
	}
#line 5525 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 474:
#line 2568 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(rc_server_cert_file:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->server_cert_file);
		cfg_parser->cfg->server_cert_file = (yyvsp[0].str);
	}
#line 5535 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 475:
#line 2575 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(rc_control_key_file:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->control_key_file);
		cfg_parser->cfg->control_key_file = (yyvsp[0].str);
	}
#line 5545 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 476:
#line 2582 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(rc_control_cert_file:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->control_cert_file);
		cfg_parser->cfg->control_cert_file = (yyvsp[0].str);
	}
#line 5555 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 477:
#line 2589 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("\nP(dnstap:)\n"));
	}
#line 5563 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 492:
#line 2606 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_enable:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5575 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 493:
#line 2615 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_socket_path:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->dnstap_socket_path);
		cfg_parser->cfg->dnstap_socket_path = (yyvsp[0].str);
	}
#line 5585 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 494:
#line 2622 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_send_identity:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_send_identity = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5597 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 495:
#line 2631 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_send_version:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_send_version = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5609 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 496:
#line 2640 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_identity:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->dnstap_identity);
		cfg_parser->cfg->dnstap_identity = (yyvsp[0].str);
	}
#line 5619 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 497:
#line 2647 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_version:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->dnstap_version);
		cfg_parser->cfg->dnstap_version = (yyvsp[0].str);
	}
#line 5629 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 498:
#line 2654 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_log_resolver_query_messages:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_log_resolver_query_messages =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5642 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 499:
#line 2664 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_log_resolver_response_messages:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_log_resolver_response_messages =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5655 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 500:
#line 2674 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_log_client_query_messages:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_log_client_query_messages =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5668 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 501:
#line 2684 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_log_client_response_messages:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_log_client_response_messages =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5681 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 502:
#line 2694 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_log_forwarder_query_messages:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_log_forwarder_query_messages =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5694 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 503:
#line 2704 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dt_dnstap_log_forwarder_response_messages:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnstap_log_forwarder_response_messages =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5707 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 504:
#line 2714 "util/configparser.y" /* yacc.c:1648  */
    { 
		OUTYY(("\nP(python:)\n")); 
	}
#line 5715 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 508:
#line 2723 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(python-script:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->python_script);
		cfg_parser->cfg->python_script = (yyvsp[0].str);
	}
#line 5725 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 509:
#line 2729 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(disable_dnssec_lame_check:%s)\n", (yyvsp[0].str)));
		if (strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->disable_dnssec_lame_check =
			(strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5738 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 510:
#line 2739 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_log_identity:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->log_identity);
		cfg_parser->cfg->log_identity = (yyvsp[0].str);
	}
#line 5748 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 511:
#line 2746 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_response_ip:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		validate_respip_action((yyvsp[0].str));
		if(!cfg_str2list_insert(&cfg_parser->cfg->respip_actions,
			(yyvsp[-1].str), (yyvsp[0].str)))
			fatal_exit("out of memory adding response-ip");
	}
#line 5760 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 512:
#line 2755 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_response_ip_data:%s)\n", (yyvsp[-1].str)));
		if(!cfg_str2list_insert(&cfg_parser->cfg->respip_data,
			(yyvsp[-1].str), (yyvsp[0].str)))
			fatal_exit("out of memory adding response-ip-data");
	}
#line 5771 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 513:
#line 2763 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("\nP(dnscrypt:)\n"));
	}
#line 5779 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 526:
#line 2779 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dnsc_dnscrypt_enable:%s)\n", (yyvsp[0].str)));
		if(strcmp((yyvsp[0].str), "yes") != 0 && strcmp((yyvsp[0].str), "no") != 0)
			yyerror("expected yes or no.");
		else cfg_parser->cfg->dnscrypt = (strcmp((yyvsp[0].str), "yes")==0);
		free((yyvsp[0].str));
	}
#line 5791 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 527:
#line 2789 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dnsc_dnscrypt_port:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("port number expected");
		else cfg_parser->cfg->dnscrypt_port = atoi((yyvsp[0].str));
		free((yyvsp[0].str));
	}
#line 5803 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 528:
#line 2798 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dnsc_dnscrypt_provider:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->dnscrypt_provider);
		cfg_parser->cfg->dnscrypt_provider = (yyvsp[0].str);
	}
#line 5813 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 529:
#line 2805 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dnsc_dnscrypt_provider_cert:%s)\n", (yyvsp[0].str)));
		if(cfg_strlist_find(cfg_parser->cfg->dnscrypt_provider_cert, (yyvsp[0].str)))
			log_warn("dnscrypt-provider-cert %s is a duplicate", (yyvsp[0].str));
		if(!cfg_strlist_insert(&cfg_parser->cfg->dnscrypt_provider_cert, (yyvsp[0].str)))
			fatal_exit("out of memory adding dnscrypt-provider-cert");
	}
#line 5825 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 530:
#line 2814 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dnsc_dnscrypt_provider_cert_rotated:%s)\n", (yyvsp[0].str)));
		if(!cfg_strlist_insert(&cfg_parser->cfg->dnscrypt_provider_cert_rotated, (yyvsp[0].str)))
			fatal_exit("out of memory adding dnscrypt-provider-cert-rotated");
	}
#line 5835 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 531:
#line 2821 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(dnsc_dnscrypt_secret_key:%s)\n", (yyvsp[0].str)));
		if(cfg_strlist_find(cfg_parser->cfg->dnscrypt_secret_key, (yyvsp[0].str)))
			log_warn("dnscrypt-secret-key: %s is a duplicate", (yyvsp[0].str));
		if(!cfg_strlist_insert(&cfg_parser->cfg->dnscrypt_secret_key, (yyvsp[0].str)))
			fatal_exit("out of memory adding dnscrypt-secret-key");
	}
#line 5847 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 532:
#line 2830 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(dnscrypt_shared_secret_cache_size:%s)\n", (yyvsp[0].str)));
  	if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->dnscrypt_shared_secret_cache_size))
  		yyerror("memory size expected");
  	free((yyvsp[0].str));
  }
#line 5858 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 533:
#line 2838 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(dnscrypt_shared_secret_cache_slabs:%s)\n", (yyvsp[0].str)));
  	if(atoi((yyvsp[0].str)) == 0)
  		yyerror("number expected");
  	else {
  		cfg_parser->cfg->dnscrypt_shared_secret_cache_slabs = atoi((yyvsp[0].str));
  		if(!is_pow2(cfg_parser->cfg->dnscrypt_shared_secret_cache_slabs))
  			yyerror("must be a power of 2");
  	}
  	free((yyvsp[0].str));
  }
#line 5874 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 534:
#line 2851 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(dnscrypt_nonce_cache_size:%s)\n", (yyvsp[0].str)));
  	if(!cfg_parse_memsize((yyvsp[0].str), &cfg_parser->cfg->dnscrypt_nonce_cache_size))
  		yyerror("memory size expected");
  	free((yyvsp[0].str));
  }
#line 5885 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 535:
#line 2859 "util/configparser.y" /* yacc.c:1648  */
    {
  	OUTYY(("P(dnscrypt_nonce_cache_slabs:%s)\n", (yyvsp[0].str)));
  	if(atoi((yyvsp[0].str)) == 0)
  		yyerror("number expected");
  	else {
  		cfg_parser->cfg->dnscrypt_nonce_cache_slabs = atoi((yyvsp[0].str));
  		if(!is_pow2(cfg_parser->cfg->dnscrypt_nonce_cache_slabs))
  			yyerror("must be a power of 2");
  	}
  	free((yyvsp[0].str));
  }
#line 5901 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 536:
#line 2872 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("\nP(cachedb:)\n"));
	}
#line 5909 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 544:
#line 2882 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_CACHEDB
		OUTYY(("P(backend:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->cachedb_backend)
			yyerror("cachedb backend override, there must be one "
				"backend");
		free(cfg_parser->cfg->cachedb_backend);
		cfg_parser->cfg->cachedb_backend = (yyvsp[0].str);
	#else
		OUTYY(("P(Compiled without cachedb, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5927 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 545:
#line 2897 "util/configparser.y" /* yacc.c:1648  */
    {
	#ifdef USE_CACHEDB
		OUTYY(("P(secret-seed:%s)\n", (yyvsp[0].str)));
		if(cfg_parser->cfg->cachedb_secret)
			yyerror("cachedb secret-seed override, there must be "
				"only one secret");
		free(cfg_parser->cfg->cachedb_secret);
		cfg_parser->cfg->cachedb_secret = (yyvsp[0].str);
	#else
		OUTYY(("P(Compiled without cachedb, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5945 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 546:
#line 2912 "util/configparser.y" /* yacc.c:1648  */
    {
	#if defined(USE_CACHEDB) && defined(USE_REDIS)
		OUTYY(("P(redis_server_host:%s)\n", (yyvsp[0].str)));
		free(cfg_parser->cfg->redis_server_host);
		cfg_parser->cfg->redis_server_host = (yyvsp[0].str);
	#else
		OUTYY(("P(Compiled without cachedb or redis, ignoring)\n"));
		free((yyvsp[0].str));
	#endif
	}
#line 5960 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 547:
#line 2924 "util/configparser.y" /* yacc.c:1648  */
    {
	#if defined(USE_CACHEDB) && defined(USE_REDIS)
		int port;
		OUTYY(("P(redis_server_port:%s)\n", (yyvsp[0].str)));
		port = atoi((yyvsp[0].str));
		if(port == 0 || port < 0 || port > 65535)
			yyerror("valid redis server port number expected");
		else cfg_parser->cfg->redis_server_port = port;
	#else
		OUTYY(("P(Compiled without cachedb or redis, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 5978 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 548:
#line 2939 "util/configparser.y" /* yacc.c:1648  */
    {
	#if defined(USE_CACHEDB) && defined(USE_REDIS)
		OUTYY(("P(redis_timeout:%s)\n", (yyvsp[0].str)));
		if(atoi((yyvsp[0].str)) == 0)
			yyerror("redis timeout value expected");
		else cfg_parser->cfg->redis_timeout = atoi((yyvsp[0].str));
	#else
		OUTYY(("P(Compiled without cachedb or redis, ignoring)\n"));
	#endif
		free((yyvsp[0].str));
	}
#line 5994 "util/configparser.c" /* yacc.c:1648  */
    break;

  case 549:
#line 2952 "util/configparser.y" /* yacc.c:1648  */
    {
		OUTYY(("P(server_tcp_connection_limit:%s %s)\n", (yyvsp[-1].str), (yyvsp[0].str)));
		if (atoi((yyvsp[0].str)) < 0)
			yyerror("positive number expected");
		else {
			if(!cfg_str2list_insert(&cfg_parser->cfg->tcp_connection_limits, (yyvsp[-1].str), (yyvsp[0].str)))
				fatal_exit("out of memory adding tcp connection limit");
		}
	}
#line 6008 "util/configparser.c" /* yacc.c:1648  */
    break;


#line 6012 "util/configparser.c" /* yacc.c:1648  */
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
#line 2962 "util/configparser.y" /* yacc.c:1907  */


/* parse helper routines could be here */
static void
validate_respip_action(const char* action)
{
	if(strcmp(action, "deny")!=0 &&
		strcmp(action, "redirect")!=0 &&
		strcmp(action, "inform")!=0 &&
		strcmp(action, "inform_deny")!=0 &&
		strcmp(action, "always_transparent")!=0 &&
		strcmp(action, "always_refuse")!=0 &&
		strcmp(action, "always_nxdomain")!=0)
	{
		yyerror("response-ip action: expected deny, redirect, "
			"inform, inform_deny, always_transparent, "
			"always_refuse or always_nxdomain");
	}
}
