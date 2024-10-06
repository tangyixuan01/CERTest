#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

int a;
int b;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int sftY50pS = -2147483648;
  char PCZIKNjk = (signed char)127;
  int FMsltZ5b = 2147483647;
  int  lSNPHUyh = -2147483648;
  int * IDgrkHfA = &lSNPHUyh;
  unsigned char MmUsVIDN = (unsigned char)255;
  int c = 0;
  if (a)
  {
    c = 1;
    for (; PCZIKNjk != (-3); PCZIKNjk++)
    {
      int d = 2;
      d ^= 2 && sftY50pS;
      FMsltZ5b = (sftY50pS == 0) ? (d) : (d / sftY50pS);
      sftY50pS = FMsltZ5b;
    }

    switch (MmUsVIDN)
    {
      case 0x95:
        *IDgrkHfA = MmUsVIDN - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *IDgrkHfA = MmUsVIDN - 0x80;
        break;

      default:
        *IDgrkHfA = 0;
        break;

    }

  }
  c = (1 & (a && c)) && b;
  if (a)
  {
    b = c;
    __builtin_abort();
  }
  transparent_crc(MmUsVIDN, "MmUsVIDN", 1);
  transparent_crc(FMsltZ5b, "FMsltZ5b", 1);
  transparent_crc(PCZIKNjk, "PCZIKNjk", 1);
  transparent_crc(sftY50pS, "sftY50pS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

