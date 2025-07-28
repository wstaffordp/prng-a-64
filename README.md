FlurryBurst is an extremely-fast, medium-period, statistically-strong PRNG that replaces many variants of PCG and Xorshift with enhanced statistical properties, faster generation speeds and larger periods.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.

The license is public domain. Anyone is free to use it for any purpose without restriction. It has no warranty.

`flurryburst8` is a deterministic PRNG function that generates an 8-bit, pseudorandom, unsigned integer from 8-bit state integers.

It accepts the following argument.

1. `s` is the `struct flurryburst8_s` pointer that contains the state. `a` must be seeded with `0` and `b` must be seeded with any `uint8_t` value.

The return value data type is `uint8_t`.

It has a period of between 2¹⁴ and 2¹⁵, precisely 18688. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁸ numbers and zeroland escapes immediately after 1 subsequent number generation.

It passes `stdin8` PractRand tests up to 4KB.

The RXS M XS variants of PCG8 pass `stdin8` PractRand tests up to a range of 1KB to 2KB. Furthermore, they generate predictable output with 1 cycle that has 1 of each number from a range of 2⁸ numbers.

Xorshift8 passes `stdin8` PractRand tests up to 1KB. Furthermore, it doesn't generate `0` and generates predictable output with 1 cycle that has 1 of each number from a range of (2⁸ - 1) numbers.

Detailed benchmark results are coming soon.

I welcome [submissions](https://github.com/wstaffordp/flurryburst/issues) of algorithms in each class that challenge the aforementioned claims.

16-bit, 32-bit and 64-bit variants are coming soon.

In conclusion, FlurryBurst provides enhanced distribution, period, security, speed and statistical test results as an ideal alternative to many PCG and Xorshift variants.
