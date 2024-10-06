//b:unsigned int;a:unsigned int;c:func unsigned char
int main()
{
  char f = 0;
  unsigned int *g = &b;
  for (a = 7; a != 5; a = c(a, 6))
  {
    f = (a >= 8) ? (1) : (5 >> a);
    *g = (f & 4) <= 0;
  }

  printf("%d\n", b);
}

