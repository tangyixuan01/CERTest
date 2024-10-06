//i:volatile char;c:unsigned int;d:unsigned long long;fn3:func char;fn2:func short;f:unsigned int;b:volatile char;fn1:func int
int main()
{
  i = fn1(c, fn2((f <= d) <= fn3(b), -3));
  if (i)
    __builtin_abort();
  return 0;
}

