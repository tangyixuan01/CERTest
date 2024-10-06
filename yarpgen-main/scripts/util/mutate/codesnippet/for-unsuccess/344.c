//i2:int64_t;i3:int64_t;i1:int64_t
for (i1 = 0; i1 < 10; i1++)
{
  for (; i2 < 10; i2++)
    printf("L2\n");

  for (; i3 < 10; i3++)
    for (int64_t k = 0; k < i1; k++)
    printf("L3\n");


}
