#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

int a;
int b;
int c;
void fn1()
{
  long long EvcM0_UX = -9223372036854775807LL;
  unsigned short hmIbw5p4 = (unsigned short)65535;
  int aB6cFf4U = -911453924;
  int cvn4Nxda = -2147483648;
  int J4QfLzr5 = -2147483648;
  int PV0Gincz = -2147483648;
  int  SJ1VtQve = -2147483648;
  int * Yg2sLWxq = &SJ1VtQve;
  unsigned char SodfgIyT = (unsigned char)21;
  switch (SodfgIyT)
  {
    case 0x95:
      *Yg2sLWxq = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Yg2sLWxq = 0x00;
      break;

    default:
      *Yg2sLWxq = 0x05;
      break;

  }

  unsigned char d;
  transparent_crc(SodfgIyT, "SodfgIyT", 1);
  transparent_crc(PV0Gincz, "PV0Gincz", 1);
  transparent_crc(J4QfLzr5, "J4QfLzr5", 1);
  transparent_crc(cvn4Nxda, "cvn4Nxda", 1);
  transparent_crc(aB6cFf4U, "aB6cFf4U", 1);
  transparent_crc(hmIbw5p4, "hmIbw5p4", 1);
  transparent_crc(EvcM0_UX, "EvcM0_UX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (d = -14; d >= 51; d++)
  {
    for (; a;)
    {
      char e = d;
      c = (e) ? (e) : (1 / e);
      for (; b < 1; b++)
      {
        ;
      }

      hmIbw5p4 = (~(-(hmIbw5p4 && (J4QfLzr5 >> aB6cFf4U)))) & (~(cvn4Nxda && (PV0Gincz || EvcM0_UX)));
      transparent_crc(e, "e", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  fn1();
  return 0;
}

