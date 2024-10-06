#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

long b;
unsigned c[5];
unsigned long long d = 3;
int e;
int f;
int g;
void h()
{
  for (; f < 11; f++)
  {
    b = g;
    for (e = 0; e < 5; e++)
    {
      c[e] = (e - b) - (c[e] >> 5);
      g = c[e];
    }

  }

  if (c[0])
  {
    d = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  CSVLHMWO = -1538763051;
  int * RFs3SLQl = &CSVLHMWO;
  int ** rkuJeDLj = &RFs3SLQl;
  short VHxPFK8I = (short)7635;
  unsigned wKuRr_v0 = 3444417034U;
  int  IX63fvGJ = -2147483648;
  int * MiuALoF7 = &IX63fvGJ;
  h();
  if (VHxPFK8I > (++wKuRr_v0))
    *rkuJeDLj = MiuALoF7;
  transparent_crc(wKuRr_v0, "wKuRr_v0", 1);
  transparent_crc(VHxPFK8I, "VHxPFK8I", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return d;
}

