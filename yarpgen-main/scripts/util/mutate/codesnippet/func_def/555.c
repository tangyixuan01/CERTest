//
int main()
{
  long double d;
  char s[sizeof(d)];
  memcpy(&d, "AAAAAAAAAAAAAAA", sizeof(d));
  memcpy(&s, &d, sizeof(s));
  printf("%s\n", s);
}

