void a() {
  char b = 8;
  volatile int c;
  int d = -211;
  int e, f;
  for (f = 0; f <= 7; f++)
    for (e = 0; e < 2; e++)
      do {
        d += 5;
        c = b;
      } while (d < 0);
}
int main() { a(); }
