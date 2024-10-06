#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[4] = {-1, 0, 0, 0};
static int b;
static int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int WYPzEtsC = -497352394;
  int TSDYP_ke = -2147483648;
  for (; b < 4; b++)
  {
    short t = a[b];
    switch (WYPzEtsC)
    {
      case 5:
        TSDYP_ke = 1;
        break;

      case 6:
        TSDYP_ke = 2;
        break;

      case 7:
        TSDYP_ke = 3;
        break;

    }

    a[b] = (c = t % 3);
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  printf("%d\n", a[0]);
  transparent_crc(TSDYP_ke, "TSDYP_ke", 1);
  transparent_crc(WYPzEtsC, "WYPzEtsC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

