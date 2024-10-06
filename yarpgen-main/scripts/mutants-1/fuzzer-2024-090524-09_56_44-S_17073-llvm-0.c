#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
int d;
int e;
int *f = &b;
int g;
int i;
char c;
int foo(int p1, long long p2)
{
  short XG2x8lZj = (short)32767;
  int zt3mIHNe = 2147483647;
  int sOR9GWbf = 2147483647;
  int DcfRQJj0 = -902293072;
  while (!DcfRQJj0)
  {
    zt3mIHNe = sOR9GWbf;
    DcfRQJj0 = ~(1L << XG2x8lZj);
  }

  transparent_crc(DcfRQJj0, "DcfRQJj0", 1);
  transparent_crc(sOR9GWbf, "sOR9GWbf", 1);
  transparent_crc(zt3mIHNe, "zt3mIHNe", 1);
  transparent_crc(XG2x8lZj, "XG2x8lZj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p2 == 0) ? (0) : (p1 % p2);
}

void bar(int p)
{
  lbl:
  if (*f)
  {
    g = 0;
  }

  int **l = &f;
  *l = 0;
  for (; i < 1; i++)
  {
    if (i)
    {
      goto lbl;
    }
    if (foo(2, d || p))
    {
      int **m = &f;
      *m = &e;
    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  bar((&c) == ((void *) (&a)));
  return 0;
}

