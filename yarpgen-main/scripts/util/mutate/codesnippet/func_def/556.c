//b:volatile struct S1
int main()
{
  char c = b.f1;
  b.f1 = 1;
  if ((b.f1 > (-1)) || c)
    __builtin_abort();
  return 0;
}

