#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

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
  int  Tb2tnwk_ = -2147483648;
  int * RALJ7Iq_ = &Tb2tnwk_;
  unsigned char LN7Aoxc2 = (unsigned char)64;
  char c;
  transparent_crc(LN7Aoxc2, "LN7Aoxc2", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (LN7Aoxc2)
  {
    case 0x95:
      *RALJ7Iq_ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *RALJ7Iq_ = 0x00;
      break;

    default:
      *RALJ7Iq_ = 0x05;
      break;

  }

  for (c = 0;; c++)
  {
    foo(c);
  }

}

