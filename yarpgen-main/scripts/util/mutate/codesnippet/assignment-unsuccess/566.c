//d:int;c:int *;b:struct 
{
  int a : 1;
}
d = c && (b.a = (d < 0) ^ 3);
