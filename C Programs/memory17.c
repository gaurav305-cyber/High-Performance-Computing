#include <stdio.h>

int main() {
  unsigned char a = 10;
  unsigned char *b = &a;
  printf("%d %d\n", a, *b);

  unsigned char c[] = {21, 15, 92};
  unsigned char *d = c;
  printf("%p\n", d);
  printf("%d ", *d);
  d++;
  printf("%d ", *d);
  d++;
  printf("%d\n", *d);
  printf("%p\n", d);

  int g[] = {21, 15, 92};
  int *h = g;
  printf("%p\n", h);
  printf("%d ", *h);
  h++;
  printf("%d ", *h);
  h++;
  printf("%d\n", *h);
  printf("%p\n", h);

  unsigned int e = 197127; // (3*65536) + (2*256) + 7
  unsigned char *f = (char *) &e;
  printf("%ld\n", sizeof(e));
  printf("%d ", *f);
  f++;
  printf("%d ", *f);
  f++;
  printf("%d ", *f);
  f++;
  printf("%d\n", *f);
}
