#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet -> insert-if-snippet

static const long int TagTypeNumber = 0xffff000000000000ll;
long int x;
void foo(void)
{
  unsigned ZORkA7UY = 4294967295U;
  unsigned nMoNxalW = 667797816U;
  unsigned Q_AgHOzJ = 540920124U;
  for (ZORkA7UY = 0; ZORkA7UY < 2; ZORkA7UY++)
    for (Q_AgHOzJ = 0; Q_AgHOzJ < 2; Q_AgHOzJ++)
    if ((++nMoNxalW) < ZORkA7UY)
    __builtin_abort();


  transparent_crc(Q_AgHOzJ, "Q_AgHOzJ", 1);
  transparent_crc(nMoNxalW, "nMoNxalW", 1);
  transparent_crc(ZORkA7UY, "ZORkA7UY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  x = TagTypeNumber + 1;
}

int main(int argc, char **argv)
{
  platform_main_begin();
  crc32_gentab();
  int zB0tboWk = -2147483648;
  int pPncILsr = -174428266;
  int ZQb0Bx4d = -843208231;
  int fxRBt5dA = 2147483647;
  int SupqdmVg = 2147483647;
  if (argc > 0)
  {
    foo();
    if (zB0tboWk)
      --pPncILsr;
    SupqdmVg = fxRBt5dA / ZQb0Bx4d;
  }
  if ((x & TagTypeNumber) == TagTypeNumber)
  {
    unsigned y = (unsigned) x;
    __builtin_printf("v: %u\n", y);
    if (y != 1)
    {
      __builtin_abort();
    }
    transparent_crc(y, "y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(SupqdmVg, "SupqdmVg", 1);
  transparent_crc(fxRBt5dA, "fxRBt5dA", 1);
  transparent_crc(ZQb0Bx4d, "ZQb0Bx4d", 1);
  transparent_crc(pPncILsr, "pPncILsr", 1);
  transparent_crc(zB0tboWk, "zB0tboWk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

