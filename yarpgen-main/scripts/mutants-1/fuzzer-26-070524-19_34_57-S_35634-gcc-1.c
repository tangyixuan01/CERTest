#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

void abort(void);
void exit(int);
void foo(int i)
{
  static int n;
  if ((i < ((-0x7f) - 1)) || (i > 0x7f))
  {
    abort();
  }
  if ((++n) > 1000)
  {
    exit(0);
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  PWckjAR8 = 1057555249;
  int * PtecvLkA = &PWckjAR8;
  int mN67unTc = 2147483647;
  int  zoLsFAP2 = -232490914;
  int * VFOvcDKf = &zoLsFAP2;
  unsigned char ME9z5uA4 = (unsigned char)255;
  char c;
  transparent_crc(ME9z5uA4, "ME9z5uA4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  *PtecvLkA = mN67unTc;
  transparent_crc(mN67unTc, "mN67unTc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (c = 0;; c++)
  {
    foo(c);
    switch (ME9z5uA4)
    {
      case 0x95:
        *VFOvcDKf = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *VFOvcDKf = 0x00;
        break;

      default:
        *VFOvcDKf = 0x05;
        break;

    }

  }

}

