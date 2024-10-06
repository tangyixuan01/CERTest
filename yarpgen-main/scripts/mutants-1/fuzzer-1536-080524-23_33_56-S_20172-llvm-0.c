#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int * G9fVLIe3 = &e;
  unsigned char CHpWTFxq = (unsigned char)30;
  transparent_crc(CHpWTFxq, "CHpWTFxq", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (CHpWTFxq)
  {
    case 0x95:
      *G9fVLIe3 = CHpWTFxq - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *G9fVLIe3 = CHpWTFxq - 0x80;
      break;

    default:
      *G9fVLIe3 = 0;
      break;

  }

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

