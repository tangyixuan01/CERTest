#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

void abort(void);
void foo(signed char a)
{
  if ((a - 0x7F) > 1)
  {
    abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned t0WS7lJC = 3046150836U;
  unsigned e6M4sycv = 0U;
  unsigned char b;
  transparent_crc(e6M4sycv, "e6M4sycv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (e6M4sycv > t0WS7lJC)
  {
    __builtin_abort();
  }
  transparent_crc(t0WS7lJC, "t0WS7lJC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (b = 0; b < 0xFF; b++)
  {
    foo(b);
  }

}

