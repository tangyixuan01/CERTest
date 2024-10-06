//bla:func int
int main(void)
{
  struct test2 pom;
  if (bla(&pom.sub, &pom) != 8)
    abort();
  return 0;
}

