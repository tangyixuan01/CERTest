//jr:int [2];rk:int;si:int
int wv(signed char n8)
{
  const int tw = 8;
  int xq[tw];
  int bj;
  int pu = 0;
  for (bj = 0; bj < tw; ++bj)
    xq[bj] = 0;

  bj = 0;
  while (bj < 1)
  {
    int gs = n8 ^ 128;
    if (gs != 0)
    {
      int u7[3];
      while (bj < 2)
      {
        u7[bj] = 0;
        ++bj;
      }

      jr[0] = u7[0];
      rk = xq[0];
      pu = n8;
      if (si != 0)
        return si;
    }
  }

  return pu;
}

