#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b = 1;
char c;
void fn1()
{
  unsigned char LXg6p2Rf = (unsigned char)0;
  while ((unsigned char) ((LXg6p2Rf--) * 6))
    ;

  c = a - b;
  transparent_crc(LXg6p2Rf, "LXg6p2Rf", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    b = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (a = 0; a < 1; a++)
  {
    fn1();
  }

  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

