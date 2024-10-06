//k:int;fn2:func int;l:int;fn1:func int
void fn3(int p1)
{
  L1:
  l = fn1(fn2(p1, l));

  for (; k;)
    if (p1)
    goto L1;

}

