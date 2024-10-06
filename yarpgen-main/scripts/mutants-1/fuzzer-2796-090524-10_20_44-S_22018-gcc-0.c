#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

void abort(void);
void g(int);
void f(int l)
{
  long VfxUSNai = -9223372036854775807LL;
  unsigned i;
  transparent_crc(VfxUSNai, "VfxUSNai", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < l; i++)
  {
    int y = i;
    int z = y * (-32);
    g(z);
    VfxUSNai /= 10L;
    transparent_crc(y, "y", 1);
    transparent_crc(z, "z", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

void g(int i)
{
  static int x = 0;
  if (i == 0)
  {
    x++;
  }
  if (x > 1)
  {
    abort();
  }
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  f(3);
  return 0;
}

