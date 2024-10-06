#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b = -1;
int c;
int d = 1;
char e(char f, int g)
{
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
  int z8jRh2Lg = -91552440;
  switch (z8jRh2Lg)
    case 111:
    case 222:
    case 44:
    return 0;




  j();
  if (c != 1)
  {
    __builtin_abort();
  }
  transparent_crc(z8jRh2Lg, "z8jRh2Lg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

