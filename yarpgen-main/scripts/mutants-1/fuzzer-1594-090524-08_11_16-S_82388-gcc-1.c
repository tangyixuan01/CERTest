#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

struct A
{
  int b;
  int c;
  int d;
} e;
struct A g()
{
  int sV59hRTO = 1600631050;
  int VoiIP5Da = -2147483648;
  struct A h[30] = {{0, 0, 0}};
  transparent_crc(VoiIP5Da, "VoiIP5Da", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  sV59hRTO = (VoiIP5Da ^= 1);
  transparent_crc(sV59hRTO, "sV59hRTO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return h[29];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  k3Sz0sq7 = -1354008733;
  int * B5eziJLO = &k3Sz0sq7;
  unsigned char Exw4tv6m = (unsigned char)255;
  e = g();
  switch (Exw4tv6m)
  {
    case 0x95:
      *B5eziJLO = Exw4tv6m - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *B5eziJLO = Exw4tv6m - 0x80;
      break;

    default:
      *B5eziJLO = 0;
      break;

  }

  transparent_crc(Exw4tv6m, "Exw4tv6m", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return e.b;
}

