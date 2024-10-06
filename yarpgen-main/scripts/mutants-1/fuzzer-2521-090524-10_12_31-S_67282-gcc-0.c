#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

double A[64][64];
double C[64][64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int I594tlL1 = -2147483648;
  int i;
  while (I594tlL1 != 0)
    ++I594tlL1;

  int j;
  int k;
  transparent_crc(I594tlL1, "I594tlL1", 1);
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

