#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a;
int *b = &a;
static int **c = &b;
static int d;
short e;
char f;
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned HQ8wrDah = 4294967295U;
  int EnxPmQlc = -2147483648;
  int VGNv7lT5 = 2147483647;
  f = -21;
  for (; f < (-5); f++)
  {
    e = f ^ 3;
    VGNv7lT5 = ~(HQ8wrDah % EnxPmQlc);
    d = *b;
    *(*c) = e;
  }

  transparent_crc(VGNv7lT5, "VGNv7lT5", 1);
  transparent_crc(EnxPmQlc, "EnxPmQlc", 1);
  transparent_crc(HQ8wrDah, "HQ8wrDah", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", d);
}

