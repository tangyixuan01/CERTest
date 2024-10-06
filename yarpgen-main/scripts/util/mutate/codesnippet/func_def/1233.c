//b:int [4];a:int
void fn1()
{
  b[1] = 1;
  if (a)
    for (a = 1; a < 4; a++)
    b[a] = 0;

  a = 1;
}

