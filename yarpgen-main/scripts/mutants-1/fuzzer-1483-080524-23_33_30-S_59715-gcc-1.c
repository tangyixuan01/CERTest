#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a = 2;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * _9GsZPah = &a;
  unsigned char aUGkXfYc = (unsigned char)0;
  int * bG1NsQrj = &a;
  unsigned char v9zok4L3 = (unsigned char)1;
  int c;
  if (!b)
  {
    switch (aUGkXfYc)
    {
      case 0x95:
        *_9GsZPah = aUGkXfYc - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *_9GsZPah = aUGkXfYc - 0x80;
        break;

      default:
        *_9GsZPah = 0;
        break;

    }

    b = a;
    c = (a == 0) ? (1) : (1 % a);
    if (c)
    {
      b = 0;
    }
  }
  printf("%d\n", b);
  switch (v9zok4L3)
  {
    case 0x95:
      *bG1NsQrj = v9zok4L3 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *bG1NsQrj = v9zok4L3 - 0x80;
      break;

    default:
      *bG1NsQrj = 0;
      break;

  }

  transparent_crc(v9zok4L3, "v9zok4L3", 1);
  transparent_crc(aUGkXfYc, "aUGkXfYc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

