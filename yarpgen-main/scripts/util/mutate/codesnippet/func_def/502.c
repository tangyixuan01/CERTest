//func_that_exits:func void;d:int [][8]
int main(void)
{
  int e;
  while (1)
  {
    func_that_exits(e);
    e = d[300000000000000000][0];
  }

  return 0;
}

