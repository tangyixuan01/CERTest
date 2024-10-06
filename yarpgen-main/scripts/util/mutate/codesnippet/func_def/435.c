//e:char **;i:int *;l:int;k:int *;f:int *;g:int;b:char;h:int *
static int fn1()
{
  int m;
  l = *(*e);
  *f = 1;
  for (m = 0; m < 2; m++)
    *(*e) = ((*k) || ((h = &g) == ((int *) (&f)))) == 0;

  for (; b >= 0; b--)
    ;

  if (*(*e))
    *i = 0;
  return 0;
}

