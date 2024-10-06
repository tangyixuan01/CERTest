#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

struct 
{
  int a : 8;
  int b : 24;
} c = {0, 1};
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  dlDWk9UB = 1842905541;
  int * _QWF0745 = &dlDWk9UB;
  unsigned char FAHWvMYj = (unsigned char)8;
  int aAwKzVQ7 = 2129812004;
  if (aAwKzVQ7 == 0)
  {
    printf("pass\n");
  }
  if (c.b && (!c.b))
  {
    __builtin_abort();
  }
  transparent_crc(aAwKzVQ7, "aAwKzVQ7", 1);
  transparent_crc(FAHWvMYj, "FAHWvMYj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (FAHWvMYj)
  {
    case 0x95:
      *_QWF0745 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *_QWF0745 = 0x00;
      break;

    default:
      *_QWF0745 = 0x05;
      break;

  }

  return 0;
}

