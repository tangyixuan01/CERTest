#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-for-snippet

int a;
int b[10] = {0, 0, 0, 0, 0, 0, 0, 1};
int c;
int e;
void fn1()
{
  if (a)
  {
    fn1();
  }
  for (e = 8; e >= 0; e--)
  {
    c = 2;
    for (; c < 8; c++)
    {
      b[e] = b[c];
    }

    b[7] = b[8];
    b[3] = 0;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int wr9iy4xq = 2147483647;
  char w9_1uOzJ = (signed char)-31;
  int hFYAxXIS = 2147483647;
  int BSboVfpv = 2147483647;
  char pKMYP5Ac = (signed char)127;
  char IMu063HU = (signed char)127;
  for (;;)
  {
    for (; wr9iy4xq; wr9iy4xq--)
      for (; w9_1uOzJ >= 0; w9_1uOzJ++)
      ;


    fn1();
    break;
  }

  BSboVfpv = hFYAxXIS < ((3 * (~pKMYP5Ac)) + IMu063HU);
  if (b[1] != 1)
  {
    __builtin_abort();
  }
  transparent_crc(IMu063HU, "IMu063HU", 1);
  transparent_crc(pKMYP5Ac, "pKMYP5Ac", 1);
  transparent_crc(BSboVfpv, "BSboVfpv", 1);
  transparent_crc(hFYAxXIS, "hFYAxXIS", 1);
  transparent_crc(w9_1uOzJ, "w9_1uOzJ", 1);
  transparent_crc(wr9iy4xq, "wr9iy4xq", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

