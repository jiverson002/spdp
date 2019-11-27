#ifndef SPDP_H
#define SPDP_H

#include <stdlib.h>

typedef unsigned char byte_t;

#if defined (__cplusplus)
extern "C" {
#endif

size_t spdp_compress(byte_t, size_t, byte_t*, byte_t*);
size_t spdp_decompress(byte_t, size_t, byte_t*, byte_t*);

#if defined (__cplusplus)
}
#endif

#endif /* SPDP_H */
