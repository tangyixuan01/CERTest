#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
char fn1(int e, int f)
{
  return 0;
}

int fn2(int h)
{
  short a4wYgfN7 = (short)20596;
  short UDY_CMdJ = (short)-32768;
  int ajoS8n1m = -180918140;
  int sD9enVKH = 2147483647;
  int XKrF0TDv = -2147483648;
  if (sD9enVKH != 1)
  {
    XKrF0TDv = a4wYgfN7 - 7;
    UDY_CMdJ = XKrF0TDv * 60694;
    ajoS8n1m = UDY_CMdJ;
  }
  transparent_crc(XKrF0TDv, "XKrF0TDv", 1);
  transparent_crc(sD9enVKH, "sD9enVKH", 1);
  transparent_crc(ajoS8n1m, "ajoS8n1m", 1);
  transparent_crc(UDY_CMdJ, "UDY_CMdJ", 1);
  transparent_crc(a4wYgfN7, "a4wYgfN7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int l;
int m;
int n;
int p;
int q;
int r[3][1];
int s;
int t;
int x;
int y;
int z;
int aa;
int ab;
unsigned o;
void fn3()
{
  unsigned ad;
  L:
  ;

  int af;
  for (ad = 0; ad < 1; ad++)
  {
    int ag;
    r[ad + 2][ad] || (fn1(0, 5) && n);
    m = (r[1][0] = 15 > p);
    if (!m)
    {
      if (q)
      {
        goto L;
      }
      y = fn1(t, 0);
      z = fn2(y);
      aa = fn1(z, s);
      ab = fn2(t);
      (af = fn1(l, 2)) || (s = fn1(ab, x) > 10);
    }
  }

  for (; o < 4; o++)
  {
    af;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn3();
  printf("%d\n", m);
  return 0;
}

