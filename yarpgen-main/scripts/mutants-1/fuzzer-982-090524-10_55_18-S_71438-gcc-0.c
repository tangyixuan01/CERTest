#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

int a;
int b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int _jlxDkF3 = 2147483647;
  int IlQURhk0 = -2147483648;
  int e = d = 3;
  for (; d >= 0; d--)
  {
    c = e;
    e = (a ^ (a && b)) && 1;
  }

  if (c != 0)
  {
    __builtin_abort();
    while (_jlxDkF3)
      IlQURhk0++;

  }
  transparent_crc(IlQURhk0, "IlQURhk0", 1);
  transparent_crc(_jlxDkF3, "_jlxDkF3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

