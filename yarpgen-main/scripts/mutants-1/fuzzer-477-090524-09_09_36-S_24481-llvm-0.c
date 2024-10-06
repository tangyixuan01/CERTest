#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int hFYAxXIS = 2147483647;
  int BSboVfpv = 2147483647;
  char pKMYP5Ac = (signed char)127;
  char IMu063HU = (signed char)127;
  for (;;)
  {
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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

