#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int g_43 = 0;
int *g_92[2];
int ** const g_177 = &g_92[1];
static int func_55(void)
{
  g_43 = 1;
  return 1;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int p3q2vDjf = 2147483647;
  int S14C7Yxf = -2147483648;
  (0 <= (0 != g_177)) && func_55();
  printf("%d\n", g_43);
  transparent_crc(S14C7Yxf, "S14C7Yxf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (p3q2vDjf > 0)
  {
    S14C7Yxf++;
    p3q2vDjf = p3q2vDjf >> 1;
  }

  transparent_crc(p3q2vDjf, "p3q2vDjf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

