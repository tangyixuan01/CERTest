#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

void f()
{
}

int g(int p, int q)
{
  return ((p > q) || (p && q)) ? (p) : (q);
}

short h(int p)
{
  long JRYU3NAr = -393303791462426189LL;
  int z0HBvgac = -2147483648;
  while (JRYU3NAr > 0xffffffffU)
  {
    z0HBvgac += 4;
    JRYU3NAr /= ((10 * 10) * 10) * 10;
  }

  transparent_crc(z0HBvgac, "z0HBvgac", 1);
  transparent_crc(JRYU3NAr, "JRYU3NAr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return p;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  f();
  if (h(g(0, 1)) != 1)
  {
    __builtin_abort();
  }
  return 0;
}

