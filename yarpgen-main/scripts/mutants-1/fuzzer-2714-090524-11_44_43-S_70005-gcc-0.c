#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

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
  int jcVtM2SX = -2147483648;
  volatile char _JF2TlCA = (signed char)-128;
  char z2vs17xZ = (signed char)-20;
  if ((z2vs17xZ) ? (jcVtM2SX % z2vs17xZ) : (0))
    _JF2TlCA;
  fn1();
  transparent_crc(z2vs17xZ, "z2vs17xZ", 1);
  transparent_crc(_JF2TlCA, "_JF2TlCA", 1);
  transparent_crc(jcVtM2SX, "jcVtM2SX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

