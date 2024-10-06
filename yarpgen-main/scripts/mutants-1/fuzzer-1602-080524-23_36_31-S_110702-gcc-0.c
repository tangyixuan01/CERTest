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
  int  UEMJLWac = -1185461724;
  int * oCkgc_lf = &UEMJLWac;
  unsigned char d_7nZth5 = (unsigned char)0;
  transparent_crc(d_7nZth5, "d_7nZth5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (d_7nZth5)
  {
    case 0x95:
      *oCkgc_lf = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *oCkgc_lf = 0x00;
      break;

    default:
      *oCkgc_lf = 0x05;
      break;

  }

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
  f();
  printf("%d\n", a);
}

