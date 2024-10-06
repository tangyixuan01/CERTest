#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

struct S
{
  int f1;
};
static struct S a = {1};
char b;
static unsigned char *c = &b;
int d;
int e;
int f;
int fn1(int p)
{
  int w0VgpExA = 1338378390;
  int hb9u4P1n = 208059362;
  transparent_crc(hb9u4P1n, "hb9u4P1n", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (w0VgpExA)
  {
    case 5:
      hb9u4P1n = 1;
      break;

    case 6:
      hb9u4P1n = 2;
      break;

    case 7:
      hb9u4P1n = 3;
      break;

  }

  transparent_crc(w0VgpExA, "w0VgpExA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (0) ? (0) : (p - 1);
}

static int fn2(struct S p)
{
  int g = 200;
  for (e = 4; e; e = fn1(e))
  {
    for (; d; d++)
    {
      ;
    }

    *c &= p.f1 & g;
    g = --(*c);
    if (f)
    {
      return 0;
    }
  }

  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn2(a);
  if (b != 0)
  {
    for (unsigned a = 0, b = 0; a < 6; a += 1, b += 2)
      if (b < a)
      return 1;

    __builtin_abort();
  }
  return 0;
}

