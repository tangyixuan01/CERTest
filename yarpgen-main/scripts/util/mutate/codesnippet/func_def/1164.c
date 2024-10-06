//i:int;g:int;j:int;h:volatile char;f:volatile short
void fn1()
{
  while (i)
    ;

  short k = f && (h % 5);
  int l = (~j) % f;
  short m = (~j) & k;
  int n = 5 % (~h);
  g = (f | 1) && ((m ^ l) | n);
}

