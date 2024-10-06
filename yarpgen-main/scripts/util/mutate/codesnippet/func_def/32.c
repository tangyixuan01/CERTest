//
int fn2(unsigned short p1, int p2)
{
  return (p2 || (p1 >> 1)) ? (p1) : (p1 << 1);
}

