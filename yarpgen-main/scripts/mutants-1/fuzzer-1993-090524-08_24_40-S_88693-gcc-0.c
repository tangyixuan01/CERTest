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
  short Oip0Wo1R = (short)32767;
  for (Oip0Wo1R = 0; Oip0Wo1R >= 0; Oip0Wo1R++)
    ;

  static unsigned char utf8[] = {0xe4, 0xb8, 0x80, 0xe3, 0x82, 0xa1, 0xef, 0xbd, 0xa1};
  char srcBuffer[100];
  __builtin_memcpy(srcBuffer, utf8, sizeof(utf8));
  srcBuffer[sizeof(utf8)] = 0;
  foo(srcBuffer);
  transparent_crc(Oip0Wo1R, "Oip0Wo1R", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

