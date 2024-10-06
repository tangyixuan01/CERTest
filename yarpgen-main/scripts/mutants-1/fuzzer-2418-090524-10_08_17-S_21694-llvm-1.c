#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-assignment-snippet

int a = 1;
int c;
int *f = &c;
volatile int e;
short b;
short *d = &b;
static int fn1(int *p)
{
  for (b = 1; b != 4; b += 5)
  {
    if (*p)
    {
      e = 0;
    }
    else
    {
      return 0;
    }
  }

  *f = *d;
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short tZz7eACq = (short)-15891;
  int yp03xFgV = 1867604973;
  short EN0KMTop = (short)32767;
  int * v6EVxnOz = &a;
  int *g = &a;
  fn1(g);
  if (c != 4)
  {
    while (1)
      while (*v6EVxnOz)
      ;


    __builtin_abort();
  }
  yp03xFgV = ~((2 / EN0KMTop) & tZz7eACq);
  transparent_crc(EN0KMTop, "EN0KMTop", 1);
  transparent_crc(yp03xFgV, "yp03xFgV", 1);
  transparent_crc(tZz7eACq, "tZz7eACq", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

