//b:int;a:int [28];abort:func void
int main()
{
  a[4] = 1;
  int c = 1;
  for (; b < 8; b++)
    if (a[b])
    c = 0;

  if (c)
    abort();
}

