#ifndef FLURRYBURST_H
#define FLURRYBURST_H

#include <stdint.h>

struct flurryburst8_s {
  uint8_t a;
  uint8_t b;
};

uint8_t flurryburst8(struct flurryburst8_s *s);

#endif
