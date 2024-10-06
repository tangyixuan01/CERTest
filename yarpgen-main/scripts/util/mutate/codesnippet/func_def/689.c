//test:func void;arr:unsigned long
int main()
{
  test();
  __builtin_printf("arr: %ld\n", arr);
  if (arr != 4897637220ULL)
    __builtin_abort();
  return 0;
}

