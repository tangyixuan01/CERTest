#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

void *mmap();
void foo(unsigned *p1, unsigned short *p2)
{
  int n;
  for (n = 0; n < 320; n++)
  {
    p1[n] = p2[n * 2];
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  kTxOfnoi = 2032503292;
  int * kZfo7Emi = &kTxOfnoi;
  unsigned char y_ipJdo8 = (unsigned char)52;
  void *x;
  switch (y_ipJdo8)
  {
    case 0x95:
      *kZfo7Emi = y_ipJdo8 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *kZfo7Emi = y_ipJdo8 - 0x80;
      break;

    default:
      *kZfo7Emi = 0;
      break;

  }

  long a;
  x = mmap(4432, 65536, 2, 2 | 32, 1, 0);
  a = 65536 - (((2 * 320) - 1) * (sizeof(short)));
  transparent_crc(y_ipJdo8, "y_ipJdo8", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  foo(x, (unsigned short *) (((char *) x) + a));
}

