//mid_wts:double [8][35];in_pats:double [1][35];value:double
void init()
{
  int i;
  int neurode;
  value = ((double) 1.0) - ((double) 0.5);
  for (neurode = 0; neurode < 8; neurode++)
    for (i = 0; i < 35; i++)
    mid_wts[neurode][i] = value;


  for (i = 0; i < 35; i++)
    in_pats[0][i] = 1.234;

}

