#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

struct S0
{
  signed f0 : 10;
  signed f1 : 21;
};
struct S0 g_70 = {0, 0};
int printf(const char *format, ...);
int main(int argc, char *argv[])
{
  platform_main_begin();
  crc32_gentab();
  int a_LGC30y = 2147483647;
  int zJ1DiGUn = -1094076803;
  struct S0 l_464 = {1, 1};
  zJ1DiGUn = (~a_LGC30y) || zJ1DiGUn;
  g_70 = l_464;
  printf("g_70 = %d\n", g_70.f0);
  transparent_crc(zJ1DiGUn, "zJ1DiGUn", 1);
  transparent_crc(a_LGC30y, "a_LGC30y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

