//a:int;c:char;bar:func void
int main()
{
  bar((&c) == ((void *) (&a)));
  return 0;
}

