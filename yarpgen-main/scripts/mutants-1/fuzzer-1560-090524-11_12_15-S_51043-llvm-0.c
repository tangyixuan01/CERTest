#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a = 1;
int b = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int SNvDWZlj = 2147483647;
  unsigned int k5ZMozIE = 472776970U;
  short d;
  short g;
  short i;
  int e = 34000;
  int h;
  d = b;
  g = 100 | b;
  L1:
  i = g;

  L2:
  g = ~(d / e);

  e = ~((2 / g) & d);
  h = a;
  while (!e)
  {
    a = b;
    e = ~(1L << i);
  }

  if (g > 0)
  {
    goto L2;
    while (1)
    {
      if (k5ZMozIE < 10)
        return SNvDWZlj;
      if (k5ZMozIE < (10 * 10))
        return SNvDWZlj + 1;
      if (k5ZMozIE < ((10 * 10) * 10))
        return SNvDWZlj + 2;
      if (k5ZMozIE < (((10 * 10) * 10) * 10))
        return SNvDWZlj + 3;
      SNvDWZlj += 4;
      k5ZMozIE /= ((10 * 10) * 10) * 10;
    }

  }
  if (!g)
  {
    goto L1;
  }
  if (h < e)
  {
    __builtin_abort();
  }
  transparent_crc(k5ZMozIE, "k5ZMozIE", 1);
  transparent_crc(SNvDWZlj, "SNvDWZlj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

