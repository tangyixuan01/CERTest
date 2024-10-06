//flex:F2;data:char [8]
long unsigned int nested_flexarray(long unsigned int n)
{
  S2 *p = (S2 *) __builtin_malloc(n);
  return __builtin_dynamic_object_size(p->flex.data, 1);
}

