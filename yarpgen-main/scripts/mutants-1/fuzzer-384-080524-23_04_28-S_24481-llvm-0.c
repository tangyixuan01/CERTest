#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b[10] = {0, 0, 0, 0, 0, 0, 0, 1};
int c;
int e;
void fn1()
{
  int  _tXsPfho = -1728008946;
  int * vwA8pumx = &_tXsPfho;
  unsigned char U6p3dLsn = (unsigned char)0;
  if (a)
  {
    fn1();
  }
  transparent_crc(U6p3dLsn, "U6p3dLsn", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (e = 8; e >= 0; e--)
  {
    switch (U6p3dLsn)
    {
      case 0x95:
        *vwA8pumx = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *vwA8pumx = 0x00;
        break;

      default:
        *vwA8pumx = 0x05;
        break;

    }

    c = 2;
    for (; c < 8; c++)
    {
      b[e] = b[c];
    }

    b[7] = b[8];
    b[3] = 0;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (;;)
  {
    fn1();
    break;
  }

  if (b[1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

