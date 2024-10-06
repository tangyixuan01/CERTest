//e:int  f:int  c:int  g:int  __builtin_abort:struct 
{
  int a : 1;
}  
if (e)
{
  f = c;
  g = b.a;
  b.a = f;
  if (b.a >= g)
    __builtin_abort();
}
