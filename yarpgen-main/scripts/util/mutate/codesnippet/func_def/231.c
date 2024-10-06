//b:int;a:char;fn1:func char;printf:func int
int main()
{
  char *c = &a;
  lbl:
  b = ~((*c)--);

  if (fn1(b, a))
    goto lbl;
  printf("%d\n", a);
  return 0;
}

