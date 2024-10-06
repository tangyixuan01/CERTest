#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int a;
int f()
{
  int  zNobaMU2 = 1537371358;
  int * JC8vQnjY = &zNobaMU2;
  unsigned char qjMZ3YBm = (unsigned char)255;
  int b;
  int c;
  for (b = 0; b < 3; b++)
  {
    if (!a)
    {
      break;
      switch (qjMZ3YBm)
      {
        case 0x95:
          *JC8vQnjY = qjMZ3YBm - 0x91;
          break;

        case 0x80:

        case 0x81:

        case 0x82:
          *JC8vQnjY = qjMZ3YBm - 0x80;
          break;

        default:
          *JC8vQnjY = 0;
          break;

      }

    }
    c--;
    printf("%d", c);
  }

  transparent_crc(qjMZ3YBm, "qjMZ3YBm", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return b;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (f())
  {
    __builtin_abort();
  }
  return 0;
}

