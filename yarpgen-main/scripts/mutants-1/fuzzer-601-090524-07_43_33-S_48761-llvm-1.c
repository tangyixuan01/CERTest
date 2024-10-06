#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

volatile int a = 0;
volatile int b = 1;
void c()
{
  int YU7LFGl8 = -2147483648;
  int v8eSNC5M = -364501838;
  int _e6pdF4g = 911615847;
  int v2cl4drw = -2147483648;
  transparent_crc(v2cl4drw, "v2cl4drw", 1);
  transparent_crc(_e6pdF4g, "_e6pdF4g", 1);
  transparent_crc(v8eSNC5M, "v8eSNC5M", 1);
  transparent_crc(YU7LFGl8, "YU7LFGl8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; b < 2; b++)
  {
    for (; a < 5; a++)
    {
      ;
      for (; v8eSNC5M < 1; v8eSNC5M++)
        for (v2cl4drw = 0; v2cl4drw < 2; v2cl4drw++)
      {
        (_e6pdF4g && v2cl4drw) || (YU7LFGl8 ^= !_e6pdF4g);
        _e6pdF4g = 0;
      }


    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * IQ73Xdwb = &a;
  unsigned char to9VfscU = (unsigned char)255;
  c();
  switch (to9VfscU)
  {
    case 0x95:
      *IQ73Xdwb = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *IQ73Xdwb = 0x00;
      break;

    default:
      *IQ73Xdwb = 0x05;
      break;

  }

  transparent_crc(to9VfscU, "to9VfscU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", a);
}

