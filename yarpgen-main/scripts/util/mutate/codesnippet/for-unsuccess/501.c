//b:struct 
{
  int : 8;
  int a;
};d:struct 
{
  int : 8;
  int a;
} [4];e:int;c:int
for (c = 2; c; c--)
  for (e = 0; e < 2; e++)
{
  d[c] = (b = d[c + 1]);
  d[c + 1].a = 0;
}

