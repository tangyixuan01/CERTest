#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
int c;
void fn1(int e)
{
  int *f;
  int *g;
  int **h = &g;
  *h = &e;
  for (; b < 4; b++)
  {
    f = *h;
    if ((f != (&e)) && f)
    {
      __builtin_abort();
    }
    *h = &c;
    a = 0;
    for (; a < 4; a++)
    {
      *h = 0;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  short EZVtzx83 = (short)6233;
  short _M7NFVHq = (short)29486;
  short cYif3IkL = (short)32767;
  unsigned CPVm6GS8 = 3445097613U;
  int BqjvLbkJ = -2147483648;
  int RwgFiUau = 2147483647;
  fn1(0);
  while (EZVtzx83)
  {
    if (RwgFiUau)
      EZVtzx83 = BqjvLbkJ;
    RwgFiUau = 1;
    BqjvLbkJ = (_M7NFVHq = (cYif3IkL) ? (0) : (CPVm6GS8 % cYif3IkL));
  }

  transparent_crc(RwgFiUau, "RwgFiUau", 1);
  transparent_crc(BqjvLbkJ, "BqjvLbkJ", 1);
  transparent_crc(CPVm6GS8, "CPVm6GS8", 1);
  transparent_crc(cYif3IkL, "cYif3IkL", 1);
  transparent_crc(_M7NFVHq, "_M7NFVHq", 1);
  transparent_crc(EZVtzx83, "EZVtzx83", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

