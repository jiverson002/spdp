#ifndef SPDP_H
#define SPDP_H

#include <stdlib.h>

#if defined (__cplusplus)
extern "C" {
#endif

size_t spdp_compress(long, void const*, void*, size_t);
size_t spdp_decompress(void const*, void*, size_t);

#if defined (__cplusplus)
}
#endif

#endif /* SPDP_H */
