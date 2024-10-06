//srcdata:short int [16]
int main(int argc, char **argv)
{
  int hix = 8;
  int j;
  volatile int s1ref = 0;
  for (j = 0; j < hix; j++)
  {
    s1ref += srcdata[j] * j;
  }

  int s1 = 0;
  for (j = 0; j < hix; j++)
  {
    s1 += srcdata[j] * j;
  }

  printf("s1ref=%d, s1=%d\n", s1ref, s1);
}

