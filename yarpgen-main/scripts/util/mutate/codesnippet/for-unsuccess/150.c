//h:int;e:struct a [4];g:int **;i:struct a
{
  char b;
  int c;
} *;j:int
for (; h < 1; h++)
{
  struct a k = {1, 1};
  for (j = 0; j < 2; j++)
  {
    *i = e[h];
    e[h] = k;
  }

  *g = 0;
}
