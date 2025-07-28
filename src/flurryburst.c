#include "flurryburst.h"

uint8_t flurryburst8(struct flurryburst8_s *s) {
  s->a = ((s->a << 5) | (s->a >> 3)) + 111;
  s->b += 11;
  return s->a ^ s->b;
}
