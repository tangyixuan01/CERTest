#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

char *globals[] = {"a", "b"};
int foo()
{
  int LIiNASfg = 1618390433;
  int ohxtvfSk = 2147483647;
  char yCQWlrEc = (signed char)-128;
  int iG9qB_3Z = 1321984387;
  if (iG9qB_3Z)
  {
    iG9qB_3Z = ohxtvfSk + LIiNASfg;
    iG9qB_3Z++;
    return yCQWlrEc;
  }
  transparent_crc(iG9qB_3Z, "iG9qB_3Z", 1);
  transparent_crc(yCQWlrEc, "yCQWlrEc", 1);
  transparent_crc(ohxtvfSk, "ohxtvfSk", 1);
  transparent_crc(LIiNASfg, "LIiNASfg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%s\n", globals[0]);
}

extern char *globals[];
int main()
{
  platform_main_begin();
  crc32_gentab();
  printf("%s\n", globals[1]);
}

