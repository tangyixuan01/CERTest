#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
struct A
{
  int b;
  int c;
  int d;
  int e;
  int f;
  long g;
} h;
int i;
void o(int m)
{
  struct A p[9] = {{1, 0, 0, 0, 0, 0}};
  h = p[3];
}

void n(int q)
{
  o(i);
}

void l()
{
  int  fUZT_vli = -2147483648;
  int * wUGc6hAv = &fUZT_vli;
  unsigned char VHAKl2cG = (unsigned char)255;
  switch (VHAKl2cG)
  {
    case 0x95:
      *wUGc6hAv = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *wUGc6hAv = 0x00;
      break;

    default:
      *wUGc6hAv = 0x05;
      break;

  }

  transparent_crc(VHAKl2cG, "VHAKl2cG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  n(i);
}

void r()
{
  l();
  if (!i)
  {
    return;
  }
  while (1)
  {
    ;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  r();
  printf("%d\n", h.b);
  return 0;
}

