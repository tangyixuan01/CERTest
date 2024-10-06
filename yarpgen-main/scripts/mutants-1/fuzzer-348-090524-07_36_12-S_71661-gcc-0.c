#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
void fn1()
{
  short etrLzcfJ = (short)-20679;
  short yj7Bo_lM = (short)-11192;
  short s5BmTx9k = (short)13095;
  unsigned fCer0NkK = 3803141634U;
  int xlfqGjQu = -2111834755;
  int Gtz8FCdu = -2147483648;
  unsigned c = 0;
  int d;
  b = a;
  if (a < 0)
  {
    goto L1;
  }
  for (; a < 1; a++)
  {
    d = 0;
  }

  while (etrLzcfJ)
  {
    if (Gtz8FCdu)
      etrLzcfJ = xlfqGjQu;
    Gtz8FCdu = 1;
    xlfqGjQu = (yj7Bo_lM = (s5BmTx9k) ? (0) : (fCer0NkK % s5BmTx9k));
  }

  transparent_crc(Gtz8FCdu, "Gtz8FCdu", 1);
  transparent_crc(xlfqGjQu, "xlfqGjQu", 1);
  transparent_crc(fCer0NkK, "fCer0NkK", 1);
  transparent_crc(s5BmTx9k, "s5BmTx9k", 1);
  transparent_crc(yj7Bo_lM, "yj7Bo_lM", 1);
  transparent_crc(etrLzcfJ, "etrLzcfJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; d < 2; d++)
  {
    for (c = 0; c < 3; c++)
    {
      L1:
      a = 2;

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

