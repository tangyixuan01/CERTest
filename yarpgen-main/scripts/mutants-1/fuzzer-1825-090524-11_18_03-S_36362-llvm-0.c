#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int c = -1;
void f(int e)
{
  int * WLv8XSkw = &c;
  unsigned char eI6KbUwY = (unsigned char)22;
  transparent_crc(eI6KbUwY, "eI6KbUwY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (eI6KbUwY)
  {
    case 0x95:
      *WLv8XSkw = eI6KbUwY - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *WLv8XSkw = eI6KbUwY - 0x80;
      break;

    default:
      *WLv8XSkw = 0;
      break;

  }

  b = (b % (~(c * e))) * e;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  f(0 || a);
  return 0;
}

