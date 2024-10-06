#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet

struct S
{
  unsigned f0 : 13;
  int f1 : 19;
  int f2 : 27;
  int f3 : 8;
} a;
int b;
int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int t9YEZnRG = -2147483648;
  int UiNMaRe9 = -1943685676;
  int aCbzrRoM = 1882011361;
  int BVNeEk1M = -2147483648;
  short yKklBgoR = (short)-32768;
  char RSLe_fZh = (signed char)23;
  int JcTBDGuf = 2147483647;
  int hLaRmuZ1 = 2147483647;
  struct S d = {4, 5, 10878, 1};
  if (((!BVNeEk1M) && (yKklBgoR > JcTBDGuf)) || (yKklBgoR < JcTBDGuf))
    for (RSLe_fZh = 0; RSLe_fZh < 20; RSLe_fZh++)
    hLaRmuZ1 ^= aCbzrRoM;

  for (; b < 7; b++)
  {
    int e = d.f1 | (d.f0 && (5 % d.f3));
    int f = c - d.f0;
    d.f2 = e;
    d.f0 = f;
    transparent_crc(e, "e", 1);
    transparent_crc(f, "f", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  a = d;
  if (t9YEZnRG < 1)
    if (UiNMaRe9)
    t9YEZnRG = 0;
  transparent_crc(hLaRmuZ1, "hLaRmuZ1", 1);
  transparent_crc(JcTBDGuf, "JcTBDGuf", 1);
  transparent_crc(RSLe_fZh, "RSLe_fZh", 1);
  transparent_crc(yKklBgoR, "yKklBgoR", 1);
  transparent_crc(BVNeEk1M, "BVNeEk1M", 1);
  transparent_crc(aCbzrRoM, "aCbzrRoM", 1);
  transparent_crc(UiNMaRe9, "UiNMaRe9", 1);
  transparent_crc(t9YEZnRG, "t9YEZnRG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

