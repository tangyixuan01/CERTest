//i:int *;o:int ** volatile;c:int;n:volatile struct A;j:int;k:int [1];h:int **;l:volatile struct A *;p:int *
int main()
{
  for (; c < 1; c++)
  {
    *o = *h;
    if (!i)
      __builtin_abort();
  }

  while (j)
  {
    struct A r = {0};
    *l = r;
  }

  n;
  k[*p];
  return 0;
}

