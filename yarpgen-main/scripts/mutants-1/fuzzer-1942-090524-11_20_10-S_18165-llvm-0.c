#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
struct 
{
  int f0;
  int f1;
  int f2;
} a;
struct 
{
  int f0;
  int f1;
  int f2;
} e;
int b;
int c = 1;
int d;
int f;
int g;
int h;
static int fn1(unsigned char p)
{
  int * as5jFDny = &c;
  unsigned char GJleEoWD = (unsigned char)0;
  lbl:
  for (g = 0; g; g++)
  {
    if (c)
    {
      break;
    }
    p && (d |= 1);
  }


  switch (GJleEoWD)
  {
    case 0x95:
      *as5jFDny = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *as5jFDny = 0x00;
      break;

    default:
      *as5jFDny = 0x05;
      break;

  }

  for (e.f1 = 0; e.f1 < 21; e.f1 += 2)
  {
    h = 0;
    if (a.f0)
    {
      goto lbl;
    }
    f |= (a.f2 |= (p++) || (b--));
  }

  transparent_crc(GJleEoWD, "GJleEoWD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1(128);
  printf("%d\n", b);
  return 0;
}

