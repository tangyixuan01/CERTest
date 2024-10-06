//board:unsigned char [421];ping_recurse:func void;apos:int
if ((mr[apos] == 1) || (board[apos] == color))
  ping_recurse(apos, mr, color);
