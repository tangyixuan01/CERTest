#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int b;
int *c;
int e;
int f;
int g = 1;
int h;
int k;
int m;
int n;
int p;
static int **d = &c;
static int j = 1;
short l = 1;
static void fn1(int p1)
{
  char t;
  int *r;
  unsigned s;
  if (g)
  {
    int u;
    int **v = &c;
    *d = &b;
    *(*d) = h == p1;
    for (; p1 < 6; p1++)
    {
      for (t = 0; t < 5; t += 4)
      {
        m = 0;
        if ((*(*v)) ? ((~0) % (*(*v))) : (~0))
        {
          if (l)
          {
            *v = &p;
          }
        }
        else
        {
          return;
        }
        u = 0;
        for (; u < 1; u++)
        {
          r = &b;
        }

        *v = r;
        s = (j) ? (j) : (a);
        if (((*(*v)) % s) & 10)
        {
          return;
        }
      }

    }

    *c = 4;
  }
  n = b;
  f = 0;
}

void fn2()
{
  char cNeA692i = (signed char)-128;
  int xu_aHtW3 = -2147483648;
  int WDPIRgeV = 2147483647;
  fn1(1);
  while (k)
  {
    e++;
    if (cNeA692i)
      xu_aHtW3 = ~((~0) / (xu_aHtW3 ^ WDPIRgeV));
  }

  transparent_crc(WDPIRgeV, "WDPIRgeV", 1);
  transparent_crc(xu_aHtW3, "xu_aHtW3", 1);
  transparent_crc(cNeA692i, "cNeA692i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  j = 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn2();
  __builtin_printf("%d\n", b);
  return 0;
}

