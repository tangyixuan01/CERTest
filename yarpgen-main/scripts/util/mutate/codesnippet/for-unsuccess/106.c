//
for (int i = 14; i >= 10; i--)
{
  in[i - 8] -= in[i];
  in[i - 5] += in[i] * 2;
  in[i - 4] += in[i];
}
