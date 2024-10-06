//b:volatile unsigned;a:short;printf:func int
int main()
{
  short *c = &a;
  lbl:
  b--;

  (*c)--;
  if (a)
    goto lbl;
  printf("%d\n", b);
  return 0;
}

