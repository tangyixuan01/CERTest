#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int laU0k4Y1 = -170596028;
  int xTcq_fXs = 1735013643;
  int YksrQjmi = -2147483648;
  int  FeURM163 = -115217066;
  int * baMmWT3f = &FeURM163;
  int w6s230vY = -88032678;
  for (d = 1; d;)
  {
    int h = -7;
    h = fn2(p, h);
    if (h)
    {
      return 0;
    }
    fn3(0, p);
    transparent_crc(h, "h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  fn3(0, 0);
  transparent_crc(w6s230vY, "w6s230vY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *baMmWT3f &= (xTcq_fXs | ((YksrQjmi == 0) == w6s230vY)) | laU0k4Y1;
  transparent_crc(YksrQjmi, "YksrQjmi", 1);
  transparent_crc(xTcq_fXs, "xTcq_fXs", 1);
  transparent_crc(laU0k4Y1, "laU0k4Y1", 1);
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

