//e:char;fn2:func int;b:int
void fn3()
{
  for (; e < 1; e++)
  {
    int *f = &b;
    *f = fn2();
  }

}

