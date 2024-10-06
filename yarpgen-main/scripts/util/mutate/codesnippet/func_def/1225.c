//i:char *;foo:func short *;printf:func int;a:int;h:int;f:char
int main()
{
  unsigned short j;
  j = -((&h) == ((int *) foo(1)));
  if (a - j)
    *i = 0;
  printf("%d\n", f);
  return 0;
}

