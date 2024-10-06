#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

struct S0
{
  short f0;
  unsigned f1;
  int f2;
};
int g_12[3] = {-10L, -10L, -10L};
void func_2(int p_3, struct S0 p_4)
{
  if (p_4.f0)
  {
    g_12[2] = p_3;
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int eBmoDx40 = -642599184;
  int EVPZysfG = -2147483648;
  struct S0 g_57 = {1L, 8L, -6L};
  func_2(-1L, g_57);
  printf("%d\n", g_12[2]);
  for (eBmoDx40 = 0; eBmoDx40 < 1; eBmoDx40++)
    __builtin_printf("%d\n", EVPZysfG);

  transparent_crc(EVPZysfG, "EVPZysfG", 1);
  transparent_crc(eBmoDx40, "eBmoDx40", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

