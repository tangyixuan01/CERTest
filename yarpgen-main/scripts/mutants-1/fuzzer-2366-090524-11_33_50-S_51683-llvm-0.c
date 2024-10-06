#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a = -2094967296;
int b = 6;
int h;
int i;
char c;
static const int d;
static const int *e[2] = {&d, &d};
int f;
unsigned g = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * gyNo0mYl = &b;
  unsigned char KbcL_Jue = (unsigned char)0;
  int j;
  int k = ~a;
  L:
  ;

  unsigned m = (2 / (~c)) / g;
  int o = c = m % b;
  if ((g >= o) && c)
  {
    printf("%d", f);
    for (; h; h++)
    {
      printf("0");
    }

    i = *e[j];
    goto L;
  }
  if (b < 6)
  {
    j++;
  }
  if (k <= 0)
  {
    goto L;
    switch (KbcL_Jue)
    {
      case 0x95:
        *gyNo0mYl = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *gyNo0mYl = 0x00;
        break;

      default:
        *gyNo0mYl = 0x05;
        break;

    }

  }
  transparent_crc(KbcL_Jue, "KbcL_Jue", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

