#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-switch-snippet -> insert-if-snippet

int a[64];
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Vir0RFnj = -1367006615;
  int  iHzEP3tD = 2147483647;
  int * QdP8NztH = &iHzEP3tD;
  unsigned char nfzYxMB9 = (unsigned char)91;
  int D2bJ4dWg = 1084684384;
  int RbQKE4m7 = -2147483648;
  volatile int ACzZEK_g = 1804784797;
  volatile int cjCxYfOb = -701034767;
  int d = 0;
  for (D2bJ4dWg = 0; D2bJ4dWg < 18; D2bJ4dWg += 1)
  {
    RbQKE4m7 = (ACzZEK_g == 0) != (cjCxYfOb - ((int) ((-0x7fffffff) - 1)));
    switch (nfzYxMB9)
    {
      case 0x95:
        *QdP8NztH = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *QdP8NztH = 0x00;
        break;

      default:
        *QdP8NztH = 0x05;
        break;

    }

  }

  for (; d < 64; d++)
  {
    if (Vir0RFnj & 1)
      Vir0RFnj = 0;
    a[d] = d;
  }

  int e = 1;
  L:
  for (c = 0; c < 1; c++)
  {
    __builtin_printf("%d\n", e);
  }


  e = 0;
  while (b)
  {
    goto L;
  }

  transparent_crc(cjCxYfOb, "cjCxYfOb", 1);
  transparent_crc(ACzZEK_g, "ACzZEK_g", 1);
  transparent_crc(RbQKE4m7, "RbQKE4m7", 1);
  transparent_crc(D2bJ4dWg, "D2bJ4dWg", 1);
  transparent_crc(nfzYxMB9, "nfzYxMB9", 1);
  transparent_crc(Vir0RFnj, "Vir0RFnj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

