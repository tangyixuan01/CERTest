#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet -> insert-while-snippet -> insert-if-snippet

volatile char buff = 0;
void PRINTF(const char *s)
{
  int v68GnUN0 = 2147483647;
  int xRMEtF28 = -1854942152;
  int boP7Z8Ov = 2147483647;
  int eNOc7oi_ = -2147483648;
  int VoUyQn2s = -2147483648;
  unsigned wMLTy9xs = 2008288245U;
  int U_Y7Z3dK = -622245976;
  int M9fF207v = 2019008500;
  int v01fdU6Z = 2147483647;
  v01fdU6Z = (M9fF207v = 0);
  transparent_crc(v01fdU6Z, "v01fdU6Z", 1);
  transparent_crc(M9fF207v, "M9fF207v", 1);
  transparent_crc(U_Y7Z3dK, "U_Y7Z3dK", 1);
  transparent_crc(wMLTy9xs, "wMLTy9xs", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (1)
  {
    int f = 2;
    int g = 1;
    int h = 126;
    int *i = &h;
    (&xRMEtF28) == i;
    L1:
    L2:
    if (!h)
      goto L1;


    if (!f)
    {
      eNOc7oi_ = (g << h) || (eNOc7oi_ << 3);
      goto L2;
    }
    boP7Z8Ov = v68GnUN0;
    f = (h = (v68GnUN0 = g));
    g = boP7Z8Ov;
    if (boP7Z8Ov)
      break;
    goto L2;
  }

  transparent_crc(VoUyQn2s, "VoUyQn2s", 1);
  transparent_crc(eNOc7oi_, "eNOc7oi_", 1);
  transparent_crc(boP7Z8Ov, "boP7Z8Ov", 1);
  transparent_crc(xRMEtF28, "xRMEtF28", 1);
  transparent_crc(v68GnUN0, "v68GnUN0", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (*(s++))
  {
    buff = *s;
    if (wMLTy9xs > U_Y7Z3dK)
      VoUyQn2s = (~U_Y7Z3dK) || VoUyQn2s;
  }

}

int a = 1;
int b = 1;
int c = 1;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int aM0UbLtj = -930717890;
  volatile int d = 1;
  volatile int e = 1;
  int f = 1 / a;
  int g = 1U < f;
  int h = 2 + g;
  int i = 3 % h;
  int j = e && b;
  int k = 1 == c;
  int l = d != 0;
  short m = (short) (((-1) * i) * l);
  short x = j * (k * m);
  if (i == 1)
  {
    if (aM0UbLtj & 1)
      aM0UbLtj = 0;
    PRINTF("OK");
  }
  if (x != (-1))
  {
    __builtin_abort();
  }
  transparent_crc(aM0UbLtj, "aM0UbLtj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

