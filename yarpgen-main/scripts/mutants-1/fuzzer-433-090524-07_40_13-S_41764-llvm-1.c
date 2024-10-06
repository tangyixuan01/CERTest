#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet

union a
{
  int64_t b;
  uint16_t c;
} e;
int8_t d;
int8_t l;
int8_t h;
uint16_t *g = &e.c;
uint16_t **i = &g;
int16_t j;
uint16_t ***k = &i;
uint32_t m();
int8_t *n(uint16_t, uint32_t, uint16_t, union a, uint32_t);
uint32_t o()
{
  int xTOchei9 = 2147483647;
  int p0naRP4q = 47011520;
  union a p = {};
  switch (xTOchei9)
  {
    case 5:
      p0naRP4q = 1;
      break;

    case 6:
      p0naRP4q = 2;
      break;

    case 7:
      p0naRP4q = 3;
      break;

  }

  m(n(d, 0, 0, p, d));
  transparent_crc(p0naRP4q, "p0naRP4q", 1);
  transparent_crc(xTOchei9, "xTOchei9", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return l;
}

uint32_t m()
{
  int64_t *ad = &e.b;
  *ad = 0;
  int16_t *ae = &j;
  *ae = *(*(*k));
  return h;
}

int8_t *n(uint16_t f, uint32_t ag, uint16_t ah, union a ai, uint32_t aj)
{
  int8_t *ak = &d;
  (*(*(*k)))++;
  return ak;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  rJKOmzDE = 2147483647;
  int * ZeR9fB_S = &rJKOmzDE;
  unsigned char OUB2GsJh = (unsigned char)255;
  switch (OUB2GsJh)
  {
    case 0x95:
      *ZeR9fB_S = OUB2GsJh - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *ZeR9fB_S = OUB2GsJh - 0x80;
      break;

    default:
      *ZeR9fB_S = 0;
      break;

  }

  o();
  transparent_crc(OUB2GsJh, "OUB2GsJh", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", j);
}

