#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet -> insert-if-snippet

int numDigits(long unsigned int value)
{
  unsigned J7Q5cPqA = 4100236040U;
  volatile int nKSJ05sL = -1753942300;
  int ShZjrb09 = 2147483647;
  int T95g0E8v = -981931869;
  int n = 1;
  while (value > 0xffffffffU)
  {
    n += 4;
    value /= ((10 * 10) * 10) * 10;
  }

  unsigned int v = (unsigned int) value;
  transparent_crc(T95g0E8v, "T95g0E8v", 1);
  transparent_crc(ShZjrb09, "ShZjrb09", 1);
  transparent_crc(nKSJ05sL, "nKSJ05sL", 1);
  transparent_crc(J7Q5cPqA, "J7Q5cPqA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    if (v < 10)
    {
      return n;
    }
    switch (ShZjrb09)
    {
      case 5:
        T95g0E8v = 1;
        break;

      case 6:
        T95g0E8v = 2;
        break;

      case 7:
        T95g0E8v = 3;
        break;

    }

    if (v < (10 * 10))
    {
      return n + 1;
    }
    if (v < ((10 * 10) * 10))
    {
      if (J7Q5cPqA)
        for (; nKSJ05sL; nKSJ05sL--)
        ;

      return n + 2;
    }
    if (v < (((10 * 10) * 10) * 10))
    {
      return n + 3;
    }
    n += 4;
    v /= ((10 * 10) * 10) * 10;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int O6RTw07D = 1775454188;
  int _6kF0csQ = 1396394280;
  int juSzPDb9 = -901295925;
  int H0RO4hy7 = 1625865903;
  transparent_crc(H0RO4hy7, "H0RO4hy7", 1);
  transparent_crc(juSzPDb9, "juSzPDb9", 1);
  transparent_crc(_6kF0csQ, "_6kF0csQ", 1);
  transparent_crc(O6RTw07D, "O6RTw07D", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (numDigits(0xffffffffffffffffUL) != 20)
  {
    __builtin_abort();
    for (; juSzPDb9 == 0; juSzPDb9 = (H0RO4hy7 = -1))
      while (O6RTw07D)
      _6kF0csQ = 0;


  }
}

