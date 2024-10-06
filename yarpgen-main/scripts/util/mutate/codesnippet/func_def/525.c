//c:int *;d:int;a:int [1];fn2:func unsigned short;fn1:func short
void fn3()
{
  int *t = &d;
  if (fn2(1) >= fn1(t == (&a[0])))
    *c = 1;
}

