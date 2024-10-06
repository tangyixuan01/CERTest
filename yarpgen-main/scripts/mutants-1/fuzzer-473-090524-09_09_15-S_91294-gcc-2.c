#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet -> insert-while-snippet

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
  int * Fevq7Rmh = &i;
  unsigned char hBQgn8fd = (unsigned char)255;
  int G97hsOw3 = 2147483647;
  switch (hBQgn8fd)
  {
    case 0x95:
      *Fevq7Rmh = hBQgn8fd - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Fevq7Rmh = hBQgn8fd - 0x80;
      break;

    default:
      *Fevq7Rmh = 0;
      break;

  }

  __builtin_strcpy(b, "12345678");
  __builtin_strcat(b, "9a");
  __builtin_memcpy(b + 6, (i) ? ("78\0") : ("789\0"), 4);
  if ((G97hsOw3 != 2) == G97hsOw3)
    __builtin_abort();
  transparent_crc(G97hsOw3, "G97hsOw3", 1);
  transparent_crc(hBQgn8fd, "hBQgn8fd", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return __builtin_strlen(b);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int Qs9xuoGP = -2147483648;
  while (Qs9xuoGP > 1)
    ;

  __builtin_printf("strlen (\"%s\") = %i\n", a, f());
  transparent_crc(Qs9xuoGP, "Qs9xuoGP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  __builtin_printf("strlen (\"%s\") = %i\n", b, g());
}

