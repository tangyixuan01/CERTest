#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

double A[64][64];
double C[64][64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  short R7LbtqOC = (short)-2261;
  int gJyd4l9N = -2147483648;
  int e5Vs2gxK = -769170305;
  int GZgRsqUm = 1505905916;
  int WmR73Kec = -1538873307;
  int t8BT1PlJ = 2147483647;
  int i;
  int j;
  int k;
  transparent_crc(t8BT1PlJ, "t8BT1PlJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (WmR73Kec)
  {
    case 5:
      t8BT1PlJ = 1;
      break;

    case 6:
      t8BT1PlJ = 2;
      break;

    case 7:
      t8BT1PlJ = 3;
      break;

  }

  transparent_crc(WmR73Kec, "WmR73Kec", 1);
  transparent_crc(GZgRsqUm, "GZgRsqUm", 1);
  transparent_crc(e5Vs2gxK, "e5Vs2gxK", 1);
  transparent_crc(gJyd4l9N, "gJyd4l9N", 1);
  transparent_crc(R7LbtqOC, "R7LbtqOC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 64; i++)
  {
    for (j = 0; j < 64; j++)
    {
      for (k = 0; k < 64; k++)
      {
        while (!GZgRsqUm)
        {
          gJyd4l9N = e5Vs2gxK;
          GZgRsqUm = ~(1L << R7LbtqOC);
        }

        C[i][j] = A[i][k];
      }

    }

  }

}

