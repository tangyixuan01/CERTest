#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c;
int d;
int f;
char e;
int fn1(int p1, int p2)
{
  return ((p1 > 0) || (1 < (-p2))) ? (p1) : (p1 + 1);
}

int fn2(unsigned short p1, unsigned short p2)
{
  return p1 - p2;
}

void fn3(int p1, int p2)
{
  for (; p1 < 13; ++p1)
  {
    e = p1 * 2;
    if ((e < a) && a)
    {
      if (p2 ^ b)
      {
        c = 0;
      }
    }
  }

}

static int fn4(short p)
{
  int  N7njfJYT = -2147483648;
  int * nYjfPCDd = &N7njfJYT;
  unsigned char dQseaOUc = (unsigned char)255;
  for (d = 1; d;)
  {
    int h = -7;
    h = fn2(p, h);
    if (h)
    {
      return 0;
      switch (dQseaOUc)
      {
        case 0x95:
          *nYjfPCDd = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *nYjfPCDd = 0x00;
          break;

        default:
          *nYjfPCDd = 0x05;
          break;

      }

    }
    fn3(0, p);
    transparent_crc(h, "h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  fn3(0, 0);
  transparent_crc(dQseaOUc, "dQseaOUc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

static int fn5()
{
  int g = -19;
  for (; g; g = fn1(g, 0))
  {
    for (; f; f++)
    {
      fn4(g);
    }

    if (g)
    {
      b = 0;
    }
  }

  return 0;
}

static int fn6()
{
  fn5();
  fn4(0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn6();
  return 0;
}

