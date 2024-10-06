//
int bar(x, y)
int x;
int y;
{
  int x1;
  int y1;
  int x2;
  int y2;
  unsigned int x3;
  unsigned int y3;
  unsigned int w;
  int z;
  x1 = x < (1 << 30);
  y1 = y < (1 << 30);
  if (x1 && y1)
  {
    x2 = (x > 0) ? (x) : (-x);
    y2 = (y > 0) ? (y) : (-y);
    x3 = x2;
    y3 = y2;
    w = x3 * y3;
    if (w >= (1 << 30))
    {
      z = 1;
    }
    else
    {
      z = -1;
    }
  }
  return z;
}

