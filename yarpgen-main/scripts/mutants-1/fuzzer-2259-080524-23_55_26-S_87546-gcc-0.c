#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
long b;
long f;
char c;
char g;
short d = 219;
int e[7];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int  LJVzZFSM = -1463611690;
  int * qFONsEAh = &LJVzZFSM;
  unsigned char uVC6USJA = (unsigned char)209;
  switch (uVC6USJA)
  {
    case 0x95:
      *qFONsEAh = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *qFONsEAh = 0x00;
      break;

    default:
      *qFONsEAh = 0x05;
      break;

  }

  for (; c <= 6; c++)
  {
    g = (d < 0) ? (d) : (d >> a);
    f = g + b;
    e[c] = f;
  }

  transparent_crc(uVC6USJA, "uVC6USJA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", e[1]);
}

