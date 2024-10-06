//
void foo(char *p, int n)
{
  int i;
  for (i = 0; i < n; i++)
    p[i] = p[i - 1];

}

