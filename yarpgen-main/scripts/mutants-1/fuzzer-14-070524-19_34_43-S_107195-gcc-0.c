#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  const long int l5rYShZg = -9223372036854775807LL;
  long int tB0kUb51 = 8458704219278701254LL;
  int c = 0;
  if (a)
  {
    c = 1;
    if ((tB0kUb51 & l5rYShZg) == l5rYShZg)
    {
      unsigned y = (unsigned) tB0kUb51;
      __builtin_printf("v: %u\n", y);
      if (y != 1)
        __builtin_abort();
    }
  }
  c = (1 & (a && c)) && b;
  if (a)
  {
    b = c;
    __builtin_abort();
  }
  transparent_crc(tB0kUb51, "tB0kUb51", 1);
  transparent_crc(l5rYShZg, "l5rYShZg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

