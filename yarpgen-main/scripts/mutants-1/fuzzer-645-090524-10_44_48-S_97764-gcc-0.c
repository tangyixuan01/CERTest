#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

struct S
{
  int b : 3;
  int c : 28;
  int d : 1;
};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  vhgi3zBp = 1500943228;
  int * LCiSQkT7 = &vhgi3zBp;
  unsigned char rdDN5FUJ = (unsigned char)63;
  struct S e = {1, -1};
  if (e.d)
  {
    switch (rdDN5FUJ)
    {
      case 0x95:
        *LCiSQkT7 = rdDN5FUJ - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *LCiSQkT7 = rdDN5FUJ - 0x80;
        break;

      default:
        *LCiSQkT7 = 0;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(rdDN5FUJ, "rdDN5FUJ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

