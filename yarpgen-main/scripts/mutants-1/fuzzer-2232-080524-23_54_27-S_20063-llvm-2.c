#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet -> insert-switch-snippet

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
  int * rVIsnA0p = &c;
  unsigned char l8IGViyR = (unsigned char)145;
  unsigned IAhZ96C_ = 4084340954U;
  int * Plt0XY1G = &c;
  unsigned char QENv5PS7 = (unsigned char)255;
  *b = g;
  switch (l8IGViyR)
  {
    case 0x95:
      *rVIsnA0p = l8IGViyR - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *rVIsnA0p = l8IGViyR - 0x80;
      break;

    default:
      *rVIsnA0p = 0;
      break;

  }

  lbl:
  *b = *f;

  (*e)--;
  *(*b) = 0;
  if (d)
  {
    goto lbl;
    while (IAhZ96C_ < 94)
      IAhZ96C_++;

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
  transparent_crc(IAhZ96C_, "IAhZ96C_", 1);
  transparent_crc(l8IGViyR, "l8IGViyR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

