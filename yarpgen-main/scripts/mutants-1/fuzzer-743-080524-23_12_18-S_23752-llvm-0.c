#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b[2];
int c;
int d;
int *e = &a;
static int fn1(int p)
{
  int  c5Jpli8_ = -2147483648;
  int * PXH39lMm = &c5Jpli8_;
  unsigned char lQcGEsvt = (unsigned char)0;
  transparent_crc(lQcGEsvt, "lQcGEsvt", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (lQcGEsvt)
  {
    case 0x95:
      *PXH39lMm = lQcGEsvt - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *PXH39lMm = lQcGEsvt - 0x80;
      break;

    default:
      *PXH39lMm = 0;
      break;

  }

  return p;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int f = 0;
  for (; d < 2; d++)
  {
    *e = f;
    if (fn1((&c) != (&b[1])))
    {
      f = 1;
    }
  }

  if (a != 1)
  {
    __builtin_abort();
  }
  return 0;
}

