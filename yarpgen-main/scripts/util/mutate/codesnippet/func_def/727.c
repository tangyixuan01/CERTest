//abort:func void;foo:func int
int main(void)
{
  if (foo(".interp") == 0x10000)
    abort();
  return 0;
}

