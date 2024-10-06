#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int main()
{
  platform_main_begin();
  crc32_gentab();
  int fkatWPB9 = 2147483647;
  int d8qv5B6x = 2147483647;
  char b[128];
  int l = __builtin_sprintf(b, "%.2d", -1);
  __builtin_printf("b: '%s', length: %d\n", b, l);
  if (l != 3)
  {
    __builtin_abort();
    switch (fkatWPB9)
    {
      case 5:
        d8qv5B6x = 1;
        break;

      case 6:
        d8qv5B6x = 2;
        break;

      case 7:
        d8qv5B6x = 3;
        break;

    }

  }
  transparent_crc(d8qv5B6x, "d8qv5B6x", 1);
  transparent_crc(fkatWPB9, "fkatWPB9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

