#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet

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
  int i;
  for (i = 0; i < 256; i++)
  {
    if (sp->a[i] != i)
    {
      abort();
    }
  }

}

int main(void)
{
  platform_main_begin();
  crc32_gentab();
  int xgv8EdTc = -896990285;
  for (xgv8EdTc = 0; xgv8EdTc;)
    ;

  v = v0;
  init(p);
  qp();
  check(q);
  v = v0;
  init(q);
  pq();
  check(p);
  transparent_crc(xgv8EdTc, "xgv8EdTc", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  exit(0);
}

