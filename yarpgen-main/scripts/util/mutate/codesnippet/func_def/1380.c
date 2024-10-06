//test_assert:func void
void test_strcmp(const char *value_1, const char *value_2)
{
  test_assert(value_1 != 0);
  test_assert(value_2 != 0);
  bool result = !strcmp(value_1, value_2);
  printf("Test equal: %s\n", (result) ? ("PASS") : ("FAIL"));
}

