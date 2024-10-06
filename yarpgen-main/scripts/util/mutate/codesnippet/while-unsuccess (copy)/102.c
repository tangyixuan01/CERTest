//tj:const int;rx:int;as:int [tj];in:int;l4:int
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
