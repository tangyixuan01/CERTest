#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

union U
{
  unsigned int f0;
  int f1;
};
int a;
int d;
void fn1(union U p)
{
  short loufbLQC = (short)32767;
  int ZV6I1JEY = 2147483647;
  short P4BxUILg = (short)32767;
  P4BxUILg = ZV6I1JEY || (~loufbLQC);
  transparent_crc(P4BxUILg, "P4BxUILg", 1);
  transparent_crc(ZV6I1JEY, "ZV6I1JEY", 1);
  transparent_crc(loufbLQC, "loufbLQC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p.f1 <= 0)
  {
    if (a)
    {
      d = 0;
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

