#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

volatile int a;
volatile int b = -1;
char buf[64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  short eCIVbpSD = (short)-32768;
  int c = a;
  int d = b;
  if ((((c >= (-35791395)) && (c < 35791394)) && (d >= (-1))) && (d < 0x7fffffff))
  {
    int e = __builtin_sprintf(buf, "%+03d%02d", c + 1, d + 1);
    if (eCIVbpSD)
    {
      int h;
    }
    if (e > 7)
    {
      __builtin_abort();
    }
    transparent_crc(e, "e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(eCIVbpSD, "eCIVbpSD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

