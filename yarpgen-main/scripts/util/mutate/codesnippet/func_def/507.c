//b:int;c:int;d:char [1]
static void fn1()
{
  for (; b < 1; b++)
    d[b] = 1;

  for (; c < 1; c++)
    if (d[0])
    break;

}

