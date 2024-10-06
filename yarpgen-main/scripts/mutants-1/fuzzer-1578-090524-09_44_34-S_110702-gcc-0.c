#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int d;
long e[9][7][4];
void f()
{
  int YZkJ1V5F = -2147483648;
  signed lh7i3Ogz = 1;
  unsigned iCOsbf8v = 2139712391U;
  char K1Qd9W2U = (signed char)-128;
  iCOsbf8v = YZkJ1V5F || (K1Qd9W2U & lh7i3Ogz);
  transparent_crc(K1Qd9W2U, "K1Qd9W2U", 1);
  transparent_crc(iCOsbf8v, "iCOsbf8v", 1);
  transparent_crc(lh7i3Ogz, "lh7i3Ogz", 1);
  transparent_crc(YZkJ1V5F, "YZkJ1V5F", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; a >= 0; a--)
  {
    b = 0;
    for (; b <= 3; b++)
    {
      c = 0;
      for (; c <= 3; c++)
      {
        int *g = &d;
        *g = e[0][0][b] | e[a][b][a];
      }

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  f();
  printf("%d\n", a);
}

