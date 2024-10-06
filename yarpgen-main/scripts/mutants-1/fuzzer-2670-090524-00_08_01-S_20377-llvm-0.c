#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

int a;
int b;
int c;
int fn1(char p)
{
  int CmWkVKEO = 2147483647;
  char zDG4E2lK = (signed char)127;
  unsigned i9PFoHG1 = 3798245819U;
  short byVpCozu = (short)32767;
  int jd0Zclgr = -2147483648;
  if (jd0Zclgr >= (-1936967575))
  {
    int m = ((jd0Zclgr / i9PFoHG1) / 110000000) ^ (CmWkVKEO & zDG4E2lK);
    short n = zDG4E2lK;
    if (jd0Zclgr <= (-1936967575))
      n = byVpCozu;
    jd0Zclgr = m;
    zDG4E2lK = ~(n + CmWkVKEO);
    i9PFoHG1 = -1;
  }
  transparent_crc(jd0Zclgr, "jd0Zclgr", 1);
  transparent_crc(byVpCozu, "byVpCozu", 1);
  transparent_crc(i9PFoHG1, "i9PFoHG1", 1);
  transparent_crc(zDG4E2lK, "zDG4E2lK", 1);
  transparent_crc(CmWkVKEO, "CmWkVKEO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p < 0) ? (p) : (p >> 1);
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  char d;
  int e;
  c = (b < 0) + 2;
  d = c - 1;
  e = d * 2;
  a = fn1(e);
  if (a != 1)
  {
    __builtin_abort();
  }
  return 0;
}

