#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

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
  long vTtzekdL = -1426434694911085265LL;
  long nbVyKCX8 = -9223372036854775807LL;
  char weHpNn6y = (signed char)-85;
  nbVyKCX8 = weHpNn6y + vTtzekdL;
  fn1();
  transparent_crc(weHpNn6y, "weHpNn6y", 1);
  transparent_crc(nbVyKCX8, "nbVyKCX8", 1);
  transparent_crc(vTtzekdL, "vTtzekdL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

