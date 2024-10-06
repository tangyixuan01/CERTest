//
int numDigits(long unsigned int value)
{
  int n = 1;
  while (value > 0xffffffffU)
  {
    n += 4;
    value /= ((10 * 10) * 10) * 10;
  }

  unsigned int v = (unsigned int) value;
  while (1)
  {
    if (v < 10)
      return n;
    if (v < (10 * 10))
      return n + 1;
    if (v < ((10 * 10) * 10))
      return n + 2;
    if (v < (((10 * 10) * 10) * 10))
      return n + 3;
    n += 4;
    v /= ((10 * 10) * 10) * 10;
  }

}

