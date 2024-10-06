#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int a = 1;
int c;
int *f = &c;
int g;
int *h;
int *i = &a;
int *k = &c;
int l;
char b;
char *d = &b;
char **e = &d;
char ***j = &e;
static int fn1()
{
  int m;
  l = *(*e);
  *f = 1;
  for (m = 0; m < 2; m++)
  {
    *(*e) = ((*k) || ((h = &g) == ((int *) (&f)))) == 0;
  }

  for (; b >= 0; b--)
  {
    ;
  }

  if (*(*e))
  {
    *i = 0;
  }
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short XLT8fF7W = (short)32767;
  long jVxpQ8Si = -9223372036854775807LL;
  int sCBJH_3Q = -2147483648;
  long NIA1V4i_ = 7171975496415643510LL;
  fn1();
  printf("%d\n", a);
  transparent_crc(NIA1V4i_, "NIA1V4i_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int h = -1;
    L2:
    {
      int j = 0;
      L1:
      jVxpQ8Si = XLT8fF7W ^ (h | (j & NIA1V4i_));

      sCBJH_3Q = sCBJH_3Q / (~(3 | (~jVxpQ8Si)));
      if (jVxpQ8Si)
        break;
    }

    h = 0;
  }

  transparent_crc(sCBJH_3Q, "sCBJH_3Q", 1);
  transparent_crc(jVxpQ8Si, "jVxpQ8Si", 1);
  transparent_crc(XLT8fF7W, "XLT8fF7W", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

