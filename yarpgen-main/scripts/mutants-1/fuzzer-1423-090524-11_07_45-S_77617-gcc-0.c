#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

static unsigned good(unsigned x, unsigned n)
{
  n &= 0x1F;
  return (n) ? (x + n) : (x);
}

static unsigned fail(unsigned x, unsigned n)
{
  int pNB4uAGv = -575677085;
  int tKehig4X = -2147483648;
  int FzXQ57uv = -2147483648;
  int  pP5Km0jS = 2147483647;
  int * V0LrmPO5 = &pP5Km0jS;
  for (pNB4uAGv = 0; pNB4uAGv < 5; pNB4uAGv++)
  {
    for (FzXQ57uv = 0; FzXQ57uv < 5; FzXQ57uv++)
    {
      tKehig4X = 0;
      *V0LrmPO5 = 1;
    }

  }

  transparent_crc(FzXQ57uv, "FzXQ57uv", 1);
  transparent_crc(tKehig4X, "tKehig4X", 1);
  transparent_crc(pNB4uAGv, "pNB4uAGv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n &= (0x1F) ? (x + n) : (x);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  return fail(0xDEADBEEFU, 16U) == 0xDEADBEFFU;
}

