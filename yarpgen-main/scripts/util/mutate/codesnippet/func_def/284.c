//c:unsigned char;foo:func int;d:int
void bar()
{
  l:
  d = foo() && (--c);

  if (c)
    goto l;
}

