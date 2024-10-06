#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

double A[64][64];
double C[64][64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Mx1ARuOj = -2147483648;
  int XlSL_Ac8 = -110627630;
  int i;
  switch (Mx1ARuOj)
  {
    case 5:
      XlSL_Ac8 = 1;
      break;

    case 6:
      XlSL_Ac8 = 2;
      break;

    case 7:
      XlSL_Ac8 = 3;
      break;

  }

  int j;
  int k;
  transparent_crc(XlSL_Ac8, "XlSL_Ac8", 1);
  transparent_crc(Mx1ARuOj, "Mx1ARuOj", 1);
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

  }

}

