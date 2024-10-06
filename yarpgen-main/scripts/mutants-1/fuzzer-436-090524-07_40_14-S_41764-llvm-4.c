#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet -> insert-switch-snippet -> insert-switch-snippet -> insert-switch-snippet -> insert-assignment-snippet

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
  int zdyicAG4 = 979362172;
  int ylev4AIg = 1944704895;
  int64_t *ad = &e.b;
  *ad = 0;
  int16_t *ae = &j;
  *ae = *(*(*k));
  switch (zdyicAG4)
  {
    case 5:
      ylev4AIg = 1;
      break;

    case 6:
      ylev4AIg = 2;
      break;

    case 7:
      ylev4AIg = 3;
      break;

  }

  transparent_crc(ylev4AIg, "ylev4AIg", 1);
  transparent_crc(zdyicAG4, "zdyicAG4", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  int t4UYVBCH = 10928991;
  int _9XVmozl = -469946325;
  int  pj9VfHBk = 2147483647;
  int * HEbihmxD = &pj9VfHBk;
  int  YVk6rfnK = 2147483647;
  int * S0dxyqXm = &YVk6rfnK;
  unsigned char p_TRWUv4 = (unsigned char)67;
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

    switch (p_TRWUv4)
    {
      case 0x95:
        *S0dxyqXm = p_TRWUv4 - 0x91;
        break;

      case 0x80:

      t4UYVBCH = ((&_9XVmozl) == HEbihmxD) + 1;
      case 0x81:

      case 0x82:
        *S0dxyqXm = p_TRWUv4 - 0x80;
        break;

      default:
        *S0dxyqXm = 0;
        break;

    }

    default:
      *ZeR9fB_S = 0;
      break;

  }

  o();
  transparent_crc(OUB2GsJh, "OUB2GsJh", 1);
  transparent_crc(p_TRWUv4, "p_TRWUv4", 1);
  transparent_crc(_9XVmozl, "_9XVmozl", 1);
  transparent_crc(t4UYVBCH, "t4UYVBCH", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  printf("%d\n", j);
}

