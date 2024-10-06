//j:func void;d:int
int main()
{
  int *o = &d;
  int *p = &d;
  *o = 0;
  j(&p);
  return 0;
}

