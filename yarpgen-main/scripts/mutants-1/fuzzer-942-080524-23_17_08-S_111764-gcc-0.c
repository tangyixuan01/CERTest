#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

int printf(const char *, ...);
char a;
short b;
short c;
static short *d = &b;
static short *e = &b;
short f(short g, short h)
{
  unsigned ox0WGATz = 0U;
  unsigned vmaz1o7W = 4294967295U;
  for (; vmaz1o7W < 4; vmaz1o7W++)
  {
    ox0WGATz = (ox0WGATz ^ 2000000000) * (-vmaz1o7W);
    if (vmaz1o7W > ox0WGATz)
    {
      __builtin_abort();
    }
    ox0WGATz = 3000000000;
  }

  transparent_crc(vmaz1o7W, "vmaz1o7W", 1);
  transparent_crc(ox0WGATz, "ox0WGATz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return g * h;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  *e = 2;
  a = 1;
  for (; a <= 9; a++)
  {
    short *i = &c;
    *i = (*d = f(*e, *e));
  }

  printf("%d\n", c);
}

