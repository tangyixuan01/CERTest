//e:func void;c:unsigned;d:int;a:long long;b:unsigned
int main()
{
  for (int g = 2; g <= d; g++)
  {
    c += 5 - g;
    b += g + 4;
  }

  e(&a, b);
  printf("%llu\n", a);
}

