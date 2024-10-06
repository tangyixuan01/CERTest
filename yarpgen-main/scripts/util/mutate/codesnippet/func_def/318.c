//
inline static float foo(float x, float y)
{
  float u = __builtin_fabsf(x);
  float v = __builtin_fabsf(y);
  if (!(u >= v))
  {
    v = u;
    u = __builtin_fabsf(y);
    if (__builtin_isinf(u))
      return u;
    if (__builtin_isinf(v))
      return v;
  }
  return 42.0f;
}

