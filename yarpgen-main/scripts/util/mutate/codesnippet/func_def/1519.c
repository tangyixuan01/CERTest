//
void f1(const char *b, ...)
{
  long long int v;
  va_list ap;
  __builtin_va_start(ap);
  v = __builtin_va_arg(ap);
  printf("IN f1:   %016llx\n", v);
  ;
}

