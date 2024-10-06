//i:int;s:const char [];a:char [16];t:const char []
int f(void)
{
  __builtin_memcpy(a, (i) ? (s + 2) : (t + 1), 8);
  return __builtin_strlen(a);
}

