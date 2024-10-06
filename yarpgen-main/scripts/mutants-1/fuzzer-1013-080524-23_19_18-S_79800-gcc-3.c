#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet -> insert-while-snippet -> insert-for-snippet

volatile double x = 1.23456789;
void f(int p)
{
  unsigned Wj0CA8RP = 0U;
  int qTf8zFeI = 2001740752;
  int l_V5A4XW = 2147483647;
  int jxevQgSo = -2147483648;
  int rgN_8DoX = 2147483647;
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

      for (l_V5A4XW = 0; l_V5A4XW < 1; l_V5A4XW++)
      {
        Wj0CA8RP = (Wj0CA8RP ^ Wj0CA8RP) ^ 40;
        Wj0CA8RP;
        if (qTf8zFeI)
          ;
        printf("%X\n", Wj0CA8RP);
      }

    }

    while (rgN_8DoX && (1 <= jxevQgSo))
      ;

  }
  char d[30];
  int n = __builtin_sprintf(d, "%.*a", p, x);
  const char *s = (n < 20) ? ("< 20") : (">= 20");
  transparent_crc(gCaRuGHX, "gCaRuGHX", 1);
  transparent_crc(YW_wjGQ4, "YW_wjGQ4", 1);
  transparent_crc(rgN_8DoX, "rgN_8DoX", 1);
  transparent_crc(jxevQgSo, "jxevQgSo", 1);
  transparent_crc(l_V5A4XW, "l_V5A4XW", 1);
  transparent_crc(qTf8zFeI, "qTf8zFeI", 1);
  transparent_crc(Wj0CA8RP, "Wj0CA8RP", 1);
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

