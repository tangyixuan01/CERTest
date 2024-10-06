//e:struct S
{
  int b;
  int c;
  int d;
};f:int;g:int
int main()
{
  struct S h = e;
  for (; f < 4; f++)
  {
    g = 0 % h.b;
    h.c = ~h.d;
    h.b = h.c;
  }

  return 0;
}

