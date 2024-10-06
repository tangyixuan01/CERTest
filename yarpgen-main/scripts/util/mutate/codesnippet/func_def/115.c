//pos:int;argv:char **;argc:int;term:func int
int main(int margc, char **margv)
{
  argc = margc;
  argv = margv;
  pos = 1;
  return term();
}

