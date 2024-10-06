//i:struct a
{
  char b;
  int c;
} *;e:struct a [4];j:int;h:int;g:int **;f:struct a
{
  char b;
  int c;
}
int main()
{
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

  if (f.c != 1)
    __builtin_abort();
  return 0;
}

