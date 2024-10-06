#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int *b = &a;
int c;
int e = -1;
int f;
int g = 1;
int h;
static void fn1()
{
  for (; c < 1; c++)
  {
    for (h = 0; h < 2; h++)
    {
      (g && h) || (e ^= !g);
      g = 0;
    }

  }

  *b = h;
  if (e < (-1))
  {
    *b = f;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * SmdJ5sRF = &e;
  unsigned char wAJoFOyk = (unsigned char)0;
  fn1();
  if (a)
  {
    __builtin_abort();
  }
  switch (wAJoFOyk)
  {
    case 0x95:
      *SmdJ5sRF = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *SmdJ5sRF = 0x00;
      break;

    default:
      *SmdJ5sRF = 0x05;
      break;

  }

  transparent_crc(wAJoFOyk, "wAJoFOyk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

