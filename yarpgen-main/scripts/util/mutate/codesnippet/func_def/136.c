//ws:int []
int main(void)
{
  int n0 = __builtin_snprintf(0, 0, "%S", L"\uFFFF");
  int n1 = __builtin_snprintf(0, 0, "%S", ws);
  __builtin_printf("%i == %i\n", n0, n1);
  if (n0 != n1)
    __builtin_abort();
}

