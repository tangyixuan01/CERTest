//fn1:func int;printf:func int
int main()
{
  int d = 1;
  int e = 0;
  for (; e < 128; e++)
    ;

  L:
  if (fn1())
  {
    d = 0;
    goto L;
  }

  if (d)
    printf("0\n");
  return 0;
}

