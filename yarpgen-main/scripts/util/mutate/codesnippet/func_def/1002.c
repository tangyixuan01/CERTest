//b:int;a:int *;c:int;d:int
void foo(void)
{
  for (; d <= 0; d++)
    b &= ((a || d) ^ c) == 1;

}

