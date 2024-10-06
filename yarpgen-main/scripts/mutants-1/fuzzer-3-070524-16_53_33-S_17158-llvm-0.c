#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int  p3Pa27XS = -2147483648;
  int * RQWn4Xit = &p3Pa27XS;
  unsigned char eVqA_toE = (unsigned char)154;
  struct x3 x7 = {{0, 0}, 1};
  x6 = x7;
  x7.x4.x2;
  printf("%d\n", x6.x5);
  switch (eVqA_toE)
  {
    case 0x95:
      *RQWn4Xit = eVqA_toE - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *RQWn4Xit = eVqA_toE - 0x80;
      break;

    default:
      *RQWn4Xit = 0;
      break;

  }

  transparent_crc(eVqA_toE, "eVqA_toE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

