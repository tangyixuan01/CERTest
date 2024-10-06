#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
unsigned a;
int b;
int c[9][8];
int d;
int e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int tR9vZ2xJ = 2147483647;
  int R9rX4leo = -2134175028;
  {
    for (; e < 1; e++)
    {
      c[3][1] = 0;
      for (; a < 4; a++)
      {
        switch (tR9vZ2xJ)
        {
          case 5:
            R9rX4leo = 1;
            break;

          case 6:
            R9rX4leo = 2;
            break;

          case 7:
            R9rX4leo = 3;
            break;

        }

        for (; b < 9; b++)
        {
          for (d = 0; d < 8; d++)
          {
            c[b][d] = 1;
          }

        }

      }

    }

  }
  printf("%d\n", c[3][1]);
  transparent_crc(R9rX4leo, "R9rX4leo", 1);
  transparent_crc(tR9vZ2xJ, "tR9vZ2xJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

