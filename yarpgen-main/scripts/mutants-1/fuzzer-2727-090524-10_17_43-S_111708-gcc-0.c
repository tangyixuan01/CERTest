#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static int f(int);
int main(int argc, const char *argv[])
{
  platform_main_begin();
  crc32_gentab();
  int  Ff0L3RaW = 1859683172;
  int * tqGHOJQn = &Ff0L3RaW;
  unsigned char tl4f5IEZ = (unsigned char)0;
  (void) argv;
  switch (tl4f5IEZ)
  {
    case 0x95:
      *tqGHOJQn = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *tqGHOJQn = 0x00;
      break;

    default:
      *tqGHOJQn = 0x05;
      break;

  }

  transparent_crc(tl4f5IEZ, "tl4f5IEZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return f(argc);
}

static int f(int f)
{
  int x = f;
  {
    int f(int);
    if (x < 1)
    {
      return 0;
    }
    else
    {
      return f(x - 1);
    }
  }
}

