//e:int  d:long  j:int  g:short  h:int  a:int  i:int  
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
