#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int CqxW83ka = 1867768308;
  short oJCz5R9P = (short)32767;
  struct S2 l_438 = {1, 1, 1};
  *g_248 = l_438;
  *g_248 = g_99;
  printf("g_99.f0 = %d\n", g_99.f0);
  CqxW83ka |= oJCz5R9P;
  transparent_crc(oJCz5R9P, "oJCz5R9P", 1);
  transparent_crc(CqxW83ka, "CqxW83ka", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

