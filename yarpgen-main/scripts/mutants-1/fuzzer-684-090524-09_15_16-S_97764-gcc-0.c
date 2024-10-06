#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

struct S
{
  int b : 3;
  int c : 28;
  int d : 1;
};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int aOA1KE0y = -2147483648;
  int gKdjeaRs = 2127880923;
  struct S e = {1, -1};
  while (aOA1KE0y > gKdjeaRs)
  {
    gKdjeaRs *= 2;
  }

  if (e.d)
  {
    __builtin_abort();
  }
  transparent_crc(gKdjeaRs, "gKdjeaRs", 1);
  transparent_crc(aOA1KE0y, "aOA1KE0y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

