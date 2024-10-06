#include "/home/yixuan/codeExtract/csmith.h"

// insert-for-snippet

unsigned int c;
unsigned int f;
volatile char b;
volatile char i;
unsigned long long d;
int fn1(int p1, int p2)
{
  volatile int D94fJNm2 = 2147483647;
  unsigned U3fBozLJ = 4294967295U;
  int paQ24GMY = -2147483648;
  volatile int Hsf05vUh = -221355115;
  for (; U3fBozLJ > 2; U3fBozLJ++)
    for (paQ24GMY++;; Hsf05vUh--)
    if (D94fJNm2)
    break;


  transparent_crc(Hsf05vUh, "Hsf05vUh", 1);
  transparent_crc(paQ24GMY, "paQ24GMY", 1);
  transparent_crc(U3fBozLJ, "U3fBozLJ", 1);
  transparent_crc(D94fJNm2, "D94fJNm2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

