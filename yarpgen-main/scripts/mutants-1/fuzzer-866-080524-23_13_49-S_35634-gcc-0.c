#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

void abort(void);
void exit(int);
void foo(int i)
{
  unsigned wVQnDpKB = 0U;
  int Kg4lVQR8 = -1754008503;
  while (Kg4lVQR8 < wVQnDpKB)
    __builtin_abort();

  static int n;
  if ((i < ((-0x7f) - 1)) || (i > 0x7f))
  {
    abort();
  }
  transparent_crc(Kg4lVQR8, "Kg4lVQR8", 1);
  transparent_crc(wVQnDpKB, "wVQnDpKB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if ((++n) > 1000)
  {
    exit(0);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char c;
  for (c = 0;; c++)
  {
    foo(c);
  }

}

