/*
 * ircd-hybrid: an advanced Internet Relay Chat Daemon (ircd).
 * cloak.c: Provides hostname (partial) cloaking for clients.
 *
 * Copyright (c) 2005 by the past and present ircd coders, and others.
 * Copyright (c) 2004 The UnrealIRCd Team
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at you option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILILTY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have recieved a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA
 *
 * $Id: cloak.c 463 2006-12-25 05:50:02Z jon $
 */

#include "stdinc.h"
#include "whowas.h"
#include "channel_mode.h"
#include "client.h"
#include "hash.h"
#include "irc_string.h"
#include "ircd.h"
#include "ircd_defs.h"
#include "numeric.h"
#include "server.h"
#include "user.h"
#include "send.h"
#include "modules.h"
#include "memory.h"
#include "cloak.h"
#include "conf.h"
#include "log.h"

#include <openssl/md5.h>

/** Generates an MD5 checksum.
 * @param mdout[out] Buffer to store result in, the result will be 16 bytes in binary
 *                   (not ascii printable!).
 * @param src[in]    The input data used to generate the checksum.
 * @param n[in]      Length of data.
 */
static void
DoMD5(char *mdout, size_t sz, char *src, unsigned long n)
{
  MD5_CTX hash;

  assert(sz >= MD5_DIGEST_LENGTH);

  MD5_Init(&hash);
  MD5_Update(&hash, src, n);
  MD5_Final((unsigned char *) mdout, &hash);
}

static int
check_badrandomness(char *key)
{
  char gotlowcase = 0, gotupcase = 0, gotdigit = 0;
  char *p;
  for(p = key; *p; p++)
    if(islower(*p))
      gotlowcase = 1;
    else if(isupper(*p))
      gotupcase = 1;
    else if(isdigit(*p))
      gotdigit = 1;

  if(gotlowcase && gotupcase && gotdigit)
    return 0;
  return 1;
}

void
init_cloak(void)
{
  int errors = 0;

  if(ConfigGeneral.cloak_key1 == NULL)
  {
    ilog(LOG_TYPE_IRCD, "cloak_key1 does not exist! Cloaking system has been disabled");
    return;
  }

  if(ConfigGeneral.cloak_key2 == NULL)
  {
    ilog(LOG_TYPE_IRCD, "cloak_key2 does not exist! Cloaking system has been disabled");
    return;
  }

  if(ConfigGeneral.cloak_key3 == NULL)
  {
    ilog(LOG_TYPE_IRCD, "cloak_key3 does not exist! Cloaking system has been disabled");
    return;
  }

  if(check_badrandomness(ConfigGeneral.cloak_key1))
  {
    ilog(LOG_TYPE_IRCD,
         "cloak_key1: Keys should be mixed a-zA-Z0-9, like \"a2JO6fh3Q6w4oN3s7\"");
    errors = 1;
  }

  if(check_badrandomness(ConfigGeneral.cloak_key2))
  {
    ilog(LOG_TYPE_IRCD,
         "cloak_key2: Keys should be mixed a-zA-Z0-9, like \"a2JO6fh3Q6w4oN3s7\"");
    errors = 1;
  }

  if(check_badrandomness(ConfigGeneral.cloak_key3))
  {
    ilog(LOG_TYPE_IRCD,
         "cloak_key3: Keys should be mixed a-zA-Z0-9, like \"a2JO6fh3Q6w4oN3s7\"");
    errors = 1;
  }

  if((strlen(ConfigGeneral.cloak_key1) < 5) || (strlen(ConfigGeneral.cloak_key1) > 100))
  {
    ilog(LOG_TYPE_IRCD,
         "cloak_key1: Each key should be at least 5 characters, and no longer than 100");
    errors = 1;
  }

  if((strlen(ConfigGeneral.cloak_key2) < 5) || (strlen(ConfigGeneral.cloak_key2) > 100))
  {
    ilog(LOG_TYPE_IRCD,
         "cloak_key2: Each key should be at least 5 characters, and no longer than 100");
    errors = 1;
  }

  if((strlen(ConfigGeneral.cloak_key3) < 5) || (strlen(ConfigGeneral.cloak_key3) > 100))
  {
    ilog(LOG_TYPE_IRCD,
         "cloak_key3: Each key should be at least 5 characters, and no longer than 100");
    errors = 1;
  }

  if(!strcmp(ConfigGeneral.cloak_key1, ConfigGeneral.cloak_key2)
     || !strcmp(ConfigGeneral.cloak_key2, ConfigGeneral.cloak_key3))
  {
    ilog(LOG_TYPE_IRCD, "All your 3 keys should be RANDOM, they should not be equal");
    errors = 1;
  }

  /* Don't allow huge names */
  if(strlen(ConfigGeneral.cloak_mask) > 50)
  {
    ilog(LOG_TYPE_IRCD, "Your cloak mask needs to be under 50 characters");
    errors = 1;
  }

  if(errors > 0)
  {
    ilog(LOG_TYPE_IRCD, "There were errors with your cloak keys. The cloaking system has been disabled");
    ConfigGeneral.enable_cloak_system = 0;
    return;
  }

  ConfigGeneral.enable_cloak_system = 1;
}

