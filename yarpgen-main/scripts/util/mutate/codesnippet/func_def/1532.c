//data:char [8];flex:F2;p:S2 *
long unsigned int nested_flexarray2(S2 *p)
{
  return __builtin_dynamic_object_size(p->flex.data, 1);
}

