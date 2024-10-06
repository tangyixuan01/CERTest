#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

volatile double x = 1.23456789;
void f(int p)
{
  if ((p < (-1)) || (0 < p))
  {
    p = -1;
  }
  char d[30];
  int n = __builtin_sprintf(d, "%.*a", p, x);
  const char *s = (n < 20) ? ("< 20") : (">= 20");
  __builtin_printf("%i %s\n%zu: \"%s\"\n", n, s, __builtin_strlen(d), d);
}

volatile int i;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int KFJkvTQA = -2147483648;
  int BqTuDLCi = 1217496399;
  int mAVoZxG2 = -886952516;
  int ASpTMynt = 2147483647;
  ASpTMynt = KFJkvTQA && ((BqTuDLCi) ? (0) : (mAVoZxG2));
  volatile int i = -1;
  transparent_crc(ASpTMynt, "ASpTMynt", 1);
  transparent_crc(mAVoZxG2, "mAVoZxG2", 1);
  transparent_crc(BqTuDLCi, "BqTuDLCi", 1);
  transparent_crc(KFJkvTQA, "KFJkvTQA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  f(i);
}

