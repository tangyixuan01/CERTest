//
for (int i = 0; i < n; i += 4)
{
  float temp0 = (da_r * x[i]) - x[i + 1];
  float temp1 = (da_r * x[i + 2]) - x[i + 3];
  x[i + 1] = (da_r * x[i + 1]) + x[i];
  x[i + 3] = (da_r * x[i + 3]) + x[i + 2];
  x[i] = temp0;
  x[i + 2] = temp1;
}
