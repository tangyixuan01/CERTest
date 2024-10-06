#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

unsigned char a = 6;
int b;
int c;
static void fn1()
{
  short y_ropx6V = (short)32767;
  int h8BxMEAD = 1811139467;
  short dz1SYRyw = (short)32767;
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
    dz1SYRyw = ~(y_ropx6V / h8BxMEAD);
  }
  if (h && g)
  {
    d = a;
  }
  i = ((-(~((f * d) * h))) + c) && ((e || i) ^ f);
  transparent_crc(dz1SYRyw, "dz1SYRyw", 1);
  transparent_crc(h8BxMEAD, "h8BxMEAD", 1);
  transparent_crc(y_ropx6V, "y_ropx6V", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (i != 1)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

