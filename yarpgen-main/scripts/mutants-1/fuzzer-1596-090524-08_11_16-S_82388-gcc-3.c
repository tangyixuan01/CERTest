#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet -> insert-for-snippet -> insert-switch-snippet

struct A
{
  int b;
  int c;
  int d;
} e;
struct A g()
{
  int  YZLngbqB = 2147483647;
  int * p9O5Rrij = &YZLngbqB;
  unsigned char jb_AozUD = (unsigned char)36;
  int sV59hRTO = 1600631050;
  int VoiIP5Da = -2147483648;
  struct A h[30] = {{0, 0, 0}};
  transparent_crc(VoiIP5Da, "VoiIP5Da", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  sV59hRTO = (VoiIP5Da ^= 1);
  transparent_crc(sV59hRTO, "sV59hRTO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (jb_AozUD)
  {
    case 0x95:
      *p9O5Rrij = jb_AozUD - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *p9O5Rrij = jb_AozUD - 0x80;
      break;

    default:
      *p9O5Rrij = 0;
      break;

  }

  transparent_crc(jb_AozUD, "jb_AozUD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return h[29];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int ItdfGNVk = 2147483647;
  int XqyVbuAK = -509682860;
  int  k3Sz0sq7 = -1354008733;
  int * B5eziJLO = &k3Sz0sq7;
  unsigned char Exw4tv6m = (unsigned char)255;
  e = g();
  for (; ItdfGNVk < 6; ++ItdfGNVk)
  {
    XqyVbuAK = 8;
    for (; XqyVbuAK < 0; XqyVbuAK--)
      ;

  }

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
  transparent_crc(XqyVbuAK, "XqyVbuAK", 1);
  transparent_crc(ItdfGNVk, "ItdfGNVk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return e.b;
}

