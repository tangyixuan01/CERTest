#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int c;
int e[5][2];
unsigned int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  rPgD0_Xj = -238636712;
  int * SNyF3_nX = &rPgD0_Xj;
  unsigned char BrcalL9p = (unsigned char)0;
  for (d = 0; d < 2; d++)
  {
    if ((a) ? (0) : (e[c + 3][d] & e[c + 4][d]))
    {
      break;
      switch (BrcalL9p)
      {
        case 0x95:
          *SNyF3_nX = BrcalL9p - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *SNyF3_nX = BrcalL9p - 0x80;
          break;

        default:
          *SNyF3_nX = 0;
          break;

      }

    }
  }

  transparent_crc(BrcalL9p, "BrcalL9p", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

