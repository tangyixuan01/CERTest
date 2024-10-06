#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-if-snippet -> insert-switch-snippet

inline static float foo(float x, float y)
{
  int  WAgxokH8 = -2147483648;
  int * myDauKN8 = &WAgxokH8;
  unsigned char fyKb0j8C = (unsigned char)146;
  float u = __builtin_fabsf(x);
  float v = __builtin_fabsf(y);
  if (!(u >= v))
  {
    switch (fyKb0j8C)
    {
      case 0x95:
        *myDauKN8 = fyKb0j8C - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *myDauKN8 = fyKb0j8C - 0x80;
        break;

      default:
        *myDauKN8 = 0;
        break;

    }

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
  transparent_crc(fyKb0j8C, "fyKb0j8C", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 42.0f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int  _MjRlcT2 = 169034139;
  int * PpLmflb9 = &_MjRlcT2;
  int wAioIgKa = -2096883176;
  short _WY0CtwR = (short)3373;
  int GSXB0fED = -2147483648;
  transparent_crc(GSXB0fED, "GSXB0fED", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (; wAioIgKa >= 0; wAioIgKa--)
  {
    int *k = &GSXB0fED;
    *k = _WY0CtwR < 0;
  }

  if (!PpLmflb9)
    __builtin_abort();
  transparent_crc(_WY0CtwR, "_WY0CtwR", 1);
  transparent_crc(wAioIgKa, "wAioIgKa", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  {
    __builtin_abort();
  }
}

