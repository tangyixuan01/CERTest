#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet

int k;
void f1(int a, int b)
{
  if (a)
  {
    while (b--)
    {
      k = 1;
    }

  }
  else
  {
    if (b != 1)
    {
      __builtin_abort();
    }
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  gJBwl1rS = 2147483647;
  int * HiKz5mgB = &gJBwl1rS;
  char  VXZYtHSh = (signed char)51;
  char * a45cWJCI = &VXZYtHSh;
  char ** LQeyABR5 = &a45cWJCI;
  int nm6pferG = -2147483648;
  int IQw7_vfx = -2147483648;
  f1(1, 1);
  if (k != 1)
  {
    if (*(*LQeyABR5))
      *HiKz5mgB = 0;
    switch (nm6pferG)
    {
      case 5:
        IQw7_vfx = 1;
        break;

      case 6:
        IQw7_vfx = 2;
        break;

      case 7:
        IQw7_vfx = 3;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(IQw7_vfx, "IQw7_vfx", 1);
  transparent_crc(nm6pferG, "nm6pferG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

