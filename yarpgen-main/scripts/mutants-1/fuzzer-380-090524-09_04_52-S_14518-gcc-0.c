#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int mNk9Lgjd = 1610186944;
  int xUuyC7hk = 1675939859;
  transparent_crc(xUuyC7hk, "xUuyC7hk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (mNk9Lgjd)
  {
    case 5:
      xUuyC7hk = 1;
      break;

    case 6:
      xUuyC7hk = 2;
      break;

    case 7:
      xUuyC7hk = 3;
      break;

  }

  transparent_crc(mNk9Lgjd, "mNk9Lgjd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%s\n", globals[1]);
}

