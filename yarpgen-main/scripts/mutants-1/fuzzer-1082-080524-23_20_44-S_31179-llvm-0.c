#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int a[128];
int b;
int e;
int g;
short c;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  char pGtwVZ82 = (signed char)-12;
  int UzKry_Vd = -1566085581;
  int KPw8Gqjc = -2031496076;
  int f = 0;
  int h = 5;
  for (; f < 128; f++)
  {
    a[f] = f;
  }

  L:
  c = b / h;

  e = d;
  if (d)
  {
    h = 0;
    UzKry_Vd = ((pGtwVZ82--) == 0) & (KPw8Gqjc++);
  }
  if (d < g)
  {
    printf("%d\n", d);
    goto L;
  }
  transparent_crc(KPw8Gqjc, "KPw8Gqjc", 1);
  transparent_crc(UzKry_Vd, "UzKry_Vd", 1);
  transparent_crc(pGtwVZ82, "pGtwVZ82", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

