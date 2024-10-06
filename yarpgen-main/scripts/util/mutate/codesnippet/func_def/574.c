//e:int;c:int [4][8];d:int;a:int;b:int;fn1:func int
void fn2()
{
  for (e = 0; e < 4; e++)
  {
    c[d + 1][e + 1] = c[e][e];
    b = fn1(a ^ 1);
  }

}

