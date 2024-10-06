//
int main(void)
{
  char pstring[] = " hello world";
  pstring[0] = (char) (__builtin_strlen(pstring) - 1);
  __builtin_printf("%zd\n", __builtin_strlen(pstring));
  return 0;
}

