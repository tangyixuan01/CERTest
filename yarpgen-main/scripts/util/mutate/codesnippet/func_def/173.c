//Z:struct S;f:func int
inline static int g(struct S **obj)
{
  return f() && ((*obj) == (&Z));
}

