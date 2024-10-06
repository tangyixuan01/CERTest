//g:func void
int foo(int * restrict p, int *q)
{
  g(&q, p);
  *p = 1;
  *q = 2;
  return (*p) + (*q);
}

