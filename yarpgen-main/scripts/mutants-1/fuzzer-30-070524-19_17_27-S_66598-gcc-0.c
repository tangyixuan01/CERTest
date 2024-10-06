#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

double Q[4 * 64];
double P[5 * 64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  short SOwoXdGR = (short)32767;
  unsigned short AqRmLixn = (unsigned short)65535;
  int i;
  int j;
  double *p = P;
  double *q = Q;
  for (j = 0; j < 32; ++j)
  {
    for (i = 0; i < 4; ++i)
    {
      q[i] = p[i];
    }

    q += 4;
    if (SOwoXdGR < AqRmLixn)
    {
      AqRmLixn = SOwoXdGR;
      SOwoXdGR = ~SOwoXdGR;
    }
    p += 5;
  }

  transparent_crc(AqRmLixn, "AqRmLixn", 1);
  transparent_crc(SOwoXdGR, "SOwoXdGR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

