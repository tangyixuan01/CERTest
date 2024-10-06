//
inline static void *bar(void *p, void *q, int r)
{
  return __builtin_memcpy(p, q, r);
}

