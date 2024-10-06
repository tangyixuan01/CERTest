//h:int;g:short *;d:long;e:int;i:int *;j:int *;a:int
for (; e; e--)
{
  d = 9;
  for (; d; d--)
    *j = 8;

  *g = h;
  for (; a <= 9; a++)
    i = &h;

  j = i;
}
