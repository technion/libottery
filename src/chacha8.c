#include "ottery-internal.h"
#include <string.h>/* XXXX remove me.*/

#define u64 uint64_t
#define u32 uint32_t
#define u8 uint8_t

#define CHACHA_RNDS 8

#if ! defined(OTTERY_NO_VECS)          \
       && (defined(__ARM_NEON__) ||    \
           defined(__ALTIVEC__)  ||    \
           defined(__SSE2__))
#include "src/chacha_krovetz.c"
#endif

#include "src/chacha_merged.c"

