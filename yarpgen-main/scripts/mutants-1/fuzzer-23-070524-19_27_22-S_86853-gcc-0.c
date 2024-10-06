#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int ws[] = L"\uFFFF";
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  E0BSakWo = 1156509247;
  int * J7A3YuPG = &E0BSakWo;
  unsigned char YAXNyDIb = (unsigned char)111;
  int n0 = __builtin_snprintf(0, 0, "%S", L"\uFFFF");
  int n1 = __builtin_snprintf(0, 0, "%S", ws);
  __builtin_printf("%i == %i\n", n0, n1);
  transparent_crc(YAXNyDIb, "YAXNyDIb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (n0 != n1)
  {
    __builtin_abort();
    switch (YAXNyDIb)
    {
      case 0x95:
        *J7A3YuPG = YAXNyDIb - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *J7A3YuPG = YAXNyDIb - 0x80;
        break;

      default:
        *J7A3YuPG = 0;
        break;

    }

  }
}

