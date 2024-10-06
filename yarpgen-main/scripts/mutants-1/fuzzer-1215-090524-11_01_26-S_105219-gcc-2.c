#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet -> insert-switch-snippet

int a;
char b[60];
short c[18];
short d[4][19];
long long f;
void e(int g, int h, short k[][19])
{
  int  CbXW79iL = -1404865945;
  int * FWvxZ27B = &CbXW79iL;
  unsigned char UHcZpLEl = (unsigned char)31;
  long FDBuS9Qy = -7797548946314502168LL;
  int Rz5eJb8C = -602252760;
  int k4ng39yS = 2147483647;
  transparent_crc(k4ng39yS, "k4ng39yS", 1);
  transparent_crc(Rz5eJb8C, "Rz5eJb8C", 1);
  transparent_crc(FDBuS9Qy, "FDBuS9Qy", 1);
  transparent_crc(UHcZpLEl, "UHcZpLEl", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (signed i = 0; i < 3; i += 2)
  {
    switch (UHcZpLEl)
    {
      case 0x95:
        *FWvxZ27B = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *FWvxZ27B = 0x00;
        break;

      default:
        *FWvxZ27B = 0x05;
        break;

    }

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
  unsigned int TOhDR7Ye = 4294967295U;
  unsigned int uQ90nLP6 = 0U;
  e(9, 1, d);
  uQ90nLP6 = (((unsigned int) TOhDR7Ye) >> 27) & 0x1fUL;
  for (long l = 0; l < 6; ++l)
  {
    for (long m = 0; m < 4; ++m)
    {
      f ^= b[l + (m * 4)];
    }

  }

  transparent_crc(uQ90nLP6, "uQ90nLP6", 1);
  transparent_crc(TOhDR7Ye, "TOhDR7Ye", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (f)
  {
    __builtin_abort();
  }
}

