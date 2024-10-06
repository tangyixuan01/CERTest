//h:int **;o:int ** volatile;i:int *;c:int
for (; c < 1; c++)
{
  *o = *h;
  if (!i)
    __builtin_abort();
}
