#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-while-snippet

inline static float foo(float x, float y)
{
  int bzm9rlyw = 2147483647;
  int D5bxcTZX = -623177613;
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
  transparent_crc(D5bxcTZX, "D5bxcTZX", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  while (D5bxcTZX && (1 <= bzm9rlyw))
    ;

  transparent_crc(bzm9rlyw, "bzm9rlyw", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 42.0f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  {
    __builtin_abort();
  }
}

