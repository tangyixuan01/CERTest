//i:int;abort:func void
int main()
{
  int j = i - 1;
  j = j - ((-0x7fffffff) - 1);
  if (j != ((-0x7fffffff) - 1))
    abort();
  if (((i - 1) - ((-0x7fffffff) - 1)) != ((-0x7fffffff) - 1))
    abort();
  return 0;
}

