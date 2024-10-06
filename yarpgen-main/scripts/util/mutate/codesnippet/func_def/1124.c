//b:int;c:char;a:short
int main()
{
  c = a;
  b = a | c;
  if (b != (-1))
    __builtin_abort();
  return 0;
}

