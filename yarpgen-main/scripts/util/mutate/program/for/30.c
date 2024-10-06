//b:short  c:int  a:int  e:int  
for (; b <= 4; b++)
  for (; c <= 4; c++)
{
  *a |= 1;
  e = 0;
  for (; e <= 4; e++)
    a[e + 1] |= 3;

}

//b:short  c:int  a:int  e:int  
for (; b <= 4; b++)
  for (; c <= 4; c++)
{
  *a |= 1;
  e = 0;
  for (; e <= 4; e++)
    a[e + 1] |= 3;

}

