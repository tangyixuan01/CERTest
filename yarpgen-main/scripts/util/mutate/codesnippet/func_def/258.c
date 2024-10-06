//c:struct 
{
  int a : 8;
  int b : 24;
}
int main()
{
  if (c.b && (!c.b))
    __builtin_abort();
  return 0;
}

