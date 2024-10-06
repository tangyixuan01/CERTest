#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a[50] = {5, 5, 8};
short b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int LpSFE7Qd = 1906803695;
  int UTLAnFh2 = 1160879141;
  while ((UTLAnFh2 = sizeof(char [LpSFE7Qd])) && (LpSFE7Qd < 10))
  {
    printf("%d ", UTLAnFh2);
    LpSFE7Qd++;
  }

  int e;
  for (; b <= 4; b++)
  {
    for (; c <= 4; c++)
    {
      *a |= 1;
      e = 0;
      for (; e <= 4; e++)
      {
        a[e + 1] |= 3;
      }

    }

  }

  transparent_crc(UTLAnFh2, "UTLAnFh2", 1);
  transparent_crc(LpSFE7Qd, "LpSFE7Qd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 6; d++)
  {
    printf("%d\n", a[d]);
  }

}

