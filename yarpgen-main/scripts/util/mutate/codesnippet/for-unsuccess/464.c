//ia:int [1][1];ppa:int **;ppll:long long **;ll:long long;u:union 
{
  int i;
  long long ll;
};i:unsigned int
for (; i <= 1; i++)
{
  int *j;
  int *k = &u.i;
  *(*ppll) = ll;
  *k = 0;
  j = *ppa;
  ia[0][0] = *j;
}
