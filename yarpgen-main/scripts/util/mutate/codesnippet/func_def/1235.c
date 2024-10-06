//test:func void;arr_252:unsigned long long int
int main()
{
  test();
  printf("%llx\n", arr_252);
  if (arr_252 != 0xffffffffffffffff)
    __builtin_abort();
}

