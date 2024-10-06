#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int bf3C8IXn = 416705539;
  int zfGuZ8kU = -1595100830;
  int qdZANWnU = 1330211844;
  int xVdypAaF = 2147483647;
  struct S0 d[] = {{1}, {2}};
  struct S0 e = d[1];
  c = d[0].f0;
  __builtin_printf("%x\n", e.f0);
  for (xVdypAaF = 0; xVdypAaF < 1; xVdypAaF++)
  {
    for (zfGuZ8kU = 0; zfGuZ8kU < 1; zfGuZ8kU++)
      bf3C8IXn |= (-qdZANWnU) + zfGuZ8kU;

    qdZANWnU = 0;
  }

  transparent_crc(xVdypAaF, "xVdypAaF", 1);
  transparent_crc(qdZANWnU, "qdZANWnU", 1);
  transparent_crc(zfGuZ8kU, "zfGuZ8kU", 1);
  transparent_crc(bf3C8IXn, "bf3C8IXn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

