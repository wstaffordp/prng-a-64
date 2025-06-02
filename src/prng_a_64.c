#include "prng_a_64.h"

uint64_t prng_a_64(struct prng_a_64_s *s) {
  s->a += 11111111111111111ULL;
  s->b += (s->a << 16) | (s->a >> 48);
  return s->b;
}
