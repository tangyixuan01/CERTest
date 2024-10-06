#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

const char s[] = "76543210\0\0";
const char t[] = "01234567\0\0";
char a[16];
char b[16];
int i = 0;
int f(void)
{
  int * btdfN8ko = &i;
  int jvEzV2k6 = 861388183;
  __builtin_memcpy(a, (i) ? (s + 2) : (t + 1), 8);
  transparent_crc(jvEzV2k6, "jvEzV2k6", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *btdfN8ko = jvEzV2k6 & (-8);
  return __builtin_strlen(a);
}

int g(void)
{
  __builtin_strcpy(b, "12345678");
  __builtin_strcat(b, "9a");
  __builtin_memcpy(b + 6, (i) ? ("78\0") : ("789\0"), 4);
  return __builtin_strlen(b);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  __builtin_printf("strlen (\"%s\") = %i\n", a, f());
  __builtin_printf("strlen (\"%s\") = %i\n", b, g());
}

