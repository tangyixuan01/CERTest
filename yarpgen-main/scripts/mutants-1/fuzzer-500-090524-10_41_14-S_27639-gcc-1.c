#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-for-snippet -> insert-assignment-snippet

char heap[50000];
int main()
{
  platform_main_begin();
  crc32_gentab();
  unsigned char Ne3SQfTP = (unsigned char)209;
  int R4EPKONY = -2048938847;
  short CZ02MJtu = (short)-20777;
  CZ02MJtu = ~((~R4EPKONY) || Ne3SQfTP);
  int Bz6pSN5I = -64634853;
  long dv0Pjxn_ = -9223372036854775807LL;
  int iWscp9Su = 2147483647;
  for (unsigned ix = sizeof(heap); ix--;)
  {
    heap[ix] = ix;
  }

  transparent_crc(iWscp9Su, "iWscp9Su", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  for (int d = 0; d < 8; d++)
  {
    Bz6pSN5I ^= dv0Pjxn_;
    iWscp9Su = Bz6pSN5I;
    Bz6pSN5I ^= 1;
  }

  transparent_crc(dv0Pjxn_, "dv0Pjxn_", 1);
  transparent_crc(Bz6pSN5I, "Bz6pSN5I", 1);
  transparent_crc(CZ02MJtu, "CZ02MJtu", 1);
  transparent_crc(R4EPKONY, "R4EPKONY", 1);
  transparent_crc(Ne3SQfTP, "Ne3SQfTP", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return 0;
}

