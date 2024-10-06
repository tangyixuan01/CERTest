//
int fn1(int b, int c)
{
  return ((c < 0) || (c > 31)) ? (0) : (b >> c);
}

