//a:char [16];f:func int;g:func int;b:char [16]
int main(void)
{
  __builtin_printf("strlen (\"%s\") = %i\n", a, f());
  __builtin_printf("strlen (\"%s\") = %i\n", b, g());
}

