//result:bool
void test_assert(bool result)
{
  printf("Assert: %s\n", (result) ? ("PASS") : ("FAIL"));
  if (!result)
    exit(1);
}

