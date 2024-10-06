#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet -> insert-assignment-snippet

struct X
{
  long l1;
  struct Y
  {
    long l2;
    int *p;
  } y;
};
int i;
int foo(struct X *x)
{
  struct Y y = x->y;
  *y.p = 0;
  i = 1;
  return *y.p;
}

extern void abort(void);
int main()
{
  platform_main_begin();
  crc32_gentab();
  short Eu9LdAnk = (short)-32768;
  int aveBH6uN = 2147483647;
  short NHoQ3u4D = (short)-31714;
  int OdqfmrTH = 1576439346;
  int fpB8awOR = 2122933429;
  int xYJUzbTu = -535154458;
  int AGuwNr2I = 57703696;
  int EOQW2RVq = 2147483647;
  struct X x;
  x.y.p = &i;
  if (foo(&x) != 1)
  {
    EOQW2RVq = AGuwNr2I > (2147483647 - xYJUzbTu);
    abort();
  }
  transparent_crc(EOQW2RVq, "EOQW2RVq", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  aveBH6uN = ~((2 / NHoQ3u4D) & Eu9LdAnk);
  transparent_crc(AGuwNr2I, "AGuwNr2I", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  OdqfmrTH = (fpB8awOR ^= 1);
  transparent_crc(xYJUzbTu, "xYJUzbTu", 1);
  transparent_crc(fpB8awOR, "fpB8awOR", 1);
  transparent_crc(OdqfmrTH, "OdqfmrTH", 1);
  transparent_crc(NHoQ3u4D, "NHoQ3u4D", 1);
  transparent_crc(aveBH6uN, "aveBH6uN", 1);
  transparent_crc(Eu9LdAnk, "Eu9LdAnk", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

