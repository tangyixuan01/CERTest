#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

struct A
{
  int b;
  int c;
  int d;
} e;
struct A g()
{
  struct A h[30] = {{0, 0, 0}};
  return h[29];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned int bfFujvYs = 0U;
  unsigned int xVO5vKye = 0U;
  unsigned char ikxguGtI = (unsigned char)0;
  e = g();
  transparent_crc(ikxguGtI, "ikxguGtI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (ikxguGtI)
  {
    xVO5vKye = bfFujvYs;
  }
  transparent_crc(xVO5vKye, "xVO5vKye", 1);
  transparent_crc(bfFujvYs, "bfFujvYs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return e.b;
}

