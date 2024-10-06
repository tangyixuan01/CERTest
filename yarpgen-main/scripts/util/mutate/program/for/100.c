//b:int  d:int  c:int  a:int  
for (; b <= 6; b++)
{
  d = 0;
  for (; d <= 3; d++)
  {
    for (;;)
    {
      c[d * 3] = 10;
      break;
    }

    c[b] = a[b];
  }

}
