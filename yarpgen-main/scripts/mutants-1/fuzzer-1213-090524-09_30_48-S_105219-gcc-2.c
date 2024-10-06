#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-for-snippet -> insert-switch-snippet

int a;
char b[60];
short c[18];
short d[4][19];
long long f;
void e(int g, int h, short k[][19])
{
  long  CZ2N0efL = -9223372036854775807LL;
  long * a5Yd69GM = &CZ2N0efL;
  short  s1TAJFNh = (short)-1809;
  short * TA_m7QN4 = &s1TAJFNh;
  int rsRWnVTb = 2147483647;
  for (; rsRWnVTb <= 1; rsRWnVTb++)
  {
    *a5Yd69GM = 0;
    ++(*TA_m7QN4);
  }

  transparent_crc(rsRWnVTb, "rsRWnVTb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  int  pXj14V2x = 2147483647;
  int * Khmwrca8 = &pXj14V2x;
  unsigned char W6AyDP2T = (unsigned char)133;
  int U9YizoAZ = -1082012360;
  int aRJ_IwXB = -2147483648;
  unsigned MjAiq3dK = 0U;
  e(9, 1, d);
  for (long l = 0; l < 6; ++l)
  {
    for (long m = 0; m < 4; ++m)
    {
      switch (W6AyDP2T)
      {
        case 0x95:
          *Khmwrca8 = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *Khmwrca8 = 0x00;
          break;

        default:
          *Khmwrca8 = 0x05;
          break;

      }

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
  transparent_crc(W6AyDP2T, "W6AyDP2T", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (f)
  {
    __builtin_abort();
  }
}

