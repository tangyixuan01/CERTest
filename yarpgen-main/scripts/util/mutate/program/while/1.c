//l4:int  rx:int  tj:const int  in:int  as:int  
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
