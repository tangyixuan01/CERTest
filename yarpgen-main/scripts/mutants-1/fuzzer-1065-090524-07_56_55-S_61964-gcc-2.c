#include "/home/yixuan/csmith/runtime/csmith.h"

// insert-assignment-snippet -> insert-switch-snippet -> insert-switch-snippet

struct node
{
  struct node *next;
  struct node *prev;
} node;
struct head
{
  struct node *first;
} heads[5];
int k = 2;
struct head *head = &heads[2];
int main()
{
  platform_main_begin();
  crc32_gentab();
  int * OJe89sQo = &k;
  unsigned char Z8x3A2FY = (unsigned char)0;
  int * sYBDSylv = &k;
  unsigned char xQMTP3WK = (unsigned char)172;
  int zevSNHRF = 481058481;
  int MYLg2iNE = -2147483648;
  int * ydpaQ0RS = &k;
  node.prev = (void *) head;
  head->first = &node;
  struct node *n = head->first;
  struct head *h = &heads[k];
  if (n->prev == ((void *) h))
  {
    switch (xQMTP3WK)
    {
      case 0x95:
        *sYBDSylv = xQMTP3WK - 0x91;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *sYBDSylv = xQMTP3WK - 0x80;
        break;

      default:
        *sYBDSylv = 0;
        break;

    }

    zevSNHRF = ((&MYLg2iNE) == ydpaQ0RS) + 1;
    h->first = n->next;
  }
  else
  {
    n->prev->next = n->next;
    switch (Z8x3A2FY)
    {
      case 0x95:
        *OJe89sQo = 0x01;
        break;

      case 0x80:

      case 0x81:

      case 0x82:
        *OJe89sQo = 0x00;
        break;

      default:
        *OJe89sQo = 0x05;
        break;

    }

  }
  n->next = h->first;
  transparent_crc(MYLg2iNE, "MYLg2iNE", 1);
  transparent_crc(zevSNHRF, "zevSNHRF", 1);
  transparent_crc(xQMTP3WK, "xQMTP3WK", 1);
  transparent_crc(Z8x3A2FY, "Z8x3A2FY", 1);
  platform_main_end(crc32_context ^ 0xFFFFFFFFUL, 0);
  return n->next == (&node);
}

