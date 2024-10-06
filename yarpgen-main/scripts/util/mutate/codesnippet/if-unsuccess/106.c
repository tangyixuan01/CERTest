//c:struct 
{
  int a : 8;
  int b : 24;
}
if (c.b && (!c.b))
  __builtin_abort();
