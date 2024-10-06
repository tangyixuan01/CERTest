//g:int;d:int;f:int [];e:short;c:int;a:short []
for (; g <= 1; g++)
{
  e = 3;
  for (; e; e--)
  {
    d = 1;
    if (a[g] < f[e])
      d = (a[g + 1] = c);
    else
      break;
  }

}
