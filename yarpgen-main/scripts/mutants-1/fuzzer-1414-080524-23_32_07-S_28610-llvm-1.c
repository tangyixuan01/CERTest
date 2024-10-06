#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet

void f()
{
}

int g(int p, int q)
{
  return ((p > q) || (p && q)) ? (p) : (q);
}

short h(int p)
{
  return p;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char QWAYG0HZ = (signed char)-128;
  char WZ8j3ESR = (signed char)74;
  f();
  QWAYG0HZ = (WZ8j3ESR % 5) + WZ8j3ESR;
  if (h(g(0, 1)) != 1)
  {
    __builtin_abort();
  }
  transparent_crc(WZ8j3ESR, "WZ8j3ESR", 1);
  transparent_crc(QWAYG0HZ, "QWAYG0HZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

