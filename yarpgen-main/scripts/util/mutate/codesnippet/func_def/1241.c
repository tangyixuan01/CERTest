//abort:func void
int main(void)
{
  int a;
  int i;
  for (i = 0; i < 5; i++)
    a = i * i;

  if (a != 16)
    abort();
  return 0;
}

