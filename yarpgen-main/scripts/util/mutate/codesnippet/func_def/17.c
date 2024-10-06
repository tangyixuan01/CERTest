//b:int;a:int;c:int;d:int
int foo()
{
  for (;; c++)
    if ((b > 0) | (a & 1))
    ;
  else
  {
    d = a;
    return 0;
  }

}

