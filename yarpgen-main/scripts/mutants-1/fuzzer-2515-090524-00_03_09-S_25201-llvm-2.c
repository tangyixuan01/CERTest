#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-if-snippet -> insert-switch-snippet

char a;
int b;
int c;
int e;
int f;
short d;
void fn1(int p1, int p2)
{
  int dG4jWN9B = -1508446599;
  int dkYITOXa = 2147483647;
  int EzLxRhAG = -2147483648;
  long dWuciAYs = 9223372036854775807LL;
  int DeUnGWik = 1070393247;
  int lAWFJwXn = -2147483648;
  int O39yLZ0j = 2147483647;
  transparent_crc(O39yLZ0j, "O39yLZ0j", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; DeUnGWik <= 6; DeUnGWik++)
  {
    O39yLZ0j = 0;
    for (; O39yLZ0j <= 6; O39yLZ0j++)
    {
      int c = dWuciAYs;
      lAWFJwXn = ((c >= 32) || (DeUnGWik > (647 >> c))) ? (DeUnGWik) : (0);
    }

    if (dG4jWN9B)
      EzLxRhAG |= dkYITOXa;
  }

  transparent_crc(lAWFJwXn, "lAWFJwXn", 1);
  transparent_crc(DeUnGWik, "DeUnGWik", 1);
  transparent_crc(dWuciAYs, "dWuciAYs", 1);
  transparent_crc(EzLxRhAG, "EzLxRhAG", 1);
  transparent_crc(dkYITOXa, "dkYITOXa", 1);
  transparent_crc(dG4jWN9B, "dG4jWN9B", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (p1)
  {
    f = 0;
  }
}

int fn2()
{
  int  _zq8wA2i = -553312759;
  int * R_PJm5ET = &_zq8wA2i;
  unsigned char qjyJg_vZ = (unsigned char)0;
  b = 0;
  c--;
  switch (qjyJg_vZ)
  {
    case 0x95:
      *R_PJm5ET = qjyJg_vZ - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *R_PJm5ET = qjyJg_vZ - 0x80;
      break;

    default:
      *R_PJm5ET = 0;
      break;

  }

  d = a != 0;
  c && (b = 0);
  transparent_crc(qjyJg_vZ, "qjyJg_vZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1(e, fn2());
  if (d != 0)
  {
    __builtin_abort();
  }
  return 0;
}

