#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *format, ...);
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int GV2t_ARb = 2147483647;
  int CqOr5kwT = -2147483648;
  int i;
  for (i = 0; i < 8; i++)
  {
    unsigned j = 1u << i;
    printf("%2d %10u %2d\n", i, j, __builtin_ffs(j));
    transparent_crc(j, "j", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  transparent_crc(CqOr5kwT, "CqOr5kwT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (GV2t_ARb > 0)
  {
    CqOr5kwT++;
    GV2t_ARb = GV2t_ARb >> 1;
  }

  transparent_crc(GV2t_ARb, "GV2t_ARb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

