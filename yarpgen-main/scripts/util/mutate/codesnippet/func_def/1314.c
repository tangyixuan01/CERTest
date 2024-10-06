//b:int [8];a:int;c:int [8];printf:func int
int main()
{
  int d;
  for (; a < 8; a++)
  {
    d = b[a] >> 1;
    c[a] = d != 0;
  }

  printf("%d\n", c[0]);
  return 0;
}

