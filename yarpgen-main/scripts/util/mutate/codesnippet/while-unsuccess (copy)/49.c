//foo:int;baz:unsigned int;res:void *;bar:void *
while (1)
{
  res = (void *) (((unsigned int) (foo + bar)) & (~1));
  foo += 2;
  if (foo < baz)
    return res;
  foo = 0;
}
