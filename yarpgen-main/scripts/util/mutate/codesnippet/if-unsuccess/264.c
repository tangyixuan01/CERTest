//e:int;b:struct 
{
  int a : 1;
};c:int;g:int;f:int
if (e)
{
  f = c;
  g = b.a;
  b.a = f;
  if (b.a >= g)
    __builtin_abort();
}
