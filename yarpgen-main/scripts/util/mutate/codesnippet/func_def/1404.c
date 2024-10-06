//fail:func unsigned
int main()
{
  return fail(0xDEADBEEFU, 16U) == 0xDEADBEFFU;
}

