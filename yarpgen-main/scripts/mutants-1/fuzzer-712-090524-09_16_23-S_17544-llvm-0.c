#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a = 1;
int c;
struct S
{
  char f0;
  int : 31;
  char f1;
  int f2;
} b;
int foo()
{
  struct S d = {0, 0, 0};
  c = d.f0;
  b = d;
  return b.f1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int Tawkgjfs = 804160859;
  int OTAhafJL = -633225287;
  signed mc6YJHnr = 0;
  int WJYkpSc7 = -2147483648;
  c = foo();
  if (!c)
  {
    a = 0;
    OTAhafJL = mc6YJHnr | (Tawkgjfs > WJYkpSc7);
  }
  printf("%d\n", a);
  transparent_crc(WJYkpSc7, "WJYkpSc7", 1);
  transparent_crc(mc6YJHnr, "mc6YJHnr", 1);
  transparent_crc(OTAhafJL, "OTAhafJL", 1);
  transparent_crc(Tawkgjfs, "Tawkgjfs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

