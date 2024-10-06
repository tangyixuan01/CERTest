//e:int *;a:int;b:int;d:int [2]
int main()
{
  int f = 0;
  for (; b < 2; b++)
  {
    int g;
    if (f)
      b = 40;
    a = d[b * b];
    for (f = 0; f < 3; f++)
    {
      if (e)
        break;
      g--;
      if (a)
        a = g;
    }

  }

  return 0;
}

