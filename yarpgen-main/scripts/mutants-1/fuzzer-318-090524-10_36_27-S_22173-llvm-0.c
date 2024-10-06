#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b = 1;
char c;
void fn1()
{
  int inoD0R8I = -1592432470;
  int LQPfK3kh = 1946235796;
  c = a - b;
  transparent_crc(LQPfK3kh, "LQPfK3kh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (inoD0R8I)
  {
    case 5:
      LQPfK3kh = 1;
      break;

    case 6:
      LQPfK3kh = 2;
      break;

    case 7:
      LQPfK3kh = 3;
      break;

  }

  transparent_crc(inoD0R8I, "inoD0R8I", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    b = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (a = 0; a < 1; a++)
  {
    fn1();
  }

  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

