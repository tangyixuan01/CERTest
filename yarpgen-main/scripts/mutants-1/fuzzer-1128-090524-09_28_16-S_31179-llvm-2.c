#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-switch-snippet

int printf(const char *, ...);
int a[128];
int b;
int e;
int g;
short c;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  ySCGFX2P = -2147483648;
  int * A81yBQuU = &ySCGFX2P;
  unsigned char cCb_efd5 = (unsigned char)107;
  int  JRcYfMAC = 2147483647;
  int * Slt42mxK = &JRcYfMAC;
  unsigned char GsnT0pWX = (unsigned char)255;
  int aGcH_E5u = 2147483647;
  int tpdk1PXJ = 2147483647;
  switch (aGcH_E5u)
  {
    case 5:
      tpdk1PXJ = 1;
      break;

    case 6:
      tpdk1PXJ = 2;
      break;

    case 7:
      tpdk1PXJ = 3;
      break;

  }

  int f = 0;
  int h = 5;
  for (; f < 128; f++)
  {
    a[f] = f;
  }

  L:
  c = b / h;

  e = d;
  if (d)
  {
    h = 0;
    switch (GsnT0pWX)
    {
      case 0x95:
        *Slt42mxK = 0x01;
        break;

      switch (cCb_efd5)
      {
        case 0x95:
          *A81yBQuU = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *A81yBQuU = 0x00;
          break;

        default:
          *A81yBQuU = 0x05;
          break;

      }

      case 0x80:

      case 0x81:

      case 0x82:
        *Slt42mxK = 0x00;
        break;

      default:
        *Slt42mxK = 0x05;
        break;

    }

  }
  if (d < g)
  {
    printf("%d\n", d);
    goto L;
  }
  transparent_crc(tpdk1PXJ, "tpdk1PXJ", 1);
  transparent_crc(aGcH_E5u, "aGcH_E5u", 1);
  transparent_crc(GsnT0pWX, "GsnT0pWX", 1);
  transparent_crc(cCb_efd5, "cCb_efd5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

