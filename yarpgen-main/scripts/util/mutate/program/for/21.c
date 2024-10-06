//b:char  d:short  c:char  a:int  
for (; b <= 5; b++)
{
  d = 0;
  for (; d <= 5; d++)
  {
    c = 0;
    for (; c <= 5; c++)
      a[b][c] = a[b][c + 2] & 216;

  }

}
//b:char  d:short  c:char  a:int  
for (; b <= 5; b++)
{
  d = 0;
  for (; d <= 5; d++)
  {
    c = 0;
    for (; c <= 5; c++)
      a[b][c] = a[b][c + 2] & 216;

  }

}
