#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b = 1;
int *c = &a;
void foo(int p)
{
  int itzFpDMf = 1761027874;
  volatile unsigned hdsVIfba = 0U;
  volatile unsigned  ZXlf21ui = 0U;
  volatile unsigned * vropI8fz = &ZXlf21ui;
  volatile unsigned fV3igyNJ = 4294967295U;
  int t;
  for (t = 0; t < 16; t++)
  {
    p ^= -1;
    switch (itzFpDMf)
    {
      case 0x1111:
        vropI8fz = &fV3igyNJ;
        break;

      case 0x2222:
        vropI8fz = &hdsVIfba;
        break;

      default:
        return;

    }

  }

  transparent_crc(fV3igyNJ, "fV3igyNJ", 1);
  transparent_crc(hdsVIfba, "hdsVIfba", 1);
  transparent_crc(itzFpDMf, "itzFpDMf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *c = ~(p & b);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo(0);
  printf("%d\n", a);
  return 0;
}

