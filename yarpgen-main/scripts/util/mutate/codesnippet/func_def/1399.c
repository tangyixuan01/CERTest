//in:int;rx:int
int main(void)
{
  const int tj = 3;
  int as[tj];
  static int l4;
  while (l4 < 1)
  {
    for (rx = 0; rx < tj; ++rx)
    {
      for (in = 0; in < tj; ++in)
        as[in] = 1;

      as[rx] = 0;
    }

    ++l4;
  }

  return as[tj - 1];
}

