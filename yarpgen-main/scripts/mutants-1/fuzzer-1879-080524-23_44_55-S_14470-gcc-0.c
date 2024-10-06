#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  af39ZWlj = -2147483648;
  int * zg9MtqXW = &af39ZWlj;
  unsigned char fwW5s4et = (unsigned char)35;
  int t[123] = {1024};
  int d;
  d = 0;
  switch (fwW5s4et)
  {
    case 0x95:
      *zg9MtqXW = fwW5s4et - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *zg9MtqXW = fwW5s4et - 0x80;
      break;

    default:
      *zg9MtqXW = 0;
      break;

  }

  d = t[d]++;
  printf("%d\n", d);
  transparent_crc(fwW5s4et, "fwW5s4et", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

