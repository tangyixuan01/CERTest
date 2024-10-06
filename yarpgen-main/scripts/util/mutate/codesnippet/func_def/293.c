//l:func uint32_t;a:int32_t [6]
int main()
{
  int i = 0;
  l();
  for (i = 0; i < 6; i++)
  {
    if (i == 3)
      printf("%d\n", a[i]);
  }

  return 0;
}

