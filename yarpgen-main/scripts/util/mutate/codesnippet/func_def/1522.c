//m:union 
{
  short c;
  int k;
};f:int *
void l()
{
  m.k = 1;
  *f = 2;
  short *n = (short *) (&m);
  *n = 0;
}

