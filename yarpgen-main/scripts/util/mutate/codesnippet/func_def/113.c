//e:int;c:short [2];a_ptr:int *;a:int;b:int
int main()
{
  c[0] = 1;
  for (b = 1; b >= 0; b--)
    e = (*a_ptr = c[b]);

  c[0] = 0;
  printf("checksum = %X\n", a);
}

