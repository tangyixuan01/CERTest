#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

void abort(void);
void foo(signed char a)
{
  if ((a - 0x7F) > 1)
  {
    abort();
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  TKDSPcjZ = 2147483647;
  int * QZv4hEbP = &TKDSPcjZ;
  unsigned char U0J6bcBp = (unsigned char)226;
  switch (U0J6bcBp)
  {
    case 0x95:
      *QZv4hEbP = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *QZv4hEbP = 0x00;
      break;

    default:
      *QZv4hEbP = 0x05;
      break;

  }

  unsigned char b;
  transparent_crc(U0J6bcBp, "U0J6bcBp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (b = 0; b < 0xFF; b++)
  {
    foo(b);
  }

}

