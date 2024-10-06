//b:int32_t [10][1][9];g:int;f:int;e:int
for (e = (f = (g = 0)); g < 9; g++)
{
  if (g == 3)
    printf("%d\n", b[e][f][g]);
}
