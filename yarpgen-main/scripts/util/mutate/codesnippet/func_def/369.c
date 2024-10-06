//c:int;d:int;a:int [256];b:int
int main()
{
  c = 0;
  for (; c < 256; c++)
    a[c] = c;

  for (; d; d++)
    ;

  printf("checksum = %X\n", b);
}

