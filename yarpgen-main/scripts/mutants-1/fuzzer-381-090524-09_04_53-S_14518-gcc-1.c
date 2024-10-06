#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

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
  int  rSqnkvT4 = 1750097251;
  int * BurS4Cv9 = &rSqnkvT4;
  unsigned char fTBxQlAS = (unsigned char)13;
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

  switch (fTBxQlAS)
  {
    case 0x95:
      *BurS4Cv9 = fTBxQlAS - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *BurS4Cv9 = fTBxQlAS - 0x80;
      break;

    default:
      *BurS4Cv9 = 0;
      break;

  }

  transparent_crc(mNk9Lgjd, "mNk9Lgjd", 1);
  transparent_crc(fTBxQlAS, "fTBxQlAS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%s\n", globals[1]);
}

