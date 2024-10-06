#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a[6];
char b;
char c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char KnEuX31J = (signed char)127;
  int f9h3c61N = -1482517357;
  int Nw56TAEY = -2147483648;
  char kdgvXElT = (signed char)86;
  short Zvc5MNuH = (short)-32768;
  if (f9h3c61N && Zvc5MNuH)
    Nw56TAEY = (~KnEuX31J) + kdgvXElT;
  int d[4] = {0, 0, 0, 0};
  for (c = 0; c <= 5; c++)
  {
    for (b = 2; b != 0; b++)
    {
      a[c] = 8;
    }

    a[c] = d[3];
  }

  transparent_crc(Zvc5MNuH, "Zvc5MNuH", 1);
  transparent_crc(kdgvXElT, "kdgvXElT", 1);
  transparent_crc(Nw56TAEY, "Nw56TAEY", 1);
  transparent_crc(f9h3c61N, "f9h3c61N", 1);
  transparent_crc(KnEuX31J, "KnEuX31J", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (a[0] != 0)
  {
    __builtin_abort();
  }
}

