#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int g_43 = 0;
int *g_92[2];
int ** const g_177 = &g_92[1];
static int func_55(void)
{
  int Ai3QwNSo = -2147483648;
  g_43 = 1;
  for (; Ai3QwNSo < (-2); Ai3QwNSo++)
    ;

  transparent_crc(Ai3QwNSo, "Ai3QwNSo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 1;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  (0 <= (0 != g_177)) && func_55();
  printf("%d\n", g_43);
  return 0;
}

