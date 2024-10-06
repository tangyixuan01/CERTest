#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a = 1;
int b;
int d;
unsigned char c;
int foo()
{
  b |= 1;
  return a;
}

void bar()
{
  l:
  d = foo() && (--c);

  if (c)
  {
    goto l;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * N_HdQWrh = &a;
  unsigned char rqKPOaS7 = (unsigned char)62;
  bar();
  switch (rqKPOaS7)
  {
    case 0x95:
      *N_HdQWrh = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *N_HdQWrh = 0x00;
      break;

    default:
      *N_HdQWrh = 0x05;
      break;

  }

  printf("%d\n", b);
  transparent_crc(rqKPOaS7, "rqKPOaS7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

