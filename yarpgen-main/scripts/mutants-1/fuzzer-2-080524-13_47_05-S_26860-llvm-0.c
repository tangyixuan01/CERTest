#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a[4];
int b[4];
int c;
int d;
char e;
void fn1()
{
  long ogFc0prI = 8204112275090720396LL;
  int OMy5fBP4 = 92739940;
  unsigned Xkhezjq9 = 3446057770U;
  long MHn2iu_Y = -1496663237910764463LL;
  int aRlWJ10e = 2147483647;
  transparent_crc(aRlWJ10e, "aRlWJ10e", 1);
  transparent_crc(MHn2iu_Y, "MHn2iu_Y", 1);
  transparent_crc(Xkhezjq9, "Xkhezjq9", 1);
  transparent_crc(OMy5fBP4, "OMy5fBP4", 1);
  transparent_crc(ogFc0prI, "ogFc0prI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (;; c++)
  {
    for (;;)
    {
      e = b[3];
      if (e)
      {
        b[c] = 0;
        break;
      }
      return;
    }

    a[3] = (d = 1);
    for (; d < 4; d++)
    {
      a[d] = 0;
      if (b[3])
      {
        ogFc0prI = ~((((aRlWJ10e | Xkhezjq9) / (~OMy5fBP4)) - MHn2iu_Y) - (~aRlWJ10e));
        break;
      }
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  b[3] = 1;
  fn1();
  if (a[3])
  {
    __builtin_abort();
  }
  return 0;
}

