#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
unsigned int b;
static void fn1(int c)
{
  int SB0aDLWp = 2147483647;
  int I1v39y7a = 2147483647;
  transparent_crc(I1v39y7a, "I1v39y7a", 1);
  transparent_crc(SB0aDLWp, "SB0aDLWp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!((-c) & (((--b) >> 1) + 2)))
  {
    __builtin_abort();
    while ((++SB0aDLWp) > I1v39y7a)
      I1v39y7a = SB0aDLWp;

  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1(2);
  return 0;
}

