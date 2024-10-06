#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

const char s[] = "76543210\0\0";
const char t[] = "01234567\0\0";
char a[16];
char b[16];
int i = 0;
int f(void)
{
  int * ZUoFs78p = &i;
  unsigned char KINA7FnR = (unsigned char)85;
  switch (KINA7FnR)
  {
    case 0x95:
      *ZUoFs78p = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *ZUoFs78p = 0x00;
      break;

    default:
      *ZUoFs78p = 0x05;
      break;

  }

  __builtin_memcpy(a, (i) ? (s + 2) : (t + 1), 8);
  transparent_crc(KINA7FnR, "KINA7FnR", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

