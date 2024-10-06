//e:int;c:int;d:short;a:int;f:int;b:short [5]
int main()
{
  int g = 5;
  if (c)
    g = a;
  e = (&b[4]) == (&d);
  (e) ? ((g % e) && (f = 0)) : (g);
  return 0;
}

