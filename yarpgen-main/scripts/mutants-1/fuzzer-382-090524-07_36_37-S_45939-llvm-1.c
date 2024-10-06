#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

int a[256];
int b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  w1k3qG5o = -2147483648;
  int * L0BdbJhq = &w1k3qG5o;
  unsigned char OUznmhZF = (unsigned char)255;
  int VFCLJTxU = 2147483647;
  char  q7wmOR5p = (signed char)-108;
  char * GcjdT9Zl = &q7wmOR5p;
  unsigned short Vqpa1SkP = (unsigned short)65535;
  c = 0;
  for (; c < 256; c++)
  {
    a[c] = c;
    if (VFCLJTxU - Vqpa1SkP)
      *GcjdT9Zl = 0;
  }

  for (; d; d++)
  {
    ;
  }

  transparent_crc(Vqpa1SkP, "Vqpa1SkP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (OUznmhZF)
  {
    case 0x95:
      *L0BdbJhq = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *L0BdbJhq = 0x00;
      break;

    default:
      *L0BdbJhq = 0x05;
      break;

  }

  transparent_crc(VFCLJTxU, "VFCLJTxU", 1);
  transparent_crc(OUznmhZF, "OUznmhZF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", b);
}

