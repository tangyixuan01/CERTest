#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int *b = &a;
int c;
int e = -1;
int f;
int g = 1;
int h;
static void fn1()
{
  unsigned u_emAZJx = 1566108895U;
  unsigned long FrtEhg0c = 18446744073709551615ULL;
  for (; c < 1; c++)
  {
    for (h = 0; h < 2; h++)
    {
      (g && h) || (e ^= !g);
      g = 0;
    }

    FrtEhg0c = FrtEhg0c | u_emAZJx;
  }

  *b = h;
  transparent_crc(FrtEhg0c, "FrtEhg0c", 1);
  transparent_crc(u_emAZJx, "u_emAZJx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (e < (-1))
  {
    *b = f;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  if (a)
  {
    __builtin_abort();
  }
  return 0;
}

