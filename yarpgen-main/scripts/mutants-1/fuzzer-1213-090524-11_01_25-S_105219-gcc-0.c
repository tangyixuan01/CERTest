#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
char b[60];
short c[18];
short d[4][19];
long long f;
void e(int g, int h, short k[][19])
{
  long FDBuS9Qy = -7797548946314502168LL;
  int Rz5eJb8C = -602252760;
  int k4ng39yS = 2147483647;
  transparent_crc(k4ng39yS, "k4ng39yS", 1);
  transparent_crc(Rz5eJb8C, "Rz5eJb8C", 1);
  transparent_crc(FDBuS9Qy, "FDBuS9Qy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (signed i = 0; i < 3; i += 2)
  {
    for (signed j = 1; j < (h + 14); j++)
    {
      b[(i * 14) + j] = 1;
      c[i + j] = k[2][j];
      a = (g) ? (k[i][j]) : (0);
      FDBuS9Qy = (-FDBuS9Qy) & (~((~(Rz5eJb8C ^ (~Rz5eJb8C))) || k4ng39yS));
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

