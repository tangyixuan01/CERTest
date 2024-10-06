//b:struct 
{
  long : 38;
  unsigned : 32;
  int a : 16;
}
int main()
{
  f(b.a);
  if (c != 0)
    __builtin_abort();
  return 0;
}

