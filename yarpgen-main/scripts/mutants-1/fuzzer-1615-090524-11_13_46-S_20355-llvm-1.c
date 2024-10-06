#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a[4] = {-1, 0, 0, 0};
static int b;
static int c;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int tNkecSDF = 2147483647;
  int yu_zPErS = -1966074850;
  int K3VRptnE = 722402190;
  int wHLObSIx = -2147483648;
  int  IOvS7rzh = 1047106240;
  yu_zPErS = ((tNkecSDF % K3VRptnE) || yu_zPErS) || (tNkecSDF % wHLObSIx);
  int * VBfxyIOp = &IOvS7rzh;
  unsigned char qs8dLxce = (unsigned char)233;
  for (; b < 4; b++)
  {
    short t = a[b];
    a[b] = (c = t % 3);
    transparent_crc(t, "t", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  switch (qs8dLxce)
  {
    case 0x95:
      *VBfxyIOp = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *VBfxyIOp = 0x00;
      break;

    default:
      *VBfxyIOp = 0x05;
      break;

  }

  printf("%d\n", a[0]);
  transparent_crc(qs8dLxce, "qs8dLxce", 1);
  transparent_crc(wHLObSIx, "wHLObSIx", 1);
  transparent_crc(K3VRptnE, "K3VRptnE", 1);
  transparent_crc(yu_zPErS, "yu_zPErS", 1);
  transparent_crc(tNkecSDF, "tNkecSDF", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

