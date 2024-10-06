//k:int;board:unsigned char [421];ping_recurse:func void;delta:int [8]
for (k = 0; k < 4; k++)
{
  int apos = pos + delta[k];
  if ((mr[apos] == 1) || (board[apos] == color))
    ping_recurse(apos, mr, color);
}
