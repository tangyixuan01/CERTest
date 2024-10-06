#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

static const long int TagTypeNumber = 0xffff000000000000ll;
long int x;
void foo(void)
{
  x = TagTypeNumber + 1;
}

int main(int argc, char **argv)
{
  platform_main_begin();
  crc32_gentab();
  unsigned  uerOvjGS = 1211744458U;
  unsigned * xd2GQTSU = &uerOvjGS;
  unsigned zJoq2STx = 3435024373U;
  unsigned bgtBCVHP = 4294967295U;
  char Y2HkUCaA = (signed char)-112;
  if (argc > 0)
  {
    foo();
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
  if ((Y2HkUCaA < 1) || (bgtBCVHP < 7))
    *xd2GQTSU = zJoq2STx;
  transparent_crc(Y2HkUCaA, "Y2HkUCaA", 1);
  transparent_crc(bgtBCVHP, "bgtBCVHP", 1);
  transparent_crc(zJoq2STx, "zJoq2STx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

