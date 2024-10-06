#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-if-snippet

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
  int * mOVH1CRN = &i;
  unsigned char Za6t0nms = (unsigned char)191;
  __builtin_strcpy(b, "12345678");
  __builtin_strcat(b, "9a");
  switch (Za6t0nms)
  {
    case 0x95:
      *mOVH1CRN = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *mOVH1CRN = 0x00;
      break;

    default:
      *mOVH1CRN = 0x05;
      break;

  }

  __builtin_memcpy(b + 6, (i) ? ("78\0") : ("789\0"), 4);
  transparent_crc(Za6t0nms, "Za6t0nms", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return __builtin_strlen(b);
}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int p7ikBSKo = 1069036314;
  int McRpw2QB = 2147483647;
  int Yfk_NyAr = -2147483648;
  __builtin_printf("strlen (\"%s\") = %i\n", a, f());
  transparent_crc(Yfk_NyAr, "Yfk_NyAr", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (McRpw2QB)
    Yfk_NyAr = p7ikBSKo == 1;
  transparent_crc(McRpw2QB, "McRpw2QB", 1);
  transparent_crc(p7ikBSKo, "p7ikBSKo", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  __builtin_printf("strlen (\"%s\") = %i\n", b, g());
}

