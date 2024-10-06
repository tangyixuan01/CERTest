//c:int;d:int;a:char;b:int
void foo()
{
  int f = c && 1;
  int g = f + a;
  if (d != 1)
  {
    b = c && (d && g);
    if (c > 0)
      __builtin_printf("0\n");
  }
}

