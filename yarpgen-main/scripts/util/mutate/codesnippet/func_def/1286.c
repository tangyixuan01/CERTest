//o:struct I;n:struct A;printf:func int;m:int *;l:int
int main()
{
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

  printf("%d\n", l);
  return 0;
}

