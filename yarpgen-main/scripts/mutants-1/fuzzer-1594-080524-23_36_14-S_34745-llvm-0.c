#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

int a;
int b[64];
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned psOk6hlm = 370892595U;
  int Xmt1AdLu = -1232838812;
  int Nx0zDCsf = 2147483647;
  while (1)
  {
    int c;
    for (; a < 8; a++)
    {
      for (c = 0; c < 8; c++)
      {
        b[(a * 8) + c] = 0;
      }

      Nx0zDCsf = ~(psOk6hlm % Xmt1AdLu);
    }

    break;
  }

  transparent_crc(Nx0zDCsf, "Nx0zDCsf", 1);
  transparent_crc(Xmt1AdLu, "Xmt1AdLu", 1);
  transparent_crc(psOk6hlm, "psOk6hlm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

