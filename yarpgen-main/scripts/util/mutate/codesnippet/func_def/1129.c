//e:short *;c:short;d:short *;printf:func int;a:char;f:func short
int main()
{
  *e = 2;
  a = 1;
  for (; a <= 9; a++)
  {
    short *i = &c;
    *i = (*d = f(*e, *e));
  }

  printf("%d\n", c);
}

