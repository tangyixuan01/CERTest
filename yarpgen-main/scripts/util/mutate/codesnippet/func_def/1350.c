//
void signalterm_c(void (*handler)(int))
{
  signal(SIGTERM, handler);
}

