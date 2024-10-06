//
int f(int i)
{
  int f = 1;
  return i[(unsigned char *) (&f)];
}

