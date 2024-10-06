//numDigits:func int
int main()
{
  if (numDigits(0xffffffffffffffffUL) != 20)
    __builtin_abort();
}

