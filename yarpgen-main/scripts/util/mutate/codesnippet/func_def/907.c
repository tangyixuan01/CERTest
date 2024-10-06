//b:unsigned;a:int;d:int
int *fn1()
{
  int *f[3];
  int g = 0;
  for (; g < 3; g++)
    f[g] = &a;

  if ((--b) > a)
  {
    if (a > b)
      d++;
    return f[0];
  }
}

