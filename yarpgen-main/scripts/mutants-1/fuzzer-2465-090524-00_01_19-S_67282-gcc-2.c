#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-assignment-snippet

double A[64][64];
double C[64][64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int uwMIfjG0 = -909178260;
  int WZm3tE0r = -2147483648;
  int wUi95zJI = 2147483647;
  int HI0uMyqK = -2121618180;
  short MXwYb9KG = (short)-32768;
  short OIhleqFV = (short)23143;
  short lPopS2ih = (short)-19684;
  unsigned X98Amtp1 = 2351955592U;
  int YkGOrB9N = -2147483648;
  int tjL9QAOP = 1269692103;
  while (MXwYb9KG)
  {
    uwMIfjG0 ^= !WZm3tE0r;
    if (tjL9QAOP)
      MXwYb9KG = YkGOrB9N;
    tjL9QAOP = 1;
    YkGOrB9N = (OIhleqFV = (lPopS2ih) ? (0) : (X98Amtp1 % lPopS2ih));
  }

  int i;
  int j;
  int k;
  transparent_crc(tjL9QAOP, "tjL9QAOP", 1);
  transparent_crc(YkGOrB9N, "YkGOrB9N", 1);
  transparent_crc(X98Amtp1, "X98Amtp1", 1);
  transparent_crc(lPopS2ih, "lPopS2ih", 1);
  transparent_crc(OIhleqFV, "OIhleqFV", 1);
  transparent_crc(MXwYb9KG, "MXwYb9KG", 1);
  transparent_crc(HI0uMyqK, "HI0uMyqK", 1);
  transparent_crc(wUi95zJI, "wUi95zJI", 1);
  transparent_crc(WZm3tE0r, "WZm3tE0r", 1);
  transparent_crc(uwMIfjG0, "uwMIfjG0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 64; i++)
  {
    for (j = 0; j < 64; j++)
    {
      for (k = 0; k < 64; k++)
      {
        C[i][j] = A[i][k];
      }

    }

    switch (wUi95zJI)
    {
      case 5:
        HI0uMyqK = 1;
        break;

      case 6:
        HI0uMyqK = 2;
        break;

      case 7:
        HI0uMyqK = 3;
        break;

    }

  }

}

