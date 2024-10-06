#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a[2];
int b = 1;
int c = 1;
int e = 1;
int f;
int g;
int h;
int n;
int o;
int r;
short d;
short q;
volatile int j;
int fn1(int p)
{
  return p;
}

int fn2(unsigned short p1, int p2)
{
  int sy0l6_GQ = -1151131944;
  transparent_crc(sy0l6_GQ, "sy0l6_GQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  sy0l6_GQ = (sy0l6_GQ) ? (0) : (1 % sy0l6_GQ);
  return (p2 || (p1 >> 1)) ? (p1) : (p1 << 1);
}

void fn3(int p)
{
  q = fn2(e, 0);
  if (fn1(q))
  {
    r = (g = r != 1);
  }
  if (fn2(p && fn1(0), c))
  {
    c = 4;
    n = (o = (n) ? (0) : (n + 1));
    for (; o;)
    {
      (j) ? (0) : (j);
    }

    g = 0;
  }
}

int fn4()
{
  if (b)
  {
    for (;; b++)
    {
      if (fn1(1))
      {
        fn3(1);
        fn3(0);
        if ((d = c) | fn2(h, 0))
        {
          return 0;
        }
      }
      else
      {
        f = g;
        h = fn1(0);
        e = (c = 0);
      }
    }

  }
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a[0] = 1;
  fn4();
  printf("%d\n", a[d]);
  return 0;
}

