#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

void abort(void);
void g(int);
void f(int l)
{
  int XCR4oxUs = -2147483648;
  short vGlCaPq0 = (short)7338;
  int iZaLSw8H = -1112566519;
  int uvQBpHCj = 1514281333;
  volatile int Lc5D6qIl = 2147483647;
  unsigned i;
  for (; XCR4oxUs >= 0; XCR4oxUs--)
  {
    vGlCaPq0 = 0;
    for (; vGlCaPq0 <= 3; vGlCaPq0++)
    {
      uvQBpHCj = 0;
      for (; uvQBpHCj <= 3; uvQBpHCj++)
        Lc5D6qIl &= 5;

    }

    if (iZaLSw8H)
      break;
  }

  transparent_crc(Lc5D6qIl, "Lc5D6qIl", 1);
  transparent_crc(uvQBpHCj, "uvQBpHCj", 1);
  transparent_crc(iZaLSw8H, "iZaLSw8H", 1);
  transparent_crc(vGlCaPq0, "vGlCaPq0", 1);
  transparent_crc(XCR4oxUs, "XCR4oxUs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  f(3);
  return 0;
}

