#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-if-snippet

int a[3];
int b;
int c;
int e()
{
  const long int _j4s7VHL = 4634206158465112894LL;
  long int a8RD4wKG = -463702366299350954LL;
  short  J8N_Md6q = (short)32767;
  short * pkKzv1VE = &J8N_Md6q;
  int  zOJLPmes = -202153323;
  int * CmNjWQgU = &zOJLPmes;
  char PVzguXfq = (signed char)-59;
  short xvrDifaZ = (short)-3457;
  if ((a8RD4wKG & _j4s7VHL) == _j4s7VHL)
  {
    unsigned y = (unsigned) a8RD4wKG;
    __builtin_printf("v: %u\n", y);
    if (y != 1)
      __builtin_abort();
  }
  int kOcNfLUb = -618372883;
  char kJ_e4K1V = (signed char)-113;
  if (!c)
  {
    for (b = 0; b < 3; b++)
    {
      for (c = 0; c < 3; c++)
      {
        a[c] ^= 1;
      }

    }

    if (xvrDifaZ || (PVzguXfq < 2))
      for (; kJ_e4K1V; kJ_e4K1V++)
    {
      *CmNjWQgU = 10;
      kOcNfLUb = *pkKzv1VE;
    }

    return -1;
  }
  transparent_crc(kJ_e4K1V, "kJ_e4K1V", 1);
  transparent_crc(kOcNfLUb, "kOcNfLUb", 1);
  transparent_crc(xvrDifaZ, "xvrDifaZ", 1);
  transparent_crc(PVzguXfq, "PVzguXfq", 1);
  transparent_crc(a8RD4wKG, "a8RD4wKG", 1);
  transparent_crc(_j4s7VHL, "_j4s7VHL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  e();
  if (a[1] != 1)
  {
    __builtin_abort();
  }
  return 0;
}

