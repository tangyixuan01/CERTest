#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int a;
int b = 1;
int *c = &a;
void foo(int p)
{
  int gId8bJ4y = -1666518480;
  int xfpXUoDC = 2147483647;
  int WF3itB_5 = -1908535534;
  int _XPdjwRK = -1096398253;
  int t;
  for (t = 0; t < 16; t++)
  {
    p ^= -1;
  }

  transparent_crc(_XPdjwRK, "_XPdjwRK", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int f = 2;
    int g = 1;
    int h = 126;
    int *i = &h;
    (&xfpXUoDC) == i;
    L1:
    L2:
    if (!h)
      goto L1;


    if (!f)
    {
      _XPdjwRK = (g << h) || (_XPdjwRK << 3);
      goto L2;
    }
    WF3itB_5 = gId8bJ4y;
    f = (h = (gId8bJ4y = g));
    g = WF3itB_5;
    if (WF3itB_5)
      break;
    goto L2;
  }

  transparent_crc(WF3itB_5, "WF3itB_5", 1);
  transparent_crc(xfpXUoDC, "xfpXUoDC", 1);
  transparent_crc(gId8bJ4y, "gId8bJ4y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *c = ~(p & b);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  foo(0);
  printf("%d\n", a);
  return 0;
}

