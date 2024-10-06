//k:int;j:int ***;h:int ** volatile;g:int *;f:int ****
void fn1(int q)
{
  int *n = 0;
  int **o[7] = {&n};
  for (; k < 2; k++)
  {
    j = &o[6];
    *h = n;
    if (g)
      __builtin_abort();
  }

  if (q)
  {
    *(*(*f));
    int *****p = &f;
    if (p[3])
      ;
  }
}

