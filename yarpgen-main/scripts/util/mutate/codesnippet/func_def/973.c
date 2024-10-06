//exit:func void;qp:func void;init:func void;pq:func void;v0:union u;check:func void;v:union u;q:struct s *;p:struct s *
int main(void)
{
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

