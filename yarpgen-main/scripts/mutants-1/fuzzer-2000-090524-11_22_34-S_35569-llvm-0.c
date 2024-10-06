#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
union 
{
  int a;
  short b;
} c;
int *d = &c.a;
static short *e = &c.b;
int f;
char g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  mSzGO6FB = -2147483648;
  int * CKUt2_pr = &mSzGO6FB;
  unsigned char NUlozMqO = (unsigned char)18;
  f = c.a;
  *d = 1;
  *e |= g;
  switch (NUlozMqO)
  {
    case 0x95:
      *CKUt2_pr = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *CKUt2_pr = 0x00;
      break;

    default:
      *CKUt2_pr = 0x05;
      break;

  }

  transparent_crc(NUlozMqO, "NUlozMqO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c.b);
}

