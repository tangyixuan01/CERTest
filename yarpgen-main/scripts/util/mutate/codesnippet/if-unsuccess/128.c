//v:float;u:float
if (!(u >= v))
{
  v = u;
  u = __builtin_fabsf(y);
  if (__builtin_isinf(u))
    return u;
  if (__builtin_isinf(v))
    return v;
}
