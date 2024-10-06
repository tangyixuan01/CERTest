#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int a = 0;
void b()
{
  int zAZV39s0 = -2147483648;
  int qieN5lrv = 2147483647;
  a = 0;
  transparent_crc(qieN5lrv, "qieN5lrv", 1);
  transparent_crc(zAZV39s0, "zAZV39s0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; a <= 4; a++)
  {
    ;
    if (qieN5lrv >= 0)
      zAZV39s0 |= 0x10000;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  b();
  printf("%d\n", a);
}

