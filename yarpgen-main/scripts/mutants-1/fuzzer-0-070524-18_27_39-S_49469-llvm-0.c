#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int printf(const char *, ...);
int c;
void d(unsigned f)
{
  c = f;
}

#pragma pack(1)
struct 
{
  unsigned : 15;
  signed : 21;
  signed : 26;
  signed a : 9;
} b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int f6d1VOxv = -2147483648;
  long jNW07fbK = -9223372036854775807LL;
  long Grwbz6RF = -9223372036854775807LL;
  int UoEG9u4m = 1521072052;
  short MTVfa1Rn = (short)27183;
  unsigned long e = b.a;
  d(e >> 56);
  Grwbz6RF = MTVfa1Rn ^ (f6d1VOxv | (UoEG9u4m & jNW07fbK));
  printf("%d\n", c);
  transparent_crc(MTVfa1Rn, "MTVfa1Rn", 1);
  transparent_crc(UoEG9u4m, "UoEG9u4m", 1);
  transparent_crc(Grwbz6RF, "Grwbz6RF", 1);
  transparent_crc(jNW07fbK, "jNW07fbK", 1);
  transparent_crc(f6d1VOxv, "f6d1VOxv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

