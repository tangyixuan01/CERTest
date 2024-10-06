//j:int
void bla(int *r)
{
  int *p;
  int *q;
  p = (q = r);
  if (!p)
    p = &j;
  if (p != q)
    j = 1;
}

