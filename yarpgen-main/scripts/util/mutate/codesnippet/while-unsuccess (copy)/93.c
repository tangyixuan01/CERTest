//n:struct A;m:int *;o:struct I
while (1)
{
  struct I q = {0, 0, {0, 0, {1, 1, 1}}};
  struct I p = q;
  struct I r = p;
  struct I *s = &q;
  if (p.k.h.c)
    o = p;
  *m = r.k.h.d;
  n = (*s).k.h;
  break;
}
