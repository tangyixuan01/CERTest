//
struct lock_chain *foo(struct lock_chain *chain)
{
  int i;
  for (i = 0; i < 100; i++)
  {
    chain[i + 1].base = chain[i].base;
  }

  return chain;
}

