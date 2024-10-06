#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int  k579dQIn = 636241159;
  int * Fru6w9Sv = &k579dQIn;
  unsigned char QhPdYvHW = (unsigned char)255;
  struct S0 d[] = {{1}, {2}};
  struct S0 e = d[1];
  c = d[0].f0;
  __builtin_printf("%x\n", e.f0);
  transparent_crc(QhPdYvHW, "QhPdYvHW", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (QhPdYvHW)
  {
    case 0x95:
      *Fru6w9Sv = QhPdYvHW - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Fru6w9Sv = QhPdYvHW - 0x80;
      break;

    default:
      *Fru6w9Sv = 0;
      break;

  }

  return 0;
}

