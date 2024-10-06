//L:int;m:int;a:double *;N:int;test_func:func void;n:int
for (m = 0; m < N; m += n)
{
  test_func(a, L, m, n, N);
}
