//i:int;array:uint32_t [1028]
for (i = 0; i < ((1028 / 2) - 1); i++)
{
  array[(1028 / 2) + i] = array[2 * i] + array[(2 * i) + 1];
}
