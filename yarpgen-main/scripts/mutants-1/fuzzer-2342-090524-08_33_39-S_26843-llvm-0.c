#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int a;
int b[4];
int c;
void fn1()
{
  int  Scvz0eLA = 920822777;
  int * AkGut2HF = &Scvz0eLA;
  unsigned char HNAizUb1 = (unsigned char)87;
  switch (HNAizUb1)
  {
    case 0x95:
      *AkGut2HF = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *AkGut2HF = 0x00;
      break;

    default:
      *AkGut2HF = 0x05;
      break;

  }

  b[1] = 1;
  if (a)
  {
    for (a = 1; a < 4; a++)
    {
      b[a] = 0;
    }

  }
  transparent_crc(HNAizUb1, "HNAizUb1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  a = 1;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  for (; c < 2; c++)
  {
    fn1();
  }

  if (b[1] != 0)
  {
    __builtin_abort();
  }
  return 0;
}

