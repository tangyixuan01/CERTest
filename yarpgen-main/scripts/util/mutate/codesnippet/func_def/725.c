//c:short *;d:char;printf:func int;a:short;b:short
int main()
{
  char *t = &d;
  lbl:
  b = (*t)--;

  *c = 1;
  if (d)
    goto lbl;
  printf("%d\n", a);
  return 0;
}

