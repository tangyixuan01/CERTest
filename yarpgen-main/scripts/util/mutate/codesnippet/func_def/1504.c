//i:int;d:int;fn3:func void;a:struct 
{
  int f0;
};fn2:func void;b:struct 
{
  int f0;
};t:int;p:int
int fn4()
{
  short v;
  short x = i;
  fn2();
  v = x >> d;
  fn3(2, 5, v, i);
  fn3(4, 0, 0, p);
  if (v < 1)
    return t;
  a = b;
  return 0;
}

