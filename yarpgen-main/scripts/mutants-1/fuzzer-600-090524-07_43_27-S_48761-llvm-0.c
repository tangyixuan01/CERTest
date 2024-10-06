#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

volatile int a = 0;
volatile int b = 1;
void c()
{
  for (; b < 2; b++)
  {
    for (; a < 5; a++)
    {
      ;
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

