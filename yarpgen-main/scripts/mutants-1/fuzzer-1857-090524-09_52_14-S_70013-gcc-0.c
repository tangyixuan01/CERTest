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
  int  kbIzQ96D = 1165384810;
  int * aXrGpYxg = &kbIzQ96D;
  unsigned char NnzxV7gG = (unsigned char)255;
  struct S0 d[] = {{1}, {2}};
  struct S0 e = d[1];
  c = d[0].f0;
  switch (NnzxV7gG)
  {
    case 0x95:
      *aXrGpYxg = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *aXrGpYxg = 0x00;
      break;

    default:
      *aXrGpYxg = 0x05;
      break;

  }

  __builtin_printf("%x\n", e.f0);
  transparent_crc(NnzxV7gG, "NnzxV7gG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

