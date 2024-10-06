//x:int
int main()
{
  unsigned long long t = 0xffffffffffffffffLLU * (0xffffffffLU * x);
  if (t != 0xffffffff00000001LLU)
  {
    printf("Error (t == %llu)\n", t);
  }
  return 0;
}

