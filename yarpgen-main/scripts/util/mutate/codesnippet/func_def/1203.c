//c:int;d:int;a:int;b:unsigned char
void fn1()
{
  short e;
  int f = -1;
  char g = a;
  for (; c < 1; c++)
  {
    short h;
    int i;
    char j;
    if (d)
      h = (i = f);
    j = b;
    e = ~((~f) || b);
    b = ~((~j) | ((i ^ b) && h));
    if (((b > 254) || (e > (-2))) || (!g))
      if (f != 1)
      __builtin_abort();
    f = i;
  }

}

