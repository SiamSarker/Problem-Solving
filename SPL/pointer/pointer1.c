#include "stdio.h"
int main(int argc, char const *argv[]) {

  int x = 5;
  int *ptr;
  ptr = &x;

  printf("Value of x = %d\n", x);
  printf("Address of x = %p\n", &x);

  printf("Address of x = %p\n", ptr);

  printf("Address of x = %p\n", &ptr);

  return 0;
}
