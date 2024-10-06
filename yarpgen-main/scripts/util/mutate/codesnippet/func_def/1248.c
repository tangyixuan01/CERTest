//SetValue:func void;GetValue:func int
int main()
{
  int iValueSave = GetValue();
  SetValue(1);
  printf("%d\n", GetValue());
  SetValue(iValueSave);
  return 0;
}

