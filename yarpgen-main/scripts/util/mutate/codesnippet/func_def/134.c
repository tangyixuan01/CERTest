//e:int;d:char;a:int;b:const int
int main()
{
  a = (~(e || 0)) ^ (b & (~d));
  d = ~(a | (~2));
  if (d)
    __builtin_abort();
  return 0;
}

