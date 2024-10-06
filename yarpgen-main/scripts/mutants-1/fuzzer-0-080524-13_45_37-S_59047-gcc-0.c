#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
struct 
{
  int f0;
  int f1 : 1;
  int f2 : 2;
} a = {0, 0, 1};
int b;
int c;
int *d;
int e;
int f;
int fn1()
{
  for (; b < 1; ++b)
  {
    for (e = 0; e < 1; e = 1)
    {
      int **g = &d;
      *g = &c;
    }

    *d = 0;
    f = a.f1;
    if (f)
    {
      return 0;
    }
  }

  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  yoMVINZt = 117415879;
  int * aekvnuJz = &yoMVINZt;
  unsigned char fOpm7ug_ = (unsigned char)196;
  fn1();
  printf("%d\n", b);
  switch (fOpm7ug_)
  {
    case 0x95:
      *aekvnuJz = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *aekvnuJz = 0x00;
      break;

    default:
      *aekvnuJz = 0x05;
      break;

  }

  transparent_crc(fOpm7ug_, "fOpm7ug_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

