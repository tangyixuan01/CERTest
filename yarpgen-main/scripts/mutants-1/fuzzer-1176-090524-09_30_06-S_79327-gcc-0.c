#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

volatile int a;
volatile int b = -1;
char buf[64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int N2Are8jf = 2147483647;
  int c = a;
  int d = b;
  for (N2Are8jf = 0; N2Are8jf <= 8; N2Are8jf++)
    ;

  if ((((c >= (-35791395)) && (c < 35791394)) && (d >= (-1))) && (d < 0x7fffffff))
  {
    int e = __builtin_sprintf(buf, "%+03d%02d", c + 1, d + 1);
    if (e > 7)
    {
      __builtin_abort();
    }
    transparent_crc(e, "e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }
  transparent_crc(N2Are8jf, "N2Are8jf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

