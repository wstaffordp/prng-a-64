# PRNG A 64

It's an extremely-fast, statistically-weak PRNG with 64-bit integers and a period of 2⁶⁵.

`prng_a_64()` is the randomization function that generates an 64-bit, pseudorandom, unsigned integer.

It accepts the following argument.

1. `s` is the pointer that contains the state. Each state integer must be initialized with any combination of values.

It has a minimum period of 2⁶⁵ without broken cycles.

Incrementing `a` outside of `prng_a_64()` behaves as an interdimensional jump function that starts a different cycle with a period of at least 2⁶⁵.

Zeroland escapes immediately after generating 1 subsequent number.

It's the fastest 64-bit PRNG that generates numbers individually with 64-bit state integers and passes bare-minimum statistical tests in `stdin64` PractRand with 16KB of numbers.

I welcome submissions of algorithms in the same class that challenge the aforementioned claim.

As an obligatory disclaimer, it's not a CSPRNG for use in cryptography.
