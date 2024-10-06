//b:int *;g:int;d:char;c:int **
for (; d < 1; d++)
{
  *c = &g;
  if (*b)
    return;
}
