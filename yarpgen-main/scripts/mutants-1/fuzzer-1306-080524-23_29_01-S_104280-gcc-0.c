#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a(unsigned b, int c)
{
  long rtnRe52i = -1832746288306023679LL;
  int JRQ6k1Yj = -2147483648;
  transparent_crc(JRQ6k1Yj, "JRQ6k1Yj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (rtnRe52i > 0xffffffffU)
  {
    JRQ6k1Yj += 4;
    rtnRe52i /= ((10 * 10) * 10) * 10;
  }

  transparent_crc(rtnRe52i, "rtnRe52i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b / c;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (a(1, 2) != 0)
  {
    __builtin_abort();
  }
  return 0;
}

