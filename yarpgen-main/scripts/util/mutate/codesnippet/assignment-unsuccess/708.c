//t:int;s:struct 
{
  int w;
}
t = *((volatile int *) (&s.w));
