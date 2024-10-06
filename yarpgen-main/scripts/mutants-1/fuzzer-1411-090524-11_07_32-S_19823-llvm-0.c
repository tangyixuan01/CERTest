#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
short a;
short b;
short *c = &a;
char d = 0;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  SN3Bcmud = -2147483648;
  int * aZ_O5R4A = &SN3Bcmud;
  unsigned char lAFOyJg9 = (unsigned char)0;
  char *t = &d;
  lbl:
  b = (*t)--;

  *c = 1;
  if (d)
  {
    goto lbl;
    switch (lAFOyJg9)
    {
      case 0x95:
        *aZ_O5R4A = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *aZ_O5R4A = 0x00;
        break;

      default:
        *aZ_O5R4A = 0x05;
        break;

    }

  }
  printf("%d\n", a);
  transparent_crc(lAFOyJg9, "lAFOyJg9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

