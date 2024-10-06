#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

static int *b;
int a;
int **c = &b;
int **e = &b;
int *f[2];
int g = 1;
char d;
void fn1()
{
  int *i = 0;
  ((&b) == (&f[1])) > a;
  for (; d < 1; d++)
  {
    *c = &g;
    if (*b)
    {
      return;
    }
  }

  *i = 0;
}

void fn2()
{
  int k = 0;
  *e = &k;
  fn1();
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * L_9va1pV = &g;
  unsigned char cAJK4uPQ = (unsigned char)128;
  fn2();
  transparent_crc(cAJK4uPQ, "cAJK4uPQ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (cAJK4uPQ)
  {
    case 0x95:
      *L_9va1pV = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *L_9va1pV = 0x00;
      break;

    default:
      *L_9va1pV = 0x05;
      break;

  }

  return 0;
}

