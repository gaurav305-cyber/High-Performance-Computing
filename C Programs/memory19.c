#include <stdio.h>

void f1() {
  printf("cat\n");
}

void f2() {
  printf("mouse\n");
}

void f3(void (*f)() ) {
  f();
}

int main() {
  f3(&f1);
  f3(&f2);
  return 0;
}
