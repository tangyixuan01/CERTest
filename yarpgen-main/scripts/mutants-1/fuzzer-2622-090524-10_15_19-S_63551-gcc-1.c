#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet

union U
{
  unsigned int f0;
  int f1;
};
int a;
int d;
void fn1(union U p)
{
  int EuqGNR9e = 2147483647;
  unsigned int wF5nMpK9 = 199421148U;
  int P1XA9uyF = 5638174;
  short loufbLQC = (short)32767;
  int ZV6I1JEY = 2147483647;
  short P4BxUILg = (short)32767;
  P4BxUILg = ZV6I1JEY || (~loufbLQC);
  transparent_crc(P4BxUILg, "P4BxUILg", 1);
  transparent_crc(ZV6I1JEY, "ZV6I1JEY", 1);
  transparent_crc(loufbLQC, "loufbLQC", 1);
  transparent_crc(P1XA9uyF, "P1XA9uyF", 1);
  transparent_crc(wF5nMpK9, "wF5nMpK9", 1);
  transparent_crc(EuqGNR9e, "EuqGNR9e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p.f1 <= 0)
  {
    P1XA9uyF = (EuqGNR9e) ? (0) : (wF5nMpK9 / EuqGNR9e);
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

