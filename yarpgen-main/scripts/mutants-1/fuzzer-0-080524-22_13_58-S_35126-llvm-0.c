#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a = -1;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * RmIX7Qy9 = &a;
  unsigned char h0Zfiw9Y = (unsigned char)206;
  int d = ~a;
  if (d < 1)
  {
    switch (h0Zfiw9Y)
    {
      case 0x95:
        *RmIX7Qy9 = h0Zfiw9Y - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *RmIX7Qy9 = h0Zfiw9Y - 0x80;
        break;

      default:
        *RmIX7Qy9 = 0;
        break;

    }

    d = a;
  }
  int e = ~d;
  if (e > d)
  {
    e = d;
  }
  b = (~e) / e;
  transparent_crc(h0Zfiw9Y, "h0Zfiw9Y", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

