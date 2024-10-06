//d:long [32]
int main()
{
  int b = 0;
  for (int c = 0; c <= 5; c++)
    b ^= d[(c * 5) + 1];

  printf("checksum = %x\n", b);
}

