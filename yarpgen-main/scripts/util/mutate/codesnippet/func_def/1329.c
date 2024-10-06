//
int main()
{
  struct S e = {1, -1};
  if (e.d)
    __builtin_abort();
  return 0;
}

