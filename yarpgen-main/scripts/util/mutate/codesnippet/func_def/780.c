//e:int;c:int;d:int [3][1];a:int;b:int
int main()
{
  int f = 1;
  int g;
  for (e = 0; e < 3; e++)
  {
    if (f)
      c--;
    for (g = 0; g < 1; g++)
    {
      if (b && a)
        return 0;
      f = 0;
      d[e][g] = 1;
    }

  }

  return 0;
}

