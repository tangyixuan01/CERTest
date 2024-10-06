//e:int;c:int;d:char;a:int;b:int;f:int;g:int;h:int
int main()
{
  f = 0;
  h = d > 0;
  c = g;
  e--;
  a = b <= 0;
  e && (g = 0);
  g--;
  d ^= 1;
  if (d != 1)
    __builtin_abort();
  return 0;
}

