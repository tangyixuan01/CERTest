#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

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
  return (0) ? (0) : (p - 1);
}

static int fn2(struct S p)
{
  short Hl7B8Jg3 = (short)32767;
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

  while (Hl7B8Jg3 > 1)
    Hl7B8Jg3--;

  transparent_crc(Hl7B8Jg3, "Hl7B8Jg3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn2(a);
  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

