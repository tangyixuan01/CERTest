#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet

unsigned char a = 6;
int b;
int c;
static void fn1()
{
  unsigned char * vZY4EnQC = &a;
  int L0TCrn7X = -2147483648;
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
  transparent_crc(L0TCrn7X, "L0TCrn7X", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (i != 1)
  {
    __builtin_abort();
    L0TCrn7X = --(*vZY4EnQC);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  const long int EeKQpPOu = -9223372036854775807LL;
  unsigned long int HVgzLUln = 1;
  fn1();
  transparent_crc(HVgzLUln, "HVgzLUln", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  HVgzLUln = 4081116982543369 & EeKQpPOu;
  transparent_crc(EeKQpPOu, "EeKQpPOu", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

