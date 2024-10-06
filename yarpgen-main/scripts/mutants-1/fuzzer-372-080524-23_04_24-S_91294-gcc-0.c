#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

const char s[] = "76543210\0\0";
const char t[] = "01234567\0\0";
char a[16];
char b[16];
int i = 0;
int f(void)
{
  int * oUxbCmPM = &i;
  unsigned char ymHpaxCP = (unsigned char)0;
  __builtin_memcpy(a, (i) ? (s + 2) : (t + 1), 8);
  switch (ymHpaxCP)
  {
    case 0x95:
      *oUxbCmPM = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *oUxbCmPM = 0x00;
      break;

    default:
      *oUxbCmPM = 0x05;
      break;

  }

  transparent_crc(ymHpaxCP, "ymHpaxCP", 1);
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

