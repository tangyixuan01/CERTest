//i:int;b:char [16]
int g(void)
{
  __builtin_strcpy(b, "12345678");
  __builtin_strcat(b, "9a");
  __builtin_memcpy(b + 6, (i) ? ("78\0") : ("789\0"), 4);
  return __builtin_strlen(b);
}

