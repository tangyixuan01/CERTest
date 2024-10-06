#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int main()
{
  platform_main_begin();
  crc32_gentab();
  int qA_G2pNo = 2147483647;
  char LoiR6VYM = (signed char)-128;
  unsigned Nao3I8dO = 2807659899U;
  short sqG1ThQN = (short)-32768;
  int ZolhmpfB = -1921793240;
  char b[128];
  int l = __builtin_sprintf(b, "%.2d", -1);
  __builtin_printf("b: '%s', length: %d\n", b, l);
  if (l != 3)
  {
    __builtin_abort();
    if (ZolhmpfB >= (-1936967575))
    {
      int m = ((ZolhmpfB / Nao3I8dO) / 110000000) ^ (qA_G2pNo & LoiR6VYM);
      short n = LoiR6VYM;
      if (ZolhmpfB <= (-1936967575))
        n = sqG1ThQN;
      ZolhmpfB = m;
      LoiR6VYM = ~(n + qA_G2pNo);
      Nao3I8dO = -1;
    }
  }
  transparent_crc(ZolhmpfB, "ZolhmpfB", 1);
  transparent_crc(sqG1ThQN, "sqG1ThQN", 1);
  transparent_crc(Nao3I8dO, "Nao3I8dO", 1);
  transparent_crc(LoiR6VYM, "LoiR6VYM", 1);
  transparent_crc(qA_G2pNo, "qA_G2pNo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

