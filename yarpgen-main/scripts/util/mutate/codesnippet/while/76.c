//c:int;f:int;b:int;d:int;e:int;a:int;g:int
while (1)
{
  if (e > d)
    break;
  while (1)
  {
    int h = f % b;
    h = b;
    b = a;
    if (f)
      ;
    b = h;
    L:
    g = b;

    b = ~b;
    e = (f ^ g) ^ (~d);
    if (!b)
      break;
    b = ~c;
  }

}
