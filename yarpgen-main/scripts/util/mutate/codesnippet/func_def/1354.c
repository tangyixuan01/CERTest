//e:char *;c:int;d:char;printf:func int;f:int **;g:int *;b:int **
int main()
{
  *b = g;
  lbl:
  *b = *f;

  (*e)--;
  *(*b) = 0;
  if (d)
    goto lbl;
  printf("%d\n", c);
  return 0;
}

