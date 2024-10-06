#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int eChX4oqj = -275827151;
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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (f)
  {
    __builtin_abort();
  }
}

