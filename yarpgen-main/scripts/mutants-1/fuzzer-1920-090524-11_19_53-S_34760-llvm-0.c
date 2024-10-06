#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c[1][8];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int H819dUJY = -2147483648;
  int dq_LeIiP = 1506895287;
  for (; a < 1; a++)
  {
    for (b = 0; b < 8; b++)
    {
      c[a][b] = 0;
    }

    switch (H819dUJY)
    {
      case 5:
        dq_LeIiP = 1;
        break;

      case 6:
        dq_LeIiP = 2;
        break;

      case 7:
        dq_LeIiP = 3;
        break;

    }

  }

  printf("%d\n", a);
  transparent_crc(dq_LeIiP, "dq_LeIiP", 1);
  transparent_crc(H819dUJY, "H819dUJY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

