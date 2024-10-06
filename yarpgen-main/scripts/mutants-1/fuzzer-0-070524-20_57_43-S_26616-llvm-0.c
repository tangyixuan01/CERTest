#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
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

      case 0x80:

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
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

