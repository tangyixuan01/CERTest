//h:int;f:int **;g:int *;i:int ***;a:int [10]
for (;;)
{
  *i = &g;
  *f = &h;
  if (*(*i))
    break;
  int l = 9;
  for (; l; l--)
    a[l] = 0;

}
