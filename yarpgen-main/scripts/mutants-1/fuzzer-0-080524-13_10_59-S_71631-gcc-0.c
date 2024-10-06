#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int sVXHRt8B = 2147483647;
  int JaK6A0mu = 2147483647;
  volatile int d = 1;
  volatile int e = 1;
  switch (sVXHRt8B)
  {
    case 5:
      JaK6A0mu = 1;
      break;

    case 6:
      JaK6A0mu = 2;
      break;

    case 7:
      JaK6A0mu = 3;
      break;

  }

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
  transparent_crc(JaK6A0mu, "JaK6A0mu", 1);
  transparent_crc(sVXHRt8B, "sVXHRt8B", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

