#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-assignment-snippet

int printf(const char *, ...);
char a;
int b[3][8];
int c;
int e = 1;
int f;
int g;
short d;
int main()
{
  platform_main_begin();
  crc32_gentab();
  int Qc41Wm5Z = -2147483648;
  Qc41Wm5Z = Qc41Wm5Z - ((-0x7fffffff) - 1);
  int * qNR_IGW3 = &e;
  unsigned char R2CkVYDM = (unsigned char)0;
  switch (R2CkVYDM)
  {
    case 0x95:
      *qNR_IGW3 = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *qNR_IGW3 = 0x00;
      break;

    default:
      *qNR_IGW3 = 0x05;
      break;

  }

  for (; e >= 0; e--)
  {
    d = 1;
    for (; d >= 0; d--)
    {
      c = 0;
      for (; c <= 1; c++)
      {
        b[0][((d * 2) + c) + 1] = 0;
        g = a <= '7';
        b[(g - 1) + d][c] ^= 1;
      }

    }

  }

  transparent_crc(R2CkVYDM, "R2CkVYDM", 1);
  transparent_crc(Qc41Wm5Z, "Qc41Wm5Z", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", b[0][1]);
}

