#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

#pragma pack(1)
struct A
{
  int b : 4;
  int c : 11;
  int d : 2;
  int e : 5;
} f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  short ymBSvEZ9 = (short)19508;
  short Nz6BgTMb = (short)21911;
  short XoLP58_6 = (short)-32768;
  unsigned B5VESjur = 0U;
  int MKsHGzeR = 1394708738;
  int PVc8unDL = -2147483648;
  while (ymBSvEZ9)
  {
    if (PVc8unDL)
      ymBSvEZ9 = MKsHGzeR;
    PVc8unDL = 1;
    MKsHGzeR = (Nz6BgTMb = (XoLP58_6) ? (0) : (B5VESjur % XoLP58_6));
  }

  struct A g = {1, 1, 1, 1};
  while (!g.b)
  {
    f = g;
  }

  transparent_crc(PVc8unDL, "PVc8unDL", 1);
  transparent_crc(MKsHGzeR, "MKsHGzeR", 1);
  transparent_crc(B5VESjur, "B5VESjur", 1);
  transparent_crc(XoLP58_6, "XoLP58_6", 1);
  transparent_crc(Nz6BgTMb, "Nz6BgTMb", 1);
  transparent_crc(ymBSvEZ9, "ymBSvEZ9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

