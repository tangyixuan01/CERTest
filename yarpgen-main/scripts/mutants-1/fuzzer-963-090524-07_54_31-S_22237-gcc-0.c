#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet

extern void abort(void);
extern void exit(int);
struct s
{
  unsigned char a[256];
};
union u
{
  struct 
  {
    struct s b;
    int c;
  } d;
  struct 
  {
    int c;
    struct s b;
  } e;
};
union u v;
union u v0;
struct s *p = &v.d.b;
struct s *q = &v.e.b;
inline static struct s rp(void)
{
  return *p;
}

inline static struct s rq(void)
{
  return *q;
}

void pq(void)
{
  *p = rq();
}

void qp(void)
{
  *q = rp();
}

void init(struct s *sp)
{
  int i;
  for (i = 0; i < 256; i++)
  {
    sp->a[i] = i;
  }

}

void check(struct s *sp)
{
  char nLJegApS = (signed char)-128;
  int ljcRd6P0 = -1651498278;
  int i;
  transparent_crc(ljcRd6P0, "ljcRd6P0", 1);
  transparent_crc(nLJegApS, "nLJegApS", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (i = 0; i < 256; i++)
  {
    if (sp->a[i] != i)
    {
      nLJegApS = ~ljcRd6P0;
      abort();
    }
  }

}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  v = v0;
  init(p);
  qp();
  check(q);
  v = v0;
  init(q);
  pq();
  check(p);
  exit(0);
}

