//foo:func int
int main()
{
  if (foo() != 3)
    __builtin_abort();
  return 0;
}

