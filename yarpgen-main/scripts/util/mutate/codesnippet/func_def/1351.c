//
void signalusr1_c(void (*handler)(int))
{
  signal(SIGUSR1, handler);
}

