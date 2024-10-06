#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a = 1;
int b;
int d;
unsigned char c;
int foo()
{
  short TV7dLutN = (short)-32768;
  short dDEZSbG7 = (short)32767;
  int uAaRtZGg = 2147483647;
  b |= 1;
  dDEZSbG7 = (TV7dLutN) ? (TV7dLutN) : (1 << uAaRtZGg);
  transparent_crc(uAaRtZGg, "uAaRtZGg", 1);
  transparent_crc(dDEZSbG7, "dDEZSbG7", 1);
  transparent_crc(TV7dLutN, "TV7dLutN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return a;
}

void bar()
{
  int WLlMs1cp = 2147483647;
  int spqu0hgA = -1685091179;
  int GFYEx094 = 1743550902;
  int X8FriIWv = 2147483647;
  l:
  d = foo() && (--c);

  transparent_crc(X8FriIWv, "X8FriIWv", 1);
  transparent_crc(GFYEx094, "GFYEx094", 1);
  transparent_crc(spqu0hgA, "spqu0hgA", 1);
  transparent_crc(WLlMs1cp, "WLlMs1cp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    while (1)
    {
      int f = 2;
      int g = 1;
      int h = 126;
      int *i = &h;
      (&spqu0hgA) == i;
      L1:
      L2:
      if (!h)
        goto L1;


      if (!f)
      {
        X8FriIWv = (g << h) || (X8FriIWv << 3);
        goto L2;
      }
      GFYEx094 = WLlMs1cp;
      f = (h = (WLlMs1cp = g));
      g = GFYEx094;
      if (GFYEx094)
        break;
      goto L2;
    }

    goto l;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  bar();
  printf("%d\n", b);
  return 0;
}

