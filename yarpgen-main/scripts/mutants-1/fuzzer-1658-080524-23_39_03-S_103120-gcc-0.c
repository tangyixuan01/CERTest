#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int numDigits(long unsigned int value)
{
  int n = 1;
  while (value > 0xffffffffU)
  {
    n += 4;
    value /= ((10 * 10) * 10) * 10;
  }

  unsigned int v = (unsigned int) value;
  while (1)
  {
    if (v < 10)
    {
      return n;
    }
    if (v < (10 * 10))
    {
      return n + 1;
    }
    if (v < ((10 * 10) * 10))
    {
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

