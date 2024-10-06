//delta:int [8];board:unsigned char [421]
void ping_recurse(int pos, int mr[400], int color)
{
  int k;
  mr[pos] = 1;
  for (k = 0; k < 4; k++)
  {
    int apos = pos + delta[k];
    if ((mr[apos] == 1) || (board[apos] == color))
      ping_recurse(apos, mr, color);
  }

}

