#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

int a = 0;
int e = 0;
int b = 0;
short c[2] = {0, 0};
int *a_ptr = &a;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * xvefOXZ5 = &e;
  unsigned char BVmljntz = (unsigned char)115;
  short xLhMr1p2 = (short)-32768;
  short PFazJqEx = (short)14759;
  char uFxym8Sp = (signed char)-3;
  int MZwKnrBU = 1640512503;
  char ScNzFeLv = (signed char)-128;
  short vgVeJzlS = (short)19540;
  c[0] = 1;
  for (b = 1; b >= 0; b--)
  {
    ScNzFeLv ^= (MZwKnrBU &= (xLhMr1p2--) + (uFxym8Sp && (PFazJqEx == (uFxym8Sp = vgVeJzlS))));
    e = (*a_ptr = c[b]);
  }

  c[0] = 0;
  transparent_crc(vgVeJzlS, "vgVeJzlS", 1);
  transparent_crc(ScNzFeLv, "ScNzFeLv", 1);
  transparent_crc(MZwKnrBU, "MZwKnrBU", 1);
  transparent_crc(uFxym8Sp, "uFxym8Sp", 1);
  transparent_crc(PFazJqEx, "PFazJqEx", 1);
  transparent_crc(xLhMr1p2, "xLhMr1p2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (BVmljntz)
  {
    case 0x95:
      *xvefOXZ5 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *xvefOXZ5 = 0x00;
      break;

    default:
      *xvefOXZ5 = 0x05;
      break;

  }

  transparent_crc(BVmljntz, "BVmljntz", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("checksum = %X\n", a);
}

