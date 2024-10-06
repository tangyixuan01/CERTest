//b:int;fn2:func int;g:int;e:int **;c:long;a:int *
for (b = 0; b < 1; b = 1)
{
  *e = &g;
  *a = 1;
  fn2(&g, &c);
}
