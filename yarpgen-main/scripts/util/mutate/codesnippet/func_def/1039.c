//
int main()
{
  _Bool b;
  *((char *) (&b)) = 123;
  printf("%d\n", *((char *) (&b)));
}

