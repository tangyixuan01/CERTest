#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a[] = {0, 6, 0, 0, 6, 0, 0};
int b = 0;
int d;
int e;
int c[28];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int LzP1I0uV = -2147483648;
  int uIM59STb = 919674154;
  for (; b <= 6; b++)
  {
    d = 0;
    uIM59STb = (LzP1I0uV = uIM59STb != 1);
    for (; d <= 3; d++)
    {
      for (;;)
      {
        c[d * 3] = 10;
        break;
      }

      c[b] = a[b];
    }

  }

  transparent_crc(uIM59STb, "uIM59STb", 1);
  transparent_crc(LzP1I0uV, "LzP1I0uV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (e = 0; e < 7; e++)
  {
    printf("%d\n", c[e]);
  }

}

