//True:struct S;g:func int;False:struct S
struct S **h(struct S **x)
{
  if (x)
    return (g(x)) ? (&True.field) : (&False.field);
  else
    return &True.field;
}

