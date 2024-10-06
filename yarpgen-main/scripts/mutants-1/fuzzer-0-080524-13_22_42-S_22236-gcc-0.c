#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

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
  int gyXuNWYe = 2147483647;
  int OFYfXBPy = 1411417920;
  unsigned char b;
  transparent_crc(OFYfXBPy, "OFYfXBPy", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (gyXuNWYe--)
    OFYfXBPy = 1;

  transparent_crc(gyXuNWYe, "gyXuNWYe", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (b = 0; b < 0xFF; b++)
  {
    foo(b);
  }

}

