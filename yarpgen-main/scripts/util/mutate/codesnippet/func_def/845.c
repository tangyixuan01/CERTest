//
int main()
{
  int b[8] = {0, 3, 6, 9, 12, 15, 18, 21};
  int a[8];
  int i;
  for (i = 0; i < 8; i++)
  {
    a[i] = b[i];
  }

  for (i = 0; i < 8; i++)
  {
    if (a[i] != b[i])
      abort();
  }

  return 0;
}

