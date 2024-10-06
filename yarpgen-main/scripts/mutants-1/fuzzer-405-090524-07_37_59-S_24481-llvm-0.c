#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b[10] = {0, 0, 0, 0, 0, 0, 0, 1};
int c;
int e;
void fn1()
{
  int p3rFY67L = -55663272;
  int qNFrnvoZ = 2147483647;
  if (a)
  {
    fn1();
  }
  transparent_crc(qNFrnvoZ, "qNFrnvoZ", 1);
  transparent_crc(p3rFY67L, "p3rFY67L", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (e = 8; e >= 0; e--)
  {
    c = 2;
    for (; c < 8; c++)
    {
      qNFrnvoZ = (p3rFY67L = 0);
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
  for (;;)
  {
    fn1();
    break;
  }

  if (b[1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

