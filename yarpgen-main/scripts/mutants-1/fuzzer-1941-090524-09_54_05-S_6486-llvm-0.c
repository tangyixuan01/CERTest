#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int g_43 = 0;
int *g_92[2];
int ** const g_177 = &g_92[1];
static int func_55(void)
{
  char zF3B7isI = (signed char)-23;
  if (zF3B7isI && (zF3B7isI <= '9'))
    return '0';
  g_43 = 1;
  transparent_crc(zF3B7isI, "zF3B7isI", 1);
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

