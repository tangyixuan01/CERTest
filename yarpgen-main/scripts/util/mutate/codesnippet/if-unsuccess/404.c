//list:int [32];blist:const int *
if (alistp)
  blist = alistp;
else
{
  list[3] = 42;
  blist = list;
}
