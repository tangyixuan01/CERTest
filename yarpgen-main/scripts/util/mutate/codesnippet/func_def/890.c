//b:int [3];a:int;c:int [3][5]
void fn1()
{
  int e;
  for (a = 2; a >= 0; a--)
    for (e = 0; e < 4; e++)
    c[a][e] = b[a];


}

