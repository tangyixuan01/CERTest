#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

int a;
int b;
int c;
void fn1(int e)
{
  int *f;
  int *g;
  int **h = &g;
  *h = &e;
  for (; b < 4; b++)
  {
    f = *h;
    if ((f != (&e)) && f)
    {
      __builtin_abort();
    }
    *h = &c;
    a = 0;
    for (; a < 4; a++)
    {
      *h = 0;
    }

  }

}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  h1jXYJ9H = 2147483647;
  int * Y1BTSIVo = &h1jXYJ9H;
  unsigned char jfe_ogu9 = (unsigned char)4;
  unsigned short oINTBY3a = (unsigned short)16947;
  int NIvCj3cX = -2147483648;
  int Ac1LgMQG = 871070992;
  unsigned kBFgxZCX = 2751931610U;
  fn1(0);
  NIvCj3cX = ~((oINTBY3a & Ac1LgMQG) * kBFgxZCX);
  transparent_crc(kBFgxZCX, "kBFgxZCX", 1);
  transparent_crc(Ac1LgMQG, "Ac1LgMQG", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (jfe_ogu9)
  {
    case 0x95:
      *Y1BTSIVo = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *Y1BTSIVo = 0x00;
      break;

    default:
      *Y1BTSIVo = 0x05;
      break;

  }

  transparent_crc(NIvCj3cX, "NIvCj3cX", 1);
  transparent_crc(oINTBY3a, "oINTBY3a", 1);
  transparent_crc(jfe_ogu9, "jfe_ogu9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

