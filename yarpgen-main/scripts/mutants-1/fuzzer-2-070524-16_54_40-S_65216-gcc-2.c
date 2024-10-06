#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-if-snippet -> insert-if-snippet

int a;
int b = 62;
int e;
volatile int c;
volatile int d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int VnBocv1E = 2147483647;
  unsigned xPvYujhM = 2049856526U;
  int J_6YrGFZ = -2147483648;
  volatile int bsBz4D5K = 2147483647;
  int qh7xNriJ = -930091629;
  int * lgeSopGt = &b;
  unsigned char zG0_PUD9 = (unsigned char)255;
  int f = a = 0;
  for (; a < 2; a++)
  {
    b &= (8 ^ f) & 1;
    for (e = 0; e < 6; e++)
    {
      if (c)
      {
        f = d;
        switch (zG0_PUD9)
        {
          case 0x95:
            *lgeSopGt = 0x01;
            break;

          case 0x80:

          case 0x81:

          case 0x82:
            *lgeSopGt = 0x00;
            break;

          default:
            *lgeSopGt = 0x05;
            break;

        }

      }
    }

  }

  if (b != 0)
  {
    if (qh7xNriJ > 31)
      bsBz4D5K++;
    if (xPvYujhM > J_6YrGFZ)
      VnBocv1E = (~J_6YrGFZ) || VnBocv1E;
    __builtin_abort();
  }
  transparent_crc(zG0_PUD9, "zG0_PUD9", 1);
  transparent_crc(qh7xNriJ, "qh7xNriJ", 1);
  transparent_crc(bsBz4D5K, "bsBz4D5K", 1);
  transparent_crc(J_6YrGFZ, "J_6YrGFZ", 1);
  transparent_crc(xPvYujhM, "xPvYujhM", 1);
  transparent_crc(VnBocv1E, "VnBocv1E", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

