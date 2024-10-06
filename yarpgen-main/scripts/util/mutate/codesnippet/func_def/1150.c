//s:struct 
{
  int w;
}
void wait(void)
{
  int t;
  loop:
  t = *((volatile int *) (&s.w));

  if (t > 0)
    goto loop;
}

