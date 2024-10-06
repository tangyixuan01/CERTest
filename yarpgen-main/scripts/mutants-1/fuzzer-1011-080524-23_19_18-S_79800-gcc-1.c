#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

volatile double x = 1.23456789;
void f(int p)
{
  int YW_wjGQ4 = 2147483647;
  int gCaRuGHX = -2147483648;
  if ((p < (-1)) || (0 < p))
  {
    p = -1;
    switch (YW_wjGQ4)
    {
      case 5:
        gCaRuGHX = 1;
        break;

      case 6:
        gCaRuGHX = 2;
        break;

      case 7:
        gCaRuGHX = 3;
        break;

    }

  }
  char d[30];
  int n = __builtin_sprintf(d, "%.*a", p, x);
  const char *s = (n < 20) ? ("< 20") : (">= 20");
  transparent_crc(gCaRuGHX, "gCaRuGHX", 1);
  transparent_crc(YW_wjGQ4, "YW_wjGQ4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  __builtin_printf("%i %s\n%zu: \"%s\"\n", n, s, __builtin_strlen(d), d);
}

volatile int i;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int wuI8o96L = -1389331772;
  wuI8o96L = !1;
  volatile int i = -1;
  transparent_crc(wuI8o96L, "wuI8o96L", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  f(i);
}

