//handler:func void;test:int
int main()
{
  signal(SIGALRM, handler);
  alarm(1);
  while (test == 0)
    asm("");

  return 0;
}

