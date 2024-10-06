//e:int **;c:int;d:int *;a:int;f:int **;g:int *;b:int ***
int main()
{
  *(*f) = 0;
  int ****h = 0;
  if (c)
  {
    *h = &e;
    *(*(*b)) = 0;
  }
  *e = g;
  if (d != (&a))
    __builtin_abort();
  return 0;
}

