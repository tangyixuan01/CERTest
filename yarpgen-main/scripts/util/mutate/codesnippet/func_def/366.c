//b:struct 
{
  unsigned int f : 1;
};a:int
int main()
{
  a = (0 < b.f) | b.f;
  return a;
}

