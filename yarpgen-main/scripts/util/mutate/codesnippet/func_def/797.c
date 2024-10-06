//itos:func char *
int main()
{
  char *p;
  long x = -2147483645;
  int i;
  for (i = 0; i < 4; ++i)
  {
    p = itos(x);
    printf("i=%d p=%s\n", i, p);
    --x;
  }

  return 0;
}

