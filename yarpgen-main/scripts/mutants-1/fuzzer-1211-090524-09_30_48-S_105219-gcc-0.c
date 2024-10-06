#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int U9YizoAZ = -1082012360;
  int aRJ_IwXB = -2147483648;
  unsigned MjAiq3dK = 0U;
  e(9, 1, d);
  for (long l = 0; l < 6; ++l)
  {
    for (long m = 0; m < 4; ++m)
    {
      f ^= b[l + (m * 4)];
    }

  }

  for (; U9YizoAZ >= 0; U9YizoAZ--)
  {
    --MjAiq3dK;
    if (aRJ_IwXB)
      continue;
    for (;;)
      ;

  }

  transparent_crc(MjAiq3dK, "MjAiq3dK", 1);
  transparent_crc(aRJ_IwXB, "aRJ_IwXB", 1);
  transparent_crc(U9YizoAZ, "U9YizoAZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (f)
  {
    __builtin_abort();
  }
}

