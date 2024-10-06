#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

struct A
{
  int b : 2;
  int c : 2;
  unsigned d : 8;
};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int g9JunGLb = -2147483648;
  int zxgiUBZK = 2147483647;
  int Ex150L6Y = -871291812;
  zxgiUBZK = Ex150L6Y && g9JunGLb;
  struct A t = {0, 0, 2};
  L:
  t.d = ~((~((~0) % t.d)) % 2);

  if (!t.d)
  {
    goto L;
  }
  transparent_crc(Ex150L6Y, "Ex150L6Y", 1);
  transparent_crc(zxgiUBZK, "zxgiUBZK", 1);
  transparent_crc(g9JunGLb, "g9JunGLb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

