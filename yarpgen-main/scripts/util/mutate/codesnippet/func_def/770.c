//
int foo(int (*cb)(void))
{
  return (*cb)();
}

