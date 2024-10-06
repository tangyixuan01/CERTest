#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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

  transparent_crc(_WY0CtwR, "_WY0CtwR", 1);
  transparent_crc(wAioIgKa, "wAioIgKa", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  {
    __builtin_abort();
  }
}

