#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a[10];
int b;
int d;
int h;
int *c = &b;
int *g;
short e;
int **f;
int ***i = &f;
void k()
{
  e = 5;
  for (; e; e--)
  {
    a[e + 4] = *c;
    a[e + 2] = 0 != (&d);
  }

  char j;
  b = 0;
  for (; b <= 5; b++)
  {
    j = 0;
    for (; j <= 5; j++)
    {
      a[j + 3] = 0;
    }

  }

  for (;;)
  {
    *i = &g;
    *f = &h;
    if (*(*i))
    {
      break;
    }
    int l = 9;
    for (; l; l--)
    {
      a[l] = 0;
    }

    transparent_crc(l, "l", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  R3KeJP9U = -2147483648;
  int * _hf3k9Qa = &R3KeJP9U;
  unsigned char OtI13vSL = (unsigned char)203;
  k();
  switch (OtI13vSL)
  {
    case 0x95:
      *_hf3k9Qa = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *_hf3k9Qa = 0x00;
      break;

    default:
      *_hf3k9Qa = 0x05;
      break;

  }

  transparent_crc(OtI13vSL, "OtI13vSL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", a[4]);
}

