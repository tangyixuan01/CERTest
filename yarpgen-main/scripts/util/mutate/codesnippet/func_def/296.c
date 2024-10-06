//e:long [9][7][4];c:int;d:int;a:int;b:int
void f()
{
  for (; a >= 0; a--)
  {
    b = 0;
    for (; b <= 3; b++)
    {
      c = 0;
      for (; c <= 3; c++)
      {
        int *g = &d;
        *g = e[0][0][b] | e[a][b][a];
      }

    }

  }

}

