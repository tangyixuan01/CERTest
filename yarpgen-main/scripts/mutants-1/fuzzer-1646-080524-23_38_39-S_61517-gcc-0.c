#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int *c = &a;
unsigned short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  p9bx0WzM = 2084983741;
  int * UPkVNpEq = &p9bx0WzM;
  unsigned char pbmL4e1R = (unsigned char)85;
  unsigned int e = a;
  *c = 1;
  if (!b)
  {
    d = e;
    *c = d | e;
  }
  if (a != 0)
  {
    __builtin_abort();
  }
  switch (pbmL4e1R)
  {
    case 0x95:
      *UPkVNpEq = pbmL4e1R - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *UPkVNpEq = pbmL4e1R - 0x80;
      break;

    default:
      *UPkVNpEq = 0;
      break;

  }

  transparent_crc(pbmL4e1R, "pbmL4e1R", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

