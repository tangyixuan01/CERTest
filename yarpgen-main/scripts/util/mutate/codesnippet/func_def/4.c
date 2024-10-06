//e:char;c:int;d:int;a:int;b:int
void fn1()
{
  int h;
  for (; e; e++)
  {
    for (; b;)
      d--;

    h = (d) ? (a % d) : (0);
    c &= h;
  }

}

