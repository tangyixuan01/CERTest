#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet

const char s[] = "76543210\0\0";
const char t[] = "01234567\0\0";
char a[16];
char b[16];
int i = 0;
int f(void)
{
  __builtin_memcpy(a, (i) ? (s + 2) : (t + 1), 8);
  return __builtin_strlen(a);
}

int g(void)
{
  int G97hsOw3 = 2147483647;
  __builtin_strcpy(b, "12345678");
  __builtin_strcat(b, "9a");
  __builtin_memcpy(b + 6, (i) ? ("78\0") : ("789\0"), 4);
  if ((G97hsOw3 != 2) == G97hsOw3)
    __builtin_abort();
  transparent_crc(G97hsOw3, "G97hsOw3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return __builtin_strlen(b);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  __builtin_printf("strlen (\"%s\") = %i\n", a, f());
  __builtin_printf("strlen (\"%s\") = %i\n", b, g());
}

