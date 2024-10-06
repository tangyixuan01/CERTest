//j:int  l:volatile struct A  
while (j)
{
  struct A r = {0};
  *l = r;
}
