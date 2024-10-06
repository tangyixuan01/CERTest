#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-if-snippet

inline static float foo(float x, float y)
{
  int Wet5oswb = -1560776919;
  int sghdp_L3 = 1507256397;
  float u = __builtin_fabsf(x);
  float v = __builtin_fabsf(y);
  if (!(u >= v))
  {
    v = u;
    u = __builtin_fabsf(y);
    if (__builtin_isinf(u))
    {
      return u;
      sghdp_L3 = Wet5oswb >= (sghdp_L3 == 0);
    }
    if (__builtin_isinf(v))
    {
      return v;
    }
  }
  transparent_crc(sghdp_L3, "sghdp_L3", 1);
  transparent_crc(Wet5oswb, "Wet5oswb", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 42.0f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  int MjzCt9Ue = 2147483647;
  volatile char icJF1hyD = (signed char)-128;
  char mn9LS0lR = (signed char)127;
  if ((mn9LS0lR) ? (MjzCt9Ue % mn9LS0lR) : (0))
    icJF1hyD;
  transparent_crc(mn9LS0lR, "mn9LS0lR", 1);
  transparent_crc(icJF1hyD, "icJF1hyD", 1);
  transparent_crc(MjzCt9Ue, "MjzCt9Ue", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  if (!__builtin_isinf(foo(__builtin_inff(), __builtin_nanf(""))))
  {
    __builtin_abort();
  }
}

