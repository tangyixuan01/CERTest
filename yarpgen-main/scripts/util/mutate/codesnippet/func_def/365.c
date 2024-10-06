//b:short;a:short;c:unsigned char;printf:func int
int main()
{
  int d;
  unsigned char e;
  d = 0;
  for (; a >= 0; a--)
  {
    int *f = &d;
    *f = c;
  }

  e = 0;
  for (; (((unsigned char) (d - 255)) + e) <= 1; e++)
    printf("%d\n", b);

}

