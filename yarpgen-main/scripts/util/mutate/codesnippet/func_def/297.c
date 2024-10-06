//y:volatile int
double foo(double a, int x)
{
  while (x--)
  {
    y++;
    a += 1.0 / 0.0;
  }

  return a;
}

