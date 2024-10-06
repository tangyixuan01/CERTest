//
int main()
{
  struct A t = {0, 0, 2};
  L:
  t.d = ~((~((~0) % t.d)) % 2);

  if (!t.d)
    goto L;
  return 0;
}

