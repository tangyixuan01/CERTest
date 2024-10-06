//b:int ** volatile;g:int;f:int **;e:int *;a:int *
for (;;)
{
  assert(a == 0);
  *f = &g;
  *b = 0;
  assert(a == 0);
  *f = 0;
  if (*e)
    break;
}
