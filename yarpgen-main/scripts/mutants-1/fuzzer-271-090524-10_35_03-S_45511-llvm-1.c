#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-if-snippet

int a = 0;
int b = 0;
int d = 0;
static int c = 2;
int *f = 0;
int *bPtr = &b;
long e = 0;
long * const ePtr = &e;
static void fn5()
{
  int wi3anrMC = -2082158274;
  int DJSfGbkt = 1787658154;
  f = &c;
  *bPtr = 0;
  for (DJSfGbkt = 0; DJSfGbkt < 16; DJSfGbkt++)
    wi3anrMC ^= -1;

  transparent_crc(DJSfGbkt, "DJSfGbkt", 1);
  transparent_crc(wi3anrMC, "wi3anrMC", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *f = 0;
}

int *fn6()
{
  int LFhf9v7X = 2147483647;
  volatile char lSRP74pA = (signed char)127;
  char QSalGxvd = (signed char)-27;
  *bPtr = 8;
  *ePtr = 1 == ((-1L) / (1 ^ ((unsigned) c)));
  if ((QSalGxvd) ? (LFhf9v7X % QSalGxvd) : (0))
    lSRP74pA;
  transparent_crc(QSalGxvd, "QSalGxvd", 1);
  transparent_crc(lSRP74pA, "lSRP74pA", 1);
  transparent_crc(LFhf9v7X, "LFhf9v7X", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return &d;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn5();
  f = fn6();
  printf("checksum = %X\n", e);
}

