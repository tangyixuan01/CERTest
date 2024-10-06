#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int add(int ui1, int ui2)
{
  int LR9st0YB = -921511808;
  int KcQk2oFx = 2147483647;
  KcQk2oFx &= LR9st0YB;
  transparent_crc(KcQk2oFx, "KcQk2oFx", 1);
  transparent_crc(LR9st0YB, "LR9st0YB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return ui1 + ui2;
}

int g_8;
int a = 4;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  for (g_8 = 0; g_8 < 49; g_8 = add(g_8, 9))
  {
    for (; c; c++)
    {
      ;
    }

    if (a)
    {
      break;
    }
  }

}

