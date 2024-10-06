//i:unsigned int;ppll:long long **;ia:int [1][1];ll:long long;ppa:int **;u:union 
{
  int i;
  long long ll;
}
void foo()
{
  for (; i <= 1; i++)
  {
    int *j;
    int *k = &u.i;
    *(*ppll) = ll;
    *k = 0;
    j = *ppa;
    ia[0][0] = *j;
  }

}

