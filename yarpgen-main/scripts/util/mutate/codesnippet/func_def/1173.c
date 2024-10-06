//
static int f(int f)
{
  int x = f;
  {
    int f(int);
    if (x < 1)
      return 0;
    else
      return f(x - 1);
  }
}

