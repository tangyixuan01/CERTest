//func_57:func void;g_208:unsigned;f1:long;printf:func int;g_65:int [2][8][2];f0:long;g_31:int
int main(void)
{
  for (; f0 < 1; f0 = 1)
  {
    func_57();
    for (g_208 = 0; g_208 <= 1; g_208++)
      for (f1 = 0; f1 <= 1; f1++)
    {
      g_65[g_208][g_31 + 2][g_208] = g_65[0][f1 + 2][g_208];
      func_57();
    }


  }

  printf("%d\n", g_65[1][2][1]);
  return 0;
}

