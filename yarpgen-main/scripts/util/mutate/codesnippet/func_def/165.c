//str:char *;bar:func void
char *foo(struct A *locp, int i, char *str)
{
  float f;
  float g;
  float *p;
  char *T355;
  char **T356;
  p = (i) ? (&g) : (&f);
  bar(p);
  if ((*p) > 0.0)
    str = "abc";
  T355 = locp->nextc;
  T356 = &locp->nextc;
  *T356 = str;
  T355 = locp->nextc;
  return T355;
}

