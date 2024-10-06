//j:int;m:int;e:int;c:struct 
{
  unsigned a : 21;
  unsigned b : 24;
};g:int;f:struct 
{
  unsigned a : 21;
  unsigned b : 24;
}
if (m)
{
  g = c.a;
  j = f.b;
  c.a = ~f.b;
  f.b = (9 | (c.a / g)) ^ e;
}
