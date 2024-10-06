#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet -> insert-switch-snippet

int a[6];
int b;
int c = 226;
int d;
int e;
int f;
char g;
void fn1(int p1)
{
  int * f1y7WwIF = &c;
  unsigned char V96P1O_Q = (unsigned char)35;
  unsigned char gES60fpZ = (unsigned char)0;
  switch (V96P1O_Q)
  {
    case 0x95:
      *f1y7WwIF = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *f1y7WwIF = 0x00;
      break;

    default:
      *f1y7WwIF = 0x05;
      break;

  }

  while ((unsigned char) ((gES60fpZ--) * 6))
    ;

  transparent_crc(gES60fpZ, "gES60fpZ", 1);
  transparent_crc(V96P1O_Q, "V96P1O_Q", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  b = a[p1];
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  a[0] = 1;
  for (f = 0; f < 9; f++)
  {
    char h = c;
    int i = 1;
    g = (h < 0) ? (h) : (h >> i);
    e = g;
    for (d = 1; d; d = 0)
    {
      ;
    }

    transparent_crc(h, "h", 1);
    transparent_crc(i, "i", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  }

  fn1((g >> 8) & 1);
  if (b != 0)
  {
    __builtin_abort();
  }
  return 0;
}

