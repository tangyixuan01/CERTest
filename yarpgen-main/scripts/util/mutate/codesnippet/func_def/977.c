//d1:struct 
{
  int a;
  int x[];
};d2:int
int main()
{
  d2 = 1;
  if (d1.x[0] != 0)
    abort();
  exit(0);
}

