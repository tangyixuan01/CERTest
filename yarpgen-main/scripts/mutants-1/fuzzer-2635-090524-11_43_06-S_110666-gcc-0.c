#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  hz4Sy8XW = 1150741500;
  int * lEkvpodm = &hz4Sy8XW;
  unsigned char uKz3eA28 = (unsigned char)0;
  if ((a != 2) == a)
  {
    switch (uKz3eA28)
    {
      case 0x95:
        *lEkvpodm = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *lEkvpodm = 0x00;
        break;

      default:
        *lEkvpodm = 0x05;
        break;

    }

    __builtin_abort();
  }
  transparent_crc(uKz3eA28, "uKz3eA28", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