/** Downsamples a 128bit result to 32bits (md5 -> unsigned int) */
static inline unsigned int
downsample(const char *i)
{
  char r[4];

  r[0] = i[0] ^ i[1] ^ i[2] ^ i[3];
  r[1] = i[4] ^ i[5] ^ i[6] ^ i[7];
  r[2] = i[8] ^ i[9] ^ i[10] ^ i[11];
  r[3] = i[12] ^ i[13] ^ i[14] ^ i[15];

  return (((unsigned int) r[0] << 24) +
    ((unsigned int) r[1] << 16) + ((unsigned int) r[2] << 8) + (unsigned int) r[3]);
}

static const char *
hidehost_ipv4(const char *host)
{
  unsigned int a, b, c, d;
  char buf[IRCD_BUFSIZE], res[IRCD_BUFSIZE], res2[IRCD_BUFSIZE];
  static char result[IRCD_BUFSIZE];
  unsigned long n;
  unsigned int alpha, beta, gamma;

  a = b = c = d = 0;

  /*
   * Output: ALPHA.BETA.GAMMA.IP
   * ALPHA is unique for a.b.c.d
   * BETA  is unique for a.b.c.*
   * GAMMA is unique for a.b.*
   * We cloak like this:
   * ALPHA = downsample(md5(md5("cloak_key2:A.B.C.D:cloak_key3")+"cloak_key1"));
   * BETA  = downsample(md5(md5("cloak_key3:A.B.C:cloak_key1")+"cloak_key2"));
   * GAMMA = downsample(md5(md5("cloak_key1:A.B:cloak_key2")+"cloak_key3"));
   */
  sscanf(host, "%u.%u.%u.%u", &a, &b, &c, &d);

  /* ALPHA... */
  snprintf(buf, sizeof(buf), "%s:%s:%s", ConfigGeneral.cloak_key2, host, ConfigGeneral.cloak_key3);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key1, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  alpha = downsample(res2);

  /* BETA... */
  snprintf(buf, sizeof(buf), "%s:%d.%d.%d:%s", ConfigGeneral.cloak_key3, a, b, c, ConfigGeneral.cloak_key1);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key2, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  beta = downsample(res2);

  /* GAMMA... */
  snprintf(buf, sizeof(buf), "%s:%d.%d:%s", ConfigGeneral.cloak_key1, a, b, ConfigGeneral.cloak_key2);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key3, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  gamma = downsample(res2);

  snprintf(result, sizeof(result), "%X.%X.%X.IP", alpha, beta, gamma);
  return result;
}

