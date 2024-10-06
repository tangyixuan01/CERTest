//
short p(short p1, int q)
{
  return ((q >= 32) || (p1 > (5 >> q))) ? (1) : (p1 << q);
}

