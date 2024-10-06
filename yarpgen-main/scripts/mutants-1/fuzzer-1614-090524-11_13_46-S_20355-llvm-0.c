#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[4] = {-1, 0, 0, 0};
static int b;
static int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  IOvS7rzh = 1047106240;
  int * VBfxyIOp = &IOvS7rzh;
  unsigned char qs8dLxce = (unsigned char)233;
  for (; b < 4; b++)
  {
    short t = a[b];
    a[b] = (c = t % 3);
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  switch (qs8dLxce)
  {
    case 0x95:
      *VBfxyIOp = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *VBfxyIOp = 0x00;
      break;

    default:
      *VBfxyIOp = 0x05;
      break;

  }

  printf("%d\n", a[0]);
  transparent_crc(qs8dLxce, "qs8dLxce", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

