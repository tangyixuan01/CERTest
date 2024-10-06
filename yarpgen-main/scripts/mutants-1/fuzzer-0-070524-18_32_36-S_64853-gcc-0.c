#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

struct S
{
  int f1;
};
static struct S a = {1};
char b;
static unsigned char *c = &b;
int d;
int e;
int f;
int fn1(int p)
{
  int KjQv9te4 = -90870574;
  long rSAB67Hl = -9223372036854775807LL;
  signed _Lj5CdN4 = 1;
  long kejtpD5_ = -9223372036854775807LL;
  transparent_crc(kejtpD5_, "kejtpD5_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  rSAB67Hl = (KjQv9te4 = _Lj5CdN4 && kejtpD5_);
  transparent_crc(_Lj5CdN4, "_Lj5CdN4", 1);
  transparent_crc(rSAB67Hl, "rSAB67Hl", 1);
  transparent_crc(KjQv9te4, "KjQv9te4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (0) ? (0) : (p - 1);
}

static int fn2(struct S p)
{
  int g = 200;
  for (e = 4; e; e = fn1(e))
  {
    for (; d; d++)
    {
      ;
    }

    *c &= p.f1 & g;
    g = --(*c);
    if (f)
    {
      return 0;
    }
  }

  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn2(a);
  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

