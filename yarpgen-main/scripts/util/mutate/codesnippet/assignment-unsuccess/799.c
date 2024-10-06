//e:struct 
{
  int : 4;
  int f2 : 23;
  int f3 : 6;
  int f4 : 31;
  int f6 : 11;
};k:int;d:struct 
{
  int : 4;
  int f2 : 23;
  int f3 : 6;
  int f4 : 31;
  int f6 : 11;
} [5]
k = e.f2 + d[4].f2;
