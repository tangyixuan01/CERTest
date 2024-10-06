#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-while-snippet -> insert-while-snippet

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
  int cp3PJeXW = -2147483648;
  int LWAOm5Be = -1711035390;
  int zgNsO3HK = -1500765770;
  unsigned v4bn3cdg = 1833539887U;
  int YvZmD8cX = -2147483648;
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
  transparent_crc(YvZmD8cX, "YvZmD8cX", 1);
  transparent_crc(v4bn3cdg, "v4bn3cdg", 1);
  transparent_crc(zgNsO3HK, "zgNsO3HK", 1);
  transparent_crc(LWAOm5Be, "LWAOm5Be", 1);
  transparent_crc(cp3PJeXW, "cp3PJeXW", 1);
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

      while (LWAOm5Be > 6)
      {
        int n;
        if (cp3PJeXW)
          break;
        zgNsO3HK = 1;
      }

      default:
        return;

      while (1)
      {
        float f;
        memcpy(&f, &v4bn3cdg, 4);
        if ((f >= 0.56) && (f <= 0.57))
          YvZmD8cX++;
        v4bn3cdg++;
        if (v4bn3cdg == 0)
          break;
      }

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

