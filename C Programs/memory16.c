#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct  {
  int a;
  int b;
} pair;

int w = 4;
int h = 3;

void initialise(pair *p) {
  int r, c, i, j;
  j=10;
  for(r=0;r<h;r++){
    for(c=0;c<w;c++){
      i = (r*w) + c;
      p[i].a = j++;
      p[i].b = j++;
    }
  }
}

void inc(pair *q) {
  int i;
  for(i=0;i<w*h;i++){
    q->a = q->a + 1; 
    q->b = q->b + 1; 
    q++;
  }
}

void output(pair *p) {
  int r, c, i = 0;
  for(r=0;r<h;r++){
    for(c=0;c<w;c++){
      printf("%d,%d\t", p[i].a, p[i].b);
      i++;          
    }
    printf("\n");
  }
}

int main() {
  pair *p;
  p = malloc(sizeof(pair) * w * h);

  initialise(p);
  inc(p);
  output(p);

  free(p);
  return EXIT_SUCCESS;
}
