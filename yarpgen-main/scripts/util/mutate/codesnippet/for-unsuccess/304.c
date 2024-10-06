//failures:int;i:int;array:uint32_t [1028]
for (i = 0; i < ((1028 / 2) - 1); i++)
{
  if (array[(1028 / 2) + i] != (array[2 * i] + array[(2 * i) + 1]))
  {
    printf("COMPILER BUG: array[%d] should be %d but is %d\n", (1028 / 2) + i, array[2 * i] + array[(2 * i) + 1], array[(1028 / 2) + i]);
    ++failures;
  }
}
