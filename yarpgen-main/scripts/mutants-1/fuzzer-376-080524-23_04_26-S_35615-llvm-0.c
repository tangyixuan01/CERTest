#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
union a
{
  int b;
  long c;
} e[] = {{0}, {8}};
int d = 0;
int *f = &e[1].b;
long *g = &e[1].c;
void h()
{
  for (; d < 2; d++)
  {
    *g = 0;
    if (*f)
    {
      return;
    }
  }

  return;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * SAZCKQyq = &d;
  unsigned char MN1dGfCk = (unsigned char)0;
  h();
  transparent_crc(MN1dGfCk, "MN1dGfCk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (MN1dGfCk)
  {
    case 0x95:
      *SAZCKQyq = MN1dGfCk - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *SAZCKQyq = MN1dGfCk - 0x80;
      break;

    default:
      *SAZCKQyq = 0;
      break;

  }

  printf("%d\n", d);
}

