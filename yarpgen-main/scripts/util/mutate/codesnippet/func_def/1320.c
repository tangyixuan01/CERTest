//e:int;fn2:func int;b:int
int fn3()
{
  int g = 0;
  int h;
  int i[1][1] = {{1}};
  for (;;)
  {
    b = 0;
    for (; g < 1; g++)
      h = i[0][g] != fn2();

    if (++e)
      return 0;
    g = h;
  }

}

