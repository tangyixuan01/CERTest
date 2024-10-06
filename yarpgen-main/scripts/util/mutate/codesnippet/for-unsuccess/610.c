//srcdata:short int [16];s1ref:volatile int;hix:int;j:int
for (j = 0; j < hix; j++)
{
  s1ref += srcdata[j] * j;
}
