#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

volatile char buff = 0;
void PRINTF(const char *s)
{
  while (*(s++))
  {
    buff = *s;
  }

}

int a = 1;
int b = 1;
int c = 1;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int * _MQXNFrK = &b;
  int ** cb_Uh1pF = &_MQXNFrK;
  int yZ1HPagT = 2147483647;
  int bnZS_hDV = -1862328650;
  int SxZHKkhM = -704019495;
  int * lcU6khKA = &a;
  int * JOSCg9wy = &c;
  int ** QhMGquop = &JOSCg9wy;
  volatile int d = 1;
  volatile int e = 1;
  int f = 1 / a;
  int g = 1U < f;
  int h = 2 + g;
  int i = 3 % h;
  int j = e && b;
  int k = 1 == c;
  int l = d != 0;
  for (; SxZHKkhM < 1; SxZHKkhM++)
  {
    *cb_Uh1pF = &yZ1HPagT;
    if (!lcU6khKA)
      __builtin_abort();
    *QhMGquop = &bnZS_hDV;
  }

  short m = (short) (((-1) * i) * l);
  short x = j * (k * m);
  if (i == 1)
  {
    PRINTF("OK");
  }
  if (x != (-1))
  {
    __builtin_abort();
  }
  transparent_crc(SxZHKkhM, "SxZHKkhM", 1);
  transparent_crc(bnZS_hDV, "bnZS_hDV", 1);
  transparent_crc(yZ1HPagT, "yZ1HPagT", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

