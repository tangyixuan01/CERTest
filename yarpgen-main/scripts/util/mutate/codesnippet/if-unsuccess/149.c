//x:int;i:uintptr_t;p:int *
if (i == ((uintptr_t) (&x)))
{
  p = (int *) i;
  break;
}
