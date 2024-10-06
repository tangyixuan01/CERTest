#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

unsigned char a = 6;
int b;
int c;
static void fn1()
{
  int i = (a > 1) ? (1) : (a);
  int j = 6 & (c = a && (b = a));
  int d = 0;
  int e = a;
  int f = ~c;
  int g = b || a;
  unsigned char h = ~a;
  if (a)
  {
    f = j;
  }
  if (h && g)
  {
    d = a;
  }
  i = ((-(~((f * d) * h))) + c) && ((e || i) ^ f);
  if (i != 1)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  NhPrknHS = -1864686148;
  int * SxK5LpqC = &NhPrknHS;
  unsigned char hHTZM6jN = (unsigned char)255;
  fn1();
  switch (hHTZM6jN)
  {
    case 0x95:
      *SxK5LpqC = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *SxK5LpqC = 0x00;
      break;

    default:
      *SxK5LpqC = 0x05;
      break;

  }

  transparent_crc(hHTZM6jN, "hHTZM6jN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

