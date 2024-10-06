#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-for-snippet

int printf(const char *, ...);
int a = 1;
int b;
int c;
int d;
int e;
int g;
int fn1(int p1, int p2)
{
  char Sp56gAxV = (signed char)-18;
  char KTBsUdb2 = (signed char)-106;
  int * Au8J26CM = &a;
  char qyXkPKTJ = (signed char)-128;
  unsigned long DylPzQWg = 18446744073709551615ULL;
  transparent_crc(DylPzQWg, "DylPzQWg", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (;;)
  {
    for (Sp56gAxV = 20; Sp56gAxV; Sp56gAxV++)
    {
      if (KTBsUdb2)
      {
        printf("%lu\n", DylPzQWg);
        return 0;
      }
    }

    qyXkPKTJ = (DylPzQWg++, *Au8J26CM);
  }

  transparent_crc(qyXkPKTJ, "qyXkPKTJ", 1);
  transparent_crc(KTBsUdb2, "KTBsUdb2", 1);
  transparent_crc(Sp56gAxV, "Sp56gAxV", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p1 && (p1 > (647 - p2))) ? (p1) : (p1 + p2);
}

int fn2(char p1)
{
  int cDAJ7Uf3 = 409657073;
  int dclLhRQs = -6503897;
  int f = 0;
  for (; f < 36; f = fn1(f, 8))
  {
    for (; c; c++)
    {
      for (cDAJ7Uf3 = 0; cDAJ7Uf3 < 2; cDAJ7Uf3++)
        for (; dclLhRQs; dclLhRQs++)
        ;


      ;
    }

    if (f ^ 1)
    {
      if (e)
      {
        d = (p1) ? (1) : (0);
      }
      else
      {
        if (p1)
        {
          break;
        }
      }
      b = (p1--) == 0;
    }
  }

  transparent_crc(dclLhRQs, "dclLhRQs", 1);
  transparent_crc(cDAJ7Uf3, "cDAJ7Uf3", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return f;
}

int main()
{
  platform_main_begin();
  crc32_gentab();
  g = fn2(64);
  g || (a = 0);
  printf("%d\n", a);
  return 0;
}

