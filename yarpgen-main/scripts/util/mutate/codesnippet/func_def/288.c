//board:unsigned char [421];board_size:int
void clear_board(void)
{
  int k;
  for (k = 0; k < 421; k++)
  {
    if (k < board_size)
      board[k] = 3;
  }

}

