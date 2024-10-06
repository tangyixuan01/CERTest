//data_count:int;extrema:double [8];data_values:data_t []
int main(int argc, char **argv)
{
  int idx;
  double *pp;
  for (pp = extrema; pp < (extrema + 8); pp++)
    *pp = 0.5f;

  for (idx = 0; idx < data_count; idx += 1)
  {
    double prob = data_values[idx].prob;
    double dev = fabs(prob - 0.5f);
    double hitdev = 1;
    double *hit = 0;
    for (pp = extrema; pp < (extrema + 8); pp++)
    {
      double slotdev = fabs((*pp) - 0.5f);
      if ((dev > slotdev) && (hitdev > slotdev))
      {
        hit = pp;
        hitdev = slotdev;
      }
    }

    if (hit)
    {
      printf("#   %f %f\n", fabs(prob - 0.5f), prob);
      *hit = prob;
    }
  }

  return 0;
}

