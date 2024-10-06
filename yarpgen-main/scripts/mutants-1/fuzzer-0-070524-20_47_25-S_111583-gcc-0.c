#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

int printf(const char *, ...);
int b;
int c;
int d;
char e;
short f;
const unsigned short **g;
char h(char k)
{
  if (k)
  {
    return '0';
  }
  return 0;
}

int l()
{
  b = 0;
  return 1;
}

static short m(unsigned k)
{
  int  zNqJmdD2 = 2147483647;
  int * w0h9Iqta = &zNqJmdD2;
  unsigned char P9kfGVbS = (unsigned char)126;
  switch (P9kfGVbS)
  {
    case 0x95:
      *w0h9Iqta = P9kfGVbS - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *w0h9Iqta = P9kfGVbS - 0x80;
      break;

    default:
      *w0h9Iqta = 0;
      break;

  }

  const unsigned short *n[65];
  g = &n[4];
  k || l();
  long a = k;
  char i = 0;
  unsigned long j = k;
  while (j--)
  {
    *((char *) (a++)) = i;
  }

  c = h(d);
  f = k;
  transparent_crc(P9kfGVbS, "P9kfGVbS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  long o = (e < 0) << 5;
  m(o);
  printf("%d\n", f);
}

