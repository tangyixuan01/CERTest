#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

short a;
int b[1];
int c(int p)
{
  return (p < 0) ? (0) : (10 + (((p / 100) - 16) / 4));
}

void f(int n)
{
  short inmlMHBs = (short)-22347;
  char K1YcNW_S = (signed char)-128;
  transparent_crc(K1YcNW_S, "K1YcNW_S", 1);
  transparent_crc(inmlMHBs, "inmlMHBs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int m = n;
    while (m)
    {
      if (K1YcNW_S)
      {
        int e = inmlMHBs / 4;
        inmlMHBs = e + 8;
      }
      m /= 2;
    }

    break;
    transparent_crc(m, "m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

void g()
{
  int h = a = 0;
  for (; (h + a) <= 0; a++)
  {
    if (b[c(a - 6)])
    {
      break;
    }
    f(a);
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  g();
  __builtin_printf("%d\n", a);
}

