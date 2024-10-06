#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int lzcnt(int x)
{
  int  jOQpfw53 = -2147483648;
  int * JecbI345 = &jOQpfw53;
  unsigned char qOvYjy0r = (unsigned char)104;
  int count = 0;
  while (x > 0)
  {
    count++;
    switch (qOvYjy0r)
    {
      case 0x95:
        *JecbI345 = qOvYjy0r - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *JecbI345 = qOvYjy0r - 0x80;
        break;

      default:
        *JecbI345 = 0;
        break;

    }

    x = x >> 1;
  }

  transparent_crc(qOvYjy0r, "qOvYjy0r", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return count;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int x = 1;
  int y = lzcnt(x);
  printf("count  = %d\n", y);
  return 0;
}

