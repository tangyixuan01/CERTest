#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

unsigned int c;
unsigned int f;
volatile char b;
volatile char i;
unsigned long long d;
int fn1(int p1, int p2)
{
  int fO6wCEI7 = 1095177194;
  transparent_crc(fO6wCEI7, "fO6wCEI7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (fO6wCEI7 & 1)
    fO6wCEI7 = 0;
  return (p2) ? (p2) : (p1);
}

short fn2(int p1, int p2)
{
  return p1 / p2;
}

char fn3(int p1)
{
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  i = fn1(c, fn2((f <= d) <= fn3(b), -3));
  if (i)
  {
    __builtin_abort();
  }
  return 0;
}

