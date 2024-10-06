#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int printf(const char *, ...);
int a[4] = {-1, 0, 0, 0};
static int b;
static int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Vu_R3PMN = -204460852;
  char dKGcRwZT = (signed char)-128;
  short LU3h_gRJ = (short)32767;
  int tRedHcNP = 2147483647;
  unsigned CofHcNDY = 0U;
  for (; b < 4; b++)
  {
    short t = a[b];
    a[b] = (c = t % 3);
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  printf("%d\n", a[0]);
  transparent_crc(CofHcNDY, "CofHcNDY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (Vu_R3PMN)
    dKGcRwZT = (CofHcNDY = ~(tRedHcNP && LU3h_gRJ));
  transparent_crc(tRedHcNP, "tRedHcNP", 1);
  transparent_crc(LU3h_gRJ, "LU3h_gRJ", 1);
  transparent_crc(dKGcRwZT, "dKGcRwZT", 1);
  transparent_crc(Vu_R3PMN, "Vu_R3PMN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

