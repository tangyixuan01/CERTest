//c:int  e:int  d:struct 
{
  int : 8;
  int a;
}  b:struct 
{
  int : 8;
  int a;
}  
for (c = 2; c; c--)
  for (e = 0; e < 2; e++)
{
  d[c] = (b = d[c + 1]);
  d[c + 1].a = 0;
}

//c:int  e:int  d:struct 
{
  int : 8;
  int a;
}  b:struct 
{
  int : 8;
  int a;
}  
for (c = 2; c; c--)
  for (e = 0; e < 2; e++)
{
  d[c] = (b = d[c + 1]);
  d[c + 1].a = 0;
}

