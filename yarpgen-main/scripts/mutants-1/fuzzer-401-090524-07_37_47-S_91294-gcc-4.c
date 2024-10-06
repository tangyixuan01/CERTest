#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet -> insert-while-snippet -> insert-for-snippet -> insert-if-snippet

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
  volatile int MCEQdjWO = 2147483647;
  volatile int anQLSVAt = 2147483647;
  short gmyjkCNq = (short)-32536;
  if (gmyjkCNq)
  {
    int h;
    for (; anQLSVAt < 2; anQLSVAt++)
      for (; MCEQdjWO < 5; MCEQdjWO++)
      ;


  }
  __builtin_strcpy(b, "12345678");
  __builtin_strcat(b, "9a");
  __builtin_memcpy(b + 6, (i) ? ("78\0") : ("789\0"), 4);
  transparent_crc(gmyjkCNq, "gmyjkCNq", 1);
  transparent_crc(anQLSVAt, "anQLSVAt", 1);
  transparent_crc(MCEQdjWO, "MCEQdjWO", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return __builtin_strlen(b);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  short s2hmBd9P = (short)32767;
  if (s2hmBd9P < 2000)
    __builtin_abort();
  unsigned char wfE0n4_Z = (unsigned char)22;
  while ((unsigned char) ((wfE0n4_Z--) * 6))
    ;

  __builtin_printf("strlen (\"%s\") = %i\n", a, f());
  transparent_crc(wfE0n4_Z, "wfE0n4_Z", 1);
  transparent_crc(s2hmBd9P, "s2hmBd9P", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  __builtin_printf("strlen (\"%s\") = %i\n", b, g());
}

