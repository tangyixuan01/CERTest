#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

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
  int JtRZrQ1E = 110017099;
  volatile unsigned D1b4K6ut = 4294967295U;
  volatile unsigned  rfFTEnS7 = 4294967295U;
  volatile unsigned * RnjfV_rk = &rfFTEnS7;
  volatile unsigned MvmBbyXh = 4036726608U;
  struct S0 *l = &y.f0;
  *l = x.f0;
  transparent_crc(MvmBbyXh, "MvmBbyXh", 1);
  transparent_crc(D1b4K6ut, "D1b4K6ut", 1);
  transparent_crc(JtRZrQ1E, "JtRZrQ1E", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p.f0)
  {
    *l = *l;
    switch (JtRZrQ1E)
    {
      case 0x1111:
        RnjfV_rk = &MvmBbyXh;
        break;

      case 0x2222:
        RnjfV_rk = &D1b4K6ut;
        break;

      default:
        return;

    }

  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo(y.f0);
  printf("%d\n", y.f0.f0);
  return 0;
  while (((*((volatile unsigned char *) 0x1)) & 1) == 0)
    ;

}

