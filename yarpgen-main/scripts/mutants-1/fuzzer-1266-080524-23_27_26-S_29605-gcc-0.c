#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int value = 0;
void modify(int arg)
{
  int * sFKMrYnJ = &value;
  unsigned char nGrlzMkL = (unsigned char)255;
  if (arg != 42)
  {
    return;
    switch (nGrlzMkL)
    {
      case 0x95:
        *sFKMrYnJ = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *sFKMrYnJ = 0x00;
        break;

      default:
        *sFKMrYnJ = 0x05;
        break;

    }

  }
  transparent_crc(nGrlzMkL, "nGrlzMkL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  value = 1;
}

void test(void)
{
  if (value)
  {
    return;
  }
  modify(42);
  value = 0;
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  test();
  return value;
}

