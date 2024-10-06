#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a = 0;
char b = 0;
char c = 0;
short d = 0;
void e()
{
  for (; b; b++)
  {
    d = a + 8;
  }

  for (; d;)
  {
    ;
  }

  f:
  c++;

  if (c)
  {
    goto f;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * gmsDU1k7 = &a;
  unsigned char un6dgvRC = (unsigned char)191;
  switch (un6dgvRC)
  {
    case 0x95:
      *gmsDU1k7 = un6dgvRC - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *gmsDU1k7 = un6dgvRC - 0x80;
      break;

    default:
      *gmsDU1k7 = 0;
      break;

  }

  e();
  transparent_crc(un6dgvRC, "un6dgvRC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c);
}

