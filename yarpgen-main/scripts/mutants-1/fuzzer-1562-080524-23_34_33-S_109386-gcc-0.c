#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-switch-snippet

inline static float foo(float x, float y)
{
  float u = __builtin_fabsf(x);
  float v = __builtin_fabsf(y);
  if (!(u >= v))
  {
    v = u;
    u = __builtin_fabsf(y);
    if (__builtin_isinf(u))
    {
      return u;
    }
    if (__builtin_isinf(v))
    {
      return v;
    }
  }
  return 42.0f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  _NpkhG3u = -2147483648;
  int * VbOTRWFy = &_NpkhG3u;
  unsigned char Ymkezfl7 = (unsigned char)88;
  switch (Ymkezfl7)
  {
    case 0x95:
      *VbOTRWFy = Ymkezfl7 - 0x91;
      break;

    case 0x80:

    case 0x81:

    case 0x82:
      *VbOTRWFy = Ymkezfl7 - 0x80;
      break;

    default:
      *VbOTRWFy = 0;
      break;

  }

  transparent_crc(Ymkezfl7, "Ymkezfl7", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  {
    __builtin_abort();
  }
}

