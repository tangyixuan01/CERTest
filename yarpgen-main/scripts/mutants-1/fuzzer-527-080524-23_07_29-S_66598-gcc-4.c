#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-while-snippet -> insert-switch-snippet -> insert-assignment-snippet -> insert-assignment-snippet

double Q[4 * 64];
double P[5 * 64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char  pZsTA6rO = (unsigned char)255;
  unsigned char * iXdaklfS = &pZsTA6rO;
  int FIKGqz9X = -254931238;
  unsigned char  YHrUnx2Z = (unsigned char)168;
  unsigned char * ajZ7obHS = &YHrUnx2Z;
  unsigned char  lPoeqJTD = (unsigned char)0;
  unsigned char * eB3yEsrR = &lPoeqJTD;
  unsigned char F21lygji = (unsigned char)61;
  int  cS0ZpV2R = -333574074;
  int * iUsWa7r8 = &cS0ZpV2R;
  unsigned char dCKO4cZL = (unsigned char)255;
  int HslaL1Ev = -2147483648;
  int LTpwZHDX = 480360808;
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
    *eB3yEsrR = ((--(*ajZ7obHS)) >> 6) | (F21lygji != 0);
    FIKGqz9X = --(*iXdaklfS);
    p += 5;
  }

  transparent_crc(MKtFD3IN, "MKtFD3IN", 1);
  transparent_crc(SZcOHfr1, "SZcOHfr1", 1);
  transparent_crc(cB1J8Z4v, "cB1J8Z4v", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (HslaL1Ev > 0)
  {
    LTpwZHDX++;
    switch (dCKO4cZL)
    {
      case 0x95:
        *iUsWa7r8 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *iUsWa7r8 = 0x00;
        break;

      default:
        *iUsWa7r8 = 0x05;
        break;

    }

    HslaL1Ev = HslaL1Ev >> 1;
  }

  transparent_crc(zwFLJon7, "zwFLJon7", 1);
  transparent_crc(LTpwZHDX, "LTpwZHDX", 1);
  transparent_crc(HslaL1Ev, "HslaL1Ev", 1);
  transparent_crc(dCKO4cZL, "dCKO4cZL", 1);
  transparent_crc(F21lygji, "F21lygji", 1);
  transparent_crc(FIKGqz9X, "FIKGqz9X", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

