//rx:int;in:int;tj:const int;as:int [tj]
for (rx = 0; rx < tj; ++rx)
{
  for (in = 0; in < tj; ++in)
    as[in] = 1;

  as[rx] = 0;
}
