//i:int;c:int [];a:int [4];b:int;fn1:func void
int main()
{
  for (; i < 4; i++)
    a[i] = i;

  fn1();
  for (i = 0; i < 4; i++)
    b = a[b ^ c[i]];

  if (b)
    __builtin_abort();
  return 0;
}

