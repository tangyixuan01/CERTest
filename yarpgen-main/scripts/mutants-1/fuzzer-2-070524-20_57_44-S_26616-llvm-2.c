#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet -> insert-switch-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  TOkDPlI9 = -193683987;
  int * TkBnU3Q8 = &TOkDPlI9;
  unsigned char F26JY_1X = (unsigned char)207;
  short ji1rGR_N = (short)31214;
  char wXeAatGJ = (signed char)-128;
  int RJPnTSBY = 1137119817;
  int  LtJof8qT = -2002064174;
  int * uTK_CzS9 = &LtJof8qT;
  unsigned char MFSYlD1f = (unsigned char)232;
  a = -3;
  lbl:
  for (; a < (-2); a++)
  {
    ;
  }


  if (b)
  {
    switch (MFSYlD1f)
    {
      case 0x95:
        *uTK_CzS9 = MFSYlD1f - 0x91;
        break;

      wXeAatGJ = ((RJPnTSBY >= 32) || (ji1rGR_N > (5 >> RJPnTSBY))) ? (ji1rGR_N) : (RJPnTSBY);
      case 0x80:

      switch (F26JY_1X)
      {
        case 0x95:
          *TkBnU3Q8 = 0x01;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *TkBnU3Q8 = 0x00;
          break;

        default:
          *TkBnU3Q8 = 0x05;
          break;

      }

      case 0x81:

      case 0x82:
        *uTK_CzS9 = MFSYlD1f - 0x80;
        break;

      default:
        *uTK_CzS9 = 0;
        break;

    }

    goto lbl;
  }
  transparent_crc(MFSYlD1f, "MFSYlD1f", 1);
  transparent_crc(RJPnTSBY, "RJPnTSBY", 1);
  transparent_crc(wXeAatGJ, "wXeAatGJ", 1);
  transparent_crc(ji1rGR_N, "ji1rGR_N", 1);
  transparent_crc(F26JY_1X, "F26JY_1X", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

