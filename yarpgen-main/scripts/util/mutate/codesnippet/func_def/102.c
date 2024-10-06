//c:int;foo:func void;d:int;a:int;b:short
void bar()
{
  l1:
  foo();

  d = -3;
  for (a = 0; a > (-3); a = d)
    c |= b;

  if (b)
    goto l1;
}

