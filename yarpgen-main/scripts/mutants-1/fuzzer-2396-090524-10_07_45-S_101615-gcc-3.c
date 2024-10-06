#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-while-snippet -> insert-for-snippet

int a[50] = {5, 5, 8};
short b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char  o43KG2Nu = (unsigned char)255;
  unsigned char * a9N4BQZv = &o43KG2Nu;
  unsigned char ** MsO8wcUW = &a9N4BQZv;
  unsigned char  fbtFUjdu = (unsigned char)255;
  unsigned char * rpNgDA0Z = &fbtFUjdu;
  unsigned char ** MRo6GaD9 = &rpNgDA0Z;
  short PmXzsStQ = (short)32767;
  long rYLK8AcM = -7670261448745204893LL;
  int lnr8cmOg = 1675150354;
  long Ez0LQsOV = -9223372036854775807LL;
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

      while (1)
      {
        for (;;)
          MRo6GaD9 = MsO8wcUW;

        int h = -1;
        L2:
        {
          int j = 0;
          L1:
          rYLK8AcM = PmXzsStQ ^ (h | (j & Ez0LQsOV));

          lnr8cmOg = lnr8cmOg / (~(3 | (~rYLK8AcM)));
          if (rYLK8AcM)
            break;
        }

        h = 0;
      }

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
  transparent_crc(Ez0LQsOV, "Ez0LQsOV", 1);
  transparent_crc(lnr8cmOg, "lnr8cmOg", 1);
  transparent_crc(rYLK8AcM, "rYLK8AcM", 1);
  transparent_crc(PmXzsStQ, "PmXzsStQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 6; d++)
  {
    printf("%d\n", a[d]);
  }

}

