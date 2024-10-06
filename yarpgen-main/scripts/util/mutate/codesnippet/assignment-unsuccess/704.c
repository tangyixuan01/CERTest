//d:struct 
{
  int : 8;
  int a;
} [4];c:int;b:struct 
{
  int : 8;
  int a;
}
d[c] = (b = d[c + 1]);
