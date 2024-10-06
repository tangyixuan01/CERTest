#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-for-snippet

int printf(const char *, ...);
union 
{
  int a;
  short b;
} c;
int *d = &c.a;
static short *e = &c.b;
int f;
char g;
int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile int JijzhCRN = 499696969;
  unsigned bVUPrL8t = 0U;
  int EUpG190b = 2147483647;
  volatile int HUrJ_sCG = -554941468;
  for (; bVUPrL8t > 2; bVUPrL8t++)
    for (EUpG190b++;; HUrJ_sCG--)
    if (JijzhCRN)
    break;


  int  mSzGO6FB = -2147483648;
  int * CKUt2_pr = &mSzGO6FB;
  unsigned char NUlozMqO = (unsigned char)18;
  f = c.a;
  *d = 1;
  *e |= g;
  switch (NUlozMqO)
  {
    case 0x95:
      *CKUt2_pr = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *CKUt2_pr = 0x00;
      break;

    default:
      *CKUt2_pr = 0x05;
      break;

  }

  transparent_crc(NUlozMqO, "NUlozMqO", 1);
  transparent_crc(HUrJ_sCG, "HUrJ_sCG", 1);
  transparent_crc(EUpG190b, "EUpG190b", 1);
  transparent_crc(bVUPrL8t, "bVUPrL8t", 1);
  transparent_crc(JijzhCRN, "JijzhCRN", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", c.b);
}

