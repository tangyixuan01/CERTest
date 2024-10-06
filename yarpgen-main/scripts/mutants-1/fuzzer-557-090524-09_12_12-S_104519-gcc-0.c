#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

char a;
char b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  dluhVQcB = -1929060144;
  int * r94DYQFa = &dluhVQcB;
  unsigned char aumrV7N5 = (unsigned char)139;
  switch (aumrV7N5)
  {
    case 0x95:
      *r94DYQFa = aumrV7N5 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *r94DYQFa = aumrV7N5 - 0x80;
      break;

    default:
      *r94DYQFa = 0;
      break;

  }

  for (b = -7; b; b += 3)
  {
    if (a)
    {
      __builtin_abort();
    }
  }

  transparent_crc(aumrV7N5, "aumrV7N5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

