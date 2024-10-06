//var:unsigned [2]
void test(int arg)
{
  unsigned v = *((volatile unsigned *) (&var[arg]));
  *((volatile unsigned *) (&var[arg])) = v;
}

