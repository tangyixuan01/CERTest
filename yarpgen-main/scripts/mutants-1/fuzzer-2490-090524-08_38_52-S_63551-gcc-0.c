#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

union U
{
  unsigned int f0;
  int f1;
};
int a;
int d;
void fn1(union U p)
{
  int TOGLhjib = -1473204832;
  int zrKB7vRm = -2147483648;
  int wyzOYhWi = -456810355;
  transparent_crc(wyzOYhWi, "wyzOYhWi", 1);
  transparent_crc(zrKB7vRm, "zrKB7vRm", 1);
  transparent_crc(TOGLhjib, "TOGLhjib", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p.f1 <= 0)
  {
    if (a)
    {
      d = 0;
      for (; zrKB7vRm;)
        printf("index = [%d][%d][%d]\n", TOGLhjib, wyzOYhWi, zrKB7vRm);

    }
  }
}

void fn2()
{
  d = 0;
  union U b = {4294967286};
  fn1(b);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn2();
  return 0;
}

