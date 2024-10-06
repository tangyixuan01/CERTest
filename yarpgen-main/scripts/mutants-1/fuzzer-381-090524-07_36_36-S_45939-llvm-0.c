#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a[256];
int b;
int c;
int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
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
  transparent_crc(VFCLJTxU, "VFCLJTxU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", b);
}

