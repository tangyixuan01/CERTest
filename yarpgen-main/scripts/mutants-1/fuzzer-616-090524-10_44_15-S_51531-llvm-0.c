#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int c;
int d;
char e;
char f;
char g(char h, char i)
{
  return ((i == 0) || ((h == (-128)) && (i == 1))) ? (h) : (h % i);
}

char k()
{
  int Ue5X3Tnj = 2147483647;
  int LzA07OPj = -2147483648;
  int j;
  d = 3;
  transparent_crc(LzA07OPj, "LzA07OPj", 1);
  transparent_crc(Ue5X3Tnj, "Ue5X3Tnj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (;; d--)
  {
    for (;;)
    {
      short b = g(d, e | d);
      j = (!b) + 1;
      f = (1 == b) * j;
      c = b;
      if (d)
      {
        switch (Ue5X3Tnj)
        {
          case 5:
            LzA07OPj = 1;
            break;

          case 6:
            LzA07OPj = 2;
            break;

          case 7:
            LzA07OPj = 3;
            break;

        }

        break;
      }
      transparent_crc(b, "b", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
      return 1;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  k();
  printf("%X\n", a);
}

