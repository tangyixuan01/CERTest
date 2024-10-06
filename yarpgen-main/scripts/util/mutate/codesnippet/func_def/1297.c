//a:int [10];foo:func int
int main()
{
  if (&a[foo()])
    puts("goodbye");
  return 0;
}

