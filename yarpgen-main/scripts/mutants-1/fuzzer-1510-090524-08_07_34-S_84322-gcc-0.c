#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

extern int a[10];
int g();
void f()
{
  a[a[1]] = g();
}

int a[10];
int g()
{
  return a[1] = 2;
}

void f();
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  AVX_5G8m = -348702473;
  int * aXATncoV = &AVX_5G8m;
  unsigned char UaDpQFCV = (unsigned char)255;
  switch (UaDpQFCV)
  {
    case 0x95:
      *aXATncoV = UaDpQFCV - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *aXATncoV = UaDpQFCV - 0x80;
      break;

    default:
      *aXATncoV = 0;
      break;

  }

  f();
  transparent_crc(UaDpQFCV, "UaDpQFCV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  __builtin_printf("%d %d\n", a[1], a[2]);
}

