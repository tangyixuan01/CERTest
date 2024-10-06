#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet -> insert-for-snippet -> insert-if-snippet -> insert-switch-snippet -> insert-assignment-snippet

int a;
int b = -1;
int c;
int d = 1;
char e(char f, int g)
{
  int vhlkVyM_ = 2147483647;
  char  lw7fDeZt = (signed char)25;
  char * Kk3evbBa = &lw7fDeZt;
  char  VLdNkvUl = (signed char)-35;
  char * pg3FEeCX = &VLdNkvUl;
  long gxZqfu2d = -4020824568627256866LL;
  while (gxZqfu2d > 1523073808)
    ;

  transparent_crc(gxZqfu2d, "gxZqfu2d", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (g) ? (f) : (0);
  switch (vhlkVyM_)
    case 111:
    case 222:
    case 44:
    return 0;




  transparent_crc(vhlkVyM_, "vhlkVyM_", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (pg3FEeCX != Kk3evbBa)
  {
    printf("a_ptr != b_ptr\n");
  }
  else
  {
    printf("a_ptr == b_ptr\n");
  }
}

char h(char f)
{
  return (f < a) ? (f) : (f < a);
}

unsigned char i(unsigned char f, int g)
{
  int * T83aLOPZ = &b;
  unsigned char SFuBy_6h = (unsigned char)121;
  transparent_crc(SFuBy_6h, "SFuBy_6h", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (SFuBy_6h)
  {
    case 0x95:
      *T83aLOPZ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *T83aLOPZ = 0x00;
      break;

    default:
      *T83aLOPZ = 0x05;
      break;

  }

  return (g) ? (f) : (f > g);
}

void j()
{
  int * lSR1iw05 = &d;
  int ebNVLY_3 = 2147483647;
  short KDTgOJck = (short)13000;
  int jYGZW1St = 2147483647;
  int KsRLSUan = 2147483647;
  volatile int L6mj2VAQ = 2147483647;
  L:
  c = e(1, i(h(b), d));

  if (b)
  {
    for (; ebNVLY_3 >= 0; ebNVLY_3--)
    {
      KDTgOJck = 0;
      for (; KDTgOJck <= 3; KDTgOJck++)
      {
        KsRLSUan = 0;
        for (; KsRLSUan <= 3; KsRLSUan++)
          L6mj2VAQ &= 5;

      }

      if (jYGZW1St)
        break;
    }

    *lSR1iw05 ^= 1;
    return;
  }
  transparent_crc(L6mj2VAQ, "L6mj2VAQ", 1);
  transparent_crc(KsRLSUan, "KsRLSUan", 1);
  transparent_crc(jYGZW1St, "jYGZW1St", 1);
  transparent_crc(KDTgOJck, "KDTgOJck", 1);
  transparent_crc(ebNVLY_3, "ebNVLY_3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  goto L;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  j();
  if (c != 1)
  {
    __builtin_abort();
  }
  return 0;
}

