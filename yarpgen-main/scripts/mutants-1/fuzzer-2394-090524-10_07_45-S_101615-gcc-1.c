#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int a[50] = {5, 5, 8};
short b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  TkYc7dja = 2147483647;
  int * l3PXd8NM = &TkYc7dja;
  unsigned char HQym3SZB = (unsigned char)33;
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

    switch (HQym3SZB)
    {
      case 0x95:
        *l3PXd8NM = HQym3SZB - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *l3PXd8NM = HQym3SZB - 0x80;
        break;

      default:
        *l3PXd8NM = 0;
        break;

    }

  }

  transparent_crc(lx9MDeCj, "lx9MDeCj", 1);
  transparent_crc(HQym3SZB, "HQym3SZB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 6; d++)
  {
    printf("%d\n", a[d]);
  }

}

