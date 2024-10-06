//e:int;fn1:func int;c:int
void fn2(int p)
{
  e = fn1(p ^ 1, p);
  c = e || c;
}

