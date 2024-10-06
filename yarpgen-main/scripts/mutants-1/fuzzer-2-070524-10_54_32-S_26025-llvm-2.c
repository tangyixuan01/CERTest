#include "/home/yixuan/codeExtract/csmith.h"

// insert-for-snippet -> insert-if-snippet -> insert-for-snippet

unsigned int c;
unsigned int f;
volatile char b;
volatile char i;
unsigned long long d;
int fn1(int p1, int p2)
{
  short LTEn8H61 = (short)-32768;
  short TSsdrj5W = (short)32767;
  int ICxdoc5l = -2147483648;
  int KUqfFtYx = -626190660;
  int rwMdRaAf = -68907049;
  int mYRECdfv = -2017464276;
  int d8Rjp_S1 = 2147483647;
  unsigned char Od49q7j1 = (unsigned char)238;
  int gpV8ZM9J = 2147483647;
  volatile int D94fJNm2 = 2147483647;
  if (9031239389974324562ULL >= ((-((d8Rjp_S1 && gpV8ZM9J) + Od49q7j1)) ^ (-21096)))
  {
    for (LTEn8H61 = 0; LTEn8H61 < 2; LTEn8H61++)
    {
      if (mYRECdfv != 1)
      {
        ICxdoc5l = LTEn8H61 - 7;
        TSsdrj5W = ICxdoc5l * 60694;
        KUqfFtYx = TSsdrj5W;
      }
      for (; rwMdRaAf; rwMdRaAf++)
        ;

    }

    printf("OK\n");
  }
  else
  {
    printf("FAIL\n");
  }
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
  transparent_crc(gpV8ZM9J, "gpV8ZM9J", 1);
  transparent_crc(Od49q7j1, "Od49q7j1", 1);
  transparent_crc(d8Rjp_S1, "d8Rjp_S1", 1);
  transparent_crc(mYRECdfv, "mYRECdfv", 1);
  transparent_crc(rwMdRaAf, "rwMdRaAf", 1);
  transparent_crc(KUqfFtYx, "KUqfFtYx", 1);
  transparent_crc(ICxdoc5l, "ICxdoc5l", 1);
  transparent_crc(TSsdrj5W, "TSsdrj5W", 1);
  transparent_crc(LTEn8H61, "LTEn8H61", 1);
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

