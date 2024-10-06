//h:func short;f:func void;g:func int
int main()
{
  f();
  if (h(g(0, 1)) != 1)
    __builtin_abort();
  return 0;
}

