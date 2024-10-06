#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
union 
{
  int a;
  short b;
} c;
int *d = &c.a;
static short *e = &c.b;
int f;
char g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char E7RZ0Bx3 = (signed char)-77;
  char yc7Gs9m4 = (signed char)-45;
  short MkOUZhAf = (short)32767;
  f = c.a;
  *d = 1;
  *e |= g;
  E7RZ0Bx3 = (~MkOUZhAf) - yc7Gs9m4;
  transparent_crc(MkOUZhAf, "MkOUZhAf", 1);
  transparent_crc(yc7Gs9m4, "yc7Gs9m4", 1);
  transparent_crc(E7RZ0Bx3, "E7RZ0Bx3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c.b);
}

