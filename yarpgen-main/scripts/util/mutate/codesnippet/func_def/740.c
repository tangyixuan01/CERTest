//
int fn1(int p1, int p2)
{
  return ((p1 > 0) || ((p2 < 0) && (-p2))) ? (p1) : (p1 + p2);
}

