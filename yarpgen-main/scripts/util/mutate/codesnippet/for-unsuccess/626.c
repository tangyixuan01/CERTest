//e:int;printf:func int;a:int
for (e = 0; e < 10; e++)
{
  int f = 1 / a;
  printf("%d\n", (f && (f == 1)) || 0);
}
