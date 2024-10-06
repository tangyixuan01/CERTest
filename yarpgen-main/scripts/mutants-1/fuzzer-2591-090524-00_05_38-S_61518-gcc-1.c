#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-switch-snippet

int a;
int b;
int c[1];
int d;
int e;
int f;
void fn1()
{
  for (; d < 1; d++)
  {
    if (b)
    {
      a = (e++) && f;
      b = f;
    }
    c[b] = 0;
  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  sJ3nK9rD = 2147483647;
  int * nxUEA9uq = &sJ3nK9rD;
  unsigned char myerh8uZ = (unsigned char)0;
  int CRQlzZvT = -2147483648;
  int FdyjklKc = 2147483647;
  int w8M1t2WT = -2147483648;
  fn1();
  if (!w8M1t2WT)
  {
    w8M1t2WT = CRQlzZvT;
    FdyjklKc = (CRQlzZvT == 0) ? (1) : (1 % CRQlzZvT);
    if (FdyjklKc)
      w8M1t2WT = 0;
  }
  if (e != 0)
  {
    __builtin_abort();
  }
  switch (myerh8uZ)
  {
    case 0x95:
      *nxUEA9uq = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *nxUEA9uq = 0x00;
      break;

    default:
      *nxUEA9uq = 0x05;
      break;

  }

  transparent_crc(w8M1t2WT, "w8M1t2WT", 1);
  transparent_crc(FdyjklKc, "FdyjklKc", 1);
  transparent_crc(CRQlzZvT, "CRQlzZvT", 1);
  transparent_crc(myerh8uZ, "myerh8uZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

