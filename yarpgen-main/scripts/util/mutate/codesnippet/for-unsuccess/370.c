//b:int;d:struct S;c:struct S
{
  int f0;
  int f1;
};a:struct S
{
  int f0;
  int f1;
} [2]
for (b = 0; b < 2; b++)
{
  a[b] = d;
  c = (d = a[0]);
}
