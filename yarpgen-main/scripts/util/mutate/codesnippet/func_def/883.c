//c:int *;d:int;b:struct 
{
  int a : 1;
}
int main()
{
  d = c && (b.a = (d < 0) ^ 3);
  if (d != 1)
    __builtin_abort();
  return 0;
}

