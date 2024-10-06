#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int b;
int c;
int d;
long e[9][7][4];
void f()
{
  for (; a >= 0; a--)
  {
    b = 0;
    for (; b <= 3; b++)
    {
      c = 0;
      for (; c <= 3; c++)
      {
        int *g = &d;
        *g = e[0][0][b] | e[a][b][a];
      }

    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  uGCPETXO = -84345113;
  int * xwcf5gKC = &uGCPETXO;
  unsigned char cVTrjaUH = (unsigned char)254;
  f();
  switch (cVTrjaUH)
  {
    case 0x95:
      *xwcf5gKC = cVTrjaUH - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *xwcf5gKC = cVTrjaUH - 0x80;
      break;

    default:
      *xwcf5gKC = 0;
      break;

  }

  transparent_crc(cVTrjaUH, "cVTrjaUH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", a);
}

