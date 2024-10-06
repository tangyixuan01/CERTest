//
void g(void)
{
  if (""['\0'])
  {
    #pragma "Okay"
    __builtin_abort();
  }
}

