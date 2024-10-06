#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S1
{
  int f0;
  int f2;
  int f3;
  int f6;
  char f8;
} a[1];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  mrqRNweB = -69248604;
  int * RALQm3dg = &mrqRNweB;
  unsigned char kJiZbQ5t = (unsigned char)255;
  struct S1 b[] = {1, 1, 1, 1, 1, 1, 1};
  b[0].f0 = 0;
  a[0] = b[1];
  transparent_crc(kJiZbQ5t, "kJiZbQ5t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (kJiZbQ5t)
  {
    case 0x95:
      *RALQm3dg = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *RALQm3dg = 0x00;
      break;

    default:
      *RALQm3dg = 0x05;
      break;

  }

  return 0;
}

