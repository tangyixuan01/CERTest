//a:int
int main()
{
  int b;
  for (;;)
  {
    b = ((a < 0) && (0 < ((-2147483647) - a))) ? (0) : (a);
    if (b != 0x8C65C01D)
    {
      if (a < 6)
        printf("g_1600=%llu\n", (long long) a);
      goto c;
    }
  }

  c:
  ;

}

