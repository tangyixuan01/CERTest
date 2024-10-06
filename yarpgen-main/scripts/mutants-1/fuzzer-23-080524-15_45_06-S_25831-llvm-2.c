#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-if-snippet -> insert-switch-snippet

static short a = 7;
int b = 1;
int c;
int d;
int e;
int f;
void fn1(short *p1)
{
  int x84UVdJD = 673660045;
  int nz2YvhSy = 2147483647;
  int JSoBMcZ4 = -774503690;
  int E7dsOjCW = -2147483648;
  int IsjWMyD8 = 2147483647;
  int a4zhopDU = 801471337;
  int bBhxz5Yv = -2147483648;
  int ykMWQC32 = 1665688297;
  int QEXNt_xv = -2147483648;
  int EbIm2863 = -583306207;
  b = (4 % a) & (a / b);
  d = f && (1 / d);
  a = f | (a ^ 1);
  if (a || a)
  {
    printf("l_282=%lld\n", (long long) f);
  }
  printf("g_9=%lld\n", (long long) a);
  d = a;
  *p1 = e;
  while (1)
  {
    if (a4zhopDU > bBhxz5Yv)
      break;
    while (1)
    {
      int h = QEXNt_xv % ykMWQC32;
      h = ykMWQC32;
      ykMWQC32 = IsjWMyD8;
      if (QEXNt_xv)
        ;
      ykMWQC32 = h;
      L:
      E7dsOjCW = ykMWQC32;

      ykMWQC32 = ~ykMWQC32;
      a4zhopDU = (QEXNt_xv ^ E7dsOjCW) ^ (~bBhxz5Yv);
      if (!ykMWQC32)
        break;
      ykMWQC32 = ~EbIm2863;
    }

  }

  transparent_crc(EbIm2863, "EbIm2863", 1);
  transparent_crc(QEXNt_xv, "QEXNt_xv", 1);
  transparent_crc(ykMWQC32, "ykMWQC32", 1);
  transparent_crc(bBhxz5Yv, "bBhxz5Yv", 1);
  transparent_crc(a4zhopDU, "a4zhopDU", 1);
  transparent_crc(IsjWMyD8, "IsjWMyD8", 1);
  transparent_crc(E7dsOjCW, "E7dsOjCW", 1);
  transparent_crc(JSoBMcZ4, "JSoBMcZ4", 1);
  transparent_crc(nz2YvhSy, "nz2YvhSy", 1);
  transparent_crc(x84UVdJD, "x84UVdJD", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (a && (f < 4))
  {
    if (x84UVdJD)
    {
      JSoBMcZ4 = nz2YvhSy;
      __builtin_abort();
    }
    c--;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * UvTBK3dQ = &b;
  unsigned char SLH94UmZ = (unsigned char)118;
  fn1(&a);
  printf("%d\n", c);
  switch (SLH94UmZ)
  {
    case 0x95:
      *UvTBK3dQ = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *UvTBK3dQ = 0x00;
      break;

    default:
      *UvTBK3dQ = 0x05;
      break;

  }

  transparent_crc(SLH94UmZ, "SLH94UmZ", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

