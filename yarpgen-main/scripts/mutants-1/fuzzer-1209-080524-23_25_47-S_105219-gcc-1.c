#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-for-snippet

int a;
char b[60];
short c[18];
short d[4][19];
long long f;
void e(int g, int h, short k[][19])
{
  for (signed i = 0; i < 3; i += 2)
  {
    for (signed j = 1; j < (h + 14); j++)
    {
      b[(i * 14) + j] = 1;
      c[i + j] = k[2][j];
      a = (g) ? (k[i][j]) : (0);
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned baegKqUC = 0U;
  int q12w4375 = -1473051977;
  int ok1E7S3x = 713757719;
  int UmNJS1O4 = -685262487;
  short Ysejw9aM = (short)-32768;
  short Ka8B4iIb = (short)-32768;
  short _Dzx6vtd = (short)32767;
  int eChX4oqj = -275827151;
  for (; UmNJS1O4 < 1; UmNJS1O4++)
    while (Ysejw9aM)
  {
    if (q12w4375)
      Ysejw9aM = ok1E7S3x;
    q12w4375 = 1;
    ok1E7S3x = (Ka8B4iIb = (_Dzx6vtd) ? (0) : (baegKqUC % _Dzx6vtd));
  }


  int nU4WaQf3 = -1818885567;
  e(9, 1, d);
  for (long l = 0; l < 6; ++l)
  {
    for (long m = 0; m < 4; ++m)
    {
      f ^= b[l + (m * 4)];
    }

  }

  if (eChX4oqj < 1)
    if (nU4WaQf3)
    eChX4oqj = 0;
  transparent_crc(nU4WaQf3, "nU4WaQf3", 1);
  transparent_crc(eChX4oqj, "eChX4oqj", 1);
  transparent_crc(_Dzx6vtd, "_Dzx6vtd", 1);
  transparent_crc(Ka8B4iIb, "Ka8B4iIb", 1);
  transparent_crc(Ysejw9aM, "Ysejw9aM", 1);
  transparent_crc(UmNJS1O4, "UmNJS1O4", 1);
  transparent_crc(ok1E7S3x, "ok1E7S3x", 1);
  transparent_crc(q12w4375, "q12w4375", 1);
  transparent_crc(baegKqUC, "baegKqUC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (f)
  {
    __builtin_abort();
  }
}

