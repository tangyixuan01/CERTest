#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a = -2094967296;
int b = 6;
int h;
int i;
char c;
static const int d;
static const int *e[2] = {&d, &d};
int f;
unsigned g = 1;
int main()
{
  platform_main_begin();
  crc32_gentab();
  volatile short gNr9Dv3R = (short)32767;
  int Ois73CBl = -1175396618;
  short HWTo4Ym_ = (short)-26186;
  int KuyJ5S3N = 1798802610;
  int e6baI74_ = -2147483648;
  int * gyNo0mYl = &b;
  unsigned char KbcL_Jue = (unsigned char)0;
  int j;
  int k = ~a;
  L:
  ;

  unsigned m = (2 / (~c)) / g;
  int o = c = m % b;
  if ((g >= o) && c)
  {
    printf("%d", f);
    for (; h; h++)
    {
      printf("0");
    }

    i = *e[j];
    goto L;
  }
  if (b < 6)
  {
    e6baI74_ = (gNr9Dv3R | 1) && ((HWTo4Ym_ ^ KuyJ5S3N) | Ois73CBl);
    j++;
  }
  if (k <= 0)
  {
    goto L;
    switch (KbcL_Jue)
    {
      case 0x95:
        *gyNo0mYl = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *gyNo0mYl = 0x00;
        break;

      default:
        *gyNo0mYl = 0x05;
        break;

    }

  }
  transparent_crc(KbcL_Jue, "KbcL_Jue", 1);
  transparent_crc(e6baI74_, "e6baI74_", 1);
  transparent_crc(KuyJ5S3N, "KuyJ5S3N", 1);
  transparent_crc(HWTo4Ym_, "HWTo4Ym_", 1);
  transparent_crc(Ois73CBl, "Ois73CBl", 1);
  transparent_crc(gNr9Dv3R, "gNr9Dv3R", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

