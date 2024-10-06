//b:int;a:int;c:int * volatile
int main()
{
  a = 1;
  for (; a; a--)
  {
    *c = 1;
    b |= 4;
  }

  printf("%d\n", b);
  return 0;
}

