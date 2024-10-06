//e:func void;c:func long;a:int;b:long
int main()
{
  b = 0;
  for (; b < 1; b = (c(b - 90) + 90) + 1)
    ;

  e(b >> 2);
  printf("%d\n", a);
}

