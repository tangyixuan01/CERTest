#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
int c;
int fn1(char p)
{
  short z1nyra0f = (short)14341;
  long bCqEIxkA = 7932654731018311770LL;
  int c0q6p9of = 1021738060;
  long F0vdRza5 = -9223372036854775807LL;
  transparent_crc(F0vdRza5, "F0vdRza5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int h = -1;
    L2:
    {
      int j = 0;
      L1:
      bCqEIxkA = z1nyra0f ^ (h | (j & F0vdRza5));

      c0q6p9of = c0q6p9of / (~(3 | (~bCqEIxkA)));
      if (bCqEIxkA)
        break;
    }

    h = 0;
  }

  transparent_crc(c0q6p9of, "c0q6p9of", 1);
  transparent_crc(bCqEIxkA, "bCqEIxkA", 1);
  transparent_crc(z1nyra0f, "z1nyra0f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p < 0) ? (p) : (p >> 1);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char d;
  int e;
  c = (b < 0) + 2;
  d = c - 1;
  e = d * 2;
  a = fn1(e);
  if (a != 1)
  {
    __builtin_abort();
  }
  return 0;
}

