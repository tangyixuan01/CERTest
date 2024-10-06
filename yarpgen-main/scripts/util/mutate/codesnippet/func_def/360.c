//exit:func void;t:int;abort:func void
int main()
{
  int a[] = {0, 1, 2};
  int *i = &a[(sizeof(a)) / (sizeof(*a))];
  i--;
  while (i > a)
    i[0] = 1 + t, i--;

  if (a[1] != (1 + t))
    abort();
  exit(0);
}

