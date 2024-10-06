//iy:unsigned long;ix:unsigned long
for (unsigned long i = 0; i < 512; ++i)
{
  dy[iy] += dx[ix];
  ix += incx;
  iy += incy;
}
