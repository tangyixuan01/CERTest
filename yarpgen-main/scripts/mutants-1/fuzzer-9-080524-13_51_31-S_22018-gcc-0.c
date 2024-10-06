#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  int kRFestWp = 919374688;
  int ZoEmLxN1 = -2147483648;
  char J1QR7hk6 = (signed char)127;
  f(3);
  transparent_crc(J1QR7hk6, "J1QR7hk6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  ZoEmLxN1 = kRFestWp / (~(J1QR7hk6 | 114));
  transparent_crc(ZoEmLxN1, "ZoEmLxN1", 1);
  transparent_crc(kRFestWp, "kRFestWp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

