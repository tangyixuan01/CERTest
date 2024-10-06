//
int main()
{
  int *p = 0;
  trick:
  if (p)
    return *p;

  int x = 0;
  p = &x;
  goto trick;
  return 0;
}

