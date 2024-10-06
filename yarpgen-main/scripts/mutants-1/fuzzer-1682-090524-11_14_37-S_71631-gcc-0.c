#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

volatile char buff = 0;
void PRINTF(const char *s)
{
  int KicrZvT2 = -2147483648;
  int T_q0ym8A = 1479745931;
  transparent_crc(T_q0ym8A, "T_q0ym8A", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while ((T_q0ym8A > 0) < (~T_q0ym8A))
    KicrZvT2++;

  transparent_crc(KicrZvT2, "KicrZvT2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
    PRINTF("OK");
  }
  if (x != (-1))
  {
    __builtin_abort();
  }
  return 0;
}

