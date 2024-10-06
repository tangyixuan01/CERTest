//b:int;a:int;foo:func unsigned int
int main()
{
  if ((b = 1 % foo(a)) > a)
    return 0;
  return 1;
}

