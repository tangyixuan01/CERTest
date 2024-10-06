#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile unsigned int  XaeIliyU = 0U;
  volatile unsigned int * QaPscNul = &XaeIliyU;
  int IZXyGQRB = 2147483647;
  if (IZXyGQRB == 1)
    QaPscNul[0x708 / 4] = 0xbeefdead;
  int c = 0;
  if (a)
  {
    c = 1;
  }
  c = (1 & (a && c)) && b;
  if (a)
  {
    b = c;
    __builtin_abort();
  }
  transparent_crc(IZXyGQRB, "IZXyGQRB", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

