//foo:func int;y:volatile int
int main(void)
{
  unsigned int x;
  while (1)
  {
    y = foo(x++);
  }

}

