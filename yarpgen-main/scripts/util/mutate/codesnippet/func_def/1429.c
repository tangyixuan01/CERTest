//
int main(int num)
{
  long long rawInf = 0xfff0000000000000;
  volatile double inf = *((double *) ((void *) (&rawInf)));
  if (inf == (-HUGE_VAL))
  {
    puts("Success");
  }
  else
  {
    puts("Error");
  }
  return 0;
}

