//e:int;a:int;c:int;b:int [10]
void fn1()
{
  if (a)
    fn1();
  for (e = 8; e >= 0; e--)
  {
    c = 2;
    for (; c < 8; c++)
      b[e] = b[c];

    b[7] = b[8];
    b[3] = 0;
  }

}

