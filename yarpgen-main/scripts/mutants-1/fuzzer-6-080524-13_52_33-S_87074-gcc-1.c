#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

long b;
unsigned c[5];
unsigned long long d = 3;
int e;
int f;
int g;
void h()
{
  int Oi187cSU = 2147483647;
  int aJ3sLmV0 = 2147483647;
  volatile int eCG79aOx = -2147483648;
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

        while (aJ3sLmV0--)
        {
          eCG79aOx++;
          Oi187cSU += 1.0 / 0.0;
        }

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
  transparent_crc(eCG79aOx, "eCG79aOx", 1);
  transparent_crc(aJ3sLmV0, "aJ3sLmV0", 1);
  transparent_crc(Oi187cSU, "Oi187cSU", 1);
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

