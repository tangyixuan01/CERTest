#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet

struct S2
{
  unsigned f0 : 27;
  unsigned f1 : 17;
  signed f2 : 18;
};
struct S2 g_99 = {0, 0, 0};
struct S2 *g_248 = &g_99;
int printf(const char *format, ...);
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int WrJdt0I7 = 1122475505;
  short d4mxh7JT = (short)-32768;
  int I7M_FPev = -2002285823;
  for (I7M_FPev = 0; I7M_FPev <= 8; I7M_FPev++)
    ;

  struct S2 l_438 = {1, 1, 1};
  *g_248 = l_438;
  *g_248 = g_99;
  printf("g_99.f0 = %d\n", g_99.f0);
  transparent_crc(I7M_FPev, "I7M_FPev", 1);
  transparent_crc(d4mxh7JT, "d4mxh7JT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  WrJdt0I7 = 65527 & (++d4mxh7JT);
  transparent_crc(WrJdt0I7, "WrJdt0I7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

