//d[c]:int  d:struct 
{
  int : 8;
  int a;
}  c:int  b:struct 
{
  int : 8;
  int a;
}  
d[c] = (b = d[c + 1]);