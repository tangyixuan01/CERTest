#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

int printf(const char *, ...);
struct S
{
  int f0;
  int f3;
  int f6;
  int f7;
  int f8;
};
int a;
static struct S b;
char fn1(char p1, char p2)
{
  return p1 + p2;
}

void fn3(struct S p1)
{
}

int fn4()
{
  int  Zp6QDxHV = -2147483648;
  int * vwB9_kjs = &Zp6QDxHV;
  unsigned char cBjwJsCH = (unsigned char)59;
  a--;
  switch (cBjwJsCH)
  {
    case 0x95:
      *vwB9_kjs = cBjwJsCH - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *vwB9_kjs = cBjwJsCH - 0x80;
      break;

    default:
      *vwB9_kjs = 0;
      break;

  }

  transparent_crc(cBjwJsCH, "cBjwJsCH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

static int fn2()
{
  int Es7NjfAk = 2147483647;
  char c = 117;
  b.f0 = 0;
  for (; b.f0 < 44; b.f0 = fn1(b.f0, 4))
  {
    fn3(b);
    if (Es7NjfAk & 1)
      return 0;
    a--;
    c++;
    c && fn4();
  }

  a--;
  transparent_crc(Es7NjfAk, "Es7NjfAk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a = b.f3;
  fn2();
  fn2();
  printf("%d\n", a);
  return 0;
}

