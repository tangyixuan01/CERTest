#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet

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
  int Mwvcq1UE = -339461371;
  int DBdWgIGM = -2147483648;
  transparent_crc(DBdWgIGM, "DBdWgIGM", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  switch (Mwvcq1UE)
  {
    case 5:
      DBdWgIGM = 1;
      break;

    case 6:
      DBdWgIGM = 2;
      break;

    case 7:
      DBdWgIGM = 3;
      break;

  }

  transparent_crc(Mwvcq1UE, "Mwvcq1UE", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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
  int eoaJzOs1 = 2147483647;
  int VjyYzSHK = -2147483648;
  unsigned Luh5mXnS = 4294967295U;
  int iFAsbUlj = -1852714448;
  transparent_crc(iFAsbUlj, "iFAsbUlj", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  Luh5mXnS = VjyYzSHK | ((eoaJzOs1 / Luh5mXnS) % (~iFAsbUlj));
  transparent_crc(Luh5mXnS, "Luh5mXnS", 1);
  transparent_crc(VjyYzSHK, "VjyYzSHK", 1);
  transparent_crc(eoaJzOs1, "eoaJzOs1", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
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

