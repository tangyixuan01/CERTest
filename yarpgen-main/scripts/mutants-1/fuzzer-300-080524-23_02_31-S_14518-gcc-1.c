#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet

char *globals[] = {"a", "b"};
int foo()
{
  printf("%s\n", globals[0]);
}

extern char *globals[];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  idvP8jGW = -2147483648;
  int * z2B8dO74 = &idvP8jGW;
  unsigned char U7DcF04B = (unsigned char)129;
  int V_aTylCI = 2147483647;
  int rEnw26Sg = -119760226;
  int mKH1J3Qy = -1280295048;
  int swJOKUWg = 2147483647;
  int bCSNs_7Y = -2147483648;
  for (rEnw26Sg = 0; rEnw26Sg < 3; rEnw26Sg = V_aTylCI)
  {
    mKH1J3Qy = V_aTylCI && bCSNs_7Y;
    if (swJOKUWg)
      break;
    switch (U7DcF04B)
    {
      case 0x95:
        *z2B8dO74 = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *z2B8dO74 = 0x00;
        break;

      default:
        *z2B8dO74 = 0x05;
        break;

    }

  }

  transparent_crc(bCSNs_7Y, "bCSNs_7Y", 1);
  transparent_crc(swJOKUWg, "swJOKUWg", 1);
  transparent_crc(mKH1J3Qy, "mKH1J3Qy", 1);
  transparent_crc(rEnw26Sg, "rEnw26Sg", 1);
  transparent_crc(V_aTylCI, "V_aTylCI", 1);
  transparent_crc(U7DcF04B, "U7DcF04B", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%s\n", globals[1]);
}

