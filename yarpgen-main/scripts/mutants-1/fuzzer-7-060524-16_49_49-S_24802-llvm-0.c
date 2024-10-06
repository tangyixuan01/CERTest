#include "/home/yixuan/codeExtract/csmith.h"

// insert-assignment-snippet

static int a[3];
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char ExuTLGsU = (signed char)-63;
  char bD_C38MF = (signed char)-128;
  short SQs0nKAt = (short)-32768;
  int c[1] = {0};
  a[2] = 1;
  for (b = 0; b < 3; b++)
  {
    a[b] = 0;
  }

  if (a[2] != 0)
  {
    ExuTLGsU = (~SQs0nKAt) - bD_C38MF;
    __builtin_abort();
  }
  transparent_crc(SQs0nKAt, "SQs0nKAt", 1);
  transparent_crc(bD_C38MF, "bD_C38MF", 1);
  transparent_crc(ExuTLGsU, "ExuTLGsU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

