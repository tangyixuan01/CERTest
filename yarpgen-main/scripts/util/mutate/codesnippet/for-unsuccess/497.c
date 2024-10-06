//h:int ** volatile;g:int *;o:int **[7];k:int;j:int ***;n:int *
for (; k < 2; k++)
{
  j = &o[6];
  *h = n;
  if (g)
    __builtin_abort();
}
