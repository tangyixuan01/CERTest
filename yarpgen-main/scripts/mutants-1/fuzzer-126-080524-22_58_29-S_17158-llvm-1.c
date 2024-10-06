#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

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
  int  VkHG5SvA = 2147483647;
  int * LWQIVz1F = &VkHG5SvA;
  unsigned char bSRjK6ZW = (unsigned char)255;
  int lsAGpKqb = -1979262330;
  struct x3 x7 = {{0, 0}, 1};
  x6 = x7;
  x7.x4.x2;
  printf("%d\n", x6.x5);
  transparent_crc(lsAGpKqb, "lsAGpKqb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  lsAGpKqb = -((~0) || 0);
  transparent_crc(bSRjK6ZW, "bSRjK6ZW", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (bSRjK6ZW)
  {
    case 0x95:
      *LWQIVz1F = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *LWQIVz1F = 0x00;
      break;

    default:
      *LWQIVz1F = 0x05;
      break;

  }

  return 0;
}

