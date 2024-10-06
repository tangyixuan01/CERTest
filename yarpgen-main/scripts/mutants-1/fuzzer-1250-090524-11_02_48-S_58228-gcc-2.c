#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a[8][8] = {{1}};
int b;
int c;
int d;
int e;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  e4GfHVlS = -1392789682;
  int * GDCauE6t = &e4GfHVlS;
  unsigned char pv2_rE3h = (unsigned char)158;
  int dBkEAjSR = -2147483648;
  int gUsxXiDR = -1479364080;
  int vURA2fMw = 253459118;
  int egjNFApX = -2147483648;
  for (c = 0; c < 8; c++)
  {
    for (b = 0; b < 2; b++)
    {
      a[b + 4][c] = a[c][0];
      switch (pv2_rE3h)
      {
        case 0x95:
          *GDCauE6t = pv2_rE3h - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *GDCauE6t = pv2_rE3h - 0x80;
          break;

        default:
          *GDCauE6t = 0;
          break;

      }

      vURA2fMw = egjNFApX > 0;
      switch (dBkEAjSR)
      {
        case 5:
          gUsxXiDR = 1;
          break;

        case 6:
          gUsxXiDR = 2;
          break;

        case 7:
          gUsxXiDR = 3;
          break;

      }

    }

  }

  printf("%d\n", a[4][4]);
  transparent_crc(egjNFApX, "egjNFApX", 1);
  transparent_crc(vURA2fMw, "vURA2fMw", 1);
  transparent_crc(gUsxXiDR, "gUsxXiDR", 1);
  transparent_crc(dBkEAjSR, "dBkEAjSR", 1);
  transparent_crc(pv2_rE3h, "pv2_rE3h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

