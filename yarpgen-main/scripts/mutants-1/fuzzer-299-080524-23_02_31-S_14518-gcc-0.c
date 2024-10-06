#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  }

  transparent_crc(bCSNs_7Y, "bCSNs_7Y", 1);
  transparent_crc(swJOKUWg, "swJOKUWg", 1);
  transparent_crc(mKH1J3Qy, "mKH1J3Qy", 1);
  transparent_crc(rEnw26Sg, "rEnw26Sg", 1);
  transparent_crc(V_aTylCI, "V_aTylCI", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%s\n", globals[1]);
}

