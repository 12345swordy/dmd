
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif
#include <stdint.h>


int adds(int x, int y, bool& overflow);
int64_t adds(int64_t x, int64_t y, bool& overflow);
unsigned addu(unsigned x, unsigned y, bool& overflow);
uint64_t addu(uint64_t x, uint64_t y, bool& overflow);

int subs(int x, int y, bool& overflow);
int64_t subs(int64_t x, int64_t y, bool& overflow);
unsigned subu(unsigned x, unsigned y, bool& overflow);
uint64_t subu(uint64_t x, uint64_t y, bool& overflow);

int negs(int x, bool& overflow);
int64_t negs(int64_t x, bool& overflow);

int muls(int x, int y, bool& overflow);
int64_t muls(int64_t x, int64_t y, bool& overflow);
unsigned mulu(unsigned x, unsigned y, bool& overflow);
uint64_t mulu(uint64_t x, uint64_t y, bool& overflow);
