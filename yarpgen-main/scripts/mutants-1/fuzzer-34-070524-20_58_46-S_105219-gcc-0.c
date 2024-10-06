#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int a;
char b[60];
short c[18];
short d[4][19];
long long f;
void e(int g, int h, short k[][19])
{
  int TocFlXCG = 988725232;
  transparent_crc(TocFlXCG, "TocFlXCG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (signed i = 0; i < 3; i += 2)
  {
    for (TocFlXCG = 0; TocFlXCG <= 8; TocFlXCG++)
      ;

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
  e(9, 1, d);
  for (long l = 0; l < 6; ++l)
  {
    for (long m = 0; m < 4; ++m)
    {
      f ^= b[l + (m * 4)];
    }

  }

  if (f)
  {
    __builtin_abort();
  }
}

