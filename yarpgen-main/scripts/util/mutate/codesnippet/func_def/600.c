//try_sq:func void
int main(int argc, char **argv)
{
  int n;
  for (n = 0; n < 999999999; n++)
  {
    if ((n % 10000000) == 0)
      printf("%d\n", n);
    try_sq(n);
  }

  return 0;
}

