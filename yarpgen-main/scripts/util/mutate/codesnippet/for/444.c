//h:int **;b:int *;g:int;f:int;e:int;c:int **
for (; g < 1; g++)
{
  *c = &e;
  if (!b)
    __builtin_abort();
  *h = &f;
}
