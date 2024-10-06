//
int main(int argc, char **argv)
{
  int64_t i1 = 0;
  int64_t i3 = 0;
  int64_t i2 = 0;
  for (i1 = 0; i1 < 10; i1++)
  {
    for (; i2 < 10; i2++)
      printf("L2\n");

    for (; i3 < 10; i3++)
      for (int64_t k = 0; k < i1; k++)
      printf("L3\n");


  }

  printf("i1 %lu i2 %lu i3 %lu\n", i1, i2, i3);
  return 0;
}

