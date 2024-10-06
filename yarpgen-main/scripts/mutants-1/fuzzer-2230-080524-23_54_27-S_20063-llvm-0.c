#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int *a;
int **b = &a;
int c = 1;
int **f = &a;
int *g = &c;
char d = 0;
static char *e = &d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * Plt0XY1G = &c;
  unsigned char QENv5PS7 = (unsigned char)255;
  *b = g;
  lbl:
  *b = *f;

  (*e)--;
  *(*b) = 0;
  if (d)
  {
    goto lbl;
  }
  switch (QENv5PS7)
  {
    case 0x95:
      *Plt0XY1G = QENv5PS7 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Plt0XY1G = QENv5PS7 - 0x80;
      break;

    default:
      *Plt0XY1G = 0;
      break;

  }

  printf("%d\n", c);
  transparent_crc(QENv5PS7, "QENv5PS7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

