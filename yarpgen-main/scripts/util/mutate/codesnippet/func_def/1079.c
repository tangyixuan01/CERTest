//x:int;y:int
int main()
{
  int *p;
  p = (&x) + 1;
  printf("&x=%p  &y=%p  p=%p\n", (void *) (&x), (void *) (&y), (void *) p);
  _Bool b1 = p == (&y);
  printf("(p==&y) = %s\n", (b1) ? ("true") : ("false"));
  return 0;
}

