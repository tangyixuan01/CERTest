#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-assignment-snippet -> insert-assignment-snippet

union a
{
  int64_t b;
  uint16_t c;
} e;
int8_t d;
int8_t l;
int8_t h;
uint16_t *g = &e.c;
uint16_t **i = &g;
int16_t j;
uint16_t ***k = &i;
uint32_t m();
int8_t *n(uint16_t, uint32_t, uint16_t, union a, uint32_t);
uint32_t o()
{
  union a p = {};
  m(n(d, 0, 0, p, d));
  return l;
}

uint32_t m()
{
  int64_t *ad = &e.b;
  *ad = 0;
  int16_t *ae = &j;
  *ae = *(*(*k));
  return h;
}

int8_t *n(uint16_t f, uint32_t ag, uint16_t ah, union a ai, uint32_t aj)
{
  unsigned long long AIqrtsfh = 16217507616510646844ULL;
  short l2dgKiwe = (short)-32768;
  short qN_BEY9j = (short)32767;
  short k0tULyfE = (short)-32768;
  int8_t *ak = &d;
  (*(*(*k)))++;
  l2dgKiwe = (((qN_BEY9j = AIqrtsfh > 1) <= 7) != AIqrtsfh) & k0tULyfE;
  transparent_crc(k0tULyfE, "k0tULyfE", 1);
  transparent_crc(qN_BEY9j, "qN_BEY9j", 1);
  transparent_crc(l2dgKiwe, "l2dgKiwe", 1);
  transparent_crc(AIqrtsfh, "AIqrtsfh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return ak;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int Bhfodenx = 2147483647;
  int FfjS14VK = 2147483647;
  int uZvgaNlt = -2056825172;
  uZvgaNlt = (FfjS14VK) ? (0) : (Bhfodenx);
  int Q60TiSIK = -2147483648;
  int OhsoWfYA = 161202422;
  o();
  transparent_crc(OhsoWfYA, "OhsoWfYA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  OhsoWfYA = Q60TiSIK;
  transparent_crc(Q60TiSIK, "Q60TiSIK", 1);
  transparent_crc(uZvgaNlt, "uZvgaNlt", 1);
  transparent_crc(FfjS14VK, "FfjS14VK", 1);
  transparent_crc(Bhfodenx, "Bhfodenx", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", j);
}

