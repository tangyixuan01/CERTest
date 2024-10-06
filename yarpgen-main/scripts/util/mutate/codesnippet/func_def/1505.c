//i:int;k:int;fn4:func int;a:struct 
{
  int f0;
};u:int;r:int [1]
int fn5()
{
  for (; i < 2; i++)
    fn4();

  if (!a.f0)
    return u;
  k = r[2000];
  return 0;
}

