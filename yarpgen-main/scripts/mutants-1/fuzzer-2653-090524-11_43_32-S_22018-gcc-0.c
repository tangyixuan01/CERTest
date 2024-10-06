#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

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
  int e7VY5pm6 = -2147483648;
  int PaMikcGd = 1002045816;
  f(3);
  transparent_crc(PaMikcGd, "PaMikcGd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while ((++e7VY5pm6) > PaMikcGd)
    PaMikcGd = e7VY5pm6;

  transparent_crc(e7VY5pm6, "e7VY5pm6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

