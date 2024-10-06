#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

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
  long Cf7Fq0in = 9223372036854775807LL;
  for (;;)
  {
    fn1();
    break;
    while (Cf7Fq0in > 1523073808)
      ;

  }

  if (b[1] != 1)
  {
    __builtin_abort();
  }
  transparent_crc(Cf7Fq0in, "Cf7Fq0in", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

