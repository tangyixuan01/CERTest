#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

int a;
int b = -1;
int c;
int d = 1;
char e(char f, int g)
{
  int chTaS1yp = 1798790309;
  int nBr0qbik = -1092460653;
  switch (chTaS1yp)
  {
    case 5:
      nBr0qbik = 1;
      break;

    case 6:
      nBr0qbik = 2;
      break;

    case 7:
      nBr0qbik = 3;
      break;

  }

  transparent_crc(nBr0qbik, "nBr0qbik", 1);
  transparent_crc(chTaS1yp, "chTaS1yp", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (g) ? (f) : (0);
}

char h(char f)
{
  return (f < a) ? (f) : (f < a);
}

unsigned char i(unsigned char f, int g)
{
  return (g) ? (f) : (f > g);
}

void j()
{
  L:
  c = e(1, i(h(b), d));

  if (b)
  {
    return;
  }
  goto L;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int * FVmCyJkn = &d;
  unsigned char DRdg0KVU = (unsigned char)0;
  j();
  if (c != 1)
  {
    __builtin_abort();
  }
  transparent_crc(DRdg0KVU, "DRdg0KVU", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (DRdg0KVU)
  {
    case 0x95:
      *FVmCyJkn = 0x01;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *FVmCyJkn = 0x00;
      break;

    default:
      *FVmCyJkn = 0x05;
      break;

  }

  return 0;
}

