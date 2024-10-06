//i:int **;d:char;a:int;h:int;g:char *;b:int *
int main()
{
  if (a)
    *b = 3;
  h = a;
  b = &h;
  *g = *(*i);
  __builtin_printf("%d\n", d);
  return 0;
}

