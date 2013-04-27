#ifndef crypto_stream_aes256estream_H
#define crypto_stream_aes256estream_H

/*
 *  WARNING: This is just a stream cipher. It is NOT authenticated encryption.
 *  While it provides some protection against eavesdropping, it does NOT
 *  provide any security against active attacks.
 *  Furthermore, this implementation was not part of NaCl.
 *  Unless you know what you're doing, what you are looking for is probably
 *  the crypto_box functions.
 */

#include "export.h"

#define crypto_stream_aes256estream_KEYBYTES 32
#define crypto_stream_aes256estream_NONCEBYTES 16
#define crypto_stream_aes256estream_BEFORENMBYTES 276

#ifdef __cplusplus
extern "C" {
#endif

SODIUM_EXPORT
int crypto_stream_aes256estream(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_aes256estream_xor(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_aes256estream_beforenm(unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_aes256estream_afternm(unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_stream_aes256estream_xor_afternm(unsigned char *,const unsigned char *,unsigned long long,const unsigned char *,const unsigned char *);

#ifdef __cplusplus
}
#endif

#define crypto_stream_aes256estream_hongjun crypto_stream_aes256estream
#define crypto_stream_aes256estream_hongjun_xor crypto_stream_aes256estream_xor
#define crypto_stream_aes256estream_hongjun_beforenm crypto_stream_aes256estream_beforenm
#define crypto_stream_aes256estream_hongjun_afternm crypto_stream_aes256estream_afternm
#define crypto_stream_aes256estream_hongjun_xor_afternm crypto_stream_aes256estream_xor_afternm

#endif