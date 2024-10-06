//
unsigned fn1(int p1, int p2)
{
  return ((p2 >= 2) || (p1 >> p2)) ? (p1) : (p1 << p2);
}

