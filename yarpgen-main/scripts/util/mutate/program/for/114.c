//i:int  lbl:Label  foo:int  d:int  p:int  f:int  e:int  
for (; i < 1; i++)
{
  if (i)
    goto lbl;
  if (foo(2, d || p))
  {
    int **m = &f;
    *m = &e;
  }
}
