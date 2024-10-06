//pure_alloc:func void *;abort:func void;foo:int
int main()
{
  pure_alloc();
  if (!foo)
    abort();
  return 0;
}

