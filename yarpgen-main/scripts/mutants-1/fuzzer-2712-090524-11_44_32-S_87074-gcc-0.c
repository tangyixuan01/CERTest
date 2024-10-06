#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

long b;
unsigned c[5];
unsigned long long d = 3;
int e;
int f;
int g;
void h()
{
  for (; f < 11; f++)
  {
    b = g;
    for (e = 0; e < 5; e++)
    {
      c[e] = (e - b) - (c[e] >> 5);
      g = c[e];
    }

  }

  if (c[0])
  {
    d = 0;
  }
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  t6ncfShl = -2147483648;
  int * N92kTtr7 = &t6ncfShl;
  unsigned char tXFG6YjL = (unsigned char)248;
  h();
  switch (tXFG6YjL)
  {
    case 0x95:
      *N92kTtr7 = tXFG6YjL - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *N92kTtr7 = tXFG6YjL - 0x80;
      break;

    default:
      *N92kTtr7 = 0;
      break;

  }

  transparent_crc(tXFG6YjL, "tXFG6YjL", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return d;
}

