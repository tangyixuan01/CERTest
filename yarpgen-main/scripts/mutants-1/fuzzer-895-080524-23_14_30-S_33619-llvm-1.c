#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int a;
int b;
int c;
int d;
int e;
int i;
int g;
int j = 1;
char f;
void fn1()
{
  short W2r8zY6n = (short)-32768;
  int KPEj_iad = 2147483647;
  if (c)
  {
    goto L5;
    while (W2r8zY6n >= KPEj_iad)
      W2r8zY6n++;

  }
  for (; d < 2; d++)
  {
    i = 1;
  }

  goto L3;
  L1:
  L2:
  if (e)
  {
    goto L4;
  }


  L3:
  ;

  char h;
  char k = d;
  if (j)
  {
    b;
    L4:
    if (!i)
    {
      goto L1;
    }

  }
  h = (f = k);
  i = ~((f * (-1)) / (~1U));
  g = f & h;
  L5:
  ;

  short l = ~f;
  int m = 2 / (~a);
  transparent_crc(KPEj_iad, "KPEj_iad", 1);
  transparent_crc(W2r8zY6n, "W2r8zY6n", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (m < l)
  {
    a = -((~0) || 0);
    goto L2;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * a245PI09 = &j;
  unsigned char bfaQclgj = (unsigned char)0;
  switch (bfaQclgj)
  {
    case 0x95:
      *a245PI09 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *a245PI09 = 0x00;
      break;

    default:
      *a245PI09 = 0x05;
      break;

  }

  fn1();
  transparent_crc(bfaQclgj, "bfaQclgj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

