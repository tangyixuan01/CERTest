#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

double Q[4 * 64];
double P[5 * 64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int zwFLJon7 = -1701859475;
  int cB1J8Z4v = 2147483647;
  int SZcOHfr1 = 2045283345;
  int MKtFD3IN = -2147483648;
  int i;
  int j;
  double *p = P;
  double *q = Q;
  for (j = 0; j < 32; ++j)
  {
    for (i = 0; i < 4; ++i)
    {
      for (MKtFD3IN = 0; MKtFD3IN; MKtFD3IN++)
      {
        if (cB1J8Z4v)
          break;
        zwFLJon7 && (SZcOHfr1 |= 1);
      }

      q[i] = p[i];
    }

    q += 4;
    p += 5;
  }

  transparent_crc(MKtFD3IN, "MKtFD3IN", 1);
  transparent_crc(SZcOHfr1, "SZcOHfr1", 1);
  transparent_crc(cB1J8Z4v, "cB1J8Z4v", 1);
  transparent_crc(zwFLJon7, "zwFLJon7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

