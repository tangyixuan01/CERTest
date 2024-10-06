#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

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
  int  kLSbog5f = 2147483647;
  int * E_NxH67g = &kLSbog5f;
  unsigned char qxCJXaHd = (unsigned char)0;
  int HvSfPhNQ = -1036948029;
  transparent_crc(HvSfPhNQ, "HvSfPhNQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (HvSfPhNQ > 7)
    return 0;
  transparent_crc(qxCJXaHd, "qxCJXaHd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (qxCJXaHd)
  {
    case 0x95:
      *E_NxH67g = qxCJXaHd - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *E_NxH67g = qxCJXaHd - 0x80;
      break;

    default:
      *E_NxH67g = 0;
      break;

  }

  printf("%s\n", globals[1]);
}

