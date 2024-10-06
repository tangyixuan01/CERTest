#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
char a;
int b[3][8];
int c;
int e = 1;
int f;
int g;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int NEFV90U1 = 2147483647;
  int FEHdpn4k = -1581006839;
  for (; e >= 0; e--)
  {
    d = 1;
    for (; d >= 0; d--)
    {
      c = 0;
      for (; c <= 1; c++)
      {
        b[0][((d * 2) + c) + 1] = 0;
        while ((FEHdpn4k = sizeof(char [NEFV90U1])) && (NEFV90U1 < 10))
        {
          printf("%d ", FEHdpn4k);
          NEFV90U1++;
        }

        g = a <= '7';
        b[(g - 1) + d][c] ^= 1;
      }

    }

  }

  transparent_crc(FEHdpn4k, "FEHdpn4k", 1);
  transparent_crc(NEFV90U1, "NEFV90U1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", b[0][1]);
}

