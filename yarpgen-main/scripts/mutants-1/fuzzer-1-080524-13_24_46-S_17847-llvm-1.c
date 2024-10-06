#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-if-snippet -> insert-assignment-snippet

int printf(const char *, ...);
int a = 1;
int b;
int c;
int d;
int e;
int g;
int fn1(int p1, int p2)
{
  short R4xmlZd5 = (short)32767;
  short IB_Qgc6S = (short)14109;
  int tNM2bDZc = -2147483648;
  char zPuZqhfV = (signed char)-128;
  int tFph9lya = -1531979410;
  int qirOnEBv = -90625634;
  transparent_crc(qirOnEBv, "qirOnEBv", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  IB_Qgc6S = (R4xmlZd5) ? (R4xmlZd5) : (1 << tNM2bDZc);
  if (zPuZqhfV)
    tFph9lya = ~((~0) / (tFph9lya ^ qirOnEBv));
  transparent_crc(tFph9lya, "tFph9lya", 1);
  transparent_crc(zPuZqhfV, "zPuZqhfV", 1);
  transparent_crc(tNM2bDZc, "tNM2bDZc", 1);
  transparent_crc(IB_Qgc6S, "IB_Qgc6S", 1);
  transparent_crc(R4xmlZd5, "R4xmlZd5", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return (p1 && (p1 > (647 - p2))) ? (p1) : (p1 + p2);
}

int fn2(char p1)
{
  int f = 0;
  for (; f < 36; f = fn1(f, 8))
  {
    for (; c; c++)
    {
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

