#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int ws[] = L"\uFFFF";
int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int  tFms7ENY = 1540913094;
  int * ohD9v7im = &tFms7ENY;
  unsigned char QBchidYA = (unsigned char)255;
  int n0 = __builtin_snprintf(0, 0, "%S", L"\uFFFF");
  int n1 = __builtin_snprintf(0, 0, "%S", ws);
  __builtin_printf("%i == %i\n", n0, n1);
  transparent_crc(QBchidYA, "QBchidYA", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (n0 != n1)
  {
    switch (QBchidYA)
    {
      case 0x95:
        *ohD9v7im = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *ohD9v7im = 0x00;
        break;

      default:
        *ohD9v7im = 0x05;
        break;

    }

    __builtin_abort();
  }
}

