//a:func int;var_16:int
int main()
{
  int c = (((unsigned int) a(var_16)) >= 0) && 4;
  printf("%d\n", c);
  if (c != 1)
    __builtin_abort();
}

