//buf:char [32];s:char [4]
void fun1(char *s)
{
  memcpy(buf, s, (4 < strlen(s)) ? (4) : (strlen(s)));
  memcpy(buf, s, (4 < strlen(s)) ? (4) : (strlen(s)));
}

