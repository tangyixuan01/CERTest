#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int e;
int k;
int l;
struct 
{
  int f1;
} d;
void fn1()
{
  if (d.f1)
  {
    for (c = 0; a;)
    {
      for (; l;)
      {
        ;
      }

    }

  }
}

int fn2()
{
  for (; b < 1; b++)
  {
    for (; k; k++)
    {
      fn1();
    }

  }

  return 0;
}

int fn3()
{
  int g = 0;
  int h;
  int i[1][1] = {{1}};
  for (;;)
  {
    b = 0;
    for (; g < 1; g++)
    {
      h = i[0][g] != fn2();
    }

    if (++e)
    {
      return 0;
    }
    g = h;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short QuXph3jV = (short)-32768;
  long c7V239mz = 3720613732668017069LL;
  int XO0gtbZ8 = -1644126251;
  long bcyVBQtG = -9223372036854775807LL;
  fn3();
  while (1)
  {
    int h = -1;
    L2:
    {
      int j = 0;
      L1:
      c7V239mz = QuXph3jV ^ (h | (j & bcyVBQtG));

      XO0gtbZ8 = XO0gtbZ8 / (~(3 | (~c7V239mz)));
      if (c7V239mz)
        break;
    }

    h = 0;
  }

  printf("%d\n", b);
  transparent_crc(bcyVBQtG, "bcyVBQtG", 1);
  transparent_crc(XO0gtbZ8, "XO0gtbZ8", 1);
  transparent_crc(c7V239mz, "c7V239mz", 1);
  transparent_crc(QuXph3jV, "QuXph3jV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

