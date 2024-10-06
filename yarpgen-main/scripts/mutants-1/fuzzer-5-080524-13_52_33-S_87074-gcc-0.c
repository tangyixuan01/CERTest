#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

long b;
unsigned c[5];
unsigned long long d = 3;
int e;
int f;
int g;
void h()
{
  int PRwj5xKY = -2147483648;
  int axQYD02b = -2147483648;
  for (; f < 11; f++)
  {
    b = g;
    for (e = 0; e < 5; e++)
    {
      switch (PRwj5xKY)
      {
        case 5:
          axQYD02b = 1;
          break;

        case 6:
          axQYD02b = 2;
          break;

        case 7:
          axQYD02b = 3;
          break;

      }

      c[e] = (e - b) - (c[e] >> 5);
      g = c[e];
    }

  }

  transparent_crc(axQYD02b, "axQYD02b", 1);
  transparent_crc(PRwj5xKY, "PRwj5xKY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c[0])
  {
    d = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  h();
  return d;
}

