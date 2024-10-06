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
  int lx9MDeCj = -2147483648;
  while (lx9MDeCj > 1)
    ;

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

  transparent_crc(lx9MDeCj, "lx9MDeCj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 6; d++)
  {
    printf("%d\n", a[d]);
  }

}

