#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

void abort(void);
void g(int);
void f(int l)
{
  unsigned i;
  for (i = 0; i < l; i++)
  {
    int y = i;
    int z = y * (-32);
    g(z);
    transparent_crc(y, "y", 1);
    transparent_crc(z, "z", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

void g(int i)
{
  short M92LK0Cv = (short)-32768;
  unsigned short sYHW68wy = (unsigned short)65535;
  static int x = 0;
  if (i == 0)
  {
    x++;
    if (M92LK0Cv < sYHW68wy)
    {
      sYHW68wy = M92LK0Cv;
      M92LK0Cv = ~M92LK0Cv;
    }
  }
  transparent_crc(sYHW68wy, "sYHW68wy", 1);
  transparent_crc(M92LK0Cv, "M92LK0Cv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

