//False:struct S;True:struct S;g:func int
if (x)
  return (g(x)) ? (&True.field) : (&False.field);
else
  return &True.field;
