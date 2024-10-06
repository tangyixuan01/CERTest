//e:struct 
{
  int f0;
  int f1;
  int f2;
};c:int;d:int;a:struct 
{
  int f0;
  int f1;
  int f2;
};b:int;h:int;g:int;f:int
static int fn1(unsigned char p)
{
  lbl:
  for (g = 0; g; g++)
  {
    if (c)
      break;
    p && (d |= 1);
  }


  for (e.f1 = 0; e.f1 < 21; e.f1 += 2)
  {
    h = 0;
    if (a.f0)
      goto lbl;
    f |= (a.f2 |= (p++) || (b--));
  }

  return 0;
}

