//b:int;a:int
void main()
{
  a = 0;
  for (; a < 6; ++a)
  {
    b = 8;
    for (; b < 0; b--)
      ;

  }

  printf("checksum = %X\n", b);
}

