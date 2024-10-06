#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-while-snippet

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  V8vLD0tG = -2147483648;
  int * EYU84u2k = &V8vLD0tG;
  int  Jz4UAEI3 = 2087295738;
  int * VSYxdInT = &Jz4UAEI3;
  unsigned char cbld26iZ = (unsigned char)39;
  char pstring[] = " hello world";
  pstring[0] = (char) (__builtin_strlen(pstring) - 1);
  __builtin_printf("%zd\n", __builtin_strlen(pstring));
  switch (cbld26iZ)
  {
    case 0x95:
      *VSYxdInT = cbld26iZ - 0x91;
      break;

    case 0x80:

    case 0x81:

    while (*EYU84u2k)
      ;

    case 0x82:
      *VSYxdInT = cbld26iZ - 0x80;
      break;

    default:
      *VSYxdInT = 0;
      break;

  }

  transparent_crc(cbld26iZ, "cbld26iZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

