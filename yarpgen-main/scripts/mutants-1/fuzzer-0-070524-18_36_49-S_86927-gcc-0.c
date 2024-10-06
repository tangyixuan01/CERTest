#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a[28];
int b;
void abort();
int main()
{
  platform_main_begin();
  crc32_gentab();
  int s0h_9K18 = -2147483648;
  a[4] = 1;
  int c = 1;
  for (; b < 8; b++)
  {
    if (a[b])
    {
      s0h_9K18 = !1;
      c = 0;
    }
  }

  transparent_crc(s0h_9K18, "s0h_9K18", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (c)
  {
    abort();
  }
}

