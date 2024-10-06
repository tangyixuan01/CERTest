//b:int;a:int;c:char;printf:func int
int main()
{
  lbl:
  {
    int *d = &b;
    *d &= 1;
    c--;
    if (a)
      ;
    else
      if (c)
      goto lbl;
  }

  printf("%d\n", b);
  return 0;
}

