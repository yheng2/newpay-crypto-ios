#ifdef __OBJC__
#import <Foundation/Foundation.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

FOUNDATION_EXPORT double NewpayCryptoVersionNumber;
FOUNDATION_EXPORT const unsigned char NewpayCryptoVersionString[];

#include "aes.h"
#include "chacha20poly1305.h"
#include "ed25519-donna.h"
#include "address.h"
#include "base32.h"
#include "base58.h"
#include "bignum.h"
#include "bip32.h"
#include "bip39_english.h"
#include "bip39.h"
#include "blake2_common.h"
#include "blake256.h"
#include "blake2b.h"
#include "blake2s.h"
#include "cash_addr.h"
#include "chacha_drbg.h"
#include "check_mem.h"
#include "curves.h"
#include "ecdsa.h"
#include "groestl_internal.h"
#include "groestl.h"
#include "hasher.h"
#include "hmac_drbg.h"
#include "hmac.h"
#include "memzero.h"
#include "nem.h"
#include "nist256p1.h"
#include "pbkdf2.h"
#include "rand.h"
#include "rc4.h"
#include "rfc6979.h"
#include "ripemd160.h"
#include "script.h"
#include "secp256k1.h"
#include "segwit_addr.h"
#include "sha2.h"
#include "sha3.h"
#include "shamir.h"
#include "slip39_wordlist.h"
#include "slip39.h"
