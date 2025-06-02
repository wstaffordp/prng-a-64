#ifndef PRNG_A_64_H
#define PRNG_A_64_H

#include <stdint.h>

struct prng_a_64_s {
  uint64_t a;
  uint64_t b;
};

uint64_t prng_a_64(struct prng_a_64_s *s);

#endif
