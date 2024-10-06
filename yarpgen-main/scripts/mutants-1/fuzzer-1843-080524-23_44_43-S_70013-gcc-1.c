#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-for-snippet

#pragma pack(1)
struct S0
{
  unsigned f0 : 17;
};
int c;
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  char lJdwE5_s = (signed char)-6;
  int dQyfimJ7 = 2147483647;
  struct S0 d[] = {{1}, {2}};
  struct S0 e = d[1];
  c = d[0].f0;
  __builtin_printf("%x\n", e.f0);
  if (!lJdwE5_s)
    dQyfimJ7 = 1;
  transparent_crc(dQyfimJ7, "dQyfimJ7", 1);
  transparent_crc(lJdwE5_s, "lJdwE5_s", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
  for (;;)
    ;

}

