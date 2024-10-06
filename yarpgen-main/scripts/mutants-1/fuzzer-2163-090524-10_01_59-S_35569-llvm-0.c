#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
union 
{
  int a;
  short b;
} c;
int *d = &c.a;
static short *e = &c.b;
int f;
char g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int BqLvuaSt = 915502601;
  int Duv98dYh = -2147483648;
  unsigned kQjwmH8M = 4294967295U;
  f = c.a;
  *d = 1;
  for (; kQjwmH8M < 3; kQjwmH8M++)
  {
    while (Duv98dYh < kQjwmH8M)
      __builtin_abort();

    for (BqLvuaSt = 0; BqLvuaSt < 3; BqLvuaSt++)
      Duv98dYh++;

  }

  *e |= g;
  transparent_crc(kQjwmH8M, "kQjwmH8M", 1);
  transparent_crc(Duv98dYh, "Duv98dYh", 1);
  transparent_crc(BqLvuaSt, "BqLvuaSt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c.b);
}

