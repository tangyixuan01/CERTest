//
const char *f(long v)
{
  if (v < 0)
    v = -v;
  if (v > 0x7fffffff)
    return "negative";
  else
    return "positive";
}

