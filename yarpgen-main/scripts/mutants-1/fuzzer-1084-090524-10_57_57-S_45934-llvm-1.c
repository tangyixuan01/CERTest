#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-for-snippet

int add(int ui1, int ui2)
{
  int Zt0aBFgP = 1135553338;
  int HYWSikIw = 2147483647;
  int xdrY4PjJ = 2147483647;
  int FPSsK_Yl = 2147483647;
  for (; xdrY4PjJ < 16; xdrY4PjJ++)
  {
    HYWSikIw = xdrY4PjJ;
    if (!xdrY4PjJ)
      HYWSikIw = HYWSikIw / 2;
    Zt0aBFgP = HYWSikIw;
    FPSsK_Yl = Zt0aBFgP;
  }

  int LR9st0YB = -921511808;
  int KcQk2oFx = 2147483647;
  KcQk2oFx &= LR9st0YB;
  transparent_crc(KcQk2oFx, "KcQk2oFx", 1);
  transparent_crc(LR9st0YB, "LR9st0YB", 1);
  transparent_crc(FPSsK_Yl, "FPSsK_Yl", 1);
  transparent_crc(xdrY4PjJ, "xdrY4PjJ", 1);
  transparent_crc(HYWSikIw, "HYWSikIw", 1);
  transparent_crc(Zt0aBFgP, "Zt0aBFgP", 1);
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

