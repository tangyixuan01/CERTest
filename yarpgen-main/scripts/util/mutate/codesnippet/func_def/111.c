//
int g(int i)
{
  int f = 1;
  return i[(signed char *) (&f)];
}

