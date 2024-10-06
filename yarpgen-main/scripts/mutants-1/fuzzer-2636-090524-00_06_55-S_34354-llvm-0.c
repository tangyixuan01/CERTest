#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
unsigned int b;
static void fn1(int c)
{
  int  VmijZF6E = 225260090;
  int * JbLR59my = &VmijZF6E;
  unsigned char laNYqXpu = (unsigned char)92;
  transparent_crc(laNYqXpu, "laNYqXpu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (laNYqXpu)
  {
    case 0x95:
      *JbLR59my = laNYqXpu - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *JbLR59my = laNYqXpu - 0x80;
      break;

    default:
      *JbLR59my = 0;
      break;

  }

  if (!((-c) & (((--b) >> 1) + 2)))
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1(2);
  return 0;
}

