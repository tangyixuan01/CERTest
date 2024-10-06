//av:int *[7];k:int;u:volatile int;i:int;t:volatile int;j:int;n:int
for (i = 0; i < 1; i++)
  for (j = 0; j < 1; j++)
  for (k = 0; k < 7; k++)
{
  (t || n) && u;
  av[k] = 0;
}


