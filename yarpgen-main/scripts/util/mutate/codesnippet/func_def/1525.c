//a:int [6][4];d:int [3]
void foo(int d, S *p)
{
  int i;
  for (i = 0; i < 3; i++)
  {
    p->a[d][i] = p->a[d][i + 1];
  }

}

