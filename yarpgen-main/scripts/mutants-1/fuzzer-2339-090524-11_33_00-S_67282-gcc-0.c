#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

double A[64][64];
double C[64][64];
int main()
{
  platform_main_begin();
  crc32_gentab();
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

