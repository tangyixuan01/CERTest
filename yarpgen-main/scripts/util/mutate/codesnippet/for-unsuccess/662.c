//d:int [3];i:int;a:int [6][4]
for (i = 0; i < 3; i++)
{
  p->a[d][i] = p->a[d][i + 1];
}
