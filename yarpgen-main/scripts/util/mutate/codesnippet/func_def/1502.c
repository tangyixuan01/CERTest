//fn1:func void;l:int;n:int
void fn2()
{
  fn1(l > 0);
  fn1(l >> 8);
  fn1(l & 5);
  n = (n >> 8) ^ n;
}

