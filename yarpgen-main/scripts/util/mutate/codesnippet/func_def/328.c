//b:int *;a:int;printf:func int
int main()
{
  short c = 0;
  lbl:
  ++c;

  *b |= 1;
  if (c)
    goto lbl;
  printf("%d\n", a);
  return 0;
}

