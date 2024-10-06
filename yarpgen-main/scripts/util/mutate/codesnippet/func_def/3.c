//b:int;a:int [3]
int main()
{
  int c[1] = {0};
  a[2] = 1;
  for (b = 0; b < 3; b++)
    a[b] = 0;

  if (a[2] != 0)
    __builtin_abort();
  return 0;
}

