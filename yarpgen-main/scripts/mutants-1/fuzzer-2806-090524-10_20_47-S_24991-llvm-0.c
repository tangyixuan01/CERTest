#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a[1];
int b;
int d;
int e;
int f;
int h;
int i;
int j;
volatile int c = 1;
char g;
void fn1(int p1)
{
  b = a[p1];
}

void fn2()
{
  for (h = 15; h < 22; h += 5)
  {
    if (c)
    {
      d--;
      f--;
      g--;
      if (d)
      {
        j = (f < 0) || ((f >= 0) > f);
        i = (e ^= 1);
      }
      e = 0;
    }
    else
    {
      g = 0;
    }
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * EKj1Yp74 = &c;
  unsigned char Z3TXjmIH = (unsigned char)255;
  a[0] = 1;
  fn2();
  fn1(g & 1);
  if (b != 1)
  {
    __builtin_abort();
    switch (Z3TXjmIH)
    {
      case 0x95:
        *EKj1Yp74 = Z3TXjmIH - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *EKj1Yp74 = Z3TXjmIH - 0x80;
        break;

      default:
        *EKj1Yp74 = 0;
        break;

    }

  }
  transparent_crc(Z3TXjmIH, "Z3TXjmIH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

