//a:char
int main()
{
  int b;
  char c;
  d:
  c = (a--) * 52;

  b = 3L * c;
  if (b)
    goto d;
  printf("%d\n", a);
}