static const char *
hidehost_ipv6(const char *host)
{
  unsigned int a, b, c, d, e, f, g, h;
  char buf[IRCD_BUFSIZE], res[IRCD_BUFSIZE], res2[IRCD_BUFSIZE];
  static char result[IRCD_BUFSIZE];
  unsigned long n;
  unsigned int alpha, beta, gamma;

  /*
   * Output: ALPHA:BETA:GAMMA:IP
   * ALPHA is unique for a:b:c:d:e:f:g:h
   * BETA  is unique for a:b:c:d:e:f:g
   * GAMMA is unique for a:b:c:d
   * We cloak like this:
   * ALPHA = downsample(md5(md5("cloak_key2:a:b:c:d:e:f:g:h:cloak_key3")+"cloak_key1"));
   * BETA  = downsample(md5(md5("cloak_key3:a:b:c:d:e:f:g:cloak_key1")+"cloak_key2"));
   * GAMMA = downsample(md5(md5("cloak_key1:a:b:c:d:cloak_key2")+"cloak_key3"));
   */

  /* Hosts may contain :: and not match %x:%x:%x:%x:%x:%x:%x:%x, so initialize these
   * or we generate the cloak from uninitialized values!
   */
  a = b = c = d = e = f = g = h = 0;

  sscanf(host, "%x:%x:%x:%x:%x:%x:%x:%x", &a, &b, &c, &d, &e, &f, &g, &h);

  /* ALPHA... */
  snprintf(buf, sizeof(buf), "%s:%s:%s", ConfigGeneral.cloak_key2, host, ConfigGeneral.cloak_key3);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key1, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  alpha = downsample(res2);

  /* BETA... */
  snprintf(buf, sizeof(buf), "%s:%x:%x:%x:%x:%x:%x:%x:%s", ConfigGeneral.cloak_key3, a, b, c, d, e, f, g, ConfigGeneral.cloak_key1);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key2, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  beta = downsample(res2);

  /* GAMMA... */
  snprintf(buf, sizeof(buf), "%s:%x:%x:%x:%x:%s", ConfigGeneral.cloak_key1, a, b, c, d, ConfigGeneral.cloak_key2);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key3, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  gamma = downsample(res2);

  snprintf(result, sizeof(result), "%X:%X:%X:IP", alpha, beta, gamma);
  return result;
}

static const char *
hidehost_normalhost(const char *host)
{
  const char *p;
  char buf[IRCD_BUFSIZE], res[IRCD_BUFSIZE], res2[IRCD_BUFSIZE];
  static char result[IRCD_BUFSIZE];
  unsigned int alpha, n;

  sprintf(buf, "%s:%s:%s", ConfigGeneral.cloak_key1, host, ConfigGeneral.cloak_key2);
  DoMD5(res, sizeof(res), buf, strlen(buf));
  strlcpy(res + MD5_DIGEST_LENGTH, ConfigGeneral.cloak_key3, sizeof(res) - MD5_DIGEST_LENGTH);  /* first 16 bytes are filled, append our key.. */
  n = strlen(res + MD5_DIGEST_LENGTH) + MD5_DIGEST_LENGTH;
  DoMD5(res2, sizeof(res2), res, n);
  alpha = downsample(res2);

  for(p = host; *p; p++)
    if(*p == '.')
      if(isalpha(*(p + 1)))
        break;

  if(*p)
  {
    unsigned int len;
    p++;
    snprintf(result, sizeof(result), "%s-%X.", ConfigGeneral.cloak_mask, alpha);
    len = strlen(result) + strlen(p);
    if(len <= HOSTLEN)
      strlcat(result, p, sizeof(result));
    else
      strlcat(result, p + (len - HOSTLEN), sizeof(result));
  }
  else
    snprintf(result, sizeof(result), "%s-%X", ConfigGeneral.cloak_mask, alpha);

  return result;
}

static const char *
hidehost(const char *host)
{
  const char *p;

  /* IPv6 ? */
  if(strchr(host, ':'))
    return hidehost_ipv6(host);

  /* Is this a IPv4 IP? */
  for(p = host; *p; p++)
    if(!isdigit(*p) && !(*p == '.'))
      break;
  if(!(*p))
    return hidehost_ipv4(host);

  /* Normal host */
  return hidehost_normalhost(host);
}

void
make_virthost(const char *curr, char *new, size_t sz)
{
  char host[IRCD_BUFSIZE], *q;
  const char *mask, *p;

  if (!ConfigGeneral.enable_cloak_system || !curr || !new)
    return;

  /* Convert host to lowercase and cut off at 255 bytes just to be sure */
  for(p = curr, q = host; *p && (q < host + sizeof(host) - 1); p++, q++)
    *q = tolower(*p);
  *q = '\0';

  mask = hidehost(host);

  strlcpy(new, mask, sz);
}
