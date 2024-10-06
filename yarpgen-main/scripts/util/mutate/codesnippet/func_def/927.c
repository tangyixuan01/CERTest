//c:short;d:int;a:int;b:int *
int main()
{
  *b = d;
  e:
  --c;

  *b &= b != 0;
  *b ^= -1L;
  if (c)
    goto e;
  printf("%d\n", a);
}

