#include "/home/yixuan/codeExtract/csmith.h"

// insert-assignment-snippet

unsigned int c;
unsigned int f;
volatile char b;
volatile char i;
unsigned long long d;
int fn1(int p1, int p2)
{
  return (p2) ? (p2) : (p1);
}

short fn2(int p1, int p2)
{
  return p1 / p2;
}

char fn3(int p1)
{
  unsigned long long XbuMDeVW = 3296982101750029325ULL;
  short RG4j9kcB = (short)-32768;
  short ohGj9zQ3 = (short)32767;
  short b9cA2pHg = (short)27845;
  transparent_crc(b9cA2pHg, "b9cA2pHg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  RG4j9kcB = (((ohGj9zQ3 = XbuMDeVW > 1) <= 7) != XbuMDeVW) & b9cA2pHg;
  transparent_crc(ohGj9zQ3, "ohGj9zQ3", 1);
  transparent_crc(RG4j9kcB, "RG4j9kcB", 1);
  transparent_crc(XbuMDeVW, "XbuMDeVW", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

