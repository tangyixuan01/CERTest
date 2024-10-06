#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b = -1;
int c;
int d = 1;
char e(char f, int g)
{
  long gxZqfu2d = -4020824568627256866LL;
  while (gxZqfu2d > 1523073808)
    ;

  transparent_crc(gxZqfu2d, "gxZqfu2d", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (g) ? (f) : (0);
}

char h(char f)
{
  return (f < a) ? (f) : (f < a);
}

unsigned char i(unsigned char f, int g)
{
  return (g) ? (f) : (f > g);
}

void j()
{
  L:
  c = e(1, i(h(b), d));

  if (b)
  {
    return;
  }
  goto L;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  j();
  if (c != 1)
  {
    __builtin_abort();
  }
  return 0;
}

