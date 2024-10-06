//fn3:func int;c:struct 
{
  char f0;
} [6]
int main()
{
  fn3();
  if (c[2].f0 != 0)
    __builtin_abort();
  return 0;
}

