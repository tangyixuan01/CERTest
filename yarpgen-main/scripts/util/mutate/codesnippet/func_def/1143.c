//e:int;c:int;d:struct 
{
  int : 8;
  int a;
} [4];b:struct 
{
  int : 8;
  int a;
}
int main()
{
  for (c = 2; c; c--)
    for (e = 0; e < 2; e++)
  {
    d[c] = (b = d[c + 1]);
    d[c + 1].a = 0;
  }


  if (b.a != 0)
    __builtin_abort();
  return 0;
}

