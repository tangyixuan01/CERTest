#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct x0
{
  int x1;
  char x2;
};
struct x3
{
  struct x0 x4;
  char x5;
} x6;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  VuB8TQ4n = 1914471049;
  int * _hdcISvu = &VuB8TQ4n;
  unsigned char q4myZleY = (unsigned char)0;
  int  sHD85wOf = -2147483648;
  int * gxCGeJrF = &sHD85wOf;
  unsigned char A9M6pQjT = (unsigned char)255;
  struct x3 x7 = {{0, 0}, 1};
  x6 = x7;
  x7.x4.x2;
  printf("%d\n", x6.x5);
  switch (A9M6pQjT)
  {
    case 0x95:
      *gxCGeJrF = 0x01;
      break;

    case 0x80:

    switch (q4myZleY)
    {
      case 0x95:
        *_hdcISvu = q4myZleY - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *_hdcISvu = q4myZleY - 0x80;
        break;

      default:
        *_hdcISvu = 0;
        break;

    }

    case 0x81:

    case 0x82:
      *gxCGeJrF = 0x00;
      break;

    default:
      *gxCGeJrF = 0x05;
      break;

  }

  transparent_crc(A9M6pQjT, "A9M6pQjT", 1);
  transparent_crc(q4myZleY, "q4myZleY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

