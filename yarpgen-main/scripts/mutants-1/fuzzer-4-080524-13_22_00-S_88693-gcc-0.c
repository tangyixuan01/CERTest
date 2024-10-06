#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

void foo(char *p)
{
  unsigned l = __builtin_strlen(p);
  unsigned expected = 9;
  __builtin_printf("expected: %d, got: %d\n", expected, l);
  if (l != expected)
  {
    __builtin_abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int YgSPlEfN = 1884693025;
  char HE72DTS4 = (signed char)27;
  int DRkE5SpK = 2147483647;
  short glIy7prd = (short)-32768;
  char ogFPDwqH = (signed char)-15;
  int fClNY2G6 = -2147483648;
  char hlBIWYTx = (signed char)73;
  int DePZ8F2B = 426707898;
  static unsigned char utf8[] = {0xe4, 0xb8, 0x80, 0xe3, 0x82, 0xa1, 0xef, 0xbd, 0xa1};
  char srcBuffer[100];
  __builtin_memcpy(srcBuffer, utf8, sizeof(utf8));
  srcBuffer[sizeof(utf8)] = 0;
  foo(srcBuffer);
  for (YgSPlEfN = 0; YgSPlEfN < 8; YgSPlEfN++)
  {
    char ap = (ogFPDwqH % DePZ8F2B) + glIy7prd;
    unsigned aq = (~0x1F) & (HE72DTS4 % ((7 * (~ap)) ^ fClNY2G6));
    if ((aq < 1027) && DRkE5SpK)
      ogFPDwqH = ((1958 | hlBIWYTx) + 15) & 15;
  }

  transparent_crc(DePZ8F2B, "DePZ8F2B", 1);
  transparent_crc(hlBIWYTx, "hlBIWYTx", 1);
  transparent_crc(fClNY2G6, "fClNY2G6", 1);
  transparent_crc(ogFPDwqH, "ogFPDwqH", 1);
  transparent_crc(glIy7prd, "glIy7prd", 1);
  transparent_crc(DRkE5SpK, "DRkE5SpK", 1);
  transparent_crc(HE72DTS4, "HE72DTS4", 1);
  transparent_crc(YgSPlEfN, "YgSPlEfN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

