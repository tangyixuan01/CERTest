#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

short a;
int b[1];
int c(int p)
{
  return (p < 0) ? (0) : (10 + (((p / 100) - 16) / 4));
}

void f(int n)
{
  int b8X9vGzS = 1918116920;
  short t18WgsFm = (short)-32768;
  char ZkymzsL2 = (signed char)-128;
  transparent_crc(ZkymzsL2, "ZkymzsL2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; ZkymzsL2; ZkymzsL2++)
    t18WgsFm = b8X9vGzS + 8;

  transparent_crc(t18WgsFm, "t18WgsFm", 1);
  transparent_crc(b8X9vGzS, "b8X9vGzS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int m = n;
    while (m)
    {
      m /= 2;
    }

    break;
    transparent_crc(m, "m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

void g()
{
  int h = a = 0;
  for (; (h + a) <= 0; a++)
  {
    if (b[c(a - 6)])
    {
      break;
    }
    f(a);
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  g();
  __builtin_printf("%d\n", a);
}

