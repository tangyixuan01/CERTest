#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
struct S0
{
  int f0;
};
struct S1
{
  struct S0 f0;
};
struct S1 x = {{0}};
struct S1 y = {{1}};
static void foo(struct S0 p)
{
  struct S0 *l = &y.f0;
  *l = x.f0;
  if (p.f0)
  {
    *l = *l;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short psCL_e2h = (short)-10981;
  int N4VzHraL = 2147483647;
  foo(y.f0);
  printf("%d\n", y.f0.f0);
  while (psCL_e2h >= N4VzHraL)
    psCL_e2h++;

  transparent_crc(N4VzHraL, "N4VzHraL", 1);
  transparent_crc(psCL_e2h, "psCL_e2h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

