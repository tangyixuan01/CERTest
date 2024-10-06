//
int main()
{
  uint32_t array[1028];
  int failures;
  int i;
  memset(array, 0, sizeof(array));
  for (i = 0; i < (1028 / 2); i++)
  {
    array[i] = i;
  }

  for (i = 0; i < ((1028 / 2) - 1); i++)
  {
    array[(1028 / 2) + i] = array[2 * i] + array[(2 * i) + 1];
  }

  failures = 0;
  for (i = 0; i < ((1028 / 2) - 1); i++)
  {
    if (array[(1028 / 2) + i] != (array[2 * i] + array[(2 * i) + 1]))
    {
      printf("COMPILER BUG: array[%d] should be %d but is %d\n", (1028 / 2) + i, array[2 * i] + array[(2 * i) + 1], array[(1028 / 2) + i]);
      ++failures;
    }
  }

  if (failures == 0)
  {
    printf("pass\n");
  }
  return 0;
}

