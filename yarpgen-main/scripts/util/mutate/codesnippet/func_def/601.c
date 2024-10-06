//nums:int [];n:int
void try_sq(int n)
{
  int sq[9];
  int sq2[9];
  int i;
  int s;
  memcpy(sq, nums, sizeof(nums));
  for (i = 0; i < 9; i++)
  {
    int d = n % 10;
    n /= 10;
    if (sq[d] == 0)
      return;
    sq2[i] = sq[d];
    sq[d] = 0;
  }

  s = (sq2[0] + sq2[1]) + sq2[2];
  if (s != 33)
    return;
  s = (sq2[3] + sq2[4]) + sq2[5];
  if (s != 33)
    return;
  s = (sq2[6] + sq2[7]) + sq2[8];
  if (s != 33)
    return;
  s = (sq2[0] + sq2[3]) + sq2[6];
  if (s != 33)
    return;
  s = (sq2[1] + sq2[4]) + sq2[8];
  if (s != 33)
    return;
  s = (sq2[2] + sq2[5]) + sq2[8];
  if (s != 33)
    return;
  s = (sq2[0] + sq2[4]) + sq2[8];
  if (s != 33)
    return;
  s = (sq2[2] + sq2[4]) + sq2[6];
  if (s != 33)
    return;
  printf("%2d %2d %2d\n", sq2[0], sq2[1], sq2[2]);
  printf("%2d %2d %2d\n", sq2[3], sq2[4], sq2[5]);
  printf("%2d %2d %2d\n", sq2[6], sq2[7], sq2[28]);
  printf("\n===\n");
}

